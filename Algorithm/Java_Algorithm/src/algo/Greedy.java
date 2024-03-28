package algo;


import java.util.*;

public class Greedy 
{
	/*
	그리디 알고리즘(탐욕법, Greedy Algorithm)
	- 최적의 값을 구해야 하는 상황에서 사용되는 근시안적인 방법론
	- 각 단계에서 최적이라고 생각되는 것을 선택’ 해 나가는 방식으로 진행하여 최종적인 해답에 도달하는 알고리즘 -> 항상 최적의 값을 보장하는것이 아니라 최적의 값의 ‘근사한 값’을 목표
	- 주로 문제를 분할 가능한 문제들로 분할한 뒤, 각 문제들에 대한 최적해를 구한 뒤 이를 결합하여 전체 문제의 최적해를 구하는 경우에 주로 사용
	*근시안적 방법론 = 단기적인 목표를 중심으로 한 전략적인 접근 방법 / 주로 현재의 문제를 해결하는 데 초점을 맞추며, 장기적인 전망보다는 단기적인 성과를 중요시
	**근사 알고리즘(Approximation Algorithm) = 최적의 해를 구할 수 없는 문제에서 근사한 해를 구하는 알고리즘 / 항상 최적해를 보장하지는 않지만, 많은 경우에는 최적해에 근접한 값
	
	- 주요 속성 :  두 가지 조건이 성립해야 그리디 알고리즘을 적용
	1. 탐욕 선택 속성(Greedy Choice Property)
	각 단계에서 ‘최선의 선택’을 했을 때 전체 문제에 대한 최적해를 구할 수 있는 경우 = 각 단계에서 가장 이상적인 선택을 하는 것이 전체적으로 최적의 결과를 가져온다
	
	2. 최적 부분 구조(Optimal Substructure)
	전체 문제의 최적해가 ‘부분 문제의 최적해로 구성’될 수 있는 경우 = 전체 문제를 작은 부분 문제로 나누어 각각의 부분 문제에서 최적의 해를 구한 후 이를 조합하여 전체 문제의 최적해를 구하는 것
	
	
	- 그리디 알고리즘의 단계 : 매 단계마다 최적이라고 생각되는 선택을 하면서 최종적으로 전체적으로 최적인 해답을 찾아내는 과정
	1. 문제의 최적해 구조를 결정합니다.
	2. 문제의 구조에 맞게 선택 절차를 정의합니다 : 선택 절차(Selection Procedure) = ‘현재 상태’에서 ‘최적인 선택’을 합니다. 이 선택은 이후에는 바뀌지 않습니다.
	3. 선택 절차에 따라 선택을 수행합니다.
	4. 선택된 해가 문제의 조건을 만족하는지 검사합니다 : 적절성 검사(Feasibility Check) = 이 단계에서는 선택한 항목이 ‘문제의 조건’을 만족시키는지 확인합니다. 조건을 만족시키지 않으면 해당 항목은 제외
	5. 조건을 만족하지 않으면 해당 해를 제외합니다.
	6. 모든 선택이 완료되면 해답을 검사합니다 : 해답 검사(Solution Check) = 이 단계에서는 모든 선택이 완료되면, ‘최종 선택’이 ‘문제의 조건을 만족’시키는지 확인합니다. 조건을 만족시키면 해답으로 인정
	7. 조건을 만족하지 않으면 해답으로 인정되지 않습니다.
	
	- 예시 : 거스름돈, 체육복	
	*/
	
	/*
	그리디 알고리즘 예시 - 거스름돈
	
	문제 : 거스름돈으로 1260원을 거슬러줘야 할 때 500원, 100원, 50원, 10원짜리 동전이 무한정 존재한다면, 가장 큰 동전부터 가능한 많이 사용하는 방식으로 거스름돈을 계산
	
	적용
	1. 선택 절차 : 거스름돈 문제에서 가장 가치가 큰 동전부터 선택을 합니다.
	2. 적절성 검사: 만약 선택된 동전의 가치가 거스름돈보다 크다면 다음으로 작은 동전을 선택합니다.
	3. 해답 검사 : 합이 일치하면 거스름돈 문제가 해결되었습니다.
	
	*/
	
