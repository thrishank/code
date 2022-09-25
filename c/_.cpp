#include <iostream>

using namespace std;
int main()
{

    // char button;
    // cout << "Type a charcter: ";
    // cin >> button;
    // // use single quotes for charcters other wise this error popsup
    // // error - ISO C++ forbids comparison between pointer and integer [-fpermissive]
    // if (button == 'a')
    // {
    //     cout << "hii";
    // }
    // else if (button == 'b')
    // {
    //     cout << "hello";
    // }
    // else if (button == 'c')
    // {
    //     cout << "dude";
    // }
    // else
    // {
    //     cout << "wrong charcater";
    // }

    // // using switch statement
    // switch (button)
    // {
    // case 'a':
    //     cout << "hii";
    //     break;
    // case 'b':
    //     cout << "hello";
    //     break;
    // case 'c':
    //     cout << "bro";
    //     break;
    // default:
    //     cout << "enter a valid character";
    //     break;
    // }
    // simple calculator using switch statment
    // float a, b;
    // cout << "Enter two num: ";
    // cin >> a >> b;
    // char operation;
    // cin >> operation;
    // cout << "Enter a operation: ";
    // switch (operation)
    // {
    // case '+':
    //     cout << a + b;
    //     break;
    // case '-':
    //     cout << a - b;
    //     break;
    // case '*':
    //     cout << a * b;
    //     break;
    // case '/':
    //     cout << a % b;
    //     break;

    // default:
    //     cout << "enter a valid operator";
    //     break;
    // }
    // for loop to find sum of first n integers
    //  int a;
    //  cin>>a;

    // int sum =0;
    // for (int i=0; i<=5; i++)
    // {
    //      sum=sum+i;
    // }
    // cout<<sum<<endl;

    // while loop
    //  int n;
    //  cin>>n;
    //  while (n>0)
    //  {
    //      cout<<n<<endl;
    //      cin>>n;
    //  }

    // do while loop
    //  int n;
    //  cin>>n;
    //  do
    //  {
    //     cout<<n;
    //     cin>>n;

    // } while (n>0);

    // for loop pattern questions
    // square-rectangle problem
    int rows, columns;
    cin >> rows >> columns;

    // for (int i = 1; i<=rows; i++)
    // {
    //     for (int j = 1; j <= columns; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // Halow rectangle pattern
    // ****
    // *  *
    // *  *
    // ****
    // for (int i = 1; i<=rows; i++){
    //     for (int j =1; j<=columns; j++){
    //         if (i == 1 || i ==rows )
    //         {
    //             cout<<"*";
    //         }
    //         else if (j == 1 || j == columns )
    //         {
    //             cout<<"*";
    //         }
    //         else {
    //             cout<<" ";
    //         }
    //     }
    //         cout<<endl;
    // }
    // pyramid
    // for(int i =rows; i>= 1; i--){
    //     for(int j =1; j<= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // reverse pyramid
    //    for (int i =1; i<=n; i++){
    //     for (int j =1; j<=n; j++){
    //         if(j<=n-i){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // pyramid-numbers
    // for(int i =1; i<=n; i++){
    //     for (int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // for (int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    return 0;
}
