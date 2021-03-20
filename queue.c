#define max 20
int q[max];
int r=-1,f=-1;
void insert(int);
void delete1();
void display();
main()
{
    int ch,x;
    while(12)
    {
        printf("\nInsert:1\nDelete:2\nDisplay:3");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\nEnter data");
            scanf("%d",&x);
            insert(x);
            break;
        case 2:
            delete1();
            break;
        case 3:
            display();
            break;

        }
    }
}
void insert(int x)
{
    if(r==max-1)
        printf("Queue is full");
    else if(r==-1 && f==-1)
    {
        r=f=0;
        q[r]=x;
    }
    else
    {
        r++;
        q[r]=x;
    }
}
void delete1()
{
    if(r==-1 && f==-1)
        printf("Queue is underflow");
    else if(r==0 && f==0)
    {
        printf("delete data is=%d",q[f]);
        f=-1;
        r=-1;
    }
else
    {
        printf("delete data=%d",q[f]);
        f=f+1;
    }
}
void display()
{
    printf("Queue element are\n");
    for(int i=f;i<=r;i++)
printf("%d\t",q[i]);
}
