package practices.practice4;

public class B extends A {
    public int num = 3;
    public int update() {
        return num+5;
    }

    public static void main(String[] args) {
        B b = new B();
        A a = b;
        System.out.println(b.num); //3
        System.out.println(b.update()); //8
        System.out.println(a.num); //5
        System.out.println(a.update()); //8
    }
}