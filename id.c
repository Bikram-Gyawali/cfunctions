#include <stdio.h>
struct StudentData{
    int name;
    int id;
    int age;
};
int main()
{
   
     struct StudentData student;
     student.name = "Bicky";
     student.id = 2057;
     student.age = 20;
     printf("Student Name is: %d", student.name);
     printf("\nStudent Id is: %d", student.id);
     printf("\nStudent Age is: %d", student.age);
     return 0;
}
