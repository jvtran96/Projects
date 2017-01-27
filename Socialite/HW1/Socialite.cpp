//
//  Socialite.cpp
//  HW1
//
//  Created by John on 1/19/17.
//  Copyright © 2017 John. All rights reserved.
//-------------CLASS DEFINITIONS----------------

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Socialite.h"

using namespace std;




//---Constructors--
Socialite::Socialite()
{
    lastName_ = "";
    firstName_ = "";
    userid_ = "";
    picture_ = "";
    webShare_ = "";
    webDescribe_ = "";
}





//--Inspectors--
string Socialite::getLast() const
{
    return lastName_; //returns last name
}

string Socialite::getFirst() const
{
    return firstName_; //returns first name
}

string Socialite::getId() const
{
    return userid_; //returns id
}

string Socialite::getImg() const
{
    return picture_; //returns image link
}

string Socialite::getUrl() const
{
    return webShare_; //returns page url
}

string Socialite::getDesc() const
{
    return webDescribe_; //returns web description
}





//--Mutators--
void Socialite::setLast(string last)
{
    lastName_ = last;
}

void Socialite::setFirst(string first)
{
    firstName_ = first;
}

void Socialite::setId(string Id)
{
    userid_ = Id;
}

void Socialite::setImg(string img)
{
    picture_ = img;
}

void Socialite::setUrl(string url)
{
    webShare_ = url;
}

void Socialite::setDesc(string desc)
{
    webDescribe_ = desc;
}




//facilitators
void Socialite::outTxt(ostream& out)
{
    out << "Last Name: " << lastName_ << endl;
    out << "First Name: " << firstName_ << endl;
    out << "User ID: " << userid_ << endl;
    out << "Picture: " << picture_ << endl;
    out << "Website: " << webShare_ << endl;
    out << "Description: " << webDescribe_ << endl;
}

void Socialite::outHtml(ostream& out)
{
    out << "<html>\n";
    out << "<head>\n<title>" << firstName_ << " " << lastName_ << "'s Web Page</title>\n</head>\n";
    out << "<body>\n<img src=\"" << picture_ << "\" alt=\""<< firstName_ << " " << lastName_ <<" Pic\" align=\"right\" height=\"100%\">\n";
    out << "<h1>" << userid_<< "</h1>\n";
    out << "<h2>" << firstName_ << " " << lastName_ << "</h2>\n";
    out << "<p>\n<a href=\"" << webShare_<< "\" target=_blank>" << webDescribe_ << "</a>\n</p>\n";
    out << "</body>\n</html>";
}

/***
//---insertion operator---
ostream& operator<<(ostream& out, Socialite& s)
{
    out << "Last Name: " << s.lastName_ << endl;
    out << "First Name: " << s.firstName_ << endl;
    out << "User ID: " << s.userid_ << endl;
    out << "Picture: " << s.picture_ << endl;
    out << "Website: " << s.webShare_ << endl;
    out << "Description: " << s.webDescribe_ << endl;
    
    return out;
}
 ***/
