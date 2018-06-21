import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        int height=0;
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        char c[]=word.toCharArray();
        int l=c.length;
        int area;
        for(int i=0;i<l;i++)
        {
            if(h[c[i]-'a']>height){height=h[c[i]-'a'];}
        }
        area=l*height;
        System.out.println(area);
    }
}
