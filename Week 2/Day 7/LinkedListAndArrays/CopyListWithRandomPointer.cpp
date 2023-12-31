LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    LinkedListNode<int> *iter = head, *front = head;
    
    while(iter != NULL)
    {
        front = iter -> next;
        LinkedListNode<int> *copy = new LinkedListNode<int>(iter -> data);
        iter -> next = copy;
        copy -> next = front;
        iter = front;
    }
    
    iter = head;
    
    while(iter != NULL)
    {
        iter -> next -> random = iter -> random;
        iter = iter -> next -> next;
    }
    
    iter = head;
    LinkedListNode<int> *head2 = new LinkedListNode<int>(0), *copy = head2;
    
    while(iter != NULL)
    {
        front = iter -> next -> next;
        copy -> next = iter -> next;
        iter -> next = front;
        copy = copy -> next;
        iter = front;
    }
    
    return head2 -> next;
}
