#include <iostream> 
#include <cstdio>
#include <memory>

template<typename T> class Stack { 
	T* data; 
	size_t index = 0; 
	size_t size = 0; 
	Stack(size_t _size){ 
		size = _size; 
	       	data = static_cast<T*>(sizeof(T)*size);	
	}
	void push(T val){ 
		data[index++] = val; 
	} 
	T pop(){
		return data[index--]; 
	} 
	T operator[](int x) const { 
		return data[x]; 
		/**
		 * this is a work around for jumping 
		 * a true FILO stack wouldn't alow you to
		 * index. 
		 * However I am just implementing a stack
		 * based state machine not a whole 
		 * cpu so this is fine; 
		 * */
	} 	


};
int main(int argc, char* argv[]){ 
 



}
