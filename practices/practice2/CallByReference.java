package practices.practice2;

public class CallByReference {

	public static class A {
		int v;
		public A(int x) {
			v = x;
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		A x = new A(1);
		A y = new A(2);

		swap(x, y);
		System.out.println("x = "+x.v);
		System.out.println("y = "+y.v);

		swap2(x, y);
		System.out.println("x = "+x.v);
		System.out.println("y = "+y.v);

	}

	public static void swap(A a1, A a2) {
		A tmp = a1;
		a1 = a2;
		a2 = tmp;
	}

	public static void swap2(A a1, A a2) {
		int tmp = a1.v;
		a1.v = a2.v;
		a2.v = tmp;
	}

}