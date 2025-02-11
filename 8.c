// import statements   
import java.math.BigInteger;   
import java.security.NoSuchAlgorithmException;   
import java.security.MessageDigest;   
// A Java program that uses the MD5 to do the hashing   
public class MD5    
{   
public static String getMd5(String input)   
{   
try    
{   
// invoking the static getInstance() method of the 
MessageDigest class      
MessageDigest msgDst = MessageDigest.getInstance("MD5");     
byte[] msgArr = msgDst.digest(input.getBytes());   
BigInteger bi = new BigInteger(1, msgArr);   
String hshtxt = bi.toString(16);   
while (hshtxt.length() < 32)    
{   
hshtxt = "0" + hshtxt;   
}   
return hshtxt;   
}   
catch (NoSuchAlgorithmException abc)    
{   
throw new RuntimeException(abc);   
}   
}   
public static void main(String argvs[]) throws NoSuchAlgorithmException   
{   

String str = "ssitise";   
String hash = getMd5(str);   
str = "'isedept'";   
System.out.println("The HashCode Generated for " + str + " 
is: " + hash);   
}   
} 