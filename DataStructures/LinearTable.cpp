#include "LinearTable.h"

//  假设一个元素为主元素，遍历数组，若元素与当前主元素相同则计数加一，否则减一，若计数归零则重新设下一个元素为主元素，继续遍历当前数组。
//  重新遍历数组检查最后的主元素是否为数组主元素，是则返回此元素，否则返回-。
//
//  时间复杂度 O(n) 空间复杂度 O(1)
int mainElement(int A[], int len) {
	int m = A[0];
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (A[i] == m) {
			count++;
		} else  
		{
			count--;
			if (count == 0) {
				m = A[i + 1];
			}
		}
	}
	count = 0;
	for (int i = 0; i < len; i++) {
		if (A[i] == m) {
			count++;
		}
	}
	if (count > len / 2) {
		return m;
	}
	return -1;
}
