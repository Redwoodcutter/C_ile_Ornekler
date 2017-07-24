#include <stdio.h>
#include <stdlib.h>
struct student{
	int no;
	char name[40];
	int age;
	struct student *next;
};

typedef struct student node;

node *head, *newNode;

node* create_list(){
	int n,k;
	node *head,*p;
	printf("kac ogrenci var?\n");
	scanf("%d",&n);
	
	for(k=0;k<n;k++){
		if(k==0){
		head=(node *)malloc(sizeof(node));
		p=head;
	}
	else{
		p->next=(node *)malloc(sizeof(node));
		p=p->next;
	}
	printf("Ogrenci Numarası :\n");
	scanf("%d",&p->no);
	printf("Ogrenci Adı :");
	scanf("%s",p->name);
	printf("Ogrenci Yasi :");
	scanf("%d",&p->age);
}
p->next=NULL;
return head;
}
void traverse_list(node* head){
	int cnt=1;
	node *p;
	p=head;
	while(p!=NULL){
		printf("%d %d %s %d\n",cnt,p->no,p->name,p->age);
		p=p->next;
		cnt++;
	}
}
node* add_node(node* head){
	int stdNo;
	node *p,*q;
	node *newNode=(node *)malloc(sizeof(node));


	printf("Ogrenci Numarası : \n");
	scanf("%d",&newNode->no);
	printf("Ogrenci Adı : \n");
	scanf("%s",newNode->name);
	printf("Ogrenci Yasi : \n");
	scanf("%d",&newNode->age);

	printf("nerden sonra eklenecek?\n");
	printf("sona eklemek için 0 girin\n");
	scanf("%d",&stdNo);
	
	p=head;
	if(p->no == stdNo){
		newNode->next=p;
		head=newNode;
	}
	else{
		while(p->next != NULL && p->no != stdNo){
			q=p;
			p=p->next;
		}
		if(p->no == stdNo){
			q->next = newNode;
			newNode->next=p;
		}
		else if(p->next == NULL){
 		p->next=newNode;
		newNode->next=NULL;
		}
	}	
	return head;
}
node* delet_node(node *head){
	int stdNo;
	node *p,*q;
	printf("silinecek numarayi girin\n");
	scanf("%d",&stdNo);
	
	p=head;
	if(p->no == stdNo){
		head = p->next;
		free(p);
	}
	else{
	while(p->next != NULL && p->no != stdNo){
		q=p;
		p=p->next;
	}
	if(p->no == stdNo){
		q->next = p->next;
		free(p);
	}
	else if(p->next == NULL){
		printf("girdi bulunamadı");
	}
	}
	return head;
}
int main(){
	node *head;
	int selection=0;
	printf("1-liste olustur \n 2- liste gez\n 3-note ekle\n 4-dugum sil\n5-cikis\n");
while(1){
	printf("selection [1-5]? \n");
	scanf("%d",&selection);
	switch(selection){
		case 1: head=create_list();break;
		case 2: traverse_list(head);break;
		case 3: head=add_node(head);traverse_list(head);break;
		case 4: head=delet_node(head);traverse_list(head);break;
		case 5: exit(0);
		
	                 }
    	}
} 
