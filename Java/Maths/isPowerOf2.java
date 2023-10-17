public class Main {
    public static void main(String[] args) {
        int num = 16; // Replace 16 with the number you want to check.
        boolean result = isPowerOf2(num);
        if (result) {
            System.out.println(num + " is a power of 2.");
        } else {
            System.out.println(num + " is not a power of 2.");
        }
    }

    static boolean isPowerOf2(int n) {
        if (n <= 0) {
            return false; // Negative numbers and zero are not powers of 2.
        }
        return (n & (n - 1)) == 0;
    }
}
