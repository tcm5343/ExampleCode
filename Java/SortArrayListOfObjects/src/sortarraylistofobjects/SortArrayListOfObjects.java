/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sortarraylistofobjects;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author tcm5343
 */
public class SortArrayListOfObjects {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Item test = new Item();
        test.setName("ZZZ");
        test.setPrice(5000);
        
        Item test2 = new Item();
        test2.setName("AAA");
        test2.setPrice(490);
        
        ArrayList<Item> array = new ArrayList<>(); // create list to hold items
        array.add(test);
        array.add(test2);
        
        Collections.sort(array, new NameSorter()); // sorts the array by string
        System.out.println(array.get(0).getName());
        System.out.println(array.get(1).getName());
        
        Collections.sort(array, new PriceSorter()); // sorts the array by int
        System.out.println(array.get(0).getPrice());
        System.out.println(array.get(1).getPrice());
        
        System.out.println("Press x to finish: ");
        Scanner input = new Scanner(System.in);
        
        // loops until user inputs "x"
        Boolean x = true;
        while (x) {
            if ("x".equals(input.next())) {
                x = false;
            }
        }
        
    } // end of main
    
} // end of class