g++ -c .\car.cpp .\bike.cpp .\vehicle.cpp .\vehicle_factory.cpp
ar r vehicle_library.a car.o bike.o vehicle_factory.o
g++ -o client client.cpp vehicle_library.a
./client.exe