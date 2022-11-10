Imports System
Imports System.IO

Module Module1

    Sub Main()
        Console.WriteLine("VB Version")

        Dim sr As StreamReader = New StreamReader("C:\\testfile.csv")
        Do
            Dim str As String = sr.ReadLine()
            Console.WriteLine(str)
        Loop Until sr.EndOfStream = True
        sr.Close()

    End Sub

End Module
