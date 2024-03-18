package algo;

public class sort 
{
	/*
	 swap = 배열의 두 index의 element를 교환하는 method
	 정렬 특성상 자주 사용
	 (ex) [1,2] -> swap -> [2,1] 이렇게 만든다. 
	*/
	//1개의 배열에 2개의 index를 이용해 원소를 교환할 것이므로, 매열 1개와 index2개를 매개변수로 선언
	public static void swap(int[] arr, int idx1, int idx2)
	{
		int tmp = arr[idx1]; // tmp라는 정수형 변수에 arr배열의 idx1번째 자리의 값(element)를 저장한다.
		arr[idx1] = arr[idx2];// arr배열의 idx2번째 자리의 값(element)을 arr배열의 idx1번째 자리의 값(element)으로 저장한다.
		arr[idx2] = tmp; // arr배열의 idx2번째 자리의 값(element)으로 아까 tmp라는 정수형 변수에 저장한 arr배열의 idx1번째 자리의 값(element)을 idx2번째 자리에 저장
	}

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub

	}

}
