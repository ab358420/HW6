#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// was #define FILE_PATH "~/TESTING_APPS/Reading"
#define FILE_PATH "home/debian/TESTING_APPS/Reading"

int main(int argc, char* argv[])
{
if(argc!=2)
{
  cout << endl;
  cout << "Reading file and name of file: " << endl;
  cout << "like test.txt" << endl;
  return 2;
}
string cmd(argv[1]); // puts character is cmd as a string
cout << endl;
cout << endl;   
cout << "Starting the reading-file program" << endl; // endl = endline
cout << "The current Path is: " << FILE_PATH << endl; // cout = print out
cout << "File name passed is: " << cmd << endl;
cout << endl;
cout << endl;
std::fstream fs; // ::=namespace operator, fs=file string
string line;
string filename = "/" + cmd; // NEW
string path(FILE_PATH);
fs.open((path + filename).c_str(),std::fstream::in);

// fs.open((FILE_PATH + "/" + cmd).c_str(), std::fstream::in); // NEW

// fs.open does not take a string but a char so execute c_str to convert	
while(getline(fs,line)) cout << line << endl;
	fs.close();
}
