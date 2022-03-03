import java.util.*;
public class sortedArray{
	public boolean isSorted(int [] arr, int startIndex, int size){
		// using recursion 
		if(size==0 || size==1){
			return false;// base case
		}
		if(arr[startIndex]>arr[startIndex+1]){
			return false;
		}else{
			isSorted(arr,startIndex+1,size-1);

		}
		return false;
	}
	public static void main(String[] args){
		int [] arr={1,2,4,6,5};
		System.out.println(isSorted(arr,0,5));
	}
}