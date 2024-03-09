#include <iostream>
#include <string>
#include <window.h>
#include <vector>

class Morse {
  string alphabet[26];
	string digit[10];
  string hangul[26];
  string slash, question, comma, period, plus, equal;
  
public :
	Morse();
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
}

Morse :: Morse {
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

	for(int i=0; i<26; i++)
		alphabet[i] = alphamorse[i];
	for(int i=0; i<10; i++)
		digit[i] = digitmorse[i];
  
	slash = "-..-.";	question = "..--..";	comma = "--..--";
	period = ".-.-.-";	plus = ".-.-.";		equal = "-...-";
}
