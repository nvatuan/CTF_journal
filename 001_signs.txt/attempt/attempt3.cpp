#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <unordered_map>

#include <cassert>
using namespace std;

ifstream fmorse ("signs.txt", 							ifstream::in);
ifstream fword  ("words_no_special_sorted.txt",			ifstream::in);
ifstream fmword ("words_no_special_sorted_morse.txt", 	ifstream::in);

// ------------------------ Read
bool __read = false;
size_t morseLen = 0;
string morse 	("");
vector<string> word;
vector<string> mword;

unordered_map< string, vector<size_t> > mword2vind;

void read() {
	if (__read) return;
	//
	string token;
	while (fmorse >> token) {
		// >> operator should take care of special linebreak character
		morse += token;
	}
	morseLen = morse.length();

	while (fword >> token)
		word.push_back(token);
	for (size_t idx = 0; fmword >> token; idx++) {
		mword.push_back(token);
		// >>> 1st realization: one morse code could be interpreted to many words
		// !!! Changed single size_t value to a vector of size_t
		(mword2vind[token]).push_back(idx);
	}
	//
	__read = true;
}

// ------------------------ Graph builder
bool validMorse(const string& submorse) {
	return (mword2vind.find(submorse) != mword2vind.end());
}

bool __build = false;

struct Edge {
	size_t from;
	vector<size_t> v_morseIdx;
	size_t to;
	//
	Edge(size_t f, vector<size_t> vmi, size_t t) {
		from = f; v_morseIdx = vmi; to = t;
	}
};

size_t validSubmorse = 0;
vector< vector< Edge > > edge_forw, edge_back;
vector< Edge > finEdges;

vector<long double> pathCount;
void build() {
	if (__build) return;
	//
	edge_forw.resize(morseLen + 1); // node#morseLen is the destination
	edge_back.resize(morseLen + 1);
	pathCount.resize(morseLen + 1);
	pathCount.at(0) = 1.0;

	// quadratic check for valid substring in morse is
	// better because the word list im working with
	// has way more entries than the length of the morse code
	// wordlist: ~3.55 * 1e6 ; morse: ~4 * 1e4
	for (size_t i = 0; i < morseLen; i++) {
		string submorse ("");
		for (size_t j = i; j < morseLen; j++) {
			submorse += morse.at(j);
			if (validMorse(submorse)) {
				validSubmorse++;
				//
				edge_forw.at(i).push_back(Edge(i, mword2vind[submorse], j+1));
				edge_back.at(j+1).push_back(Edge(i, mword2vind[submorse], j+1));
				
				// sum overflow checking for other primitive number type
				if(pathCount.at(i) + pathCount.at(j+1) < max(pathCount.at(i), pathCount.at(j+1))) {
					clog << "Possible Overflow while computing pathCount..\n";
				}
				// --

				pathCount.at(j+1) += pathCount.at(i)*mword2vind[submorse].size();
				// completePaths' ended edge to trace back
				if (j + 1 == morseLen) 
					finEdges.push_back(Edge(i, mword2vind[submorse], j+1));
			}
		}
	}
	// -- quadratic time with std::unordered_map<> constant
	__build = true;
}

int main() {
	clog << ">>> Starting..\n";
	clog << ">>> Reading..\n";
	read();
	clog << "Finish reading.\n";
	clog << "$ morse.length() is:\n" << morse.length() << endl;
	clog << "$ word.size() is:\n" << word.size() << endl;
	clog << "$ mword.size() is:\n" << mword.size() << endl;
	clog << "$ mword2idx.size() is:\n" << mword2vind.size() << endl;
 	clog << ">>> Graph edge building..\n";
	build();
	clog << "Success.\n";
	clog << "$ Valid morse's Substrings:\n" << validSubmorse << endl;
	clog << "$ Estimated valid `fmorse.txt` interpretations:\n" << pathCount.back() << endl;
	// after that estimation im frusterated. im calling this off.
}