//
//  test_socialite.cpp
//  HW1
//
//  Created by John on 1/19/17.
//  Copyright © 2017 John. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Socialite.h"

int main() {
    
    
//-----Set info for all socialites------
    
    //info for person1
    Socialite person1;
    
    person1.setLast("Rogers");
    person1.setFirst("Steve");
    person1.setId("Capatin America");
    person1.setImg("http://bit.ly/2joY5E9");
    person1.setUrl("http://bit.ly/1PQxSc4");
    person1.setDesc("Meet America's first superhero!");
    
    
    //info for person2
    Socialite person2;
    
    person2.setLast("Parker");
    person2.setFirst("Peter");
    person2.setId("Spider-Man");
    person2.setImg("http://bit.ly/2ezikfo");
    person2.setUrl("http://bit.ly/2eJFZw8");
    person2.setDesc("Meet your friendly neighborhood spider!");
    
    //info for person3
    Socialite person3;
    
    person3.setLast("Stark");
    person3.setFirst("Tony");
    person3.setId("Iron Man");
    person3.setImg("http://bit.ly/2kgLymI");
    person3.setUrl("http://bit.ly/29pa0kt");
    person3.setDesc("Meet millionaire playboy philanthropist!");

    //info for person4
    Socialite person4;
    
    person4.setLast("Romanoff");
    person4.setFirst("Natasha");
    person4.setId("Black Widow");
    person4.setImg("http://bit.ly/2jvrEDr");
    person4.setUrl("http://bit.ly/2kgYKYI");
    person4.setDesc("Meet the world's deadliest woman!");
    
    //info for person5
    Socialite person5;
    
    person5.setLast("Banner");
    person5.setFirst("Bruce");
    person5.setId("Incredible Hulk");
    person5.setImg("http://bit.ly/2kqZV7g");
    person5.setUrl("http://bit.ly/1mxteFx");
    person5.setDesc("Don't get him angry.");
    
    
    
    
    
    
//-----output info for socialites-------
    
    //info for person1
    ofstream txt1 ("one.txt");
    person1.outTxt(txt1);
    txt1.close();
    
    ofstream html1("one.html");
    person1.outHtml(html1);
    html1.close();
    
    //info for person2
    ofstream txt2 ("two.txt");
    person2.outTxt(txt2);
    txt2.close();
    
    ofstream html2("two.html");
    person2.outHtml(html2);
    html2.close();

    //info for person3
    ofstream txt3 ("three.txt");
    person2.outTxt(txt2);
    txt2.close();
    
    ofstream html3("three.html");
    person3.outHtml(html3);
    html3.close();

    //info for person4
    ofstream txt4 ("four.txt");
    person4.outTxt(txt4);
    txt4.close();
    
    ofstream html4("four.html");
    person4.outHtml(html4);
    html4.close();
    
    //info for person5
    ofstream txt5 ("five.txt");
    person5.outTxt(txt5);
    txt5.close();
    
    ofstream html5("five.html");
    person5.outHtml(html5);
    html5.close();
    
    return 0;
}
