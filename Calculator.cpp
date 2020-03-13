class Calculator
{
	static void Main(string[] args)
	{
		int a = 80; // deklarasi variabel a, dg nilai awal 10;
            int b = 90; // deklarasi variabel b, dg nilai awal 6

            Console.WriteLine("Hasil Penambahan " + a + " + " + b + " = " + Penambahan(a, b));
            Console.WriteLine("Hasil Pengurangan {0} - {1} = {2}", a, b, Pengurangan(a, b));
			
			Console.WriteLine("\nTekan sembarangan key untuk keluar");
            Console.ReadKey();
		   

            
        
	}        
		static int Penambahan(int a, int b)
        {
            return a + b;
        }
		static int Pengurangan(int a, int b)
		{
			return a - b;
		}	
        
	}	
}	