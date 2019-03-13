/**
 * @file main.cpp
 * @author Edah Sijerčić, Filip Vlaisavljević
 * @brief
 * @version 1.0
 * @date 12.03.2019
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <string>
#include <ctype.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;



bool fileExists(string Filename) {
	ifstream f(Filename);
	return f.good();
}





string textGenerator(vector<string>& argument)
{
    string text;
	for (int i = 0; i < argument.size(); ++i)
		text += argument[i] +"\n";
    return text;
}

void  readingTxtFile(string fileName, vector<string>& latex) {
	ifstream file(fileName);
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			latex.push_back(line.c_str());
		}
		file.close();
	}
}

bool checkIfEmpty(string fileName) {

	{	ifstream file(fileName);
	return file.peek() == ifstream::traits_type::eof();
	}
}



void welcomeMessage(){

    char imePrograma[] = "GENERATOR ZADATAKA";
    const char* verzija = "1.0";
    cout<<imePrograma<<" "<<verzija<<endl;

}


int main()
{

   fstream file;

   vector<string> latex;

  /* Generisanje .HTML file-a */

   file.open("index.html",ios::out);

  /* Default ERROR linija */

   if(!file)
   {
       cout<<"Greska u pravljenu fajla!";
       return 0;
   }

   	if (!fileExists("zadatak.txt")) {
		printf("Nije postojao .txt file pod nazivom zadatak.txt pa smo ga mi kreirali ");
		ofstream file("zadatak.txt");
		return 0;
	}

	if (checkIfEmpty("zadatak.txt")) {
		printf("File vam je prazan!");
		return 0;
	}

 /* Default linija nakon generisanja */

   welcomeMessage();

   int n;
   cout<<"Unesite koliko zadataka zelite generisati: ";
   cin>>n;

 /* Pozvati funkciju koja generise onoliko zadataka
    koliko mu korisnik proslijedi! */

   cout<<"Uspjesno ste generisali fajl!"<<endl;

 /* Funkcija upisuje text u .html file */


   readingTxtFile("zadatak.txt", latex);

   file<<textGenerator(latex);

   file.close();


   return 0;
}
