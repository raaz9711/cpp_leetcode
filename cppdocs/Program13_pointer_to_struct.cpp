//pointer to structures
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

struct movies_t {
    string title;
    int year;
};

void printmovie(movies_t movie);

int main() {
string mystr;

movies_t amovie;

movies_t *pmovie;

pmovie = &amovie;

cout<<"Enter the title :";
getline(cin,pmovie->title);

cout<<"Enter year:";
getline(cin,mystr);

(stringstream) mystr >> pmovie->year;

cout<<pmovie->title <<" year ->"<<pmovie->year << "\n";

return 0;
}

void printmovie(movies_t movie){
    cout << movie.title << "( " << movie.year << " ) "<<endl;
}