// basically when you create a lower tringular matrix it takes O(m*n)  space but in this method it takes O(n) space

/*
 call the set function in loop for taking inputs 
 where i stands for row_index and j stands for column_index

*/

class LowerTringular{
    private:
    int m;
    int n;
    int *A;
    public:
    LowerTringular(int m, int n){
        this->m = m;
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    ~LowerTringular(){
        delete [] A;
    }

    void set(int i , int j , int x){
        
        if(i>=j){
            A[i*(i-1)/2+j-1] = x;
        }
    }
    
    int get(int i, int j){
        return A[i*(i-1)/2 +j-1];
    }
    void Display(){
        for(int i =1; i<=m; i++){
            for(int j =1; j<=n; j++){
                if(i>=j){
                    cout<<A[i*(i-1)/2+j-1]<<" ";

                }
                else{
                    cout<<0<<" ";
                }

            }
            cout<<endl;
        }
    }

};
