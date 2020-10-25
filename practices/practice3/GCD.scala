object GCD {
  def main(args: Array[String]): Unit = {
    println(gcd(12, 4))
  }
  def gcd(a: Int, b: Int): Int =
    if (a%b==0)
      b
    else {
      var r: Int = a%b
      gcd(b, a%b)
    }
}
