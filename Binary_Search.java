package recursion;

public class Binary_Search {
	
	public static void print(int[] arr, int s ,int l) {
		System.out.println(arr[s]+" "+arr[l]);
	}
	public static boolean find(int [] arr, int e, int s, int l) {
		
		print(arr,s,l);
		int mid=(s+l)/2;
		if(s>e) {
			return false;
		}
		if(arr[mid]==e) {
			return true;
		}
		if (arr[mid]> e){
			find(arr, e,s, mid-1);
			
		}else {
			find(arr, e,mid+1, l);
			
		}
		return false;
		
	}

	public static void main(String[] args) {
		int [] arr= {2,3,4,19,21,28};
		System.out.println(find(arr, 21,0,5));

	}

}
