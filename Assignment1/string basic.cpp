https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    cin>>a;
    string b;
    cin>>b;
    int len1=a.size();
    int len2=b.size();
    string c=a+b;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<len1<<" "<<len2<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    return 0;
}
