#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int i = 0;
    for (char ch : str) {
        if (toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U') {
            i++;
        }
    }
    return i;
}

// Function to count words in a string
int countWords(const string& str) {
    int a = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                  a++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return a;
}

// Function to reverse a string
string reverse(const string& z) {
    string go_back;
    for (int i = z.length() - 1; i >= 0; --i) {
        go_back.push_back(z[i]);
    }
    return go_back;
}

// Function to capitalize the second letter of each word
string capSecondLetter(const string& str) {
    string x = str;
    bool capital = false;
    for (char& y : x) {
        if (isalpha(y)) {
            if (capital ) {
                y = toupper(y);
                capital = false;
            }
            else{
                capital = true;
            }
        }
        else{
            capital  = false;
       }
       
    
    }
    return x;
}

int main() {

    //ifsteam inp, is decrearing the inputfile and it is telling the code that it should open the text file with name fileDagta.txt
    ifstream inp("fileData.txt");
    
    // Read the content of the file into a string variable
    string fileData;
    getline(inp, fileData);
    
    // Close the file
    inp.close();
    

    int vowelsCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelsCount << endl << endl;
    

    int wordsCount = countWords(fileData);
    cout << "Number of words: " << wordsCount << endl << endl;
    

    cout << "Reversed statement:\n " << reverse(fileData) << endl << endl;
    
    
    cout << capSecondLetter(fileData) << endl;
    
    return 0;
}
