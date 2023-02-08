#include <bits/stdc++.h>
using namespace std;
 
int maxLength; // variables to store and
string res; // update  maxLength and res
 
// A utility function to get the longest palindrome
// starting and expanding out from given center indices
void cSubUtil(string& s, int l, int r)
{
    // check if the indices lie in the range of string
    // and also if it is palindrome
    while (l >= 0 && r < s.length() && s[l] == s[r]) {
        // expand the boundary
        l--;
        r++;
    }
    // if it's length is greater than maxLength update
    // maxLength and res
    if (r - l - 1 >= maxLength) {
        res = s.substr(l + 1, r - l - 1);
        maxLength = r - l - 1;
    }
    return;
}
// A function which takes a string prints the LPS and
// returns the length of LPS
int longestPalSubstr(string str)
{
    res = "";
    maxLength = 1;
    // for every index in the string check palindromes
    // starting from that index
    for (int i = 0; i < str.length(); i++) {
        // check for odd length palindromes
        cSubUtil(str, i, i);
        // check for even length palindromes
        cSubUtil(str, i, i + 1);
    }
 
    cout << "Longest palindrome substring is: ";
    cout << res << "\n";
 
    return maxLength;
}
 
// Driver program to test above functions
int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: " << longestPalSubstr(str)
         << endl;
    return 0;
}