#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "~/TESTING_APPS/Writing"

int main(int argc, char* argv[]){
if (argc!=2){
cout << endl;
cout << "Writing file and name of file: "<<endl;
return 2;}
   string cmd(argv[1]); // puts character is cmd as a string
cout << endl;
cout << endl;   
cout << "Starting the writing-file program" << endl; // endl = endline
   cout << "The current Path is: " << FILE_PATH << endl; // cout = print out
cout << "File name passed is: " << cmd << endl;
cout << endl;
cout << endl;

  fstream fs; // ::=namespace operator, fs=file string
string path(FILE_PATH); // create c++ string from c string
fs.open((path + "/" + cmd).c_str(),std::fstream::out); // NEW
// fs.open is a pointer to a char
// fs.open does not take a string but a char so execute c_str to convert	
fs << "I watched the movie Star Wars I." << endl;
fs << "I watched the movie Star Trek." << endl;	
fs.close();
cout << "Finished the writing-file program" << endl;
cout << endl;
cout << endl;
return 0;
}
