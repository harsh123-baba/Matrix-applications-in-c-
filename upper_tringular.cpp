
// basically when you create a Upper tringular matrix it takes O(m*n)  space but in this method it takes O(n) space


/*
 call the set function in loop for taking inputs 
 where i stands for row_index and j stands for column_index

*/

class UpperTringular{
    private:
    int m;
    int n;
    int * A;
    public:
    UpperTringular(int m, int n){
        this->m = m;
        this->n = n;
        A = new int[m*(m+1)/2];
    }

    ~UpperTringular(){
        delete[] A;
    }
    void set(int i , int j, int x){
        if(i<=j){
            A[(i-1)*n - ((i-2)*(i-1))/2 +j-1] = x;
        }
    }
    int get(int i, int j){
        if(i<=j){
            return A[(i-1)*n - ((i-2)*(i-1)/2)+j-1];
        }
        return 0;
    }

    void Display(){
        for(int i =1;i<=m; i++){
            for(int j =1; j<=n; j++){
                if(i<=j){
                    cout<<A[(i-1)*n - ((i-2)*(i-1)/2)+j-1]<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;

        }
    }

};
