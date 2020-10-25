package practices.practice3;

public class GCD {
    private int a, b;
    public GCD(int a, int b) {
        this.a = a;
        this.b = b;
    }
    public int compute() {
        return a >= b ? gcd(a, b) : gcd(b, a);
    }
    private int gcd(int a, int b) {
        if(b == 0)
            return a;
        else 
            return gcd(b, a%b);
    }
    public static void main(String[] args) {
        System.out.println(new GCD(12, 4).compute());
    }
}
