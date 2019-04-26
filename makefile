################################
# Eddie Negron
# CPSC1020 Spring 2019
# UserName: eddien
# Instructor:  Dr. Yvon Feaster
################################
build:
	g++ -Wall -std=c++11 -g Address.cpp Date.cpp Fruit.cpp Person.cpp ProduceStand.cpp Vegetable.cpp driver.cpp

run: build
	./a.out inputData.txt dailySalesOutput.txt customerOutput.txt
clean:
	rm customerOutput.txt dailySalesOutput.txt a.out
