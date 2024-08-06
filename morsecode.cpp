#include <bits/stdc++.h> 
using namespace std;

void makemorsemap(unordered_map<string, char> &morsemap){
    vector<string> morselist = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
     "..",".---", "-.-", ".-..", "--", "-.", "---", ".--.","--.-", ".-.", 
     "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----",
     "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
    };
    for(int i = 0; i < 26; i++) morsemap[morselist[i]] = 'a' + i;
    for(int i = 0; i < 10; i++) morsemap[morselist[26 + i]] = '0' + i;
}

string morseToEnglish(string morsecode) 
{
    unordered_map<string, char> morsemap;
    makemorsemap(morsemap);
    stringstream ss(morsecode);
    string morsesym;
    string res;
    while(ss >> morsesym){
        res += morsemap.at(morsesym);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < t; i++){
        string morsecode;
        cin >> morsecode;
        cout << morseToEnglish(morsecode);
    }
}
