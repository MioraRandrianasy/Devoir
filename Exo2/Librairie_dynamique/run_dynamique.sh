g++ -c CodeActivation.cpp -o CodeActivation.o
g++ -fPIC -c CodeActivation.cpp -o CodeActivation.o
g++ -o libactivation.so -shared CodeActivation.o
