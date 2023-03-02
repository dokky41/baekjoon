import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n=sc.nextInt();
		
		int p=n/4;
		
		String a="";
		
		for(int i=0; i<p; i++){
			
			a= a+"long ";
			
		}
		
		a = a+ "int";
		
		System.out.println(a);
	}
}
