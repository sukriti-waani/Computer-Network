/*  Write a program to assign values to each member of a following structure :
  struct stud info
  int rollno;
  char name[40];
  float cgpa;
  struct dob;
pass the populated structure to a function using call by value and to another function using call by address.
And display the values of each members. */

#include <stdio.h>
#include <string.h>

struct dob
{
  int day;
  int month;
  int year;
};

struct stud_info
{
  int rollno;
  char name[40];
  float cgpa;
  struct dob birthdate;
};

// Function to display structure using call by value
void displayByValue(struct stud_info s)
{
  printf("\nDisplaying using Call by Value:\n");
  printf("Roll Number: %d\n", s.rollno);
  printf("Name: %s\n", s.name);
  printf("CGPA: %.2f\n", s.cgpa);
  printf("Date of Birth: %02d-%02d-%d\n", s.birthdate.day, s.birthdate.month, s.birthdate.year);
}

// Function to display structure using call by address
void displayByAddress(struct stud_info *s)
{
  printf("\nDisplaying using Call by Address:\n");
  printf("Roll Number: %d\n", s->rollno);
  printf("Name: %s\n", s->name);
  printf("CGPA: %.2f\n", s->cgpa);
  printf("Date of Birth: %02d-%02d-%d\n", s->birthdate.day, s->birthdate.month, s->birthdate.year);
}

int main()
{
  struct stud_info s;

  printf("Enter Roll Number: ");
  scanf("%d", &s.rollno);

  printf("Enter Name: ");
  scanf(" %[^\n]", s.name);

  printf("Enter CGPA: ");
  scanf("%f", &s.cgpa);

  printf("Enter Date of Birth (DD MM YYYY): ");
  scanf("%d %d %d", &s.birthdate.day, &s.birthdate.month, &s.birthdate.year);

  // Call by value
  displayByValue(s);

  // Call by address
  displayByAddress(&s);

  return 0;
}
