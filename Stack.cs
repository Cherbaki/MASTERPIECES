using System;

namespace MainNS{

    class StaticStack<T>{
        int size = 0;
        const int capacity = 10;
        T[] container = new T[capacity];
        public StaticStack(){
            
        }

        public StaticStack(in StaticStack<T> Zoro){
            foreach(T item in Zoro.container)
                Add(item);
        }

        public void Add(T data){
            if(!IsFull()){
                this.container[size] = data;
                size++; 
            }else{
                Console.WriteLine("Stack is full!!!");
            }

        }
        public void Delete(){
            if(!IsEmpty())
                size--;
            else 
                Console.WriteLine("Stack is already empty");
        }
        public void Display(){
            for(int i = 0; i < size;i++)
                Console.Write(this.container[i] + "\t");
            Console.WriteLine();
        }
        public bool IsEmpty(){
            return this.size == 0;
        }
        public bool IsFull(){
            return this.size == capacity;
        }

    }

}