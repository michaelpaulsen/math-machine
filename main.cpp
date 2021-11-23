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

};
int main(int argc, char* argv[]){ 
 



}
