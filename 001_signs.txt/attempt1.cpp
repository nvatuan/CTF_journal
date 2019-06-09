#include <bits/stdc++.h>
using namespace std;

map<char, string> morseAlphabet{	
	{'b', "-..."},	
	{'c', "-.-."},	
	{'f', "..-."},		
	{'h', "...."},		
	{'j', ".---"},		
	{'l', ".-.."},	
	{'p', ".--."},
	{'q', ".--."},
	{'v', "...-"},	
	{'x', "-..-"},
	{'y', "-.--"},
	{'z', "--.."},
	{'k', "-.-"},		
	{'o', "---"},
	{'r', ".-."},
	{'s', "..."},
	{'g', "--."},
	{'u', "..-"},
	{'d', "-.."},
	{'w', ".--"},
	{'i', ".."},
	{'m', "--"},	
	{'n', "-."},
	{'a', ".-"},
	{'e', "."},
	{'t', "-"},	
};

string morse = "";
int counter = 0;

ofstream fout("decode_signs.txt", ofstream::out);

string shortMsg;
int shortLen = INT_MAX;

void trying(string msg, int at){
	if(at == morse.length()){
		if(msg.length() < shortLen){
			cout << shortLen << '\n';
			shortLen = msg.length();
			shortMsg = msg;
			fout << msg << endl;
		}
		//cout << "Found " << ++counter << " possibility\n";
	}
	else{
		if(msg.length() < shortLen){
			for(auto it = morseAlphabet.begin(); it != morseAlphabet.end(); it++){
				string code = it->second;
				string rip = morse.substr( at, code.length() );
				//cout << "Comparing " << rip << ' ' << code << endl;
				if(rip == code) trying(msg + (it->first), at + code.length());
			}
		}
	}
}

int main(){
	// input
	freopen("signs.txt", "r", stdin);
	string s;
	while(cin >> s){
		morse += s;
	}
	// -- end input
	// try
	cout << morse << endl << "Trying..\n";
	trying("", 0);
	cout << "Done";
	fout << shortMsg;
	//
}


/*
map<char, string> morseAlphabet{
	{'a', ".-"},	//{'0', "-----"},
	{'b', "-..."},	//{'1', ".----"},
	{'c', "-.-."},	//{'2', "..---"},
	{'d', "-.."},	//{'3', "...--"},
	{'e', "."},		//{'4', "....-"},
	{'f', "..-."},	//{'5', "....."},
	{'g', "--."},	//{'6', "-...."},
	{'h', "...."},	//{'7', "--..."},
	{'i', ".."},	//{'8', "---.."},
	{'j', ".---"},	//{'9', "----."},
	{'k', "-.-"},	//{'.', ".-.-.-"},
	{'l', ".-.."},	//{',', "--..--"},
	{'m', "--"},	//{'?', "..--.."},
	{'n', "-."},	//{'\'', ".----."},
	{'o', "---"},	//{'!', "-.-.--"},
	{'p', ".--."},	//{'/', "-..-."},
	{'q', ".--."},	//{'(', "-.--."},
	{'r', ".-."},	//{')', "-.--.-"},
	{'s', "..."},	//{'&', ".-..."},
	{'t', "-"},		//{':', "---..."},
	{'u', "..-"},	//{';', "-.-.-."},
	{'v', "...-"},	//{'=', "-...-"},
	{'w', ".--"},	//{'+', ".-.-."},
	{'x', "-..-"},	//{'-', "-....-"},
	{'y', "-.--"},	//{'\"', ".-..-."},
	{'z', "--.."},
};
*/