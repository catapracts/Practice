"""
22.05
매개변수 2개를 사용하는 함수 생성(num1, num2), num2변수는 값이 고정
num1과 num2 값 출력
func(20) -> num1 = 20, num2 = 2
"""
def func(num1, num2 = 2):
    print('a =', num1, 'b =', num2)
func(20)

"""
22.10
a라는 배열을 선언하고 [1, 2, 3, 4, 5]로 초기화
list안에 element들을 차례대로 확인하는데, 각 요소에 +100씩 한 후 저장한다.
그 결과를 출력한다.
"""
a = [1, 2, 3, 4, 5]
a = list(map(lambda num : num + 100, a))
print(a)