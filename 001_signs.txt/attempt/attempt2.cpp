#include <bits/stdc++.h>
using namespace std;

//map<string, string> morseWords;
vector< pair<string, string> > morseWords;

string morse = "";
int counter = 0;

ifstream fwords("words_no_special_sorted.txt", ifstream::in);
ifstream fmwords("words_no_special_sorted_morse.txt", ifstream::in);
ifstream fmorse("signs.txt", ifstream::in);
ofstream fout("decode_signs.txt", ofstream::out);

ofstream fposs("possible.txt", ofstream::out);

string shortMsg;
int shortLen = INT_MAX;

int selected(string s){
	for(unsigned i = 0; i < s.length(); i++){
		if( !(('a' <= s[i]) && (s[i] <= 'z')) ) return 0;
	}
	//if(s.length() == 1) return 0;
	return 1;
}

void prep(){
	string word, mword;
	while(fwords >> word){
		fmwords >> mword;
		if(selected(word)) morseWords.push_back({word, mword});//morseWords[word] = mword;
	}
	fwords.close();
	fmwords.close();
}

void trying(string msg, int at){
	stack< vector< pair<string, string> >::iterator > undo;
	//
	if(at == morse.length()){
		fout << msg << '\n';
		//cout << "Found " << ++counter << " possibility\n";
	}
	else{
		if(msg.length() < shortLen){
			for(auto it = morseWords.begin(); it != morseWords.end(); it++){
cont:
				string code = it->second;
				//
				if(at + code.length() <= morse.length()){
					string rip = morse.substr( at, code.length() );
					// cout << "Comparing " << rip << " == " << code << " is " << (rip == code) << endl;
					// cout << "is " << it->first << endl;
					if(rip == code) {
						cout << "Is \"" << msg << (it->first) << "\" valid?\n> ";
						//
						char prmpt;
						cin >> prmpt;
						switch(prmpt){
							case 'y':
							case 'Y':
								cout << "accepted. trying.. " << morse.length() - (at+code.length()) << " chars to go\n";
								fposs << at + code.length() << " : " << msg + (it->first) << endl;
								trying(msg + (it->first) + ' ', at + code.length());
								break;
							case 'b':
							case 'B':
								it = undo.top();
								undo.pop();
								goto cont;
							default:
								;
						}
						//
						undo.push(it);
					}
				}
			}
			//trying(msg + " " + morse[at], at+1);
		}
	}
}

int main(){
	cout << "Prepping..\n";
	prep();
	cout << "Done prepping.\n";
	// input
	string s;
	while(fmorse >> s){
		morse += s;
	}
	fmorse.close();
	// -- end input
	// try
	cout << morse << endl << "Trying..\n";
	trying("", 0);
	cout << "Done.";
	//
}
