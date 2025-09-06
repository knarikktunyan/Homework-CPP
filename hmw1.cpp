#include <iostream>
int main()
{
    int i;
    int arr[] = {1, 2,4, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isDub = false;

    for(i = 0; i<n; i++)
    {
        bool isDub = false;

        for(int j = 0; j < n; j++)
        { 
            if(arr[i] == arr[j] && i != j)
            {
                isDub=true;
                break;
            }
        }
        if(!isDub)
        {
            std::cout << arr[i] << " "<<std::endl;
            break;
        }

            
    }         
    return 0;
}