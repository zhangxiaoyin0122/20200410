//翻转数组
//#include <stdio.h>
//#include <stdlib.h>
//void rotate(int* nums, int numsSize, int k) {
//	for (int i = 0; i < k; i++) {
//		int i = numsSize - 1;
//		int tmp = nums[i];
//		for (; i > 0; i--) {
//			nums[i] = nums[i - 1];
//		}
//		nums[0] = tmp;
//	}
//}

//int main() {
//	int nums[] = { 1,2,3,4,5,6,7,8 };
//	rotate(nums, 8, 3);
//	for (int i = 0; i < 8; i++) {
//		printf("%2d", nums[i]);
//	}
//	system("pause");
//	return 0;
//}
////翻转单链表
//struct ListNode* reverseList(struct ListNode* head) {
//	struct ListNode* prev, *cur, *next;
//	prev = NULL;
//	cur = head;
//	while (cur) {
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//bool isPalindrome(struct ListNode* head) {
//	struct ListNode* slow, *fast, *prev, *cur, *next;
//	if (head == NULL || head->next == NULL)
//		return true;
//	//通过快慢指针寻找中间结点
//	slow = fast = head;
//	while (fast&&fast->next) {
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	//翻转后半部分
//	prev = NULL;
//	cur = slow;
//	while (cur) {
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	cur = prev;
//	//判断两个链表是否相同 
//	while (head&&cur) {
//		if (head->val != cur->val) {
//			return false;
//		}
//		else {
//			head = head->next;
//			cur = cur->next;
//		}
//	}
//	return true;
//}
//
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
//	struct ListNode* L1, *L2;
//	if (headA == NULL || headB == NULL)
//		return NULL;
//	int lenA = 0;
//	int lenB = 0;
//	L1 = headA;
//	while (L1) {
//		lenA++;
//		L1 = L1->next;
//	}
//	L2 = headB;
//	while (L2) {
//		lenB++;
//		L2 = L2->next;
//	}
//	int gap = abs(lenA - lenB);
//	L1 = headA;
//	L2 = headB;
//	if (lenA < lenB) {
//		L1 = headB;
//		L2 = headA;
//	}
//	while (gap--) {
//		L1 = L1->next;
//	}
//	while (L1&&L2) {
//		if (L1 == L2) {//注意:是指针指的地址相同 而不是值相同
//			return L1;
//		}
//		else {
//			L1 = L1->next;
//			L2 = L2->next;
//		}
//	}
//	return NULL;
//}

#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;//解引用
	*a = *b;
	*b = tmp;
}
int main() {
	int a = 1;
	int b = 9;
	swap(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}