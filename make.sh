g++ -fmodules-ts -v -c ./*.cxx -l cppunit  -I ./ 
g++ ./*.cxx  ./test.cpp -fmodules-ts -v   -l cppunit -o ./test.bin -I ./ 
