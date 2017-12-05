void sub_reverse(int a, int b, char* str);

void reverse(char * str,int n,int d) {

	if (d < 0) {
		d = -d;
		sub_reverse(0, d-1, str);
		sub_reverse(d, n-1, str);
		sub_reverse(0, n-1, str);
	}
	else {

		sub_reverse(n - d, n - 1, str);
		sub_reverse(0, n - d - 1, str);
		sub_reverse(0, n - 1, str);
	}
}

void sub_reverse(int a, int b, char* str) {

	char temp;
	for (int i = 0; i <= (b - a)/2 ; i++) {
		temp = str[a + i];
		str[a + i] = str[b - i];
		str[b - i] = temp;
	}
}
