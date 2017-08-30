#include <stdio.h>
#include <stdlib.h>
#include "Arraylist.h"
#include "Namecard.h"

int main(void) {

	List list;
	
	NameCard *ncard;

	ListInit(&list);

	//3���� ������ ���� 
	ncard=MakeNameCard("woongki"," 01025490376");
	LInsert(&list, ncard);

	ncard=MakeNameCard("happy", "01010041004");
	LInsert(&list, ncard);

	ncard=MakeNameCard("hehe", "01058465156");
	LInsert(&list, ncard);


	//woongki��� �̸��� Ž���Ͽ� ���� ���
	if (LFirst(&list, &ncard))
	{
		if (NameCompared(ncard, "woongki") == 0)
			ShowNameCardInfo(ncard);

		while (LNext(&list, &ncard))
		{
			if (NameCompared(ncard, "woongki") == 0)
				ShowNameCardInfo(ncard);
		}
	}

	printf("\n\n");
	//woongki��� �̸��� Ž���Ͽ� ��ȭ��ȣ ����
	if (LFirst(&list, &ncard))
	{
		if (NameCompared(ncard, "woongki") == 0)
			ChangePhoneNum(ncard, "01077777777");

		while (LNext(&list, &ncard))
		{
			if (NameCompared(ncard, "woongki") == 0)
				ChangePhoneNum(ncard, "01077777777");
		}
	}


	//hehe��� �̸��� Ž���Ͽ� ���� ����
	if (LFirst(&list, &ncard))
	{
		if (NameCompared(ncard, "hehe") == 0)
		{
			ncard = LRemove(&list);
			free(ncard);
		}
		while (LNext(&list, &ncard))
		{
			if (NameCompared(ncard, "hehe") == 0)
			{
				ncard = LRemove(&list);
				free(ncard);
			}
		}
	}

	//������ ������� ��ȭ��ȣ ���� ���
	if (LFirst(&list, &ncard))
	{
		ShowNameCardInfo(ncard);
		while (LNext(&list, &ncard))
		{
			ShowNameCardInfo(ncard);
		}
	}

	getchar();
	return 0;
}