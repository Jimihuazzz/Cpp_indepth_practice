#include<bits/stdc++.h>
//判断 左值or 右值
//链接 https://www.zhihu.com/question/39846131/answer/85277628
/*
来自 Scott Meyers 的方法
判断表达式是否是左值，有一个简单的办法，
就是看看能否取它的地址，能取地址的就是左值。

A useful heuristic to determine 
whether an expression is an lvalue 
is to ask if you can take its address. 
If you can, it typically is. 
If you can’t, it’s usually an rvalue. 
A nice feature of this heuristic is 
that it helps you remember that 
the type of an expression is independent 
of whether the expression is an lvalue or an rvalue. 
-- "Effective Modern C++", Introduction - Terminology and Conventions, Scott Meyers

左值可看作是“对象”，右值可看作是“值” 
(Lvalues represent objects and rvalues represent values)
左值到右值的转换可看做“读出对象的值”
 (Lvalue-to-rvalue conversion represents reading the value of an object)
std::move 允许把任何表达式以“值”的方式处理
 (allows you to treat any expression as though it represents a value)
 std::forward 允许在处理的同时，保留表达式为“对象”还是“值”的特性 
 (allows you to preserve whether an expression represented an object or a value)



*/

int main()
{

}