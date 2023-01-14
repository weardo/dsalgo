// TODO: write hello world program

#include <iostream>

using namespace std;

string reverse_words(string str)
{
    string ns = "";
    string word = "";

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            ns += word;
            ns += str[i];
            word = "";
        } else {
            word = str[i] + word;
        }
    }

    ns += word;

    return ns;
    
}

int main() {
    
    string str = "The quick brown fox jumps over the lazy dog.";

    cout << reverse_words(str) << endl;

    return 0;
}