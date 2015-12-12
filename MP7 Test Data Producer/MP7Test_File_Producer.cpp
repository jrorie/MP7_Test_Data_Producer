//
//  MP7Test_File_Producer.cpp
//  
//
//  Created by Jamal Rorie on 8/3/15.
//
//  Generates fake data files in the MP7 data format. Each type of file
//  gets its own for loop. Later, may wish to add if statement to turn
//  on and off.
//  1) Create an ofstream/open file for the new file
//  2) Drop the header into it
//  3) Run the loop that fills the file
//  4) Close that bad boy.


#include "MP7Test_File_Producer.h"


using namespace std;

void MP7Test_File_Producer()
{

 ofstream frame_number_f;
 ofstream channel_id_f;
 ofstream all_ones_f;
 
frame_number_f.open ("frame_number.txt");
channel_id_f.open ("channel_id.txt");
all_ones_f.open ("all_ones.txt");

//  myfile << "Writing this to a file.\n";
//  myfile.close();

//Create file header for all output files. This should be a string that I can reuse but I'm lazy, it's Friday, it's like 6PM and I want this to be bullet proof. Fix later (read: will never be fixed)
frame_number_f<<"Board MTF7\n";
frame_number_f<<"Quad/Chan :    q00c0      q00c1      q00c2      q00c3      q01c0      q01c1      q01c2      q01c3      q02c0      q02c1      q02c2      q02c3      q03c0      q03c1      q03c2      q03c3      q04c0      q04c1      q04c2      q04c3      q05c0      q05c1      q05c2      q05c3      q06c0      q06c1      q06c2      q06c3      q07c0      q07c1      q07c2      q07c3      q08c0      q08c1      q08c2      q08c3\n";
 frame_number_f<<"Link :     00         01         02         03         04         05         06         07         08         09         10         11         12         13         14         15         16         17         18         19         20         21         22         23         24         25         26         27         28         29         30         31         32         33         34         35\n";

channel_id_f<<"Board MTF7\n";
channel_id_f<<"Quad/Chan :    q00c0      q00c1      q00c2      q00c3      q01c0      q01c1      q01c2      q01c3      q02c0      q02c1      q02c2      q02c3      q03c0      q03c1      q03c2      q03c3      q04c0      q04c1      q04c2      q04c3      q05c0      q05c1      q05c2      q05c3      q06c0      q06c1      q06c2      q06c3      q07c0      q07c1      q07c2      q07c3      q08c0      q08c1      q08c2      q08c3\n";
channel_id_f<<"Link :     00         01         02         03         04         05         06         07         08         09         10         11         12         13         14         15         16         17         18         19         20         21         22         23         24         25         26         27         28         29         30         31         32         33         34         35\n";

all_ones_f<<"Board MTF7\n";
all_ones_f<<"Quad/Chan :    q00c0      q00c1      q00c2      q00c3      q01c0      q01c1      q01c2      q01c3      q02c0      q02c1      q02c2      q02c3      q03c0      q03c1      q03c2      q03c3      q04c0      q04c1      q04c2      q04c3      q05c0      q05c1      q05c2      q05c3      q06c0      q06c1      q06c2      q06c3      q07c0      q07c1      q07c2      q07c3      q08c0      q08c1      q08c2      q08c3\n";
all_ones_f<<"Link :     00         01         02         03         04         05         06         07         08         09         10         11         12         13         14         15         16         17         18         19         20         21         22         23         24         25         26         27         28         29         30         31         32         33         34         35\n";

//Do the loop for frame_number.txt
  for(int i=0; i<1024; i++)                                                   //Buffer depth is 1024
  {
    frame_number_f<<"Frame "<<setw(4)<<setfill('0')<<std::dec<<i<<" : ";      //First write the frame header for human readability
    for(int k=0; k<36; k++)
    {
        frame_number_f<<"1v"<<setw(8)<<setfill('0')<<std::hex<<i<<" ";        //Fill with zeroes
    }
    frame_number_f<<endl;

  }

//Do the loop for channel_id.txt
  for(int i=0; i<1024; i++)                                         //Buffer depth is 1024
  {
    frame_number_f<<"Frame "<<setw(4)<<setfill('0')<<std::dec<<i<<" : ";      //First write the frame header for human readability
    for(int k=0; k<36; k++)
    {
        frame_number_f<<"1v"<<setw(8)<<setfill('0')<<std::hex<<i<<" ";        //Fill with zeroes
    }
    frame_number_f<<endl;

  }

 frame_number_f.close();
 channel_id_f.close();
 all_ones_f.close();

}
