#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

vector<int> parseInt(string str)
{
    vector<int> res;

    stringstream ss;
    char ch;
    int temp;

    ss << str;

    // while (ss >> temp)
    // {
    //     res.push_back(temp);
    //     ss >> ch;
    // }
    for (int i = 0; i < str.size(); i++)
    {
        ss >> temp;
        res.push_back(temp);
        ss >> ch;
    }

    return res;
};

int main()
{
    /*
    string s = "23,4,56";
    char ch;
    int a, b, c;

    stringstream sso;

    sso << s;

    sso >> a >> ch >> b >> ch >> c;
    
    cout << a << " " << b << " " << c;
    */

    string s;
    vector<int> res;

    cin >> s;

    res = parseInt(s);

    for (auto &x : res)
        cout << x << endl;

    return 0;
}
