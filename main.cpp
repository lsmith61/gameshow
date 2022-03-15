#include "contestant.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
using namespace std;


void readFile(string inputFileName, string outputFileName){
   
}


 
int main(int argc, char **argv) {
    string inputFileName = argv[1];
    string outputFileName = argv[2];
    int arraySize = 0;
   // cout << inputFileName << endl;
   // cout << outputFileName << endl;

   // readFile(inputFileName, outputFileName);
    cout << inputFileName << endl;
    cout << outputFileName << endl;

    // read the file
    ifstream infile(inputFileName);
    string line;
    int lineCounter = 0;
    while(getline(infile, line)){
        cout << line << endl;
        if(lineCounter == 0){
            int temp = stoi(line);
            arraySize = temp;
            Contestant arr[arraySize];
            lineCounter++;
        }
        else{
            string str(line);
            string tmp;
            stringstream str_strm(str);
            vector<string> items;
            string functionCall;
            string argOne;
            string argTwo;
            while(str_strm >> tmp) {
                items.push_back(tmp);
            }
           // cout << "New vector" << endl;
           /*
            for(int i = 0; i < items.size(); i++){
                cout << items[i] << endl;  
            }
            */
            if(items.size() == 1){
                // execute the function call
            }
            else if(items.size() == 2){
                // execute a function call for one param
                string removeBrackets = items[1];
                int lastEle = removeBrackets.length() - 1;
                string newString = removeBrackets.erase(lastEle ,1);
                newString = removeBrackets.erase(0,1);
                int argOne = stoi(newString);
                cout << argOne << endl;
               // cout << "THE NUM: " << num << endl; 
            }
            else if(items.size() == 3){
                // execute a function call for two params
                // take the brackets out of first number 
                string removeBracketsOne = items[1];
                int lastEle = removeBracketsOne.length() - 1;
                string newStringOne = removeBracketsOne.erase(lastEle ,1);
                newStringOne = removeBracketsOne.erase(0,1);
                int argOne = stoi(newStringOne);
                cout << argOne << endl;
                //char numOne = removeBracketsOne[1];
                //cout << "THE NUM: " << numOne << endl; 

                // take the brackets out of second number
                string removeBracketsTwo = items[2];
                int lastEleTwo = removeBracketsTwo.length() - 1;
                string newStringTwo = removeBracketsTwo.erase(lastEleTwo ,1);
                newStringTwo= removeBracketsTwo.erase(0,1);
                int argTwo = stoi(newStringTwo);

                cout << argTwo << endl;

                //char numTwo = removeBracketsTwo[2];
                //cout << "THE NUM: " << numTwo << endl; 
            }

            cout << endl << endl << endl;



            lineCounter++;
        }
        
    }

   // cout << arraySize << endl;
}