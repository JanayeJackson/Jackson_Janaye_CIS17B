/* 
 * Author: Janaye Jackson
 * Created on 03/17/2024
 * Purpose: Movie Data Structure
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>    //Random Number Generator, Setting seed, etc....
#include <iomanip>    //Formatting Library
#include <string>     //String Library
#include <fstream>
#include <ctime>
using namespace std;  //Libraries compiled under std

//User Level Libraries/Includes
#include "CMovie.h"

//Global Constants Only - Science/Math Related, Conversions, Array and Higher
//Dimensions.

//Function Prototypes here, Function implementations after main!


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Open the Text and binary files
    fstream txtFile,binFile;
    txtFile.open("data.txt",ios::in|ios::out);
    binFile.open("data.bin",ios::in|ios::out|ios::binary);
    
     //Variable Declarations
    CMovie cmovie;//Class
    
    //Now you can loop on the data as many times as it takes!
    cmovie.display();//Look and see
    
    //Exit stage right!
    return 0;
    
    //Close the files
    txtFile.close();
    binFile.close();

    //Exit stage right!
    return 0;
}