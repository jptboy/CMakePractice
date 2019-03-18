# Eventually I want to implement Neural Networks in C++
# But for right now this was just a project to learn CMake

# Build Instructions
* Enter directory and `cmake .`
* `make all`
* executable will be in bin folder

# Add executable to path after building

* `cd ~`
* `mkdir ~/bin`
* `echo 'export PATH="/home/$USER/bin:$PATH"' >> ~/.bashrc`
* `source ~/.bashrc`
* `sudo ln -s $PATHTOTHISREPO/CMakePractice/bin/NNdemo ~/bin/NNdemo`

# Usage
* `NNdemo 20`

# remove executable from path
* `unlink ~/bin/NNdemo`
