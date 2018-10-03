package com.nigelgrange.jrncryptor;

public class JRNCryptor {

 static {
 	System.loadLibrary("jrncryptor");
 	}
 	
 public native byte[] encryptWithPassword(byte[] data, String password);
 public native byte[] decryptWithPassword(byte[] data, String password);
}

