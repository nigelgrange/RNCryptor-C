wget https://www.openssl.org/source/openssl-1.0.2o.tar.gz
tar -xf openssl-1.0.2o.tar.gz
rm openssl-1.0.2o.tar.gz
cd openssl-1.0.2o
 ./config -fPIC
make

