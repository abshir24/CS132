//
//  main.cpp
//  Assignment1
//
//  Created by Abshir Mohamed on 4/10/20.
//  Copyright © 2020 Abshir Mohamed. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int size, count = 0;
    string word;

    
    ifstream inputFile;
    
    
    cout << "Hello my Abshir Mohamed"<<endl;
    cout << "I prefer to be called Abshir"<<endl;
    cout << "I would like to learn more about C++ data stuctures and how to use them to become a better programming engineer" << endl;
    
    for(int i = 1;i<51;i++)
        cout<<"*";
    
    cout << endl;
    
    do{
        cout<<"What size word do you want?"<<endl;
           
        cin>>size;
    }while(size<1 || size>30);
    
    
    inputFile.open("WordList.txt");
    
   
    while(inputFile >> word)
        if(word.length() == size)
            count++;
        
    cout << "There are " << count << " words that have a length of " << size << endl;
    
    inputFile.close();
    
    string arr[count];

    int index = 0;
      
    inputFile.open("WordList.txt");

    while(inputFile >> word)
        if(word.length() == size)
            arr[index++] = word;
    
    
    inputFile.close();
    
    ofstream writeFile;
    
    writeFile.open("WordFile2.txt");
    
    
    for(int i = count-1;i>=0;i--){
        cout << *(arr + i) <<endl;
        writeFile << *(arr + i) << endl;
    }

    writeFile.close();
    
    
    int maxLength = 0;
    
    string largestWord;
    
    inputFile.open("WordList.txt");
     
   while(inputFile >> word){
           if(word.length() > maxLength){
               maxLength = (int) word.length();
               largestWord = word;
           }
      }
      
      cout << "The largest word in the list is " << largestWord << endl;
       
      inputFile.close();
    
 //testing comment please work   
    return 0;
}
