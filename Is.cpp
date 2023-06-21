#include <iostream>
using namespace std;
class ls
{
public:
    void linearsearch(int arr[], int value, int n)
{
    int i;
	int found=0;
	for(i=0;i<n;i++)
    {
        if(value==arr[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        cout<<"element is present in array at position"<<i+1;
    }
    else
    {
        cout<<"element is not  present in array" ;
    }
}

};


int main()
{
	int num;
	int i,key,found=0;
	cout<<"enter the elements of ele";
	cin>>num;
	int arr[num];
	cout<<"enter the elements one by one";
	for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter elements to be searched";
    cin>>key;
    ls l1;
    l1.linearsearch(arr,key,num);
	return 0;
}
