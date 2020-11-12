#include "dictionary.h"
#include <iostream>
#include<fstream>



using namespace std;

int main(int argc, char* argv[]){
    string inputfilename = string(argv[1]);
    string words = string(argv[2]);
    string delimiter = ", ";
    size_t pos = 0;
    string currentWord;
    vector<string> wordList;
    while((pos = words.find(delimiter))!= string::npos){
        currentWord = words.substr(0,pos);
        wordList.push_back(currentWord);
        words.erase(0,pos+delimiter.length());
    }
    wordList.push_back(words);

    Dictionary temp ;
    temp =  Dictionary::readFromFile(inputfilename);
    for(int i = 0;i < wordList.size();i++){
        cout<<wordList[i];
        if(temp.find(wordList[i])){
            cout<<" found"<<endl;
        }
        else{
            cout<<" not found"<<endl;
        }
    }

}