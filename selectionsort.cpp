//=====================================selection sort[Dynamic]=============================//


// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[50];
//     int n,c,t,d,chotu;

//     cout<<"\nEnter number of element ";
//     cin>>n;

//     for(int c=0;c<n;c++)
//     {
//         cout<<"\nEnter numbers for Sorting["<<c<<"]:"<<endl;
//         cin>>arr[c];
//     }

//     cout<<"\n Unsorted array is ";
//     for(int c=0;c<n;c++)
//     {
//         cout<<arr[c];
//     }

//     for(int c=0;c<=n-1;c++)
//     {
//        chotu=c;
//        for(int d=c+1;c<n;c++) 
//        {
//         if(arr[chotu]>arr[d])
//         {
//             chotu=d;
//         }
//        }
//        if(chotu!=c)
//        {
//         t=arr[c];
//         arr[c]=arr[chotu];
//         arr[chotu]=t;
//        }
//     }
//  cout<<"\n Sorted array is "<<endl;

//  for(int c=0;c<=n-1;c++)
//  {
//     cout<<arr[c];
//  }

// return 0;

// }

//========================================================selecton sort=======================================================//

// #include<iostream>
// using namespace std;
// int main()
// {
// int array[100], n, c, d, position, swap;

// cout<<"Enter number of elements\n";
// cin>>n;
// cout<<"Enter values\n";
// for ( c = 0 ; c < n ; c++ )
// {
// cin>>array[c];
// }
// for ( c = 0 ; c <=n-1 ; c++ )
// {
// position = c;
// for ( d = c + 1 ; d < n ; d++ )
// {
// if ( array[position] > array[d] )
// {
// position = d;
// }
// }
// if ( position != c )
// {
// swap = array[c];
// array[c] = array[position];
// array[position] = swap;
// }
// }
// cout<<"Sorted list in ascending order:\n";
// for ( c = 0 ; c < n ; c++ )
// cout<< array[c]<<"\n";
// }



//===================================[static]====================================================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]={12,33,2,3,54,6};
//     int t,i,j;
//      cout<<"Unsorted array is:"<<endl;
//     for(i=0;i<6;i++)
//     {
        
//         cout<<arr[i]<<" "<<endl;
//     }

//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<6;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }

//     }
//     cout<<"SORTED ARRAY IS :"<<endl;
//     for(i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" "<<"\n";
//     }
//     return 0;
// }

// // stablity====yes///
//-------------------------------------Dynamic-------------------------------------------//
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n,i,j,temp;

    cout<<"Enter the size of array "<<" "<<"\n";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter numbers for sorting:["<<i<<"]:"<<"\n";
        cin>>arr[i];
    }

    cout<<"Unsorted array is:"<<"endl";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<"\n";
    }
     for(i=0;i<n-1;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     cout<<"Sorted array is:"<<"\n";
     for(i=0;i<n;i++)
     {
        cout<<arr[i]<<" "<<"\t";
     }
     return 0;
}