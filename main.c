#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    int no_students = 5;
    int no_grades = 13;

    char names[5][10];
    float avgs[5];
    float mean_grade = 0;
    float best = 0;
    int best_i = 0;

    for (int i = 0; i < no_students; i++){
        char* name = names[i];
        float avg = 0;
        scanf("%s", name);
        name[0] = toupper(name[0]);
        for (int j = 0; j < no_grades; j++){
            int num;
            scanf("%d", &num);
            avg += (float)num/no_grades;
        }
        
        avgs[i] = avg;
        mean_grade += avg/no_students;
        if (avg > best){
            best = avg;
            best_i = i;
        }
    }

    printf("%s\n",names[best_i]);
    for (int i = 0; i < no_students; i++){
        if (avgs[i] < mean_grade){
            printf("%s\n", names[i]);
        }
    }

    return 0;
}