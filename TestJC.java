import com.nigelgrange.jrncryptor.*;

class TestJC {

public static void main(String[] args) {
	System.out.println("Test");

	JRNCryptor jc = new JRNCryptor();
	
	byte[] data = new byte[5];
	for (int i=0; i<5; i++) {
	data[i] = (byte)i;
	}
	
	byte[] enc = jc.encryptWithPassword(data, "pwd");
	
	System.out.println("Enc count = "+enc.length);
	
	byte[] dec = jc.decryptWithPassword(enc, "pwd");
	
	System.out.println("Dec count = "+dec.length);
		for (int i=0; i<dec.length; i++) {
		System.out.println(i+" = "+dec[i]);
	}


}

}
