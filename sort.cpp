# include <iostream>
using namespace std;
void print (int array[], int );
void Min (int array[], int size ,int *min);

void Min (int array[], int size,int *min){
    for(int i{};i<size;i++){ 
        if (*min>array[i])
            *min=array[i];
    }
}

void print (int array [],int size) {
    for(int i{};i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t {};
    cin>>t;
    while(t--){
        size_t size{};
        cin>>size;
        int array[size]{};
        for(int i{};i<size;i++){
            cin>>array[i];
        }
        print(array,size);
        int min=array[0];
        int sort [size]{};
        int position{};
        Min(array,size,&min);
        for(int i{};i<size;i++){
            int max=array[0];
            for(int i{};i<size;i++){
                if(max<array[i]){
                    max=array[i];
                    position=i;
                }
             }
            sort[i]=max;
            array[position]=min;

        }
        print(sort,size);
        print(array,size);
        cout<<"Second largest element is: "<<sort[1]<<endl;

    }
    return 0;
}
