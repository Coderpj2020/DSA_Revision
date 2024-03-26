#include<bits/stdc++.h>
using namespace std;


//problem_2nd (1071. Greatest Common Divisor of Strings)
// Problem_link :- https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

//method_1
// algorithem

class Solution {
public:
 //helper function
    bool check_divisor(string str1, string str2, int k) {
        int len1 = str1.length();
        int len2 = str2.length();
        if (len1 % k != 0 || len2 % k != 0) {
            return 0;
        } else {
            string base = str2.substr(0, k);
            int m1 = len1 / k;
            int m2 = len2 / k;
            string ans1 = "";
            string ans2 = "";

            for (int i = 0; i < m1; i++) {
                ans1 += base;
            }
            for (int i = 0; i < m2; i++) {
                ans2 += base;
            }
            if ((ans2 == str2) && (ans1 == str1))
                return 1;
            else
                return 0;
        }
    }
    // main function 
    string gcdOfStrings(string str1, string str2) {
        string ans;
        int n1 = str1.length();
        int n2 = str2.length();
        int min_len = min(n1, n2);
        for (int i = min_len; i > 0; i--) {
            if (check_divisor(str1, str2, i)) {
                return str2.substr(0, i);
            }
        }
        return "";
    }
};

int main(){
    
}