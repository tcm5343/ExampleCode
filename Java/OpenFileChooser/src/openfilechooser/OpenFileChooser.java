/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package openfilechooser;

import java.io.IOException;
import javax.swing.JFileChooser;

/**
 *
 * @author miller
 */
public class OpenFileChooser {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        /*
            This method opens the native file explorer by executing a command
        */
//        // https://www.baeldung.com/run-shell-command-in-java
//        boolean isWindows = System.getProperty("os.name").toLowerCase().startsWith("windows");
//        try {
//            ProcessBuilder builder = new ProcessBuilder();
//            if (isWindows) 
//            {
//                // creates command prompt command to 
//                builder.command("cmd.exe", "/c", "dir");
//            } 
//            else {
//                // creates shell command to open the users home directory
//                builder.command("sh", "-c", "xdg-open " + System.getProperty("user.home"));
//            }
//            // navigates to the home directory
//            builder.directory(new File(System.getProperty("user.home")));
//            // runs the command
//            Process process = builder.start();
//        }
//        catch (IOException ex)
//        {
//            System.out.println("IOException: \n" + ex);
//        }
        
        /*
            This method uses the built in JFileChooser to select a directory path
        */
//        JFileChooser fc = new JFileChooser();
//        fc.setFileSelectionMode(JFileChooser.DIRECTORIES_ONLY);
//        int returnValue = fc.showOpenDialog(fc);
//        String filepath = null;
//        if (returnValue == JFileChooser.APPROVE_OPTION)
//        {
//            filepath = fc.getSelectedFile().getAbsolutePath();
//            
//            System.out.println(filepath);
//        } else {
//            System.out.println("das not good");
//        }
        
        /*
            This method is outdated but put here just in case
        */  
//        new java.awt.FileDialog((java.awt.Frame) null, "", FileDialog.LOAD).setVisible(true);
    }
    
}
