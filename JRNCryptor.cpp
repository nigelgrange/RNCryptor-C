#include "com_nigelgrange_jrncryptor_JRNCryptor.h"
#include <ctype.h>
#include <string.h>

extern "C" {
#include "rncryptor_c.h"
}

JNIEXPORT jbyteArray JNICALL Java_com_nigelgrange_jrncryptor_JRNCryptor_encryptWithPassword
  (JNIEnv *env, jobject obj, jbyteArray dataIn, jstring password) {
  
    const char* passwordStr = env->GetStringUTFChars(password, 0);

    int outDataLen = 0;
    char errbuf[BUFSIZ];
    
    int dataLen = env->GetArrayLength(dataIn);
    unsigned char* dataBuf = (unsigned char*)malloc(dataLen);
    env->GetByteArrayRegion(dataIn, 0, dataLen, reinterpret_cast<jbyte*>(dataBuf));

    unsigned char* encrypted = rncryptorc_encrypt_data_with_password(dataBuf, dataLen, 
    RNCRYPTOR3_KDF_ITER,
    passwordStr,
    strlen(passwordStr),
    &outDataLen,
    errbuf,sizeof(errbuf)-1);

	free(dataBuf);
    

	jbyteArray ret = env->NewByteArray(outDataLen);
	env->SetByteArrayRegion(ret, 0, outDataLen, reinterpret_cast<jbyte*>(encrypted));

	free(encrypted);

    return ret;
          
  }
  
  
JNIEXPORT jbyteArray JNICALL Java_com_nigelgrange_jrncryptor_JRNCryptor_decryptWithPassword
  (JNIEnv *env, jobject obj, jbyteArray dataIn, jstring password) {
  
    const char* passwordStr = env->GetStringUTFChars(password, 0);

    int outDataLen = 0;
    char errbuf[BUFSIZ];
    
    int dataLen = env->GetArrayLength(dataIn);
    unsigned char* dataBuf = (unsigned char*)malloc(dataLen);
    env->GetByteArrayRegion(dataIn, 0, dataLen, reinterpret_cast<jbyte*>(dataBuf));

    unsigned char* decrypted = rncryptorc_decrypt_data_with_password(dataBuf, dataLen, 
    RNCRYPTOR3_KDF_ITER,
    passwordStr,
    strlen(passwordStr),
    &outDataLen,
    errbuf,sizeof(errbuf)-1);

	free(dataBuf);
    

	jbyteArray ret = env->NewByteArray(outDataLen);
	env->SetByteArrayRegion(ret, 0, outDataLen, reinterpret_cast<jbyte*>(decrypted));

	free(decrypted);
	
    return ret;
    
  }
