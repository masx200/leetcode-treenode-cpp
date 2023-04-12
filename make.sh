g++ ./*.ixx ./*.cpp -std=c++20 -v -fmodules-ts  -c  -l cppunit  -I "./"
g++ ./*.ixx ./*.cpp  -std=c++20 -v -fmodules-ts  -l cppunit -o ./test.bin -I "./"
