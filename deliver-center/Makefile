
CC = gcc
CXX = g++

objs = main.o boxs.o delivers.o messager.o
bin = deliver
libs = -lIce++11

IceSrc = ../cpp
Inc = -I$(IceSrc)
Lnk = 

CFLAGS = -g -DICE_CPP11_MAPPING

$(bin): $(objs)
	$(CXX) -o $(bin) $(objs) $(libs)

main.o: delivers.h main.cpp
	$(CC) -c $(CFLAGS) $(Inc) main.cpp

boxs.o: $(IceSrc)/messager.h delivers.h boxs.cpp
	$(CC) -c $(CFLAGS) $(Inc) boxs.cpp

delivers.o: $(IceSrc)/messager.h boxs.h delivers.cpp
	$(CC) -c $(CFLAGS) $(Inc) delivers.cpp

messager.o: $(IceSrc)/messager.h $(IceSrc)/messager.cpp
	$(CC) -c $(CFLAGS) $(Inc) $(IceSrc)/messager.cpp


clean:
	rm -f $(objs) $(bin)
