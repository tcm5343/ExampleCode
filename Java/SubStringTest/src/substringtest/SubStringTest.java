/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package substringtest;

/**
 *
 * @author miller
 */
public class SubStringTest {

    public static void main(String[] args) {

        String str = "XXOOOONNNNNNNNNNNN00N--";
        
//        System.out.println(substring);
//        System.out.println(substring.length());

        System.out.println("New " + checkStringForWinner(str));
        System.out.println("Old: " + str);

    } // main()
    
    private static char evalWinner(char[] input) {
        int count = 0;
        char result = 'N';

        // compares to see if all the values in the string are the same or
        // an X or an O
        for (int i = 1; i < 4; i++) {
            // checks to see if the first char is an X or an O
            if (input[0] == 'X' || input[0] == 'O') {
                if (input[0] == input[i]) {
                    count++;
                }
            }
        }

        // assigns the whatever the 
        if (count == 3) {
            result = input[0];
        }

        return result;

    } // evalWinner()
    
    private static String checkStringForWinner(String str) {
        char values[] = new char[4];
        boolean winnerFound = false;
        char winner = 'N';
        
        // creates substring of input string containing only values
        String substring = str.substring(2, str.length() - 5);
        
        // fills 2d array with characters 
        char input[][] = new char[4][4];
        int index = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                input[i][j] = substring.charAt(index + j);
            }
            index = index + 4;
        }

        // checks diagonal values (from top to bottom and right to left)
        for (int i = 0; i < 4; i++) {
            values[i] = input[i][i];
            //System.out.println(i + " " + values[i]);
        }

        if (evalWinner(values) != 'N') {
            winnerFound = true;
            winner = evalWinner(values);
        }

        // checks diagonal values (from bottom to top and left to right)
        if (!winnerFound) {
            for (int i = 3, j = 0; i >= 0; i--, j++) {
                values[j] = input[i][j];
                //System.out.println(j + " " + values[j]);
            }

            if (evalWinner(values) != 'N') {
                winnerFound = true;
                winner = evalWinner(values);
            }
        }
        
        // checks verticle values
        if (!winnerFound) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    values[j] = input[j][i];
                    //System.out.println(j + " " + values[j]);
                }
                if (evalWinner(values) != 'N') {
                    winnerFound = true;
                    winner = evalWinner(values);
                }
            }
        }

        // checks horizontal values
        if (!winnerFound) {
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    values[j] = input[i][j];
                    //System.out.println(j + " " + values[j]);
                }
                if (evalWinner(values) != 'N') {
                    winnerFound = true;
                    winner = evalWinner(values);
                }
            }
        }

        // modify string to show that there was a winner
        if (winnerFound) {
            str = str.substring(0, 20) + winner + str.substring(21);
        }

        return str;

    } // checkInput()

} // SubStringTest()
