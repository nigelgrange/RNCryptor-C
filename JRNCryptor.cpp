#include "com_nigelgrange_jrncryptor_JRNCryptor.h"
#include <ctype.h>
#include <string.h>

extern "C" {
#include "rncryptor_c.h"
}

JNIEXPORT jbyteArray JNICALL Java_com_nigelgrange_jrncryptor_JRNCryptor_encryptWithPassword
  (JNIEnv *env, jobject obj, jbyteArray dataIn, jstring password) {
  
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
