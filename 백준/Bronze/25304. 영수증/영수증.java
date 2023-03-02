import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		
		
		//영수증에 적힌 총 금액
		int x= sc.nextInt();
		
		//구매한 종류의 수
		int n= sc.nextInt();
		
		int y=0;
		int count=0;
		int sum=0;
		
		for(int i=0; i<n; i++){
			
			y=sc.nextInt();
			count=sc.nextInt();
			
			sum=sum+(y*count);
		}
		
		
		if(sum==x){
			System.out.println("Yes");
		}else{
			System.out.println("No");
			
		}
		
		
		
	}
}
