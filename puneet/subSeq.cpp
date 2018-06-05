/*
Q - Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase .
Input -
 ABCDGH
AEDFHR
Output - 3 .
Input -
ABC
AC
Output - 2
*/

#include <iostream>

using namespace std;

int main()
{
    char first_str[50], second_str[50];
    cin>>first_str;
    cin>>second_str;
    int point_second=0, result=0;
    for(int i=0; first_str[i]!='\0'; i++){
        for(int j=point_second; second_str[j]!='\0'; j++){
            if (first_str[i]==second_str[j]){
                result++;
                point_second=j;
                break;
            }
        }
    }

    cout<<result;
    return 0;
}
