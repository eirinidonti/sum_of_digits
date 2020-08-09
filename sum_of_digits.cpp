/*C++ program that returns the sum of digits of a number */
  #include <iostream>

  using namespace std;

   int main() {
      int n; /* n = number with 7 digits (maximum) */ 
      cin >> n;
      for(int a = 0; a <= 9; a++){
       for(int b = 0; b <= 9; b++){
        for(int c = 0; c <= 9; c++){
         for(int d = 0; d <= 9; d++){
          for(int e = 0; e <= 9; e++){
           for(int f = 0; f <= 9; f++){
            for(int g = 0; g <= 9; g++){
              if( n == a + 10*b + 100*c + 1000*d + 10000*e + 100000*f + 1000000*g ) {
              int sum_of_digits = a + b + c + d + e + f + g;
              cout << "Sum of the digits = " << sum_of_digits << endl;
            }
           }
          }
         }
        }
       }
      }
     }
   }
