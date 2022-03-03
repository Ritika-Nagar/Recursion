package recursion;

public class linearSearch {
	public static boolean find(int [] arr,int e, int startIndex, int size) {
		int ans=0;
		
		if(size==0) 
			return false;
		if(arr[startIndex]==e)// element to find
			return true;
		else 
			return find(arr, e,startIndex+1,size-1);
		
		
		
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] arr={1,2,4,6,5};
		System.out.println(find(arr,4,0,5));
	}

	}


