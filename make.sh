g++ -fmodules-ts -v -c ./*.cxx -l cppunit  -I ./ 
g++ -fmodules-ts -v  ./test.cpp -l cppunit -o ./test.bin -I ./ 
