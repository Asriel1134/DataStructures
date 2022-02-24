#include "LinearTable.h"

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
