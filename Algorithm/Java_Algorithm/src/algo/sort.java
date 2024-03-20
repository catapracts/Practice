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
			// swap함수 이용해서 위치 바꾸고, 지금 찾은 index랑 아까 찾은 index랑 위치 바꾼 후 값 변경
			swap(array, i, minimum_index);
		}
	}
	
	
	/*
	Insertion Sort
	- index1의 원소부터 앞 방향으로 들어갈 위치를 찾아 교환하는 방식
	- 정렬된 상태의 배열 : O(n)의 속도 = 정렬되어 있을 수록 성능 좋다.
	- 시간 복잡도 : worst, average = O(n^2), best = O(n)
	- index 1 ~ (n-1)의 원소들을 순차적으로 자신이 들어갈 위치에 넣기
	+ while문 사용하여 더 작으면 계속 앞으로 전진시키면서 비교한 원소를 1칸씩 뒤로 민다.
	+ 들어갈 자리가 정해지면 넣어준다.
	- n-1번째 index가 0이면 swap()을 많이 해야함
	*/
	
	// 배열 안에 있는 요소들을 정렬하므로 1개 배열만 매개변수로 받는다
	public static void Insertion(int array[])
	{
		// 배열의 element들을 확인하기 위해 index를 for문을 통해 하나씩 확인한다
		for(int i = 1; i < array.length; i++)
		{
			int tmp = array[i]; //해당 index : value를 tmp에 저장한다.
			int j = i -1; // j에 선택한 index에서 한 칸 앞에 있는 index:value를 저장한다.(처음 - index1과 index0을 비교하게 된다.)
			while(j>=0 && tmp< array[j]) // j가 0보다 크고, j에 있는 index:value 배열의 값이 아까 맨 처음 선택한 배열의 index:value값보다 클 경우(index n-1 > index n인경우)
			{
				array[j+1] = array[j]; // j+1번째 배열에 j번째의 값을 저장하고
				j--;// j의 값을 다시 -1한다
			}
			array[j+1] = tmp; //그렇지 않은 경우 j+1번째 배열에 tmp의 값을 저장한다.
		}
	}
	
	
	/*
	Shell Sort
	- Insertion Sort의 장점을 살리고, 단점을 보완한 Algorithm -> 평균 시간 복잡도 O(n^1.5)로 개선
	- 간격을 정하여 전체 배열을 부분으로 나눠서 정렬하고 다시 그 간격을 줄여서 정렬하는 과정을 반복
	- 시간 복잡도 : worst = O(n^2), average = O(n^1.5), best = O(n)
	*/
	
	//배열 안에 있는 요소들을 정렬하므로 1개 배열만 매개변수로 받는다
	public static void Shell(int array[])
	{	
	    for (int h = array.length / 2; h > 0; h /= 2) // h=간격, 초기값 : 전체 배열의 길이/2; h>0일때까지; h를 계속 2등분한다 : 범위가 배열의 길이의 반 -> 1dl 될 때까지 반복한다는 의미 
	    {
	        for (int i = h; i < array.length; i++) // 나눠진 배열들을 Insertion Sort
	        {
	            int tmp = array[i];
	            int j = i - h;
	            while (j >= 0 && array[j] > tmp) 
	            {
	            	array[j + h] = array[j];
	                j -= h;
	            }
	            
	            array[j + h] = tmp;
	        } // Insertion Sort 끝나면 다시 간격이 1이 될 때까지 반복
	    }

	}
	
	
	/*
	Merge Sort
	- Divide and Conquer Algorithm 中 하나
	- 배열의 길이가 1이 될 때까지 2개의 부분 배열로 분할 -> 분할 완료시, 다시 합병 후 정렬 : 이걸 모든 분할된 배열들이 다 합병될 때까지 반복
	- 시간 복잡도 : worst, average, best = O(nlog n) / 공간 복잡도 : O(n)만큼의 추가 memory 사용 by tmpArr사용 
	- 보통 재귀함수로 구현 -> memory 사용
	- mergeSort() = 재귀수행, merge() = 재귀 마치고 합병
	- mergeSort()는 반으로 나누면서 재귀호출하며 다 나눠졌으면 점점 올라오면서 merge()한다.
	- merge()는 두 부분 배열의 인덱스를 점차적으로 비교하면서 정렬한다.
	while문이 끝나고 배열에 좌측 부분배열의 남은 것만 저장하는 이유는 다음과 같다.
	1. 우측 부분배열이 다 들어가고 좌측 부분배열만 남은 경우에는 좌측 부분 배열만 넣으면 됨.
	2. 좌측 부분배열이 다 들어가고 우측 부분배열만 남은 경우에는 이미 배열은 다 정렬된 것.
	*/
	public static void sortByMergeSort(int[] arr) 
	{
	    int[] tmpArr = new int[arr.length];
	    mergeSort(arr, tmpArr, 0, arr.length - 1);
	}
	
	public static void mergeSort(int[] arr, int[] tmpArr, int left, int right) 
	{
	    if (left < right) 
	    {
	        int m = left + (right - left) / 2;
	        mergeSort(arr, tmpArr, left, m);
	        mergeSort(arr, tmpArr, m + 1, right);
	        merge(arr, tmpArr, left, m, right);
	    }
	}
	
	public static void merge(int[] arr, int[] tmpArr, int left, int mid, int right) 
	{
	    for (int i = left; i <= right; i++) 
	    {
	        tmpArr[i] = arr[i];
	    }
	    
	    int part1 = left;
	    int part2 = mid + 1;
	    int index = left;
	    while (part1 <= mid && part2 <= right) 
	    {
	        if (tmpArr[part1] <= tmpArr[part2]) 
	        {
	            arr[index] = tmpArr[part1];
	            part1++;
	        } 
	        
	        else 
	        {
	            arr[index] = tmpArr[part2];
	            part2++;
	        }
	        
	        index++;
	    }
	    
	    for (int i = 0; i <= mid - part1; i++) 
	    {
	        arr[index + i] = tmpArr[part1 + i];
	    }
	}
	
	
	/*
	Heap Sort
	- 오름차 순 정렬일 때 최대Heap, 내림차 순 정렬일 때 최소Heap을 사용하는 정렬
	- 최대Heap을 Array로 구현 시, 0번째 index가 가장 큰 수라는 점을 이용 
	- 배열의 길이가 1이 될 때까지 2개의 부분 배열로 분할 -> 분할 완료시, 다시 합병 후 정렬 : 이걸 모든 분할된 배열들이 다 합병될 때까지 반복
	- 시간 복잡도가 O(nlog n)으로 합병정렬, 퀵정렬과 동일하지만 실상 성능은 더 낮다 -> 매번 루트에서 최대 값을 뺄 때마다 heapify()를 사용하여 다시 최대Heap으로 만들어야 하기 때문
	- 시간 복잡도 : worst, average, best = O(nlog n)
	- heapify() : 배열, parentIdx, lastIdx가 주어지면 parentIdx를 알맞은 자리에 들어가게 하여 최대 힙을 만들어주는 함수 = 부모노드를 왼쪽 자식, 오른쪽 자식 중 존재하거나 더 큰 것과 비교하여 swap()하는 것을 반복하여 알맞은 자리로 보냄
	- Logic 
	1. 배열을 최대 힙으로 만든다.
	2. 배열의 0 번째 인덱스 원소(가장 큰 수)를 마지막 인덱스와 교환한다.
	3. 0 번째 인덱스를 자기 자리로 보내주기 위하여 heapify()를 사용한다.
	4. 2번, 3번을 반복하면 되는데 반복하면서 마지막 인덱스를 1씩 감소시키면 된다.
	*/
	public static void sortByHeapSort(int[] arr) 
	{
	    for (int i = arr.length / 2 - 1; i < arr.length; i++) 
	    {
	        heapify(arr, i, arr.length - 1);
	    }
	    
	    for (int i = arr.length - 1; i >= 0; i--) 
	    {
	        swap(arr, 0, i);
	        heapify(arr, 0, i - 1);
	    }
	}
	
	public static void heapify(int[] arr, int parentIdx, int lastIdx) 
	{
	    int leftChildIdx;
	    int rightChildIdx;
	    int largestIdx;
	    while (parentIdx * 2 + 1 <= lastIdx) 
	    {
	        leftChildIdx = (parentIdx * 2) + 1;
	        rightChildIdx = (parentIdx * 2) + 2;
	        largestIdx = parentIdx;
	        
	        if (arr[leftChildIdx] > arr[largestIdx]) 
	        {
	            largestIdx = leftChildIdx;
	        }
	        
	        if (rightChildIdx <= lastIdx && arr[rightChildIdx] > arr[largestIdx]) 
	        {
	            largestIdx = rightChildIdx;
	        }
	        
	        if (largestIdx != parentIdx) 
	        {
	            swap(arr, parentIdx, largestIdx);
	            parentIdx = largestIdx;
	        }
	        
	        else 
	        {
	            break;
	        }
	    }
	}
	
	/*
	Quick Sort
	- Divide and Conquer Algorithm 中 하나 / 피벗(pivot)을 사용 / 피벗이 들어갈 위치에 따라 불균형
	- Merge Sort랑 속도가 비슷하고 Heap Sort보다 빠름
	- 시간 복잡도 : worst = O(n^2), average, best = O(nlog n) 
	*/
	
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub

	}

}
