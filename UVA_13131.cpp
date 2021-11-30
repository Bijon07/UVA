///BIJON SAHA DURJOY
//SUST_SWE_19
#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int t;
     std::cin >> t;
     while (t--)
     {
          long long int n, k, i, x, y;
          std::cin >> n >> k;
          if (k == 1)
          {
               std::cout << 0 << endl;
               continue;
          }
          long long sum = 0;

          for (i = 1; i <= sqrt(n); i++)
          {
               if (n % i == 0)
               {
                    x = i;
                    y = n / i;

                    if (x == y)
                    {
                         if (x % k != 0)
                         {
                              sum = sum + x;
                         }
                    }
                    else
                    {
                         if (x % k != 0)
                         {
                              sum = sum + x;
                         }
                         if (y % k != 0)
                         {
                              sum = sum + y;
                         }
                    }
               }
          }
          std::cout << sum << endl;
     }
     return 0;
}
