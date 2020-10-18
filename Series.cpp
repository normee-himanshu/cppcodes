e biggest festival for programmers "Geek Week" is back, Enter Now!

search
Sign In
Home
Courses
Hire With Us
Algorithmskeyboard_arrow_down
Data Structureskeyboard_arrow_down
Languageskeyboard_arrow_down
Interview Cornerkeyboard_arrow_down
GATEkeyboard_arrow_down
CS Subjectskeyboard_arrow_down
Studentkeyboard_arrow_down
GBlog
Puzzles
What's New ?
▲
Program to find Sum of a Series a^1/1! + a^2/2! + a^3/3! + a^4/4! +…….+ a^n/n!
Last Updated: 25-04-2018
Given two values ‘a’ and ‘n’, find sum of series a^1/1! + a^2/2! + a^3/3! + a^4/4! +…….+ a^n/n!.

Examples :

Input : a = 2 and n = 5
Output : 6.26667
We get result by adding 
2^1/1! + 2^2/2! + 2^3/3! + 2^4/4! +
2^5/5! 
= 2/1 + 4/2 +  8/6 + 16/24 + 32/120
=  6.26667
Recommended: Please try your approach on {IDE} first, before moving on to the solution.
A simple solution is to one by one compute values of individual terms and keep adding them to result.

We can find solution with only one loop. The idea is to just use previous values and multiply by (a/i) where i is the no of term which we need to find.

for finding 1st term:-  a/1
for finding 2nd term:-  (1st term) * a/2
for finding 3rd term:-  (2nd term) * a/3
.
.
.
for finding nth term:-  ((n-1)th term) * a/n

Illustration:




Input: a = 2 and n = 5
By multiplying Each term by 2/i
  1st term :-              2/1 = 2
  2nd term :- (1st term) * 2/2 =(2)*1 = 2
  3rd term :- (2nd term) * 2/3 = 4/3
  4th term :- (3rd term) * 2/4 = 2/3
  5th term :- (4th term) * 2/5 = 4/15
=> 2 + 2 + 4/3 + 2/3 + 4/15
Output: sum = 6.26667
Complexity:O(n)
CPP
/*CPP program to print the sum of series */
#include<bits/stdc++.h> 
using namespace std; 
  
/*f unction to calculate sum of given series*/
double sumOfSeries(double a,double num) 
{ 
    double res = 0,prev=1; 
    for (int i = 1; i <= num; i++) 
    { 
        /*multiply (a/i) to previous term*/
        prev *= (a/i); 
  
        /*store result in res*/
        res = res + prev; 
    } 
    return(res); 
} 
  
/* Driver Function */
int main() 
{ 
    double n = 5, a=2; 
    cout << sumOfSeries(a,n); 
    return 0; 
} 
