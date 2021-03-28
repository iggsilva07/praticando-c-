#include <iostream>
using namespace std;

int main()
{
  int m[4][4];
  

  for(int i = 1; i < 5; i++)

  {
    for(int j = 1; j < 5; j++)
   
      {
        if( i == j)
        {
          m[i][j] = 1;
        }
        else
        {
          m[i][j] = 0;
        }
      }
  }
    for(int i = 1; i < 5; i++)

  {
    for(int j = 1; j < 5; j++)
    {
      cout <<" "<< m[i][j];
    }
    cout << "\n";
  }

return 0;
}