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
	if (!(p->next))//p->next��Ҫɾ���Ľڵ�
		return 0;
	q = p->next;//��ʱqΪ��ɾ���ڵ㱾��pΪ��ɾ���ڵ�ǰһ���ڵ�
	p->next = q->next;//����ɾ���Ľڵ�ǰһ���ڵ�ָ����ָ���һ���ڵ�
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
	q = (struct Student*)malloc(sizeof(LEN));//��ʼ��Ҫ���ٵĽڵ�q
	q->num = s;//Ϊq��ֵ
	q->score = num;
	q->next = p->next;//��q��ָ����ָ��P����һ���ڵ㣬��Ϊq����p����һ���ڵ�֮��
	p->next = q;
}