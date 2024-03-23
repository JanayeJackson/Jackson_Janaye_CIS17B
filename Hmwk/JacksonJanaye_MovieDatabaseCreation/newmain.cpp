/*Test *readBin(fstream &in,int record){
    //Declare and initialize variables
    long cursor=0L;    //Where to place the cursor
    Test *a=new Test;//Declare the array to return
    
    //Find the record
    cursor=record*sizeof(Test);
    
    //Fill the structure
    in.seekg(cursor,ios::beg);
    in.read(reinterpret_cast<char *>(a),sizeof(Test));
    return a;
}

void wrtBin(fstream &out,Test *a){
    out.write(reinterpret_cast<char *>(a),sizeof(Test));
}

void wrtTxt(fstream &out,Test *a,int record){
    out<<endl;
    out<<"Structure Contents Record = "<<record<<endl;
    out<<setw(6)<<a->c<<endl;
    out<<setw(6)<<a->s<<endl;
    out<<setw(6)<<a->i<<endl;
    out<<endl;
}

*/