/* Given a string, 
find the length of the longest substring without repeating characters.

Example:

The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.

For "bbbbb" the longest substring is "b", with the length of 1.
*/

int Solution::lengthOfLongestSubstring(string A){
    int visited[256];
    for(int i=0;i<256;i++)
        visited[i]= -1 ;
    int cur_len = 1;
    int max_len = 1;
    int preindex ;
    visited[A[0]] = 0;
    
    for(int i=1; i<A.length(); i++){
       preindex = visited[A[i]] ;
       if(preindex== -1 || (i-cur_len)>preindex)
           cur_len++ ;
           
       else{
              if(cur_len>max_len)
                  max_len = cur_len ;
              cur_len = i - preindex ;      
           
           }
       visited[A[i]] = i;
    }
    if(cur_len>max_len)
        max_len = cur_len ;
    return max_len ;
    
}
