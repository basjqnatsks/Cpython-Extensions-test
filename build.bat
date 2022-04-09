g++ -c test.cpp -pthread
g++ -static -shared -o test.dll test.o
pause