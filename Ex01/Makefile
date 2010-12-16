CC     	= g++
CFLAGS 	= -O2 -g -Wall -fmessage-length=0

OBJ = main1

MAIN01 = main1
MAIN02 = main2
MAIN03 = main3
MAIN09 = main9
MAIN10 = main10
MAIN11 = main11
MAIN12 = main12
TEST = test

#all: $(MAIN01) $(MAIN02) $(MAIN03) $(MAIN09) $(MAIN10) $(MAIN11) $(MAIN12) 
#all: $(TEST)
all: $(MAIN12)

$(TEST): $(TEST).o $(TEST).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	 
$(MAIN01): $(MAIN01).o $(MAIN01).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp

$(MAIN02): $(MAIN02).o $(MAIN02).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	
$(MAIN03): $(MAIN03).o $(MAIN03).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	
$(MAIN09): $(MAIN09).o $(MAIN09).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	
$(MAIN10): $(MAIN10).o $(MAIN10).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	
$(MAIN11): $(MAIN11).o $(MAIN11).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	
$(MAIN12): $(MAIN12).o $(MAIN12).cpp
	$(CC) $(CFLAGS) -o $@ $@.cpp
	./main12
	
clean:
	rm -f ./$(MAIN01) ./$(MAIN02) ./$(MAIN03) ./$(MAIN09) ./$(MAIN10) ./$(MAIN11) ./$(MAIN12)
	rm -f ./$(MAIN01).exe ./$(MAIN02).exe ./$(MAIN03).exe ./$(MAIN09).exe ./$(MAIN10).exe ./$(MAIN11).exe ./$(MAIN12).exe
	rm -f ./$(MAIN01).o ./$(MAIN02).o ./$(MAIN03).o ./$(MAIN09).o ./$(MAIN10).o ./$(MAIN11).o ./$(MAIN12).o
 
.PHONY: clean
