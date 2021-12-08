#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int i;
 ofstream myFile; /*ofstream used to output a file*/
 myFile.open("test.csv"); /* opening test file*/
 for(i=0; i<20; i++){
     myFile<< i <<","<< i*i <<endl; /*inputting values*/

 }
}