#include <iostream>
using namespace std;

// Function to find and print duplicate elements in a sorted array
int findAndPrintDuplicates(int arr[], int n, int prev) {
    
    //Type your code here
    bool found=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                found=true;
                cout<<arr[i];
            }
        }
    }
    if(!found)
    {
        cout<<"-1";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findAndPrintDuplicates(arr, n, -1);

    if (result == -1) {
        cout << "-1";
    }

    return 0;
}
//mahek
