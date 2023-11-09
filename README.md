# GCC 4.8.5 buildable on Ubuntu 22.04

Build and install with:

```
git clone -b v4.8.5-ubuntu-22.04 git@github.com:gmarkall/gcc
mkdir build-gcc-4.8.5
cd build-gcc-4.8.5
../gcc/configure --enable-languages=c,c++,fortran --disable-multilib --prefix=<prefix> --disable-werror
make -jN
make install
```
