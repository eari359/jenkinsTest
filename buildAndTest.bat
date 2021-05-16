rd /s /q build
mkdir build
cd build
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
ctest -C Release