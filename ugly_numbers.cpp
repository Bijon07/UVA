///BIJON SAHA DURJOY
//SUST_SWE_19 

//FIND THE 1500 TH UGLY NUMBERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c1=0, c2=0, c3=0;
     vector <int> v(1500 + 1);
     v[0] = 1;
     for(int i=1; i<=1500; i++)
     {
          v[i] = min({2 * v[c1], 3 * v[c2], 5 * v[c3]});
          if(2 * v[c1] == v[i])
          {
               c1++;
          }
          if(3 * v[c2] == v[i])
          {
               c2++;
          }

          if(5 * v[c3] == v[i])
          {
               c3++;
          }
     }
     std:: cout<<"The 1500'th ugly number is "<< v[1500 -1]<<"." <<endl;
     return 0;

}