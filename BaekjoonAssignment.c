#include "BaekjoonAssignment.h"
#include <stdio.h>

int BaekjoonFindMaxAndMin() {
    // 백준 10818번 문제 최소, 최대
    int scan_loop_amount;
    scanf("%d", &scan_loop_amount);
    int user_input_num;
    int input_min = 1000001, input_max = -1000001;

    for (int idx = 0; idx < scan_loop_amount; idx++) {
        scanf("%d", &user_input_num);
        if (user_input_num < input_min) {
            input_min = user_input_num;
        }
        if (user_input_num >= input_max) {
            input_max = user_input_num;
        }
    }
    printf("%d %d", input_min, input_max);

    return 0;
}

int BaekjoonCountAmount() {
    //백준 10807번 문제 개수 세기
    int input_amount, find_target_number, found_num_amount = 0;
    scanf("%d", &input_amount);
    int user_input_num_array[input_amount];

    for (int idx = 0; idx < input_amount; idx++) {
        scanf("%d", &user_input_num_array[idx]);
    }
    scanf("%d", &find_target_number);

    for (int idx = 0; idx < input_amount; idx++) {
        if (user_input_num_array[idx] == find_target_number) {
            found_num_amount++;
        }
    }

    printf("%d", found_num_amount);

    return 0;
}

int BaekjoonCalcAverage() {
    //백준 1546번 문제 평균
    int input_subject_amount;
    double subject_point_average;
    double subject_total_point = 0;
    int subject_point_temp = 0;
    int maximum_subject_point = -1; //비교를 위해 입력값의 최소값인 0보다 작은 -1을 초기값으로 지정

    scanf("%d", &input_subject_amount);
    for (int idx = 0; idx < input_subject_amount; idx++) {
        scanf("%d", &subject_point_temp);
        subject_total_point += subject_point_temp;
        if (subject_point_temp > maximum_subject_point) {
            maximum_subject_point = subject_point_temp;
        }
    }

    subject_point_average = (subject_total_point / (input_subject_amount * maximum_subject_point)) * 100;
    printf("%.3lf", subject_point_average);


    return 0;
}