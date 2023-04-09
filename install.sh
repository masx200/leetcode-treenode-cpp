cd ~

sudo apt install -y libcppunit-dev

cd ~
git clone https://gitcode.net/mirrors/microsoft/vcpkg
cd vcpkg
 sh bootstrap-vcpkg.sh
 
 
 ~/vcpkg/vcpkg integrate install
 
 ~/vcpkg/vcpkg install  cppunit
 
 
