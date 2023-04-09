g++ ./*.cxx ./test.cpp -fmodules-ts -v -c  -l cppunit  -I ./

g++ ./*.o -fmodules-ts -v   -l cppunit -o ./test.bin -I ./
