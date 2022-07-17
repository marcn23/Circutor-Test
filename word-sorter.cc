#include <iostream>
#include <list>
using namespace std;

//Pre: We recieve a string list ordered.
//Post: We added the element w to the ordered list.
void insertion(list<string>& Bag, string w){
    bool end = false;
    list<string>::iterator it = Bag.begin();
    while(not end and it != Bag.end()){
        if(not Bag.empty()){
            string act = *it;
            if(act[0] == w[0]) {
                ++it;
            }
            else if (act[0] > w[0]) {
                end = true;
            }
            else ++it;
        }
    }
   Bag.insert(it, w);
}

//Pre: We recieve a string. (Direct input from the user)
//Post: We return the string all converted (if needed) to lowercase and without the non-wanted charcaters.
string upperToLower(string w){
    string newWord = "";
    for(int i = 0; i < w.size(); ++i){
        if(w[i] >= 65 and w[i] <= 90) newWord += (w[i]+32);
        else if(w[i] != ',' and w[i] != '.') newWord += w[i];
    }
    return newWord;
}

int main(){
    string word;
    list<string> wordsBag;
    
    //Input data.
    while(cin >> word){
        string comp;
        if(word[0] != '.' and word[0] != ','){
            comp = upperToLower(word); //Lowercase the word.
            insertion(wordsBag, comp); //Insertion ordered.
        }
    }
    char c;
    for(list<string>::iterator it = wordsBag.begin(); it != wordsBag.end(); ++it){
        if(it == wordsBag.begin()) {
            cout << *it;
            string x = *it;
            c = x[0]; //Save first char for return carriage if needed in the next word.
        }
        else {
            string x = *it;
            if(c != x[0]){ //First char different, return carriage.
                cout << endl;
                cout << x;
                c = x[0];
            } 
            else cout << ' ' << *it; //First char equal.
        }
    }
    cout << endl;
}
