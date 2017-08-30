#include <stdio.h>
#include "Namecard.h"
#include <stdlib.h>

NameCard *MakeNameCard(char *name, char *phone)
{
	NameCard *ncard= (NameCard*)malloc(sizeof(NameCard));
	strcpy(ncard->name, name);
	strcpy(ncard->phone, phone);
	return ncard;
}


void ShowNameCardInfo(NameCard*pcard)
{
	printf("�̸�: %s,  ��ȭ��ȣ: %s \n", pcard->name, pcard->phone);
}


int NameCompared(NameCard*pcard, char*name)
{
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard*pcard, char*phone)
{
	strcpy(pcard->phone, phone);
}
