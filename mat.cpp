#include "mat.hpp"
#include<vector>
#include<iostream>
#include<string>
using namespace std;
const int ascci_low = '!';
const int ascci_high = '~';

namespace ariel{



string mat(int col, int row, char a , char b){
    string result;
    int c_start = 0;
    int t_row =row;
    int t_col = col;
    
    vector<vector<char>> c_mat(row , vector<char>(col));
    
    if(col%2==0 || row%2 == 0){
        throw std::invalid_argument("Number of row or colums must be odd");
    }
    if(col < 0 || row < 0){
        throw std::invalid_argument("Mat must have a positive number of row and coloums!");
    }
    if(ascci_low > a || a > ascci_high ||b < ascci_low || b > ascci_high ){
        throw std::invalid_argument("Chars must be between 33 to 126");
    }
    if(row ==1 ){
        for(int g=0 ; g < col ; g++){
            result+= a;
        }
        return result;
    }
    if(col ==1){
        for( int g=0 ; g<row ; g++){
            result+= a;
            result+="\n";
        
        }
        return result;
    }
    if(a == b){
        for(int i=1; i<=row*col; i++){
            if(i == i*col-1){
                result += (a+'\n');
                
            }
            else{result+=a;}

        }
        return result;
    }
    char symbol = a;

    while( col != 0 && row != 0){
        
        for(int i = c_start; i < row ; i++){
            
            for(int j = c_start ; j < col ; j++){
                
                if( i == c_start){
                    c_mat[i][j] = symbol;
                }


                if(i == row-1){
                    c_mat[i][j] = symbol;
                }
                if (j == c_start){
                    c_mat[i][c_start] = symbol;
                }
                if(j == col -1){
                    c_mat[i][col-1] = symbol;
                }
            }
        }
       
        if(symbol == a){
            symbol = b;
        }
        else if(symbol == b){
            symbol=a;
        }
        row = row -1;
        col = col -1;
        c_start = c_start + 1;

    }

    for( int t = 0 ; t < t_row ; t++){
        for(int k = 0; k < t_col ; k++){
           result += (c_mat[t][k]);     
        }
        result += '\n';
    
    }
    
    
    return result;
} 

}