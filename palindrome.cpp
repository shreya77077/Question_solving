/*
9. Palindrome Number
Easy
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10 == 0))
        return false;
        int sum = 0;
        while(x>sum){
            sum = sum * 10 + x% 10;
            x = x/10;
        }
        return (x == sum)||(x == sum/10);

        
    }
};
Given a string s, return the longest 
palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.