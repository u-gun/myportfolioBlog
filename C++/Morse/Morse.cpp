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
 	* dit=1 dash=111 signel interval=0 letter interval=000
  */
	std::queue<bool> morseWord_q
  
public :
	Morse();
	moseWord_q telegraph();
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
}

Morse :: Morse {

  /*
string alphamorse[26] = { ".-", "-...", "-.-.", "-..", ".",
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

	slash = "-..-.";	question = "..--..";	comma = "--..--";
	period = ".-.-.-";	plus = ".-.-.";		equal = "-...-";
*/
}
