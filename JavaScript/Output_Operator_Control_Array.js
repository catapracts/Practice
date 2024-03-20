/*
JavaScript
- 결과를 HTML에 출력
- 출력 방식 : window.alert(), innnerHTML(property), document.write(), console.log()

1. window.alert()
- 가장 간단하게 출력 / 대화상자 이용해서 데이터 전달
(ex)
<script>
function alertDialogBox() {
    alert("출력방식 1");
}
</script>


2. innnerHTML(property)
- 실제 JavaScript code에서 출력을 위해 가장 많이 사용
- document객체의 method(getElementByID(), getElementsByTagName() 등)를 사용해서 HTML element 선택
- HTML element의 content or attribute 등을 쉽게 변경 가능
(ex)
<script>
    var str = document.getElementById("text");
    str.innerHTML = "text 대신 다른 값을 넣을 수 있다.";
</script>


3. document.write()
- Web Page loading중 실행 시, 가장 먼저 data 출력
- Web Page loading 이후 실행 시, 먼저 load된 data를 지우고 자기 data를 출력
- 보통 test or debug시 사용
(ex)
<script>
    document.write(4 * 5);
</script>


4. console.log()
- Web Browser의 console을 통해 data를 출력
- (Google Chrome기준) F12누르고 console이라는 tab을 누르면 확인이 가능하다
(ex)
<script>
    console.log(4 * 5);
</script>

*개발자마다 회사마다 상황마다 주로 쓰는 문법이 다르거나 다 사용할 수 있기 때문에, 상황에 따라 또는 편한대로 사용하는 게 좋다.
*/


/*
JavaScript Operator
*/

// 산수 Operator : +, -, *, / ,%
var x = 2, y = 1;
document.write(x + y + "<br>"); // 3
document.write(x - y + "<br>"); // 1
document.write(x * y + "<br>"); // 2
document.write(x / y + "<br>"); // 1
document.write(x % y);          // 0


// 대입 Operator : =, +=, -=, *=, /=, %=
var a = 4, b = 4, c = 4, d=4, e=4;
a-=2; // 결과 : a=2, a = a - 2;랑 동일한 표현
b+=2; // 결과 : b=6, b = b + 2;랑 동일한 표현
c*=2; // 결과 : c=8, c = c * 2;랑 동일한 표현
d/=2; // 결과 : d=2, d = d / 2;랑 동일한 표현
e%=2; // 결과 : e=0, e = e % 2;랑 동일한 표현


// 증감 Operator : ++, --
var x = 5, y = 5;
document.write((++x - 3) + "<br>"); // x+1 -> x=6 -> x-3 -> x=3
document.write(x + "<br>");         // 3
document.write((y++ - 3) + "<br>"); // y=5 -> y+1 -> y-3 -> y=3
document.write(y);                  // 3

// 비교 Operator : ==, ===, !=, !==, >, >=, <, <=
var x = 3, y = 5;
var a = "abc", b = "def";
document.write((x > y) + "<br>");  // 결과 : False
document.write((a <= b) + "<br>"); // 결과 : True -> 알파벳 순서상 'a'가 'b'보다 먼저 나오므로 'a'가 'b'보다 작음.

var x = 3, y = '3', z = 3;
document.write((x == y) + "<br>");  // 결과 : True -> == : 값만 같으면 형태가 달라도 강제 형변환 시켜준 뒤 비교 후 결과 반환
document.write((x === y) + "<br>"); // 결과 : False -> === : 값 + 형태 둘 다 같아야 True반환
document.write(x === z);            // 결과 : True 
document.write((x != y) + "<br>");  // 결과 : False -> != : 값만 같으면 형태가 달라도 강제 형변환 시켜준 뒤 비교 후 결과 반환
document.write((x !== y) + "<br>"); // 결과 : True -> !== : 값 + 형태 둘 다 달라야 True 반환


// 논리 Operator : &&, ||, !
var x = true, y = false;
document.write((x && y) + "<br>"); // 결과 : False
document.write((x || y) + "<br>"); // 결과 : True 
document.write(!x);                // 결과 : False


// 비트 Operator : &, |, ^, ~, >>, <<, >>>
var x = 15, y = 8, z = 15;
document.write((x << 1) + "<br>"); // 결과 : 30 = 1111(15) -> 11110(30)
document.write((y >> 1) + "<br>"); // 결과 : 4 = 1000(8) -> 0100(4)
document.write(~z);                // 결과 : -16 = 01111(15)->10000(16) 앞은 부호 비트 


//  기타 Operator : 3항(ternary), delete, typeof, instanceof, void

