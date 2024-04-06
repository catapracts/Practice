"""
23.05
asia라는 set 생성 후 '한국', '중국', '일본'이라는 element로 초기화
asia set에 '베트남' element 추가
asia set에 '일본' element 삭제
asia set에 '한국', '홍콩', '태국'이라는 element 갱신(없는 element는 추가하고, 있는 element는 추가 X)
결과 : {'한국', '중국', '베트남', '홍콩', '태국'}
"""
asia = {'한국', '중국', '일본'}
asia.add('베트남')
asia.remove('일본')
asia.update({'한국', '홍콩', '태국'})
print(asia)