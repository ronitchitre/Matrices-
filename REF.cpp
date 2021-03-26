#include<iostream>
#include "classes.h"

using namespace std;


Matrix REF(Matrix m1 , int row_ind=0 , int col_ind = 0 ){
    if(row_ind == m1.m-1 or col_ind == m1.n-1){return m1;}
    int j=1+row_ind;
    bool for_loop_need = true;
    /*
    while (m1.row_list[row_ind].row[col_ind] == 0){
      if(j==m1.m){for_loop_need = false;}
        if(m1.row_list[j].row[col_ind] != 0){
        m1.row_list[row_ind] = m1.row_list[row_ind] + m1.row_list[j];
    }
        j++;
    }
    */
    if(for_loop_need){
    for(int i=1+row_ind;i<=m1.m-1;i++){
        if(m1.row_list[i].row[col_ind] == 0){continue;}
        double temp = m1.row_list[i].row[col_ind]/m1.row_list[row_ind].row[col_ind];
        //m1.row_list[i] = m1.row_list[i] - m1.row_list[0]*m1.row_list[i][0]/m1.row_list[0][0]
        Row tr = (m1.row_list[row_ind]*temp);
        m1.row_list[i] = m1.row_list[i] - tr ;
    }
    m1.output();
    cout << endl;
    return REF(m1 , row_ind+1 , col_ind+1);


}
}
int main(){
Matrix m1(3,3);
cout << endl;
Matrix m2 = REF(m1);
m2.output(); 

return 0;
}