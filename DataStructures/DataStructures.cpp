// DataStructures.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "LinearTable.h"

using namespace std;

int main()
{
    // 12.找主元素
    int A[8] = { 0, 5, 5, 3, 5, 7};
    std::cout << mainElement(A, 6) << endl;

    // 13.数组中未出现的最小正整数
    int A13[8] = { 0, 1, 2, 3, 5, 7 };
    std::cout << smallestPositiveInt(A13, 6) << endl;
}
