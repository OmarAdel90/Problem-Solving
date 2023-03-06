#include <iostream>
#include <array>
#include <string>
using namespace std;

int main(){
    int numberOfWords;
    cin >> numberOfWords;
    string *words = new string[numberOfWords]; 
    //Storing words in an array
    for(int i = 0; i < numberOfWords; i++){
        cin >> words[i];
    }
    
    for(int i = 0; i < numberOfWords; i++){
        int stringSize = 0;
        //Checks size of word
        if(words[i].length() > 10){
            stringSize = words[i].length();
            int finalSize = stringSize - 2;
            int lastChar = stringSize - 1;
            cout << words[i].at(0) << finalSize << words[i].at(lastChar) << endl ;
        }
        else{
            cout << words[i] << endl;
        }
        
    }

    
}