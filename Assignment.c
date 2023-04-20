#include <stdio.h>
#include "Assignment.h"

int DelimiterStudy() {
    int var_1, var_2, var_3, maximum;

    printf("Ű����� ������ 3���� �Է��ϼ���.(�����ڴ� �޸� ���) : ");
    scanf("%d, %d, %d", &var_1, &var_2, &var_3);
    printf("Ű����� �Է��� ������ 3����  %d, %d, %d", var_1, var_2, var_3);

    maximum = var_1 > var_2 ? var_1 : (var_2 > var_3) ? var_2 : var_3;

    printf("�� �߿��� �ִ밪�� %d", maximum);

    return 0;
}

int PointerStudy() {
    int input_var;
    int* input_var_pointer = &input_var;
    printf("Ű����� ���� 1���� �Է��ϼ���. : ");
    scanf("%d", &input_var);


    printf("Ű����� �Է��� ���� ����� �ּ� (16���� ǥ��) : %x\n", input_var_pointer);
    printf("������ ���� *input_var_pointer�� ����� �� (10���� ǥ��) : %d", *input_var_pointer);

    return 0;
}

int DoublePointer() {
    int var_f, var_s;
    int* var_f_pointer = &var_f;
    int* var_s_pointer = &var_s;

    printf("���� 2���� �Է��Ͻÿ�. (�����ڴ� �޸� ���) : ");
    scanf("%d, %d", &var_f, &var_s);
    printf("�Է��� ���� 2���� %d, %d\n", var_f, var_s);
    printf("%d�� �ּҰ� : %u\n", var_f, var_f_pointer);
    printf("%d�� �ּҰ� : %u\n", var_s, var_s_pointer);


    return 0;
}

int CharAsciiFinder() {
    char input_character;
    int input_char_ascii;
    printf("���ڸ� �Է��Ͻÿ�. : ");
    scanf("%c", &input_character);
    input_char_ascii = (int) input_character;

    if (65 <= input_char_ascii && input_char_ascii <= 90) {
        printf("%c�� \"���ĺ� �빮��\"�Դϴ�.", input_character);
    } else if (97 <= input_char_ascii && input_char_ascii <= 122) {
        printf("%c�� \"���ĺ� �ҹ���\"�Դϴ�.", input_character);
    } else if (48 <= input_char_ascii && input_char_ascii <= 57) {
        printf("%c�� \"����\"�Դϴ�.", input_character);
    } else {
        printf("%c�� \"��Ÿ ����\"�Դϴ�.", input_character);
    }

    return 0;
}

int FindMaxAndMin() {
    int user_input_array[10];
    int user_input_minimum = 2147483647; //�ٷ� �񱳸� ���� int�� �ִ밪�� �⺻������ ����
    int user_input_maximum = -2147483648; //�ٷ� �񱳸� ���� int�� �ִ밪�� �⺻������ ����

    printf("���� 10���� 10���� ���ļ� �Է����ּ���.\n");
    for (int idx = 0; idx < 10; idx++) {
        printf("������ �Է��ϼ���. : ");
        scanf("%d", &user_input_array[idx]);
    }

    for (int idx = 0; idx < 10; idx++) {
        if (user_input_array[idx] < user_input_minimum) {
            user_input_minimum = user_input_array[idx];
        } else if (user_input_array[idx] > user_input_maximum) {
            user_input_maximum = user_input_array[idx];
        }
    }

    printf("�ּҰ��� %d�Դϴ�.\n", user_input_minimum);
    printf("�ִ밪�� %d�Դϴ�.\n", user_input_maximum);

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
    // <����> = <���ǽ�> ? <���� ���> : <������ ���>
    // <����> = var_1 > var_2 ? var_1 : (var_2 > var_3 ? var_2 : var_3)

    return 0;
}