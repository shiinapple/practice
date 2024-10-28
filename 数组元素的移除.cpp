#include <iostream>

int main (){
    int *p = new int [10] {3,5,1,11,99,66,22,2,8,6};
    int *q = new int [8];
    int k=0;
    for(int i = 0; i<10; i++){
        if(i==0 || i==4){
            k++;
            
        }
        else{
            q[i-k]=p[i];
        }

    }
    delete[] p;
    p=q;
    
    for (int i = 0; i < 8; i++)
        std::cout << q[i] << std::endl;
    delete[] q;
    return 0;
}
