void insert(int key)

{
	struct node *t=root;
	struct node *r=NULL, *p;

	if (root==NULL)
	{

		p=(struct node *)malloc (sizeof(struct node));
                p->datad=key;
		p->lchild=p->rchild=NULL;
		root=p;
		return;
	}
	while(t!=NULL)
	{
		r=t;
		if(key<t->data)
			t=t->lchild;
		else if(key>t->data)
			t=t->rchild;
		else
			return;
	}

