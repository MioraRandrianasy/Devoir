g++ -c CodeActivation.cpp -o CodeActivation.o
g++ -fPIC -c CodeActivation.cpp -o CodeActivation.o
ar -rv libactivation.a CodeActivation.o