// Ternary Operator
var x = 3, y = 5;
var result = (x > y) ? x : y   // x>y -> True : return x, False : return y
document.write("둘 중에 더 큰 수는 " + result + "입니다."); // 결과 : 둘 중에 더 큰 수는 5입니다.


// Delete Operator : object, object의 property or Array의 element 등을 삭제 / 삭제 성공 = True, 삭제 실패 = False
var arr = [1, 2, 3];
delete arr[2]; // Array의 element 중 index=2(value : 3)인 element를 삭제
document.write(arr + "<br>"); // [1, 2, ] 
document.write(arr[2] + "<br>"); // Array에 빈자리 생성 : value = undefined
document.write(arr.length); // 결과 : 3 = Array의 길이 ↓X, Array의 element 삭제O


// typeof Operator : value에 대한 data type 반환
typeof "문자열"   // 결과 : string
typeof 10         // 결과 : number
typeof NaN        // 결과 : number
typeof false      // 결과 : boolean
typeof undefined  // 결과 : undefined
typeof new Date() // 결과 : object
typeof null       // 결과 : object


// instanceof Operator : object가 특정 object의 instance인지 판단 후 결과 반횐
var str = new String("이것은 문자열입니다.");
str instanceof Object;  // true
str instanceof String;  // true
str instanceof Array;   // false
str instanceof Number;  // false
str instanceof Boolean; // false


// void Operator : 항상 undefined만 반환
/*
<a href="javascript:void(0)">이 링크는 동작하지 않습니다.</a>
<a href="javascript:void(document.body.style.backgroundColor='yellow')">
    이 링크도 동작하지 않지만, HTML 문서의 배경색을 바꿔줍니다.
</a>
*/


/*
JavaScript Control Flow Statements
- 순차적인 흐름제어시 사용
- 조건문(Conditional - if, else if, else, switch), 반복문(Iteration - for, for in, for of, while, do while), 기타(label, continue, break)


- if - else if - else 형식 -> 3항연산자로 간단하게 표시 가능

if (표현식1) 
{
    표현식1 = 참일 때, 실행문;
}

else if (표현식2) 
{
    표현식2 = 참일 때, 실행문;
}
else 
{
    실행문;
}


- switch 형식

switch (조건 값) 
{
    case 값1:
        조건 값 = 값1일 때, 실행문;
        break;

    case 값2:
        조건 값 = 값2일 때, 실행문;
        break;
    ...
    default:
         실행문;
        break;
}

- while 형식
while (표현식) 
{
 실행문;
}


- do-while형식
do 
{
 실행문;
} while (표현식);


- for 형식
for (초기식; 표현식; 증감식) 
{
 실행문;
}


- for in 형식 : 해당 객체가 가진 모든 property return X, 열거 가능한 property만 return
for (변수 in 객체) 
{
 실행문;
}


- for of 형식 : 반복가능 객체들(ex - Array, Map, Set, Arguments 등)만 반복
for (변수 of 객체) 
{
 실행문;
}


- label 형식 : 프로그램 내의 특정 영역을 식별할 수 있도록 해주는 식별자 - continue랑 break 같이 사용
label:
식별하고자 하는 특정 영역

- continue 형식 : 루프 내에서 사용하여 해당 루프의 나머지 부분을 건너뛰고, 바로 다음 표현식의 판단으로 넘어가 / 반복문 내에서 특정 조건에 대한 처리를 제외하고자 할 때 자주 사용
continue; or continue 라벨이름;

- break 형식 : 루프 내에서 표현식의 판단 결과에 상관없이 반복문을 완전히 빠져나가고 싶을 때 사용
break; or break 라벨이름;

*/

//조건문(Conditional - if, else if, else, switch)

var x = 10, y = 20;
if (x == y) 
{
    document.write("x==y");
}
else if (x < y) 
{
    document.write("x<y");
}
else document.write("x>y"); // 실행문 = 한 줄 -> 중괄호({})를 생략가능

var x = 10;


switch (typeof x) // brreak 없으면 case 전부 실행된다.
{
    case "number":
        document.write("type = Number");
        break;

    case "string":
        document.write("type = String");
        break;

    case "object":
        document.write("type = Object");
        break;

    default:
        document.write("type = ?");
        break;
}


var day = new Date().getDay(); // 오늘의 요일을 반환

switch (day) //Switch case 축약형 - 여러 조건 한 번에 표시
{

    case 1: // 월요일
    case 2: // 화요일
    case 3: // 수요일
    case 4: // 목요일

    default: // 0부터 6까지의 값이 아닌 경우
        document.write("평일");
        break;

    case 5: // 금요일
        document.write("금요일");
        break;

    case 6: // 토요일
    case 0: // 일요일
        document.write("주말");
        break;
}


