CXX := g++
CXXFLAGS := -I../libvim/src -I../libvim/src/proto -DHAVE_CONFIG_H -fpermissive -std=c++2a
LIBFILE := ../libvim/src/libvim.a
LIBFLAGS := -lm -lncurses

.PHONY: clean

default:
	$(CXX) $(CXXFLAGS) main.cpp util.cpp -o main $(LIBFILE) $(LIBFLAGS)

clean:
	@rm *.o
