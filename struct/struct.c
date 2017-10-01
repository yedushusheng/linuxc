#include <stdio.h>
struct student
{
	char name[20];
	int age;
};

int main(){
	struct student stu= {"yedushusheng",20};
	printf("name:%s,age=:%d\n", stu.name,stu.age);

	struct student *point1;
	printf("name:%s\n", point1->name); 

	struct student stu1[2] = {"name1",1,"name2",2};
	printf("name1:%s,age1:%d\n", stu1[0].name,stu1[0].age);
	printf("name2:%s,age2:%d\n", stu1[1].name,stu1[1].age);

	struct student *point2;
	point2 = stu1;
	printf("point2:%s\n", point2->name); 

	point2++;
	printf("point2 new:%s\n", point2->name);
	return 0;
}