	public static void changeMoney()
	{
		   Integer[] coins = {100, 10, 500, 50};   // 동전 종류
		    int money = 1260;                       // 거스름돈
		    int count = 0;                          // 동전 사용 개수

		    Map<String, Object> resultMap = new HashMap<>();

		    // 1. 선택 절차 적용 : 거스름돈 문제에서 가장 가치가 큰 동전부터 선택을 합니다.
		    Arrays.sort(coins, Comparator.reverseOrder());

		    // 2. 적절성 검사 : 만약 선택된 동전의 가치가 거스름돈보다 크다면 다음으로 작은 동전을 선택한다.
		    for (int i = 0; i < coins.length; i++) 
		    {
		        count += money / coins[i];
		        money %= coins[i];
		        resultMap.put(String.valueOf(coins[i]), count);
		        System.out.printf("\n"+String.valueOf(coins[i]) + "\n", count);
		        System.out.println(count);
		    }
		    // 3. 해답 검사 : 합이 일치하면 거스름돈 문제가 해결되었습니다.
		    if (money == 0) 
		    {
		        System.out.println("거스름돈 문제가 해결되었습니다.");
		        System.out.println(Arrays.toString(coins));
		    }

		    // 결과값 : { "500" : 2, "100" : 4, "50" : 5, "10": 6 }		
	}
	
	
	/*
	그리디 알고리즘 예시 - 체육복
	
	문제
	점심시간에 도둑이 들어, 일부 학생이 체육복을 도난당했습니다. 다행히 여벌 체육복이 있는 학생이 이들에게 체육복을 빌려주려 합니다. 
	학생들의 번호는 체격 순으로 매겨져 있어, 바로 앞번호의 학생이나 바로 뒷번호의 학생에게만 체육복을 빌려줄 수 있습니다. 
	예를 들어, 4번 학생은 3번 학생이나 5번 학생에게만 체육복을 빌려줄 수 있습니다. 체육복이 없으면 수업을 들을 수 없기 때문에 체육복을 적절히 빌려 최대한 많은 학생이 체육수업을 들어야 합니다.
	전체 학생의 수 n, 체육복을 도난당한 학생들의 번호가 담긴 배열 lost, 여벌의 체육복을 가져온 학생들의 번호가 담긴 배열 reserve가 매개변수로 주어질 때, 
	체육수업을 들을 수 있는 학생의 최댓값을 return 하도록 solution 함수를 작성해 주세요.
	
	
	제한사항
	전체 학생의 수는 2명 이상 30명 이하입니다.
	체육복을 도난당한 학생의 수는 1명 이상 n명 이하이고 중복되는 번호는 없습니다. 
	여벌의 체육복을 가져온 학생의 수는 1명 이상 n명 이하이고 중복되는 번호는 없습니다.
	여벌 체육복이 있는 학생만 다른 학생에게 체육복을 빌려줄 수 있습니다. 
	여벌 체육복을 가져온 학생이 체육복을 도난당했을 수 있습니다. 
	이때 이 학생은 체육복을 하나만 도난당했다고 가정하며, 남은 체육복이 하나이기에 다른 학생에게는 체육복을 빌려줄 수 없습니다.
	
	
	적용
	1. 선택 절차 : 선택 과정에서 체육복을 읽어버린 학생과 여벌 체육복을 가져온 학생의 번호를 오름차순으로 정렬합니다.
	2. 적절성 검사: 체육복을 잃어버린 학생 중 여벌이 있는 학생에게 빌려줄 수 있는 학생 수를 계산하고, 그다음에는 체육복을 잃어버린 학생 중 여벌이 없는 학생에게 빌려줄 수 있는 학생 수를 계산합니다.
	3. 해답 검사 : 체육복을 빌려 받은 학생 수를 계산하여 반환합니다.
	*/
	public static void changeClothes(int n, int[] lost, int[] reserve)
	{
	    int answer = n - lost.length; // 체육복이 없는 학생 수

	    // 1. 선택 절차
	    // 학생 번호를 기준으로 정렬합니다.
	    Arrays.sort(lost);
	    Arrays.sort(reserve);

	    // 2. 적절성 검사
	    // 체육복을 잃어버린 학생 중 여벌이 있는 학생에게 빌려줄 수 있는 경우
	    for (int i = 0; i < lost.length; i++) 
	    {
	        for (int j = 0; j < reserve.length; j++) 
	        {
	            if (lost[i] == reserve[j]) { // 여벌 체육복을 가진 학생이 체육복을 잃어버린 경우
	                answer++; // 체육복을 빌려받은 학생 수 증가
	                reserve[j] = -1; // 빌려준 학생은 더 이상 빌려줄 수 없도록 표시
	                break;
	            }
	        }
	    }
	    
        System.out.println(Arrays.toString(lost)+"\n");
        System.out.println(Arrays.toString(reserve)+"\n");
	    
	    // 3. 해답 검사
	    // 체육복을 잃어버린 학생 중 여벌이 없는 학생에게 빌려줄 수 있는 경우
	    for (int i = 0; i < lost.length; i++) 
	    {
	        for (int j = 0; j < reserve.length; j++) 
	        {
	            if (reserve[j] == lost[i] - 1 || reserve[j] == lost[i] + 1) 
	            {
	                answer++;
	                reserve[j] = -1;
	                break;
	            }
	        }
	    }
	    
        System.out.println(Arrays.toString(lost)+"\n");
        System.out.println(Arrays.toString(reserve)+"\n");
	}
	
	
	public static void main(String[] args) 
	{
		int[] lost = {1,2,3,4,5};
		int[] reserve = {6,7,8,9,10,11};
		int n = 30;
		changeMoney();
		System.out.println("=========================\n");
		changeClothes(n, lost, reserve);
	}

}