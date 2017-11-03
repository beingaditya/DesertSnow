/* Given two binary strings, return their sum (also a binary string).

Example:

a = "100"

b = "11"
Return a + b = “111”. */
string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   int i = A.size()-1 ;
   int j = B.size()-1 ;
   int s = 0;
   string result ;
   while(i>=0 || j>=0 || s==1){
   s += ((i>=0)?(A[i]-'0'):0);
   s += ((j>=0)?(B[j]-'0'):0);
   
   result = char(s%2 + '0') + result ;
   s/=2 ;
   i--;
   j--;
   }
   
   return result ;
}
