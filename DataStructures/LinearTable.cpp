#include "LinearTable.h"
#include <algorithm>

void sort(int arr[], int len) {

}

//  ����һ��Ԫ��Ϊ��Ԫ�أ��������飬��Ԫ���뵱ǰ��Ԫ����ͬ�������һ�������һ����������������������һ��Ԫ��Ϊ��Ԫ�أ�����������ǰ���顣
//  ���±���������������Ԫ���Ƿ�Ϊ������Ԫ�أ����򷵻ش�Ԫ�أ����򷵻�-��
//
//  ʱ�临�Ӷ� O(n) �ռ临�Ӷ� O(1)
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


//  ����һ�����飬�ҳ�������δ���ֵ���С������
//  
//  ʱ�临�Ӷ� O(n) �ռ临�Ӷ�O(n)
int smallestPositiveInt(int A[], int len, int num) {
	if (num == 1) {
		std::sort(A, A + len);
		int result = 1;
		for (int i = 0; i < len; i++) {
			if (A[i] == result) {
				result++;
			}
		}
		return result;
	}
	if (num == 0){
		int* B = new int[len + 1]();
		memset(B, 0, sizeof(B));
		for (int i = 0; i < len; i++) {
			if (A[i] > 0 && A[i] <= len) {
				B[A[i] - 1] = 1;
			}
		}
		for (int i = 0; i < len + 1; i++) {
			if (B[i] == 0) {
				return i + 1;
			}
		}
	}
	return -1;
}