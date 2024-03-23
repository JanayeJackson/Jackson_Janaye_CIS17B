/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CMovie.h
 * Author: mlehr
 *
 * Created on July 14, 2021, 7:08 PM
 */

#ifndef CMOVIE_H
#define CMOVIE_H

#include "MoviesStruct.h"

class CMovie{
    private:
        Movies *movies;//Pointer to the dynamic Movie structure.
    public:
        
        CMovie();//Constructor
        ~CMovie();//Destructor
        void display();//Display
        void setName(int);
        void setDir(int);
        void setYear(int);
        void setRun(int);
        void wrtBin(fstream &, Movies *);
        
        int nMovies = 10;
};

#endif /* CMOVIE_H */