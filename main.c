//Author: Dominic Savaglio djs7129@psu.edu
//Collaborator: Jeffrey Shi jjs7487@psu.edu
//Collaborator: Adam Walascheck ajw6322@psu.edu
//Section: 10R
//Breakout: 13
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double percentage = atof(grade);
  char *letter_grade = 0;
  if(percentage >= 93.0) {
    letter_grade = "A";
  }
  else if(percentage >= 90.0) {
    letter_grade = "A-";
  }
  else if(percentage >= 87.0) {
    letter_grade = "B+";
  }
  else if(percentage >= 83.0) {
    letter_grade = "B";
  }
  else if(percentage >= 80.0) {
    letter_grade = "B-";
  }
  else if(percentage >= 77.0) {
    letter_grade = "C+";
  }
  else if(percentage >= 70.0) {
    letter_grade = "C";
  }
  else if(percentage >= 60.0) {
    letter_grade = "D";
  }
  else {
    letter_grade = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n", letter_grade);
  return 0;
}