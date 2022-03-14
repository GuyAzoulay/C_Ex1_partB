#include<iostream>
#include"mat.hpp"
#include<string>
#include<vector>

using namespace std;
using namespace ariel;

int main(){
    while (true){
        int col=0;
        int row=0;
        char a;
        char b;
        char start;
      cout<<"Press S to start, X to exit: "<<endl; 
      cin >> start;
      if(start == 'O'){
          continue;
      }
      if (start == 'X')
      {
          cout<<"Bye Bye 🧞"<<endl;
          break;
      }
      


      cout<<"Please enter number of colums: "<<endl;  
      cin>>col;

      cout<<"Please enter number of rows: "<<endl;
      cin>>row;

      cout<<"Please enter your first char: "<<endl;
      cin>>a;

      cout<<"Please enter your seconed char: "<<endl; 
      cin>>b;

      cout<<"this is the carpet for you!"<<endl;
      cout<< mat(col,row,a,b)<<endl;   
    }
    return 1;
}