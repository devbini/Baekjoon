#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    string A, B;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            A += to_string(num_list[i]);        
        }
        else
        {
            B += to_string(num_list[i]);
        }
    }
    
    return stoi(A) + stoi(B);
}