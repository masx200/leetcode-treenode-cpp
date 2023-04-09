g++ ./*.cxx -fmodules-ts -v -c  -l cppunit  -I ./

g++ ./*.cxx  ./test.cpp -fmodules-ts -v   -l cppunit -o ./test.bin -I ./
