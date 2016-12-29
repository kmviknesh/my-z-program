import java.util.Scanner;

public class Digit {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		int b = 0,c,d;
		for (int i = 1; i <=10 ; i++) 
		{
			c= a;
			while (c>0) 
			{
				d=c%10;
				if (d==i) 
				{
					b=b*10;
					b=b+d;
				}
				//System.out.println(b);
				c=c/10;
			}
		}
		System.out.println(b);
		s.close();
	}

}
