#pragma once
namespace Algs {
	namespace structs_of_data
	{
		template<class T>
		struct node
		{
			T data;
			node* prev;
		};

		template<class T>
		class stack
		{
			node<T>* current;
			node<T>* heap;
			bool _empty;
			int count;
		public:
			stack();
			void push(T val);
			T pop();

			T top();

			bool empty();

			void clear();

			int size();

			~stack();
		};
	}
}

