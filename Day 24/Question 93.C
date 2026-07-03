public class StringRotation {
    public static boolean isRotation(String s1, String s2) {
        if (s1.length() != s2.length())
            return false;

        String temp = s1 + s1;
        return temp.contains(s2);
    }

    public static void main(String[] args) {
        String s1 = "ABCD";
        String s2 = "CDAB";

        if (isRotation(s1, s2))
            System.out.println("String is a rotation.");
        else
            System.out.println("String is not a rotation.");
    }
}