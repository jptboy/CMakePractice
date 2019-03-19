# Eventually I want to implement AI algorithms such as CNNs in C++
# But for right now this was just a project to learn CMake

# Build Instructions For Library And Demo/Test Program
* Demo executable cppaidemo will be in bin folder
* Shared Library libcppai.so will be in the lib folder
* If you only wish to build the demo program
 * Make sure the library is present and in the lib folder
 * `rm CMakeCache.txt`
 * `cmake -DBUILDLIB=OFF -DBUILDDEMO=ON .`
 * `make all`
* If you only wish to build the library
 * `rm CMakeCache.txt`
 * `cmake -DBUILDLIB=ON -DBUILDDEMO=OFF .`
 * `make all`
* If you wish to build both the library and the demo program
 * `rm CMakeCache.txt`
 * `cmake -DBUILDLIB=ON -DBUILDDEMO=ON .`
 * `make all`
* To clean Binaries
 * `make clean`

# Add demo program to path after building

* `cd ~`
* `mkdir ~/bin`
* `echo 'export PATH="/home/$USER/bin:$PATH"' >> ~/.bashrc`
* `source ~/.bashrc`
* `sudo ln -s <FULLPATHTODIRECTORYTHATCONTAINSTHISREPO>/CMakePractice/bin/cppaidemo ~/bin/cppaidemo`

# Usage
* `cppaidemo 20`

# remove executable from path
* `unlink ~/bin/cppaidemo`

# How to use this library

* Create ~/lib and ~/include folders in your ~ directory
 * `mkdir ~/lib`
 * `mkdir ~/include`
 * `cp -r <FULLPATHTODIRECTORYTHATCONTAINSTHISREPO>/CMakePractice/lib/* ~/lib/`
 * `cp -r <FULLPATHTODIRECTORYTHATCONTAINSTHISREPO>/CMakePractice/include/* ~/include/`

* `Compile your programs that use this library this way`
 * Obvious include the header files in your actual code to use this library
 * add these flags to g++
 * `-I~/include` `-L~/lib` `-lcppai`
 * e.g if your program is main.cpp `g++ -I~/include -L~/lib main.cpp -lcppai -o main`