int main() 

{   
	struct Node *temp;       
	root=RInsert(root,50);    
	RInsert(root,10);    
	RInsert(root,40);

    RInsert(root,20);  
    RInsert(root,30);

    Delete(root,30); 

    Inorder(root);  
    printf("\n");     

    temp=Search(20);   
    if(temp!=NULL)    
	    printf("element %d is found\n",temp->data);  
    else        
	    printf("element is not found\n");      
    return 0;
}
