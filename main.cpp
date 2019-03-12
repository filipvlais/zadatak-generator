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

#include <bits/stdc++.h> 
#include <string>

using namespace std; 

string textGenerator(){

 /*
 Napraviti funkciju koja uzima text iz fajla. 
 Svaki zadatak će biti spašen u .txt fileu i formatiran
 kao LaTeX. Program će uzimati random .txt fajlove te ih
 spasiti kao zadatke u jedan .HTML fajl

 Onda možemo, konvertovati .HTML u .pdf, ali prvo implementirajmo
 čitanje .txt file-a i njegovo konvertovanje u .html

 */

}

  
int main() 
{ 

   fstream file; 

  /* Generisanje .HTML file-a */

   file.open("index.html",ios::out); 

  /* Default ERROR linija */

   if(!file) 
   { 
       cout<<"Greska u pravljenu fajla!"; 
       return 0; 
   } 

 /* Default linija nakon generisanja */
  
   cout<<"Uspjesno ste generisali fajl!"; 

 /* Funkcija upisuje text u .html file */
 
   file<<textGenerator();

   file.close(); 
  
   return 0; 
} 
