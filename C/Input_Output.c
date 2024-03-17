// C언어 = 절차 지향(procedure-oriented) 프로그래밍 언어 = 저급 & 고급 언어 특징 다 갖고 있음
// C언어 파일 생성 순서
// 1. src.파일 작성 : ~.c
// -> 2.preprocessor에 의한 선행처리  : Compilor가 작업하기 좋도록  src재구성
// -> 3.Compilor에 의한 compile : ~.c를 기계어로 변환 / ~.o or ~.obj
// -> 4. Linker에 의한 link : 1개 이상의 .obj, 라이브러리, 시동 코드 등을 합쳐 하나의 파일로 만드는 작업
// *N개 src파일 작성 + 링크 -> 1개의 파일 만들기 = 분할 컴파일
// -> 5. Executable File의 생성 : ~.c -> ~.obj -> ~.exe
// 대소문자 구분, 기본단위 : 함수, //&/**/
// printf - \', \", \?, \\(백 슬래시), \a(경고음 발생), \b(backspace), \n(줄 바꾸기), \r(carriage return), \t(수평 tab), \v(수직 tab), \f(form feed)
// printf 서식 지정자 - %c(문자 1개), %s(문자열), %d(부호有10진수, %i), %f(실수, 소수점 이하 6자리까지), %o(부호無 8진 정수), %u((부호無 10진 정수)) %x(부호無 16진 정수,소문지), %X(부호無 16진 정수, 대문자), %e(부동 소수점으로 표현한 실수, e표기법), %E(부동 소수점으로 표현한 실수, E표기법), %g(값에 따라 %f or %e표기), %G(값에 따라 %F or %E표기), %%(%기호 출력)
// printf() - 출력함수, scanf() - 입력함수

#include<stdio.h>

int main(void)
{
    printf("%%c를 사용한 결과 : %c\n", 'a');            // 문자
    printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어"); // 문자열  

    printf("%%f를 사용한 결과 : %f\n", 0.123456);
    printf("%%f를 사용한 결과 : %f\n", 0.123456789);    // 소수점 6자리까지만 표현  

    printf("%%o를 사용한 결과 : %o\n", 123);            // 8진 정수
    printf("%%x를 사용한 결과 : %x\n", 123);            // 16진 정수  

    printf("%%g를 사용한 결과 : %g\n", 0.001234);       // 값에 따라 %f나 %e
    printf("%%g를 사용한 결과 : %g\n", 0.00001234);     // 값에 따라 %f나 %e
    printf("%%G를 사용한 결과 : %G\n", 0.000001234);    // 값에 따라 %f나 %E

    printf("====================================\n\n");

    printf("저장된 정수는 %d이며, 저장된 문자열은 %s입니다.\n\n", 123, "C언어"); // 동시 사용

    printf("====================================\n\n");

    // 출력 필드 폭 설정 = %랑 숫자 이용해서 출력
    printf(" %%d를 사용한 결과 : |%d|\n", 123);
    printf(" %%7d를 사용한 결과 : |%7d|\n", 123);
    printf(" %%+7d를 사용한 결과 : |%+7d|\n", 123);
    printf(" %%-7d를 사용한 결과 : |%-7d|\n\n", 123);

    printf(" %%f를 사용한 결과 : |%f|\n", 1.23);
    printf(" %%.1f를 사용한 결과 : |%.1f|\n", 1.23);
    printf(" %%7.2f를 사용한 결과 : |%7.2f|\n", 1.23);
    printf("%%+7.2f를 사용한 결과 : |%+7.2f|\n", 1.23);
    printf("%%-7.2f를 사용한 결과 : |%-7.2f|\n\n", 1.23);

    printf("====================================\n\n");

    // scanf - data를 입력 받고, data type에 해당하는 크기의 memory를 우선 할당
    // variable = 이름을 할당 받음 메모리 공간
    // tasklist, tskkill
    int num01, num02;

    printf("첫 번째 정수를 입력하세요 : ");
    scanf("%d", &num01);

    printf("두 번째 정수를 입력하세요 : ");
    scanf("%d", &num02);

    printf("입력하신 두 정수의 합은 %d입니다.\n\n", num01 + num02);

    printf("====================================\n\n");

    float num03;
    double num04;

    printf("두 개의 실수를 입력하세요 : ");
    scanf("%f %f", &num03, &num04);

    printf("입력하신 두 실수는 %f와 %f입니다.\n", num03, num04);
    printf("입력받은 두 실수 중 두 번째 double형 변수에는 전혀 다른 값이 저장되었습니다.\n\n");

    printf("다시 한 번 두 개의 실수를 입력하세요 : ");
    scanf("%f %lf", &num03, &num04);
    printf("입력하신 두 실수는 %f와 %f입니다.\n", num03, num04);
    printf("이번에는 두 실수 모두 제대로 저장되었습니다.\n");

    return 0;
}




