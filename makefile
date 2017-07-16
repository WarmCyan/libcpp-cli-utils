.PHONY: test clean
	

test: test_ProgressBar 
	./test_ProgressBar
	make clean
	
test_ProgressBar: ProgressBar.o
	cp src/ProgressBar.h test
	g++ ProgressBar.o test/ProgressBarTest.cpp -o test_ProgressBar
	rm test/ProgressBar.h

test_Ascii:
	g++ test/AsciiTest.cpp -o test_Ascii

ProgressBar.o:
	g++ -c src/ProgressBar.cpp

clean:
	rm *.o
	rm test_*
