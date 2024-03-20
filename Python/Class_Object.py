"""
Class ≒ 설계도
- class = 속성(Attribute) + 동작(Operation)
- 속성(Attribute) = class가 가지는 variable들
- 동작(Operation) = class가 할 수 있는 동작들

* 객체 지향 프로그래밍(Object Oriented Programming)세상에 이미 존재하거나 우리가 만들 무언가에 대해 속성과 동작을 분리해서 분석하는 사고방식으로 프로그래밍을 설계

*객체지향의 개념
1. Abstraction(추상화) - 만들고자 하는 것들의 공통적인 것을 바탕으로 하나로 묶는 것
2. Encapsulation(캡슐화) - 맡은 역할의 수행을 위해 최소한의 외부 접근만을 허용하는 것
3. Polymorphism(다형성) - 자료형에 구애 받지 않고 프로그래밍 하는 것
4. Inheritance(상속) - 하위 개념이 상위 개념의 속성 및 동작 등을 물려받는 것

Object ≒ 설계도로 만든 제품
- 완전 독립적(유일)
"""

"""
Class선언 형태 : class 이름(대문자로 시작):

Constructor
- class를 기반으로 object를 만들어주는 역할
- 항상 이름은 고정(변경 불가능) : __init__
- 첫 번째 매개변수는 항상 self로 선언
- self = 함수를 호출한 객체를 가리키는 변수

private
- keyword
- python : __변수이름
- 외부에서 접근 불가능, 객체 안에서만 사용가능

public
- keyword
- python : __변수이름__
- 어디에서든 접근 가능

instance화
- 생성자를 호출하여 object를 만드는 과정
- class 이름을 호출해서 객체  생성

class변수
- 독립적인 객체들끼리 서로 정보 공유 가능
 
"""
class Horse:
    def __init__(self, age, height, color, xpos, ypos):
        self.age = age
        self.height = height
        self.color = color
        self.xposition = xpos
        self.yposition = ypos
        self.velocity = 0

if __name__ == '__main__':
    danbi = Horse(5, 160, 'brown', 0, 0)


class Alphabets:
    __str = ""

    def __init__(self, text):
        self.text = text
        Alphabets.__str += text #결과 : python

    def print_class_variable(self):
        print(Alphabets.__str) #결과 : python


if __name__ == '__main__':
    o1 = Alphabets('p')
    o2 = Alphabets('y')
    o3 = Alphabets('t')
    o4 = Alphabets('h')
    o5 = Alphabets('o')
    o6 = Alphabets('n')
    o1.print_class_variable()
    o5.print_class_variable()

"""
부모(parent, super) class - 자식(child, sub) class
Inheritance(상속)
- 물려받는 것
"""
import math


class Animal:

    def __init__(self, age, height, color, xpos, ypos):
        self.age = age
        self.height = height
        self.color = color
        self.xposition = xpos
        self.yposition = ypos
        self.velocity = 0

    def sound(self):
        pass


class Horse(Animal):

    def __init__(self, age, height, color, xpos, ypos):
        Animal.__init__(self, age, height, color, xpos, ypos)

    def sound(self):
        print('Neigh')

    def run(self, xdistance, ydistance, time):
        self.xposition += xdistance
        self.yposition += ydistance
        total_distance = math.sqrt((xdistance + xdistance) * (ydistance + ydistance))
        self.velocity = total_distance / time


class Dog(Animal):

    def __init__(self, age, height, color, xpos, ypos):
        Animal.__init__(self, age, height, color, xpos, ypos)

    def sound(self):
        print('Bow-Wow')


if __name__ == '__main__':
    danbi = Horse(5, 160, 'brown', 0, 0)
    choco = Dog(10, 100, 'black', 50, 30)
    danbi.sound()
    choco.sound()