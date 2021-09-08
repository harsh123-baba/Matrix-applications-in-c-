// i solved this using same method i did in lower tringular matrix 
/*
 call the set function in loop for taking inputs 
 where i stands for row_index and j stands for column_index

*/


class Symmetric{
    private:
    int m;
    int n;
    int *A;
    public:
    Symmetric(int m , int  n){
        this->m = m;
        this->n = n;
        A = new int[m*(m+1)/2];
    }

    ~Symmetric(){
        delete [] A;
    }
    void set(int i,int j , int x){
        if(i>=j){
            A[(i*(i-1)/2)+j-1] = x;
        }
        
    }
    int get(int i , int j){
        if(i<=j){
            return A[i*(i-1)/2+j-1];
        }
        else{
            return A[j*(j-1)/2+i-1];
        }
    }

    void Display(){
        for(int i =1; i<=m; i++){
            for(int j =1; j<=n; j++){
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";
                }
                else{
                    cout<<A[j*(j-1)/2+i-1]<<" ";
                }
            }
            cout<<endl;
        }
    }

};
