#include <stdio.h>

int main(int argc, char const* argv[]) {
    double a;
    double b;

    scanf("%lf %lf", &a, &b);	// double �Է��� %lf 

    /*
     �⺻������ lf ����� �Ҽ��� 6�ڸ����� ����Ѵ�.
     �׷��� ������ �Ҽ��� �ڸ����� �÷��־�� �Ѵ�.
     ���������� 10^-9 ���Ͽ��� �ϹǷ� �����ְ� %.10lf �̻����� ������.
    */
    printf("%.13lf", a / b);	// ��ȿ���ڰ� 13�� 

    return 0;
}