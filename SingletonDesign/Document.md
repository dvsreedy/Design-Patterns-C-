1) Make the constructor private.
2) static instance stores, the object.
3) get instance is used to create object , if its not created and return the object
4) when multiple threads are acessing the code, use the threadlock()
5) Double checked thread safe can be added , for better performance.
6) And we have to make copy constructor and = operator overloading empty, to make sure , there can be no instance created.


Commands:

1) g++ -o singleton .\logger.cpp .\client.cpp
2) ./singleton