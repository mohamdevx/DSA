#include <iostream>
#include <algorithm>
using namespace std;
#include <algorithm>

int main()
{

    int nums[]={1,2,3,4,5,6,7,8,9,10};
    int size=6;

    int smallest =INT_MAX;
    int largest =INT_MIN;

    for(int i;i<size;i++)
    {
        smallest=min(smallest,nums[i]);
        largest=max(largest,nums[i]);
    }
    return 0;
}