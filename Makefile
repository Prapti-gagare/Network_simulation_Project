CC=gcc
CCFLAGS=-c -I.
DEPS=MS2504_func.h MS2504_param.h
TARGET=Network_Simulation_2026
OBJS=MS2504_main.o \
     MS2504_func.o

%.o: %.c $(DEPS)
	$(CC) -o $@ $(CCFLAGS) $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
