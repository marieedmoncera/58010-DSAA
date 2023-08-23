
public class OddScores {
    public static void main(String[] args) {
        int[] testScores = {26,49,98,87,62,75};
        int sumofOddScores = 0;

        for (int score : testScores) {
            if (score % 2 != 0) {
                sumofOddScores += score;
            }
        }

        System.out.println("Sum of odd scores: " + sumofOddScores);
    }
}