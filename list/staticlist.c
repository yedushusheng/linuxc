#include <stdio.h>

struct student{
	char name[20];
	int age;
	struct student *next;
};

int main()
{
	struct student a,b,c,*head;
	//a.name = "a";
	a.age = 1;
	//b.name = "b";
	b.age = 2;
	//c.name = "c";
	c.age = 3;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	struct student *point;
	point = head;
	while(point!=NULL){
		printf(" age:%d\n",point->age);
	}
	point = point->next;
	return 0;
}