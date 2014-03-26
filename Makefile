PROGRAM := max

$(PROGRAM).o: $(PROGRAM).c
	cc -c $<

$(PROGRAM): main.c $(PROGRAM).o
	cc -Wall -o $@ $<

.PHONY: clean
clean:
	rm -f $(PROGRAM) $(PROGRAM).o
