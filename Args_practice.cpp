#include<iostream>
// 链接https://blog.csdn.net/wangx_x/article/details/122374408
//可变参数+模板 两种写法，便于偏特化
template <class... T>
void f(T... args);
//标准定义如上

template<typename T>
T sum1(T t)
{
    return t;
}
template<class T,class ...agrs>
T sum1(T head,agrs... ag)
{
    return head+sum1<T>(ag...); //注意这里的<T>
}
//递归式写法

// template<class T,class ...Agrs>
// auto sum2(Agrs... n)
// {
//     return (n+...);
// }
//逗号表达式写法

int main()
{
    std::cout<<__cplusplus<<std::endl;
    std::cout<<sum1(1,2)<<std::endl;
    std::cout<<sum1(2,4.5,7.7)<<std::endl;
    system("pause\n");
}