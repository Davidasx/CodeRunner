@echo off
echo Will use g++ and go to build CodeRunner.
pause
g++ coderun.cpp -o coderun.exe -std=c++14
g++ crun.cpp -o crun.exe -std=c++14
go build main.go
copy main.exe parse2cf.exe
del main.exe
echo All Done!
pause