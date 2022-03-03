package recursion;

public class reverse_string {
	
	
	public static void reverse(String str, int i, int j) {
		
		if(i>j) {
			return;
		}
		swap(str[i], str[j]);
		i++;j--;
		reverse(str,i,j);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		

	}

}
