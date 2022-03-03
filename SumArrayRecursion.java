package recursion;
public class SumArrayRecursion{
	public static int findSum(int [] arr, int startIndex, int size){
		int sum=0;
		if(size==0){
			return sum;
		}
		if(size==1){
			return  arr[startIndex];
		}
		else {
			sum=arr[startIndex]+findSum(arr,startIndex+1,size-1);
		}
		return sum;

	}
	public static void main(String[] args) {
		int [] arr={1,2,4,6,5};
		System.out.println(findSum(arr,0,5));
	}
}