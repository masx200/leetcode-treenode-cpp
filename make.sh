g++ -fmodules-ts -v -c ./*.cxx -l cppunit  -I ./ 
g++ -fmodules-ts -v   -l cppunit -o ./test.bin -I ./ ./*.cxx  ./test.cpp
