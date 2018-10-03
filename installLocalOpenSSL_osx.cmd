wget https://www.openssl.org/source/openssl-1.0.2o.tar.gz
tar -xf openssl-1.0.2o.tar.gz
rm openssl-1.0.2o.tar.gz
cd openssl-1.0.2o
./Configure darwin64-x86_64-cc
make

