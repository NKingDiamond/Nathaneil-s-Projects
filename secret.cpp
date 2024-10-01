/* Word Encrypter / Decrpyter

   Made by Nathan Hackett  */

#include <iostream>
#include <string>
#include <list>
using namespace std;

string word;

void encrypt() {
    int key;
    string newWord;
    system("CLS");
    cout << "Please enter your key length: ";
    cin >> key;
    system("CLS");
    cout << "Your secret word / phrase is: ";

    for (int i; i < word.length(); i++) {
        newWord = word[i] + key;
        cout << newWord;
    }
    cout << endl;
}

void decrypt() {
    int key;
    string newWord;
    system("CLS");
    cout << "Please enter your key length: ";
    cin >> key;
    system("CLS");
    cout << "Your revealed word / phrase is: ";

    for (int i; i < word.length(); i++) {
        newWord = word[i] - key;
        cout << newWord;
    }
    cout << endl;
}

int main() {
    string start;

    cout << "Please enter your word: ";
    getline (cin, word);
    system("CLS");
    cout << "Would you like to Reveal or Hide a word / phrase: ";
    cin >> start;
    system("CLS");
    if (start == "Hide") {
        encrypt();
    }
    else {
        decrypt();
    }
    return 0;
}