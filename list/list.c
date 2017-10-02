#include <stdio.h>

struct stu{
	int age;
	struct stu *next;
};

struct stu *create(){
	struct stu *pre,*cur,*head;
	int n = 0;
	pre = cur = (struct stu*)malloc(sizeof(struct stu));
	scanf("%d",&cur->age);
	head = NULL;
	while(cur->age!=0){
		n++;
		if(n=1)
			head = cur;
		else
			pre->next = cur;
		pre = cur;
		cur = (struct stu*)(malloc(sizeof(struct stu)));
		scanf("%d",&cur->age);
	}
	pre->next = NULL;
	return head;
}

int main(){
	struct stu *point;
	point = create();
	printf("%d\n", point->age);
}