#include "StudyAssignment.h"
#include <stdio.h>


int Calculator(void) {
    char run_status = 'T';
    while (run_status == 'T') {
        char user_input_operator;

        double f_param, s_param, result;
        printf("원하는 사칙 연산을 선택해주십시오. (연산 기호 입력을 통해서 선택을 진행)\n");
        printf("| + | 덧셈\n| - | 뺄셈\n| * | 곱셈\n| / | 나눗셈\n| %% | 나머지\n");
        printf("연산식을 입력해주세요. (ex : 10더하기 10은  -> 10 + 10)\n");

        scanf("%lf %c %lf", &f_param, &user_input_operator, &s_param);

        if (user_input_operator == '+') {
            result = f_param + s_param;
        } else if (user_input_operator == '-') {
            result = f_param - s_param;
        } else if (user_input_operator == '*') {
            result = f_param * s_param;
        } else if (user_input_operator == '/') {
            result = f_param / s_param;
        } else if (user_input_operator == '%') {
            result = (int) f_param % (int) s_param;
        } else {
            printf("계산식 입력이 잘못되었습니다.\n다시 입력해주십시오.");
            continue; //밑의 코드를 실행시키는 것이 아닌 새로운 루프를 진행시킴
        }
        printf("입력한 식 : %lf %c %lf\n", f_param, user_input_operator, s_param);
        printf("계산 결과 : %lf %c %lf = %lf\n", f_param, user_input_operator, s_param, result);

        printf("계산을 종료하시겠습니까?\n| 종료 : F |\n| 계속 : T |\n");
        getchar();  // 입력 버퍼 비우기
        scanf("%c", &run_status);
    }

    return 0;
}
