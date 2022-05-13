void del(struct Student *head,int n)
{
	int cnt = 1;
	struct Student* p, *q;
	p = head->next;
	while (p->next && cnt < n)
	{
		p = p->next;
		cnt++;
	}
	if (!(p->next))//p->next是要删除的节点
		return 0;
	q = p->next;//此时q为被删除节点本身，p为被删除节点前一个节点
	p->next = q->next;//将被删除的节点前一个节点指针域指向后一个节点
	free(q);
	return 1;
}

void insert(struct Student* head, int n,int s,int num)
{
	struct Student* p, * q;
	int cnt = 1;
	p = head->next;
	while (p && cnt < n)
	{
		cnt++;
		p = p->next;
	}
	if (!p)
		return 0;
	q = (struct Student*)malloc(sizeof(LEN));//初始化要开辟的节点q
	q->num = s;//为q赋值
	q->score = num;
	q->next = p->next;//另q的指针域指向P的下一个节点，因为q插在p和下一个节点之间
	p->next = q;
}