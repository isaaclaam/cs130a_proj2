#include "dictionary.h"
#include <iostream>

using namespace std;

int main(){
    Dictionary test("PA2_dataset.txt",349900);
    test.writeToFile("test.txt");
    Dictionary test2;
    test2 = Dictionary::readFromFile("test.txt");
    if(test2.find("zusu")){
        cout<<"found zusu"<<endl;
    }
}