// 반복문(Iteration - for, for in, for of, while, do while)

var i = 1;
while (i < 10) 
{ // 변수 i가 10보다 작을 때만 while 문을 반복함.
    document.write(i + "<br>");
    i++; // 반복할 때마다 변수 i를 1씩 증가시켜 변수 i가 10보다 커지면 반복문을 종료함.
}

var i = 1, j = 1;
while (i > 3) 
{ // 변수 i의 초깃값은 1이기 때문에 이 while 문은 한 번도 실행되지 않음.
    document.write("i : " + (i++) + "<br>");
}

do 
{ // 변수 j의 초깃값은 1이기 때문에 이 do / while 문은 단 한 번만 실행됨.
    document.write("j : " + (j++) + "<br>");
} while (j > 3);


for (var i = 1; i < 10; i++) document.write(i + "<br>"); // 실행문 = 한 줄 -> 중괄호({})를 생략가능



// for of 이용해서 Array의 element에 접근
var arr = [3, 4, 5];
for (var i = 0; i < arr.length; i++)  //배열 arr의 모든 요소의 인덱스(index)를 출력함.
{
    document.write(i + " ");
}

// 위와 같은 동작

for (var i in arr) 
{
    document.write(i + " ");
}

// for in 이용해서 object의 property에 접근
var obj = { name : "aaa", age : 20 };
for (var i in obj) 
{
    document.write(i + "<br>");
}


// for of 이용해서 Array의 element에 접근
var arr = [3, 4, 5];
for (var i = 0; i < arr.length; i++) 
{
    document.write(arr[i] + " ");
}

// 위와 같은 동작

for (var value of arr) 
{
    document.write(value + " ");
}


// for of 이용해서 Set object의 property에 접근
var arr = new Set([1, 1, 2, 2, 3, 3]);
for (var value of arr) 
{
    document.write(value + " ");
}


// 기타 - label, continue, break
arrIndex: //arrIndex라는 Labe을 생성
for (var i in arr) // i라는 var변수 선언 label 中 arr이후부터 반복문 시작
{
   document.write(i); // i에 반복한 결과 저장 후 출력 -> 결과 : Index
}


//1부터 100까지의 정수 中 3의 배수를 제외하고 출력
var exceptNum = 3; // var변수 exceptNum선언 3으로 초기화
for (var i = 0; i <= 100; i++) // var변수 i선언 0~100까지 +1씩 증가 하면서 반복
{
    if (i % exceptNum == 0) continue; // 변수 i랑 exceptNum이랑 나누기 연산 후 나머지가 0이면 다음 실행문 실행 = 3의 배수 저장 안하고 넘기기
    document.write(i + " ");
}

// Label이용해서 9X9단 中 값이 홀수인 것만 출력
gugudan: //gugudan이라는 Label을 생성
for (var i = 2; i <= 9; i++) // var변수 i선언 2~9까지 +1씩 증가 하면서 반복
{
    dan: //dan이라는 Labe을 생성
    for (var j = 1; j <= 9; j++) // var변수 j선언 1~9까지 +1씩 증가 하면서 반복
    {
        if ((i*j) % 2 == 0) continue dan; // 변수 i랑 j랑 곱한 후 2로 나눴을 때, 나머지가 0이면, dan label로 이동 = 짝수 저장 안하고 넘기기
        document.write(i + " * " + j + " = " + (i*j) + "<br>");
    }
}


// Array에서 특정값을 가진 index 출력
var language = ["html", "css", "JS", "php"]; // var변수 language Array로 선언 후 초기화
var topic = "JS"; // var변수 topic으로 선언 후 초기화
for (var i = 0; i < language.length; i++) // var변수 i선언 0~language의 크기(4)까지 +1씩 증가 하면서 반복
{
    if (lectures[i] == topic) //language의 i번째 변수의 값이 topic변수의 값과 같다면
    {
        document.write(topic + " 과목은 " + (i + 1) + "번째 과목입니다."); // 출력
        break; // 원하는 값을 찾은 후에는 더 이상 for 문을 반복하지 않고 빠져나가기
    }
}


// Label이용해서 9X9단 中 3단까지만 출력
gugudan: //gugudan이라는 Label을 생성
for (var i = 2; i <= 9; i++) // var변수 i선언 2~9까지 +1씩 증가 하면서 반복
{
    dan:
    for (var j = 1; j <= 9; j++) // var변수 j선언 1~9까지 +1씩 증가 하면서 반복
    {
        if (i > 3)  break gugudan; // i가 3보다 크면 break, 그 전까지는 gugudan label로 돌아가기
        document.write(i + " * " + j + " = " + (i*j) + "<br>"); // 출력
    }
}


