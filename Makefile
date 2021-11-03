C = clang++-9

all: main1_1 main1_2

main1_3: main1_3.cpp
	$(C) main1_3.cpp -o main1_3

main1_1: main1_1.cpp
	$(C) main1_1.cpp -o main1_1

main1_2: main1_2.cpp
	$(C) main1_2.cpp -o main1_2
clean:
	rm main1_1 main1_2 main1_3