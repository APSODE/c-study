#include "StudyAssignment.h"
#include <stdio.h>


int Calculator(void) {
    char run_status = 'T';
    while (run_status == 'T') {
        char user_input_operator;

        double f_param, s_param, result;
        printf("���ϴ� ��Ģ ������ �������ֽʽÿ�. (���� ��ȣ �Է��� ���ؼ� ������ ����)\n");
        printf("| + | ����\n| - | ����\n| * | ����\n| / | ������\n| %% | ������\n");
        printf("������� �Է����ּ���. (ex : 10���ϱ� 10��  -> 10 + 10)\n");

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
            printf("���� �Է��� �߸��Ǿ����ϴ�.\n�ٽ� �Է����ֽʽÿ�.");
            continue; //���� �ڵ带 �����Ű�� ���� �ƴ� ���ο� ������ �����Ŵ
        }
        printf("�Է��� �� : %lf %c %lf\n", f_param, user_input_operator, s_param);
        printf("��� ��� : %lf %c %lf = %lf\n", f_param, user_input_operator, s_param, result);

        printf("����� �����Ͻðڽ��ϱ�?\n| ���� : F |\n| ��� : T |\n");
        getchar();  // �Է� ���� ����
        scanf("%c", &run_status);
    }

    return 0;
}
