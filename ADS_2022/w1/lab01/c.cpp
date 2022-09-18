#include <iostream>
#include <stack> 

using namespace std;

string func(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '#') {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
    }  
    string neww = "";
    while (st.size() != 0){
        neww += st.top();
        st.pop();
    }  
    return neww;
}

int main() {

    string s, t;
    cin >> s >> t;

    string ss = func(s);
    string tt = func(t);

    if (ss != tt) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }

    return 0;
}