#include <stdio.h>
struct Math {
	int a, b;
	int Add();
};
int Math::Add() {
	return a + b;
}
int main(){
	Math me;
	me.a = 2;
	me.b = 3;
	printf("%d\n", me.Add());
}