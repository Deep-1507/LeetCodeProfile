#include <iostream>
#include <vector>
using namespace std;

// void printvector(vector<int> test_scores)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout << test_scores[i] << " ";
//     }
// }

int main()
{
    vector<int> test_scores  (3);

    test_scores={1,2,3};
    // printvector(&test_scores);
    for (int i = 0; i < 5; i++)
    {
        cout << test_scores[i] << " ";
    }
    return 0;
}