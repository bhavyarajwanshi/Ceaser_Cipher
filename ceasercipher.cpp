#include <bits/stdc++.h>

using namespace std;

std::string caesarEncrypt(const std::string &text, int key) {
    std::string encryptedText = "";

    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';    //to find the ascii value
            encryptedText += static_cast<char>((c - base + key) % 26 + base;   //for the position of the encrypted text
        } else {
            encryptedText += c; //for the number purpose the result will be same.
        }
    }

    return encryptedText;
}

int main() {
    string originalText;
    cout<<"Enter the Original Text"<<endl;
    getline(cin,originalText);
    
    
    int key;
    cout<<"Enter the key ";
    cin>>key;


    std::string encryptedText = caesarEncrypt(originalText, key);

    std::cout << "Original Text: " << originalText << std::endl;
    std::cout << "Encrypted Text: " << encryptedText << std::endl;

    return 0;
}
