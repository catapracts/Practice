package algo;
import java.util.*;

public class sort 
{
	/*
	 swap = 배열의 두 index의 element를 교환하는 method
	 정렬 특성상 자주 사용
	 (ex) [1,2] -> swap -> [2,1] 이렇게 만든다. 
	*/
	//1개의 배열에 2개의 index를 이용해 원소를 교환할 것이므로, 배열 1개와 index2개를 매개변수로 선언
	public static void swap(int[] arr, int idx1, int idx2)
	{
		int tmp = arr[idx1]; // tmp라는 정수형 변수에 arr배열의 idx1번째 자리의 값(element)를 저장한다.
		arr[idx1] = arr[idx2];// arr배열의 idx2번째 자리의 값(element)을 arr배열의 idx1번째 자리의 값(element)으로 저장한다.
		arr[idx2] = tmp; // arr배열의 idx2번째 자리의 값(element)으로 아까 tmp라는 정수형 변수에 저장한 arr배열의 idx1번째 자리의 값(element)을 idx2번째 자리에 저장
	}

	/*
	 Bubble Sort = 비교&교환 동시 진행
	 단순 but 성능 좋지 않음
	 시간 복잡도 : worst, average, best=O(n^2), 
	*/
	// 배열 안에 있는 요소들을 정렬하므로 1개 배열만 매개변수로 받는다
	public static void Bubble(int array[])
	{
		//i와 j 2개의 index를 통해 비교, i가 첫 번째, j가 바로 다음 2번째
		for(int i = 0; i < array.length-1; i++)
		{
			for(int j = 0; j < array.length-i-1; j++)
			{
				//확인했을 때, 뒤에 element가 더 작은 값이라면 둘의 위치를 swap
				if(array[j] > array[j+1])
				{
					swap(array, i, j + 1);
				}
			}
		}
	}
	
	
	/*
	 Selection Sort 
	 = 맨 앞 index부터 차례대로 들어갈 원소를 선택하여 정렬
	 = 교환 횟수는 少 but 비교는 전부 진행
	 = 버블정렬보다는 성능 좋음
	 */
	// 배열 안에 있는 요소들을 정렬하므로 1개 배열만 매개변수로 받는다
	public static void Selection(int[] array)
	{
		// 가장 작은 값을 가진 index를 찾는다.
		for(int i = 0; i < array.length-1; i++)
		{
			//가장 작은 값을 가진 index를 찾으면 변수에 저장하고
			int minimum_index = i;
			
			//다시 가장 작은 값을 가진 index 찾기 
			for(int j = i +1; j < array.length; j++)
			{
				//찾았으면 아까 저장한 index가 가진 값이랑 지금 찾은 index의 값이랑 크기 비교
				if(array[j] < array[minimum_index])
				{
					//아까 저장한 값이 더 크면, 변수에 지금 찾은 index의 값을 저장
					minimum_index = j;
				}
			}
			//swap함수 이용해서 위치 바꾸고, 지금 찾은 index랑 아까 찾은 index랑 위치 바꾼 후 값 변경
			swap(array, i, minimum_index);
		}
	}
	
	
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub

	}

}
