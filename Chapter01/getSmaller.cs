// This is C# code to run try: https://dotnetfiddle.net/
// generic get_smaller function + invocation

using System;
class Program
{
  static T getSmaller<T>(T a, T b) where T:IComparable
  {
    return a.CompareTo(b) < 0 ? a : b;
  }

  static void Main(string[]args)
  {
    int first = 8;
    int second = 18;
    Console.WriteLine($"The smaller of {first} & {second} is {getSmaller(first, second)}");
  }
}

// The smaller of 8 & 18 is 8
