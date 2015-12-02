//
//  MP7Test_File_Producer.cpp
//  
//
//  Created by Jamal Rorie on 8/3/15.
//
//  Generates

#include "MP7Test_File_Producer.h"
#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;

void MP7Test_File_Producer()
{
  for(int i=0; i<1024; i++)
  {
    cout<<"Frame "<<setw(4)<<setfill('0')<<std::dec<<i<<" : ";
    for(int k=0; k<36; k++)
    {
        cout<<"1v"<<setw(8)<<setfill('0')<<std::hex<<i<<" ";
    }
    cout<<endl;

  }
}