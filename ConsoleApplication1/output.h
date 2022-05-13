
void print(struct Student* head)
{
	struct Student* p;
	p = head;
	if(head!=0)
		do
		{
			printf("%ld %5.1lf\n", p->num, p->score);
			p = p->next;
		} while (p != 0);
}
