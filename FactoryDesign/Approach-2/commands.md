g++ -c .\car.cpp .\bike.cpp .\vehicle.cpp
ar r vehicle_library.a car.o bike.o
g++ -o client client.cpp vehicle_library.a
./client.exe