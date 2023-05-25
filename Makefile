CXX := g++
CXXFLAGS := -I../libvim/src -I../libvim/src/proto -DHAVE_CONFIG_H -fpermissive -std=c++2a -I/usr/local/include
LIBFILE := ../libvim/src/libvim.a
LIBFLAGS := -lm -lncurses

.PHONY: clean

default:
	$(CXX) $(CXXFLAGS) src/main.cpp -o main $(LIBFILE) $(LIBFLAGS)

clean:
	@rm *.o
