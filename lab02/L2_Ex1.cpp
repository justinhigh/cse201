/* CSE201-W17 Thursday Lab
        @file L2_Ex1.cpp
        @Justin Pulido
        @January 31, 2017

DESCRIPTION: this program extracts characters from the input string "Four 
             scores and seven years ago our fathers" and changes it to an
             output string = "carefree and no tears"
ALGORITHM: form the input string, 
           form the output string,
           extract the characters from the input string and 
           form them into the output string.
           print output string */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string name = "four score and seven years ago our fathers";
					// qoute from the paper
   string c = name.substr(6,1); // extracting c
   string a = name.substr(27,1); // extracting a
   string re = name.substr(8,2); // extracting re
   string f = name.substr(0,1); // extracting f
   string r = name.substr(33,1); // extracting r
   string e = name.substr(16,1); // extracting e
   string andhi = name.substr(11,3); // extracting and 
   string n = name.substr(19,1); // extracting n
   string o = name.substr(29,1); // extracting o 
   string t = name.substr(37,1); // extracting t
   string ears = name.substr(22,4); // extracting ears
   
   string carefree_name = c + a + re + f + r + e + e;
                             // creating the word carefree 
   string and_name = andhi; // adding the word and to a new string
   string no_name = n + o; // creating the word no
   string tears_name = t + ears; // getting the word tears together
   
   string output_string = carefree_name + " " + and_name + " " + no_name + " "
		 + tears_name; // creating the full string name
   cout << output_string << ".\n"; // outputting the string to the viewer
  
return 0; // end program
}
