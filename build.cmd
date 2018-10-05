export JAVA_HOME=$(/usr/libexec/java_home -v 1.8)
cc -dynamiclib -O3     -I/usr/include     -I$JAVA_HOME/include     -I$JAVA_HOME/include/darwin  -I ./openssl-1.0.2o/include -L.  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_STRING_H=1 -DHAVE_STRINGS_H=1 -DHAVE_MEMORY_H=1 -DHAVE_UNISTD_H=1 -DHAVE_CTYPE_H=1 -DHAVE_STDINT_H=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_STDLIB_H=1 -DHAVE_FCNTL_H=1 -DHAVE_SYS_FILE_H=1 -DHAVE_LIMITS_H=1 -DHAVE_SYS_SYSLIMITS_H=1 -DHAVE_RAND_R=1 -DHAVE_SOCKET=1 -DHAVE_GETADDRINFO=1 -DSIZEOF_VOID_P=8 -DHAVE_OPENSSL=1 -DUNIX -DHAVE_STRING_H=1 -DHAVE_STDLIB_H=1 -DHAVE_MATH_H=1 -L ./openssl-1.0.2o -lcrypto -lssl  JRNCryptor.cpp rncryptor_c.c mutils.c  -o libJRNCryptor.dylib
