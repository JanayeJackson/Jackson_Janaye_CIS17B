/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>   //I/O Library
#include <cstdlib>    //Random Number Generator, Setting seed, etc....
#include <iomanip>    //Formatting Library
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;  //Libraries compiled under std


#include "CMovie.h"

CMovie::~CMovie(){
    delete [] movies->mveInfo;//Now the array of Structures
    delete movies;//Now deallocate the final Movie Structure
}

//Just copy, cut, and paste into a function.  Code already checked out in main.
void CMovie::display(){
    //Now you can loop on the data as many times as it takes!
    for(int mvees=0;mvees<nMovies;mvees++){
        //I copied the output from Code-E then applied formatting
        cout<<left<<endl;
        cout<<setw(11)<<"Title:"<<movies->mveInfo[mvees].movName<<endl;
        cout<<setw(11)<<"Director:"<<movies->mveInfo[mvees].dirName<<endl;
        cout<<setw(11)<<"Year:"<<movies->mveInfo[mvees].yrRlsd<<endl;
        cout<<setw(11)<<"Length:"<<movies->mveInfo[mvees].runTime<<endl;
    }
}

void prntTxt(int record){
    cout<<endl;
}

void CMovie::setName(int mvees){
    movies->mveInfo[mvees].movName = "Janaye Jackson";
}

void CMovie::setDir(int mvees){
    int size=81;//Make it Dynamic
        movies->mveInfo[mvees].dirName=new char[size];
        movies->mveInfo[mvees].dirName=(char*)"J";
}

void CMovie::setYear(int mvees){
    movies->mveInfo[mvees].yrRlsd = rand()%101 + 1924;
}

void CMovie::setRun(int mvees){
    movies->mveInfo[mvees].runTime = rand()%81 + 100;
}

void CMovie::wrtBin(fstream &out, Movies *a){//Gotta frickin indent!!!!!
    cout<<"file";
    out.write(reinterpret_cast<char *>(a),sizeof(Movies));
}

//This implementation of this function was thoroughly tested out already
//in main.
CMovie::CMovie(){
    //Declare the Structure array
    movies=new Movies;
    fstream binFile;
    
    //I copied the output from Code-E so I wouldn't make any typing mistakes
    //Then I just formatted.
    cout<<"This program reviews creating and retrieving from binary file"<<endl;
    
    //Now you can allocate the array dynamically
    movies->mveInfo=new MovieInfo[nMovies];
    binFile.open("data.bin",ios::in|ios::out|ios::binary);

    //Now you can loop on the data as many times as it takes!
    for(int mvees=0;mvees<nMovies;mvees++){//Gotta frickin indent!!!!!
        //Oh Yea, Gotta do this for the buffer
        setName(mvees);
        setDir(mvees);
        setYear(mvees);
        setRun(mvees);
    }
    wrtBin(binFile, movies);
}