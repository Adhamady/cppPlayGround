#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    size_t vectorSize = v.size();
    std::cout << vectorSize << "\n";
    size_t vectorCapacity = v.capacity();
    std::cout << vectorCapacity << "\n";
    v.pop_back();
    
}