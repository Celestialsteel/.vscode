#include <fstream>
#include <iostream>
using namespace std;

int main()
{
      ofstream Mykonos("mykonos.txt");
      if(!Mykonos)
      {
      Mykonos<<"THIS IS MY TEXT FILE";
      Mykonos.close();
      }
      else
      {
          cout<< "File exists";
      }
    


}