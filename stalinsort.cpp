#include <iostream>
#include <vector>

int main()
{
    int n, temp;
    std::vector <int> v;
    std::cin>>n;
    for (int i = 0; i < n; ++i) 
    {
        std::cin>>temp;
        v.push_back(temp);
    }
    
    for (int i = 1; i < n; ++i)
    {
        if (v[i] < v[i-1])
        {
            v.erase(v.begin()+i); 
        }        
    }
        
    int size = v.size();
    for (int i = 0; i < size; ++i)
    {
        std::cout<<v[i]<<" ";
    }
}
