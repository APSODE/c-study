#include "BaekjoonAssignment.h"
#include <stdio.h>
#include <stdbool.h>

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

int ChangeBall(void) {
    int N, M;
    scanf("%d %d", &N, &M);  // N M값을 입력 받고 저장하는 코드

    int B[N];
    for (int idx = 1; idx <= N; idx++) {
        B[idx - 1] = idx;  // B배열에 1 ~ N까지의 값을 초기값으로 지정 -> 바구니에 바구니 번호와 같은 공을 넣는다.
    }

    int i, j;
    for (int idx = 0; idx < M; idx++) {
        scanf("%d %d", &i, &j);  // i, j의 값을 M번 입력 받는다.

        int bi = B[i - 1];

        B[i - 1] = B[j - 1];  // j번 바구니에 있는 공을 i번 바구니로 옮긴다.
        B[j - 1] = bi;  // i번 바구니에 있는 공을 j번 바구니로 옮긴다.

        // 바구니 배열 출력 코드
        for (int idx = 0; idx < N; idx++) {
            printf("%d ", B[idx]);
        }
        printf("\n\n");
    }

    return 0;
}

int CalcMod(void) {
    int array[10];  // 입력 받은 정수 10개를 저장하는 배열
    // 입력 받은 정수 10개를 각각 42로 나눈 나머지를 저장하는 배열 -> 초기값 : -1
    int remain_array[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    // 반복문 10번 반복
    for (int idx = 0; idx < 10; idx++) {
        // 정수를 입력받아서 순서대로 array[idx]에 저장
        scanf("%d", &array[idx]);

        // array[idx]를 42로 나눈 나머지 값
        int current_remain = array[idx] % 42;

        // remain_array에 current_remain과 같은 값을 세는 변수
        int already_exist_amount = 0;

        // 반복문을 10번 반복
        for (int remain_idx = 0; remain_idx < 10; remain_idx++) {
            // remain_array를 순회를 돌면서 remain_array[remain_idx]의 값이 current_remain과 같은지 확인
            if (current_remain == remain_array[remain_idx]) {
                // remain_array[remain_idx]와 current_remain이 같다면
                // 이미 존재하는 나머지 값이므로 already_exist_amount에 1만큼 더한다.
                already_exist_amount++;
            }
        }

        // already_exist_amount의 값에 변화가 존재하는지 확인
        if (already_exist_amount == 0) {
            // 변화가 존재하지 않는다면 current_remain은 remain_array에 존재하는 나머지가 아니므로
            // remain_array[idx]에 해당 나머지를 저장한다
            remain_array[idx] = current_remain;
        }
    }

    // 고유한 나머지의 갯수를 저장하는 변수
    int unique_remain_amount = 0;

    // 반복문 10번 순회
    for (int idx = 0; idx < 10; idx++) {
        // remain_array[idx]가 초기값 -1과 다른지 확인
        if (remain_array[idx] != -1) {
            // 만약에 remain_array[idx]의 값이 -1과 다르다면 고유한 나머지 이므로
            // unique_remain_amount에 1을 더한다.
            unique_remain_amount++;
        }
    }

    printf("%d", unique_remain_amount);

    return 0;
}

int WordStudy(void) {
    char input_string[1000000];
    int alpha_amount[26] = {0};
    int max_alpha_amount = -2147483648;
    int unique_amount_check = 0;
    scanf("%s", input_string);

    for (int str_idx = 0; str_idx < 1000000; str_idx++) {
        char current_char = input_string[str_idx];
        if (current_char == '\0') {
            break;
        }

        int current_char_ascii = (int) current_char;

        int current_alpha_idx = 0;

        if (65 <= current_char_ascii && current_char_ascii <= 90) {
            // A ~ Z의 아스키 코드는 65 ~ 90이므로 26개의 알파벳에 대해서 0 ~ 25번의 번호를 부여하기 위해 65를 아스키 코드 값에서 뺀다
            current_alpha_idx = current_char_ascii - 65;
        }

        else if (97 <= current_char_ascii && current_char_ascii <= 122) {
            // a ~ z의 아스키 코드는 97 ~ 122이므로 26개의 알파벳에 대해서 0 ~ 25번의 번호를 부여하기 위해 97을 아스키 코드 값에서 뺀다
            current_alpha_idx = current_char_ascii - 97;
        }

        // 구해진 알파벳 인덱스를 이용해 알파벳 갯수를 수정한다.
        alpha_amount[current_alpha_idx]++;

    }

    // 알파벳 갯수의 최대값과 최대 알파벳 갯수의 중복 여부를 구하는 코드
    for (int alpha_idx = 0; alpha_idx < 26; alpha_idx++) {
        int current_alpha_amount = alpha_amount[alpha_idx];

        if (current_alpha_amount == max_alpha_amount && current_alpha_amount != 0) {
            unique_amount_check++;
        }

        if (current_alpha_amount > max_alpha_amount) {
            max_alpha_amount = current_alpha_amount;
            unique_amount_check = 0;
        }
    }

    if (unique_amount_check == 0) {
        for (int alpha_idx = 0; alpha_idx < 26; alpha_idx++) {
            int current_alpha_amount = alpha_amount[alpha_idx];
            if (current_alpha_amount == max_alpha_amount) {
                printf("%c", (char) (alpha_idx + 65));
            }
        }
    } else {
        printf("?");
    }

    return 0;
}

int PalindromeNumber(void) {
    while (true) {
        char input_number_string[5];
        char head_part[2];
        char tail_part[2];

        int numstr_length = 0;

        scanf("%s", input_number_string);

        if (input_number_string == 0) {
            break;
        }

        for (int str_idx = 0; str_idx < 5; str_idx++) {
            char current_num_char = input_number_string[str_idx];

            if (current_num_char != '\0') {
                break;
            } else {
                numstr_length++;
            }
        }

        if (numstr_length % 2 == 0) {

        }

    }
}

int OrangeAteOrenge(void) {
    // 입력형식
    // 1 : 문자열 길이
    // 2 : 문자열


    // 입력 문자열의 길이를 입력받기 위한 변수
    int string_size = 0;
    scanf("%d", &string_size);

    // 입력 받은 입력 문자열의 길이를 이용해 입력 문자열을 저장할 변수를 생성
    char input_string[string_size];
    scanf("%s", input_string);


    // 입력 문자열(길이 N)으로 만들 수 있는 부분 문자열의 갯수는 N-1개
    // 입력 문자열(길이 N)으로 만들 수 있는 부분 문자열의 최대 길이는 N-1 -> 자기 자신이 되면 안되므로 N - 1
    // 따라서 만들어진 모든 부분 문자열을 저장하려면 2차원 배열의 형태인 char 배열이 필요하다.
    // char part_string_array[바깥 배열][안쪽 배열];
    //    {
    //        {'a', 'b', 'c'},
    //        {'a', 'b', 'c'},
    //        {'a', 'b', 'c'}
    //    }
    // 바깥 배열(부분 문자열의 갯수에 해당함)의 사이즈 : N - 1
    // 안쪽 배열(부분 문자열의 최대 길이에 해당함)의 사이즈 : N - 1
    // 따라서 2차원 배열은 [N - 1][N - 1]의 형태로 만들어져야 한다.
    int part_string_amount = string_size - 1;
    int part_string_length = string_size - 1;
    char part_string_head[part_string_amount][part_string_length];
    char part_string_tail[part_string_amount][part_string_length];

    // 배열에 이상한 값이 들어가 있지 않도록 null문자로 초기화
    for (int i = 0; i < part_string_amount; i++) {
        for (int j = 0; j < part_string_length; j++) {
            part_string_head[i][j] = '\0';
            part_string_tail[i][j] = '\0';
        }
    }

    int part_string_number = 0;
    // 1 ~ N - 1까지의 길이를 가진 부분 문자열의 최대 길이를 얻기 위해서 1 ~ part_string_length(N - 1)까지 반복을 돌린다.
    for (int current_part_str_length = 1; current_part_str_length <= part_string_length; current_part_str_length++){
        // 바깥의 반복문에서 얻은 부분 문자열의 최대 길이까지 입력문자열을 슬라이싱하고,
        // 부분문자열을 만들어 part_string_head[part_string_number]와 part_string_tail[part_string_number]에 저장한다.
        for (int current_pt_str_idx = 0; current_pt_str_idx < current_part_str_length; current_pt_str_idx++) {
            part_string_head[part_string_number][current_pt_str_idx] = input_string[current_pt_str_idx];
            part_string_tail[part_string_number][part_string_number - current_pt_str_idx] = input_string[part_string_length - current_pt_str_idx];
        }

        part_string_number++;
    }

    // 비타민 문자열의 갯수를 세는 변수
    int vitamin_word_amount = 0;

    // N - 1개가 존재하는 부분 문자열을 확인하기 위해 순회를 한다.
    for (part_string_number = 0; part_string_number < part_string_amount; part_string_number++) {
        // 각 부분 문자열의 비교후 틀린 부분의 갯수를 세는 변수
        int error_count = 0;

        // head와 tail의 부분문자열을 문자하나씩 순서대로 검사하기 위해 반복을 진행
        for (int part_string_char_idx = 0; part_string_char_idx < part_string_length; part_string_char_idx++) {
            // abc / abd -> a - a / b - b / c - d
            char current_head_word_char = part_string_head[part_string_number][part_string_char_idx];
            char current_tail_word_char = part_string_tail[part_string_number][part_string_char_idx];

            // null문자 확인을 통한 반복문 탈출
            if (current_head_word_char == '\0' || current_tail_word_char == '\0') {
                break;
            }

            // 만약 현재의 head부분문자열의 문자와 tail부분문자열의 문자가 다르다면 error_count에 1을 더한다.
            if (current_head_word_char != current_tail_word_char) {
                error_count++;
            }
        }

        //만약 동일한 순번의 부분문자열 문자가 1개만 다르다면, 비타민 문자열이므로 vitamin_word_amount에 1을 더한다.
        if (error_count == 1) {
            vitamin_word_amount++;
        }
    }

    // 만약 vitamin_word_amount가 1보다 크거나 같다면, 비타민 문자열이 존재하는 문자열 이므로 YES를 출력한다.
    if (vitamin_word_amount >= 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    printf("\n");
    for (int i = 0; i < part_string_amount; i++) {
        for (int j = 0; j < part_string_length; j++) {
            printf("%c", part_string_head[i][j]);
        }
        printf(" : head\n");
        for (int j = 0; j < part_string_length; j++) {
            printf("%c", part_string_tail[i][j]);
        }
        printf(" : tail\n");
    }
    return 0;
}
