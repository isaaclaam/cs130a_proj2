#include "dictionary.h"
#include <iostream>
#include<fstream>



using namespace std;

int main(int argc, char* argv[]){
    string datafilename = string(argv[1]);
    string outputfilename = string(argv[2]);
    fstream infile;
    infile.open(datafilename);
    int count = 0;
    string word;
    if(infile.is_open()){
        while(getline(infile,word)){
            count++;
        }
        infile.close();
    }

    Dictionary d(datafilename,count);
    d.writeToFile(outputfilename);
}