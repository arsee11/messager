
CC = gcc
CXX = g++

objs = main.o receiver.o messager.o
bin = client
libs = -lIce++11

IceSrc = ../cpp
Inc = -I$(IceSrc)
Lnk = 

CFLAGS = -g -DICE_CPP11_MAPPING

$(bin): $(objs)
	$(CXX) -o $(bin) $(objs) $(libs)

main.o: receiver.h main.cpp
	$(CC) -c $(CFLAGS) $(Inc) main.cpp

receiver.o: $(IceSrc)/messager.h receiver.cpp
	$(CC) -c $(CFLAGS) $(Inc) receiver.cpp

messager.o: $(IceSrc)/messager.h $(IceSrc)/messager.cpp
	$(CC) -c $(CFLAGS) $(Inc) $(IceSrc)/messager.cpp


clean:
	rm -f $(objs) $(bin)
