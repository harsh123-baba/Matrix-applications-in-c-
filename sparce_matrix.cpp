

class Element{
    public:
    int i;
    int j; 
    int x;

};
class SparceMatrix{
    private:
    int m;
    int n;
    int num;
    Element *e;
    public:
    SparceMatrix(){

    }

    SparceMatrix(int m, int n, int num){
        this->m = m;
        this->n = n;
        this->num = num;
        e = new Element[this->num];
    }
    


    void read(){
        cout<<"Enter the elements in i, j, value format this loop is for "<<num<< " times"<<endl;
        for(int i =0;i<num; i++){
            cin>>e[i].i>>e[i].j>>e[i].x;
        }

    }
    
    void Display(){
        int k =0;
        cout<<endl;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(e[k].i == i && e[k].j == j){
                    cout<<e[k].x<<" ";
                    k++;
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
    }

// Addition of sparce matrix


SparceMatrix Addition(SparceMatrix s1, SparceMatrix s2){
    int i =0;
    int j = 0;
    int k = 0;
    SparceMatrix sum(s1.m, s1.n, s1.num+s2.num);
    while(i<s1.num && j<s2.num){
        if(s1.e[i].i <s2.e[j].i){
            sum.e[k++].x = s1.e[i++].x;
        }
        
        else if(s1.e[i].i > s2.e[j].i){
            sum.e[k++].x = s2.e[j++].x;
        }

        else{
            if(s1.e[i].j < s2.e[j].j){
                sum.e[k++].x = s1.e[i++].x;
            }
            else if(s1.e[i].j > s2.e[j].j){
                sum.e[k++].x = s2.e[j++].x;
            }
            else{
                sum.e[k++].x = s1.e[i++].x;
                sum.e[k].x += s2.e[j++].x;
            }
        }
    }
    for(; i<s1.num; i++){
        sum.e[k++].x = s1.e[i].x;
    }
    for(; j<s2.num; j++){
        sum.e[k++].x = s2.e[j].x;
    }
    return sum;
}

};
