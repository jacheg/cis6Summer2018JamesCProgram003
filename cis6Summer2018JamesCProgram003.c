/**
* Program Name: cis6Summer2018JamesCProgram003.c
* Discussion:   Sorting Arrays
* Written By:   JamesC
* Date:         2018/07/23
*/

#include <stdio.h>

// Function Prototypes

void sortBubble1V3(int[], int);
void printAry(int[], int);
void inputAry(int[], int);
void doOptionOne(int);

int main() {
	int ary[4] = { 0 };
	int ary2[10] = { 0, -2, 3, 5, 100, 85, -1000, 53, 2, -5};
	int usrValue = 1;

	printf("\n Entering Values for array elements --\n");
	//inputAry(ary, 4);

	printf("\nBefore Sorting --\n");
	//printAry(ary, 4);

	sortBubble1V3(ary, 4);

	printf("\n\nAfter Sorting --\n");
	//printAry(ary, 4);

	doOptionOne(usrValue);
	return 0;
}

// Function Definitions 

void doOptionOne(int usrValue) {

	if (usrValue == 0) {
		printf("\n  The given value is ZERO!");
	}
	else if ((usrValue % 10) % 2 == 0) {
		printf("\n  %d is an even value!", usrValue);
	}
	else {
		printf("\n  %d is an odd value!", usrValue);
	}
}

void inputAry(int ary[], int size) {
	for (int i = 0; i < size; i++) {
		printf("\nEnter value for element of index %d: ", i);
		scanf("%d", &ary[i]);
	}
}

void sortBubble1V3(int ary[], int size) {
	int tmp;

	//GOAL #1: Largest index to [0]
	for (int i = 0; i < (size - 1); i++) {
		for (int j = i + 1; j < size; j++) {
			if (ary[i] < ary[j]) {
				tmp = ary[i];
				ary[i] = ary[j];
				ary[j] = tmp;
			}
		}
	}
}

void printAry(int ary[], int size) {
	for (int i = 0; i < size; i++) {
		printf("Element of index %d : %d\n", i, ary[i]);
	}
}

/*Program Output
Output from Control+F5
Don't use * for Output
*/

/*Comments
* No Comments
* Always include something here
*/