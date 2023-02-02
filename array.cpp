#include<iostream>

using namespace std;

int main() {

	// char ch;
	// int count = 0;

	// while(true) {
	// 	ch = cin.get();
	// 	// cin >> ch;
	// 	if(ch == '$') {
	// 		break;
	// 	}
	// 	count++;
	// }

	// cout << "Number of characters = " << count << endl;

	int x;

	x = cin.get();

	cout << x << endl;

	return 0;
} 
 BIN +43.8 KB October/11thOctober2021/001CountCharacters.exe 
Binary file not shown.
 43  October/11thOctober2021/002CountCharacters2.cpp 
@@ -0,0 +1,43 @@
#include<iostream>

using namespace std;

int main() {

	char ch;

	int lowercase = 0;
	int uppercase = 0;
	int digits = 0;
	int whitespaces = 0;
	int special = 0;

	while(true) {
		ch = cin.get();
		if(ch == '$') {
			// special++;
			break;
		}

		if(ch >= 'a' && ch <= 'z') {
			lowercase++;
		} else if(ch >= 'A' && ch <= 'Z') {
			uppercase++;
		} else if(ch >= '0' && ch <= '9') {
			digits++;
		} else if(ch == ' ' || ch == '\n' || ch == '\t') {
			whitespaces++;
		} else {
			special++;
		}
	}

	cout << "#lowercase = " << lowercase << endl;
	cout << "#uppercase = " << uppercase << endl;
	cout << "#digits = " << digits << endl;
	cout << "#whitespaces = " << whitespaces << endl;
	cout << "#special = " << special << endl;


	return 0;
} 
 BIN +44.3 KB October/11thOctober2021/002CountCharacters2.exe 
Binary file not shown.
 84  October/11thOctober2021/003MinimumRoute.cpp 
@@ -0,0 +1,84 @@
#include<iostream>
#include<cmath>

using namespace std;

int main() {

	char ch;

	int x = 0; // used to store the net movement the person makes along the x-axis
	int y = 0; // used to store the net movement the person makes along the y axis

	while(true) {
		ch = cin.get();
		if(ch == '\n') {
			break;
		}

		if(ch == 'N') {
			y++;
		} else if(ch == 'S') {
			y--;
		} else if(ch == 'E') {
			x++;
		} else {
			x--;
		}
	}

	if(x >= 0 && y >= 0) {
		// destination is in the 1st quadrant

		// print x times 'E'
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print y times 'N'
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

	} else if(x <= 0 && y >= 0) {
		// destination is in the 2nd quadrant

		// print y times 'N'
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

		// print |x| times 'W'
		for(int i=1; i<=abs(x); i++) {
			cout << 'W';
		}

	} else if(x <= 0 && y <= 0) {
		// destination is in the 3rd quadrant

		// print |y| times 'S'
		for(int i=1; i<=abs(y); i++) {
			cout << 'S';
		}

		// print |x| times 'W'
		for(int i=1; i<=abs(x); i++) {
			cout << 'W';
		}

	} else {
		// destination is in the 4th quadrant

		// print x times 'E'
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// print |y| times 'S'
		for(int i=1; i<=abs(y); i++) {
			cout << 'S';
		}
	}

	return 0;
} 
 BIN +44.3 KB October/11thOctober2021/003MinimumRoute.exe 
Binary file not shown.
 32  October/11thOctober2021/004IntroductionToArrays.cpp 
@@ -0,0 +1,32 @@
#include<iostream>

using namespace std;

int main() {

	int A[5]; // array declaration
	int n = sizeof(A) / sizeof(int); // sizeof(A)/sizeof(A[0])

	// cout << sizeof(A) << endl;

	// read values into array
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	// print values in the array
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// print values in reverse
	for(int i=n-1; i>=0; i--) {
		cout << A[i] << " ";
	}

	cout << A[10] << endl; // do not exceed valid range of indices,
	                       // you can run into bugs at runtime

}
 BIN +44.2 KB October/11thOctober2021/004IntroductionToArrays.exe 
Binary file not shown.
 14  October/11thOctober2021/005ArrayInitialisation.cpp 
@@ -0,0 +1,14 @@
#include<iostream>

using namespace std;

int G[3];

int main() {

	cout << G[0] << " " << G[1] << " " << G[2] << endl;

	int A[3];

	cout << A[0] << " " << A[1] << " " << A[2] << endl;
} 
 BIN +43.8 KB October/11thOctober2021/005ArrayInitialisation.exe 
Binary file not shown.
 28  October/11thOctober2021/006ArrayInitialisation.cpp 
@@ -0,0 +1,28 @@
#include<iostream>

using namespace std;

int main() {

	// int A[5] = {10, 20, 30, 40, 50};

	// specifying the size of the array during initialisation is optional
	int A[] = {10, 20, 30, 40, 50};

	// you cannot specify more values in the initializer than the array size
	// int A[5] = {10, 20, 30, 40, 50, 60 , 70}; // error

	// if you give less values in the initializer, rest are filled with default values
	// int A[5] = {10, 20, 30};

	// int A[5] = {}; // all the elements will have the default value, 
				   // which for the built-in types in 0

	int n = sizeof(A) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

} 
 BIN +43.8 KB October/11thOctober2021/006ArrayInitialisation.exe 
Binary file not shown.
 35  October/11thOctober2021/007LinearSearch.cpp 
@@ -0,0 +1,35 @@
#include<iostream>

using namespace std;

int main() {

	int A[5] = {10, 20, 10, 30, 40};
	int n = sizeof(A) / sizeof(int);
	int key = 40;
	// int result = -1;

	// for(int i=0; i<n; i++) {
	// 	if(A[i] == key) {
	// 		result = i;
	// 		break;
	// 	}
	// }

	// cout << result << endl;

	int i;
	for(i=0; i<n; i++) {
		if(A[i] == key) {
			break;
		}
	}

	if(i == n) {
		cout << -1 << endl;
	} else {
		cout << i << endl;
	}

	return 0;
} 
 BIN +43.5 KB October/11thOctober2021/007LinearSearch.exe 
Binary file not shown.
 26  October/11thOctober2021/008ReverseArray.cpp 
@@ -0,0 +1,26 @@
#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(A) / sizeof(int);

	int i=0;
	int j=n-1;

	while(i < j) {
		swap(A[i], A[j]);
		i++;
		j--;
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
} 
 BIN +44.5 KB October/11thOctober2021/008ReverseArray.exe 
Binary file not shown.
 26  October/11thOctober2021/009GenerateSubarrays.cpp 
@@ -0,0 +1,26 @@
#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possive ending indices
		for(int j=i; j<n; j++) {
			// iterate over elements of a subarray that 
			// starts at index i and ends at index j
			for(int k=i; k<=j; k++){
				cout << A[k] << " ";
			}
			cout << endl;
		}

		cout << endl;
	}

	return 0;
} 