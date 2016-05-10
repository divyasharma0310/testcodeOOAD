class Stack
{
        private:
            int top;
            int _stack[10];
        public:
            Stack();
            void push(int value);
            int pop();
};