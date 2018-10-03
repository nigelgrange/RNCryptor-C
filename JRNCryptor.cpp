#include "com_nigelgrange_jrncryptor_JRNCryptor.h"
#include <ctype.h>
#include <string.h>

extern "C" {
#include "rncryptor_c.h"
}

JNIEXPORT jbyteArray JNICALL Java_com_nigelgrange_jrncryptor_JRNCryptor_encryptWithPassword
  (JNIEnv *env, jobject obj, jbyteArray dataIn, jstring password) {
  
    const char* passwordStr = env->GetStringUTFChars(string, 0);

    int outDataLen = 0;
        char errbuf[BUFSIZ];

    
    const unsigned char* myData = (const unsigned char*)"MYDATA";
    
    unsigned char* decrypted = rncryptorc_decrypt_data_with_password(myData, 6, 
    RNCRYPTOR3_KDF_ITER,
    password,
    strlen(password),
    &outDataLen,
    errbuf,sizeof(errbuf)-1);
    
    printf("NativeDecrypt:%s", errbuf);



	jbyte a[] = {1,2,3,4,5,6};
    jbyteArray ret = env->NewByteArray(6);
    env->SetByteArrayRegion (ret, 0, 6, a);
    return ret;
          
  }
  
  
JNIEXPORT jbyteArray JNICALL Java_com_nigelgrange_jrncryptor_JRNCryptor_decryptWithPassword
  (JNIEnv *env, jobject obj, jbyteArray dataIn, jstring password) {
  
	jbyte a[] = {6,5,4,3,2,1};
    jbyteArray ret = env->NewByteArray(6);
    env->SetByteArrayRegion (ret, 0, 6, a);
    return ret;
    
  }
