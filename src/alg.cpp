// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int a = 0;
for (int i = 0; i < len-1; i++) {
for (int j = i+1; j <= len; j++) {
if (arr[i] + arr[j] == value) a=a+1 ;
}
}
return a;
}
int countPairs2(int *arr, int len, int value) {
int a = 0, l = 0;
for (int i = 0; i < len; i++) {
if (arr[i] >= value) {
l = i;
break;
}
}
for (int i = l; i >= 0; i--) {
for (int j = 0; j < i; j++) {
if (arr[i] + arr[j] == value)
a++;
}
}
return a;
}
int countPairs3(int *arr, int len, int value) {
int count = 0, left = 0, right = len - 1;
int a = 0, l = 0;
for (int i = 0; i < len; i++) {
if (arr[i] >= value) {
l = i;
break;
}
}
cout << l << endl;
for (int i = 0; i <= l; i++) {
left = i + 1, right = l;
while (left < right) {
int m = (left + right) / 2;
if (arr[m] < (value - arr[i]))
left = m;
else
right = m;
}
cout << left << endl;
while (arr[left] == (value - arr[i])) {
a++;
left++;
}
}
return a;
}
