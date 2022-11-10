using System;
using System.IO;

namespace _00_NET_DEMO_CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("C# Version");

            StreamReader sr = new StreamReader("C:\\testfile.csv");
            while (!sr.EndOfStream)
            {
                string str = sr.ReadLine();
                Console.WriteLine(str);
            }
            sr.Close();
        }
    }
}
