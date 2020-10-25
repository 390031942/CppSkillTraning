#include "__declspecDemo.h"
#include "Cpp11_14.h"
#include "type_traits_Demo.h"
#include <iostream>
#include <xmmintrin.h>
#include <string>
#include <vector>
long operator"" b(unsigned long long v)
{
	return v * 1024;
}
#include <iostream>
using namespace std;

//前向声明
template<typename... Args>
struct Sum;

//基本定义
template<typename First, typename... Rest>
struct Sum<First, Rest...>
{
    enum { value = Sum<First>::value + Sum<Rest...>::value };
};

//递归终止
template<typename Last>
struct Sum<Last>
{
    enum { value = sizeof(Last) };
};
int main()
{
    int sum = Sum<int, decltype(std::vector<std::pair<int,int>>()), int, double > ().value;
    std::cout << sum;
    system("pause");
}