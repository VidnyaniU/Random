public class printDigitToWords {

    // to print digit to word using switch
    static void digitToWord(char digit) {

        switch (digit) {

            case '0':
                System.out.print("Zero ");
                break;

            case '1':
                System.out.print("One ");
                break;

            case '2':
                System.out.print("Two ");
                break;

            case '3':
                System.out.print("Three ");
                break;

            case '4':
                System.out.print("Four ");
                break;

            case '5':
                System.out.print("Five ");
                break;

            case '6':
                System.out.print("Six ");
                break;

            case '7':
                System.out.print("Seven ");
                break;

            case '8':
                System.out.print("Eight ");
                break;

            case '9':
                System.out.print("Nine ");
                break;
        }
    }

    public static void main(String[] args) {
        String N = "1007";
        int length = N.length();

        // Finding each digit of the number and printing its corresponding word
        for (int i = 0; i < length; i++)

            digitToWord(N.charAt(i));

    }
}
