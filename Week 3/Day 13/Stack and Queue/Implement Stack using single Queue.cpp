class MyStack {
    Queue<Integer> q1;
    Queue<Integer> q2;
    public MyStack() {
        q1 = new LinkedList<>();
        q2 = new LinkedList<>();
    }
    
    public void push(int x) {
        q2.add(x);
        while(!q1.isEmpty()){
            q2.add(q1.remove());
        }
        Queue<Integer> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    public int pop() {
        int removed = q1.remove();
        return removed;
    }
    
    public int top() {
        int peeked = q1.peek();
        return peeked;
    }
    
    public boolean empty() {
        return q1.isEmpty();
    }
}
