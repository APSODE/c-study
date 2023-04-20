#include <stdio.h>
#include "Assignment.h"

int DelimiterStudy() {
    int var_1, var_2, var_3, maximum;

    printf("키보드로 정수값 3개를 입력하세요.(구분자는 콤마 사용) : ");
    scanf("%d, %d, %d", &var_1, &var_2, &var_3);
    printf("키보드로 입력한 정수값 3개는  %d, %d, %d", var_1, var_2, var_3);

    maximum = var_1 > var_2 ? var_1 : (var_2 > var_3) ? var_2 : var_3;

    printf("그 중에서 최대값은 %d", maximum);

    return 0;
}

int PointerStudy() {
    int input_var;
    int* input_var_pointer = &input_var;
    printf("키보드로 정수 1개를 입력하세요. : ");
    scanf("%d", &input_var);


    printf("키보드로 입력한 값이 저장된 주소 (16진수 표기) : %x\n", input_var_pointer);
    printf("포인터 변수 *input_var_pointer에 저장된 값 (10진수 표기) : %d", *input_var_pointer);

    return 0;
}

int DoublePointer() {
    int var_f, var_s;
    int* var_f_pointer = &var_f;
    int* var_s_pointer = &var_s;

    printf("정수 2개를 입력하시오. (구분자는 콤마 사용) : ");
    scanf("%d, %d", &var_f, &var_s);
    printf("입력한 정수 2개는 %d, %d\n", var_f, var_s);
    printf("%d의 주소값 : %u\n", var_f, var_f_pointer);
    printf("%d의 주소값 : %u\n", var_s, var_s_pointer);


    return 0;
}

int CharAsciiFinder() {
    char input_character;
    int input_char_ascii;
    printf("문자를 입력하시오. : ");
    scanf("%c", &input_character);
    input_char_ascii = (int) input_character;

    if (65 <= input_char_ascii && input_char_ascii <= 90) {
        printf("%c는 \"알파벳 대문자\"입니다.", input_character);
    } else if (97 <= input_char_ascii && input_char_ascii <= 122) {
        printf("%c는 \"알파벳 소문자\"입니다.", input_character);
    } else if (48 <= input_char_ascii && input_char_ascii <= 57) {
        printf("%c는 \"숫자\"입니다.", input_character);
    } else {
        printf("%c는 \"기타 문자\"입니다.", input_character);
    }

    return 0;
}

int FindMaxAndMin() {
    int user_input_array[10];
    int user_input_minimum = 2147483647; //바로 비교를 위해 int형 최대값을 기본값으로 지정
    int user_input_maximum = -2147483648; //바로 비교를 위해 int형 최대값을 기본값으로 지정

    printf("정수 10개를 10번에 걸쳐서 입력해주세요.\n");
    for (int idx = 0; idx < 10; idx++) {
        printf("정수를 입력하세요. : ");
        scanf("%d", &user_input_array[idx]);
    }

    for (int idx = 0; idx < 10; idx++) {
        if (user_input_array[idx] < user_input_minimum) {
            user_input_minimum = user_input_array[idx];
        } else if (user_input_array[idx] > user_input_maximum) {
            user_input_maximum = user_input_array[idx];
        }
    }

    printf("최소값은 %d입니다.\n", user_input_minimum);
    printf("최대값은 %d입니다.\n", user_input_maximum);

    return 0;
}

int GeneticSequencing() {
    char input_sequence[10];

    for (int idx = 0; idx < 10; idx++) {
        scanf("%c", &input_sequence[idx]);
    }

    for (int idx = 0; idx < 10; idx++) {
        char genetic_sequence = input_sequence[idx];
        if (genetic_sequence == 'A' || genetic_sequence == 'a') {
            printf("T");
        } else if (genetic_sequence == 'T' || genetic_sequence == 't') {
            printf("A");
        } else if (genetic_sequence == 'G' || genetic_sequence == 'g') {
            printf("C");
        } else if (genetic_sequence == 'C' || genetic_sequence == 'c') {
            printf("G");
        }
    }

    return 0;
}

int Review() {
    int var_1 = 0, var_2 = 1, var_3 = 2;
    // <변수> = <조건식> ? <참값 경우> : <거짓일 경우>
    // <변수> = var_1 > var_2 ? var_1 : (var_2 > var_3 ? var_2 : var_3)

    return 0;
}