
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    //ofstream outFile;
    //outFile.open("my_file.txt");
    //string str;
    //getline(cin, str);
    //outFile << str;
    //outFile.close();


    ifstream inFile;
    inFile.open("my_file.txt");
    string str1;
    getline(inFile,str1);
    cout << str1;
    inFile.close();
    return 0;
}

