#2021 정보처리기사 실기

"""
21.04
CharClass라는 이름으로 class를 생성하고 class내용으로 a라는 배열을 선언해서 초기화하고 사용
myVar라는 변수를 charClass타입으로 생성
str01이라는 공백 1개 있는 문자 생성
i라는 변수로 반복문을 돌릴건데 그 대상은 myVar라는 클래스에 있는 a배열이다.
str01에 str01값과 a배열의 각 element의 첫 번째 요소를 +한다.(이어붙인다.) - Seoul의 S, Kyeongi의 K, Incheon의 I ... 가 각 element의 1st값
str01출력 - SKIDDP
"""
class CharClass:
    a = ['Seoul', 'Kyeongi', 'Incheon', 'Daejeon', 'Daegu', 'Pusan'];
myVar = CharClass()
str01 = ' '
for i in myVar.a:
    str01 = str01 + i[0]
print(str01)