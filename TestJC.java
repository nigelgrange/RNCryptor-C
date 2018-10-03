import com.nigelgrange.jrncryptor.*;

class TestJC {

public static void main(String[] args) {
	System.out.println("Test");

	JRNCryptor jc = new JRNCryptor();
	
	byte[] data = new byte[5];
	
	byte[] enc = jc.encryptWithPassword(data, "pwd");
	
	System.out.println("Enc count = "+enc.length);

}

}
