package Test2021;

class Connection 
{
	private static Connection __inst = null;
	private int count = 0;
	public static Connection get() 
	{
		if(__inst == null) 
		{
			__inst = new Connection();
			return __inst;
		}
		
		return __inst;
	}
	
	public void count() { count++; }
	public int getCount() { return count; }
}



public class Test2110 
{

	public static void main(String[] args) 
	{
		Connection conn1 = Connection.get();
		conn1.count();
		
		Connection conn2 = Connection.get();
		conn2.count();
		
		Connection conn3 = Connection.get();
		conn3.count();
		
		System.out.println(conn1.getCount());
		
		
		int w = 3, x = 4, y = 3, z = 5;
		if((w == 2 | w == y) & !(y>z) & (1 == x ^ y != z))
		{
			w = x + y;
			if(7 == x ^ y != w)
				System.out.println(w);
			else
				System.out.println(x);
		}
		
		else
		{
			w = y + z;
			if(7 == y ^ z != w)
				System.out.println(w);
			else
				System.out.println(z);
		}

	}

}
