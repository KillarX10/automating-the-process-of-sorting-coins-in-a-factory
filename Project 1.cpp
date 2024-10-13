//Q.Even) You are automating the process of sorting coins in a factory. the weight of each coin is stored in an array, and the factory wants to separate coins with odd weights for different packaging. How would you count how many coins have odd weights and how many have even weights, create two seprate arrays and display count of coins in each?
#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;
    int coins[n];
    int odd[n], even[n];
    int oddcount=0,evencount=0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the weight of coin " << i + 1 << ": ";
        cin >> coins[i];
        if (coins[i] % 2 == 0)
        {
            even[evencount] = coins[i];
            evencount++;
        }
        else
        {
            odd[oddcount] = coins[i];
            oddcount++;
        }
    }
    cout << "Number of coins with odd weights: " <<oddcount<< endl;
    cout << "Number of coins with even weights: " <<evencount<< endl;
    return 0;
}