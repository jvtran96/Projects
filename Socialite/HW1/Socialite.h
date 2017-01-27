//
//  Socialite.h
//  HW1
//
//  Created by John on 1/19/17.
//  Copyright © 2017 John. All rights reserved.
//--------------CLASS DECLARATIONS--------------

#ifndef Socialite_h
#define Socialite_h
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Socialite
{
public:
    //constructor
    Socialite();
    
    
    
    //inspector
    string getLast() const;
    string getFirst() const;
    string getId() const;
    string getImg() const;
    string getUrl() const;
    string getDesc() const;
    
    
    
    //mutator
    void setLast(string last);
    void setFirst(string first);
    void setId(string Id);
    void setImg(string img);
    void setUrl(string url);
    void setDesc(string desc);
    
    
    
    //facilitator
    void outTxt(ostream& out);
    void outHtml(ostream& out);
    
    
    /****
    //insertion operator
    friend ostream& operator<<(ostream& out, Socialite& s);
     ****/
    
    

private:
    string lastName_;
    string firstName_;
    string userid_;
    string picture_;
    string webShare_;
    string webDescribe_;
};

#endif /* Socialite_h */
