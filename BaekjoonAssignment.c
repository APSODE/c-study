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

int BaekjoonFindLagerThenX() {
    int N, X;

    scanf("%d %d", &N, &X);
    int A[N];
    for (int idx = 0; idx < N; idx++) {
        scanf("%d", &A[idx]);
    }
    for (int idx = 0; idx < N; idx++) {
        if (A[idx] < X) {
            printf("%d ", A[idx]);
        }
    }
    return 0;
}

int NotSubmit() {
    // 입력값 : 28개
    // 입력값 1개에 대해서 이 값이 1번 ~ 30번사이의 번호 인지를 확인 -> 중복값 없음
    // 입력값 배열 사이즈 28
    // 원소 하나가 1번 ~ 30번호 확인할꺼임

    // 0 ~ 29 인덱스
    int student[30] = {0}; // 30칸의 배열을 모두 0으로 초기화

    // 입력값의 갯수가 28개 -> 반복문 루프르 28번 돌려야함
    // 입력값의 범위 -> 1 ~ 30 -> 0 ~ 29
    // 1 2 3 5 -> {1, 2, 3, 5, 0 ~}
    for(int idx=0; idx<28; idx++){
        // 과제를 제출한 사람의 번호
        int temp;
        // scanf("%d", &student[idx]); --> 입력 순서대로
        // <과제를 제출한 사람의 번호> - 1은 학생 배열의 인덱스값과 동일
        //ex) 28번 -> 28번째 배열 -> 28 - 1 = 27 -> 배열의 28번째 인덱스 번호
        scanf("%d", &temp); // --> 1 2 3 5 -> {1, 2, 3, 0, 5, ~ 0}
        // 위의 방법을 구현하면 student[temp - 1] = temp;를 진행하면 순서대로 배열에 번호를 배치가 가능
        student[temp - 1] = temp;
    }

    //배열의 첫번째부터 마지막 30번까지 반복함
    for (int student_idx = 0; student_idx < 30; student_idx++) {
        // 만약에 student_idx에 해당하는 배열에 들어가있는 원소가 초기값 0이랑 같다면,
        // 그 번호는 위에서 입력 받지 못한 번호이므로 과제를 안낸 사람이 되는것이다.
        if (student[student_idx] == 0) {
            printf("%d\n", student_idx + 1);
        }
    }

    return 0;
}

int NotSubmit_Another() {
    // n
    int student[30] = {0};

    for (int student_idx = 0; student_idx < 28; student_idx++) {
        int temp;
        scanf("%d", &temp);
        student[temp - 1] = temp;
    }

    // O(n^2)
    for (int student_idx = 0; student_idx < 30; student_idx++) {
        int check = 0; // 1 ~ 30번 중에 일치하는 값이 있는지 확인하는 변수

        // student[student_idx]가 1 ~ 30중에 일치하는 값이 있는지
        // student_number을 1에서부터 30까지 1씩 증가해서 student[student_idx]와 비교
        for (int student_number = 1; student_number <= 30; student_number++) {
            //만약에 student[student_idx]의 값이 student_number의 값과 동일하다면
            //과제를 제출한 번호이므로 check에 1을 증가
            if (student[student_idx] == student_number) {
                check++;
                break;
            }
        }

        // check가 0으로 유지된 student_idx는 과제를 제출하지 않은 번호이므로
        // student_idx에 1을 더해서 실제 번호를 출력
        if (check == 0) {
            printf("%d\n", student_idx + 1);
        }
    }

    return 0;
}

int FiveStars() {
    int line_amount;
    int star_count = 1;
    scanf("%d", &line_amount);

    for (int line_num = 1; line_num <= line_amount; line_num++) {
        for (int blank = 0; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count += 2;
        printf("\n");
    }

    return 0;
}

int SixStars() {
    int line_amount;
    scanf("%d", &line_amount);
    int star_count = 2 * line_amount - 1;

    for (int line_num = line_amount; line_num > 0; line_num--) {
        for (int blank = 0; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count -= 2;
        printf("\n");
    }
    return 0;
}

int DiamondStars(){
    int line_amount, star_count = 1;
    scanf("%d", &line_amount);

    for (int line_num = 1; line_num <= line_amount; line_num++) {
        for (int blank = 0; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count += 2;
        printf("\n");
    }

    star_count -= 4;

    for (int line_num = line_amount - 1; line_num > 0; line_num--) {
        for (int blank = 0; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count -= 2;
        printf("\n");
    }

    return 0;
}

int ReverseDiamondStars(){
    int line_amount;
    scanf("%d", &line_amount);

    int star_count = 2 * line_amount - 1;

    for (int line_num = line_amount - 1; line_num > 0; line_num--) {
        for (int blank = 1; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count -= 2;
        printf("\n");
    }

    for (int line_num = 1; line_num <= line_amount; line_num++) {
        for (int blank = 0; blank < line_amount - line_num; blank++) {
            printf(" ");
        }
        for (int star = 0; star < star_count; star++) {
            printf("*");
        }
        star_count += 2;
        printf("\n");
    }

    return 0;
}
