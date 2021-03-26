#include<iostream>
using namespace std;

class Row
{
public:
    int m;
    double row[100];
    Row(){
        
    }
    Row(int m_temp , int row_temp[]){
        m = m_temp;
        for(int i=0;i<m;i++){
            row[i] = row_temp[i];
        }
    }

    Row operator*(Row r1){
        Row result;
        result.m = r1.m;
        for(int i=0;i<result.m;i++){
            result.row[i] = row[i]*r1.row[i];
        }
        return result;
    }
    Row operator*(double scalar){
        Row result;
        result.m = m;
        for(int i=0;i<result.m;i++){
            result.row[i] = row[i]*scalar;
        }
        return result;
    }
    Row operator+(Row r1){
        Row result;
        result.m = r1.m;
        for(int i=0;i<result.m;i++){
            result.row[i] = row[i]+r1.row[i];
        }
        return result;
    }
    Row operator-(Row r1){
        Row result;
        result.m = r1.m;
        for(int i=0;i<result.m;i++){
            result.row[i] = row[i]-r1.row[i];
        }
        return result;
    }
    
    void output(){
        for(int i=0;i<m;i++){
            cout << row[i] << " ";
        }
        cout << endl;
    };
};


class Matrix{
public:
    int n;
    int m;
    Row row_list[100];
    Matrix(){

    };
    Matrix(int m_temp,int n_temp){
        m = m_temp;
        n=n_temp;
        for(int i=0;i<m;i++){
            Row temp;
            temp.m = n;
            cout << "Enter row" << endl;
            for(int j=0;j<n;j++){
            cin >> temp.row[j];
            }
        row_list[i] = temp;
        }
    };

void output(){
    for(int i=0;i<m;i++){
        row_list[i].output();
    };
}   
};
