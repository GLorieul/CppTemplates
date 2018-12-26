
#include <iostream>

// Variadic template function :: accessParameterPack

template<int ... numbers>
int sum()
{
    int ans = 0;
    for(int nb : {numbers...})
        { ans += nb; }
    return ans;
}

int main()
{
    std::cout << "ans = " << sum<1,2,3,4>() << std::endl;
    return 0;
}

