#include <iostream>

using namespace std;
  class Student{

  private:
    double GPA;
    char Grade;

    public:
        string Name;
        int Age;
        string Major;

         Student(string name, int age, string major, double gpa, char grade){
        Name = name;
        Age = age;
        Major = major;
        SubGPA(gpa);
        subGrade(grade);
        }

        void SubGPA(double gpa){
            if(gpa >= 1.0 && gpa <= 4.0){
                GPA = gpa;
            } else{
             gpa = 0000.00;
            }
        }

        double GetGPA(){
          return GPA;
        }

        void subGrade(char grade){
           if(grade == 'A'){
            Grade = grade;
           } else if(grade == 'B'){
             Grade = grade;
           } else if(grade == 'C'){
             Grade = grade;
           } else if(grade == 'D'){
             Grade = grade;
           } else if(grade == 'E'){
             Grade = grade;
           } else if(grade == 'F'){
             Grade = grade;
           } else if(grade == 'G'){
             grade = '!';
           } else if(grade == 'H'){
             grade = '!';
           } else if(grade == 'I'){
             grade = '!';
           } else if(grade == 'J'){
             grade = '!';
           } else if(grade == 'K'){
             grade = '!';
           } else if(grade == 'L'){
             grade = '!';
           } else if(grade == 'M'){
             grade = '!';
           } else if(grade == 'N'){
             grade = '!';
           } else if(grade == 'O'){
             grade = '!';
           } else if(grade == 'P'){
             grade = '!';
           } else if(grade == 'Q'){
             grade = '!';
           } else if(grade == 'R'){
             grade = '!';
           } else if(grade == 'S'){
             grade = '!';
           } else if(grade == 'T'){
             grade = '!';
           } else if(grade == 'U'){
             grade = '!';
           } else if(grade == 'V'){
             grade = '!';
           } else if(grade == 'W'){
             grade = '!';
           } else if(grade == 'X'){
             grade = '!';
           } else if(grade == 'Y'){
             grade = '!';
           } else if(grade == 'Z'){
             grade = '!';
           }

        }
        char GetGrade(){
             return Grade;
           }


        string result;
          string PerformanceOfStudent(){
          if(GPA >= 3.0 && GPA <= 4.0 && Grade == 'A' ){
            result = "Excellent Student";
          } else if(GPA >= 3.0 && GPA <= 4.0 && Grade == 'B'){
             result = "Very Good Student";
          } else if(GPA >= 3.0 && GPA <= 4.0 && Grade == 'C'){
             result = "Good Student";
          } else if(Grade == 'D' && GPA >= 3.0 && GPA <=4.0){
              result = "Moderate Student";
          } else if(Grade == 'E' && GPA >= 3.0 && GPA <= 4.0){
              result = "Moderate Student";
          } else if(Grade == 'F' && GPA >= 3.0 && GPA <= 4.0 ){
              result = "Moderate Student";
          } else if(Grade == 'A' && GPA < 3.0){
              result = "Excellent OK Student";
          } else if(Grade == 'B' && GPA < 3.0){
              result = "Very OK Student";
          } else if(Grade == 'C' && GPA < 3.0){
              result = "OK Student";
          } else if(Grade == 'D' && GPA < 3.0){
              result = "Bad Student";
          } else if(Grade == 'E' && GPA < 3.0){
              result = "Bad Student";
          } else if(Grade == 'F' && GPA < 3.0){
              result = "Bad Student";
          }
          return result;
  }

  };


     int main(){

     cout << "OXFORD BROOKES UNIVERSITY-SWINDON CAMPUS' STUDENT RECORD" << endl;

     Student Student1("Hawkins Perry", 18, "Computer Science", 3.6, 'A');
     Student Student2("Hawkins Judy", 16, "Medicine", 3.2, 'B');
     Student Student3("Hawkins Joshua", 52, "Business Management", 2.8, 'A');
     Student Student4("Hawkins Elizabeth", 45, "Business Administration", 2.4, 'D');
     Student Student5("Hawkins Phillip", 7, "Animal Biology", 1.6, 'E');

     cout << Student3.PerformanceOfStudent() << endl;


      return 0;

}


