#include <iostream>
#include <string>
#include <window.h>
#include <map>
#include <queue>

class Morse {
	std::map<std::queue<bool>, int> alphabet;
        std::map<std::queue<bool>, int> digit;
	std::map<std::queue<bool>, char[2]> hangul;
  string slash, question, comma, period, plus, equal;

	/**
 	* Morse cord를 word 단위로 저장
  	* dit=1 dash=111 시그널 간격=0 
  	*/
	std::queue<bool> word_q
  
public :
	Morse();
	telegraph
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
}

Morse :: Morse {
  /*string alphamorse[26] = { ".-", "-...", "-.-.", "-..", ".",
							 "..-.", "--.", "....", "..", ".---",
							 "-.-", ".-..", "--", "-.", "---",
							 ".--.", "--.-", ".-.", "...", "-",
							 "..-", "...-", ".--", "-..-", "-.--", "--.."};
	string digitmorse[10] = { "-----", ".----", "..---", "...--", "....-",
							".....", "-....", "--...", "---..", "----." };
    string hangulmorse[26] = { ".-", "-...", "-.-.", "-..", ".",
							 "..-.", "--.", "....", "..", ".---",
							 "-.-", ".-..", "--", "-.", "---",
							 ".--.", "--.-", ".-.", "...", "-",
							 "..-", "...-", ".--", "-..-", "-.--", "--.."};

	for(int i=0; i<26; i++)
		alphabet[i] = alphamorse[i];
	for(int i=0; i<10; i++)
		digit[i] = digitmorse[i];
  
	slash = "-..-.";	question = "..--..";	comma = "--..--";
	period = ".-.-.-";	plus = ".-.-.";		equal = "-...-";
*/
}
