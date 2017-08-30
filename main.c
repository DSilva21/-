#include <stdio.h>
#include <stdlib.h>
#include "Arraylist.h"
#include "Namecard.h"

int main(void) {

	List list;
	
	NameCard *ncard;

	ListInit(&list);

	//3개의 데이터 저장 
	ncard=MakeNameCard("woongki"," 01025490376");
	LInsert(&list, ncard);

	ncard=MakeNameCard("happy", "01010041004");
	LInsert(&list, ncard);

	ncard=MakeNameCard("hehe", "01058465156");
	LInsert(&list, ncard);


	//woongki라는 이름을 탐색하여 정보 출력
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
	//woongki라는 이름을 탐색하여 전화번호 변경
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


	//hehe라는 이름을 탐색하여 정보 삭제
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

	//나머지 사람들의 전화번호 정보 출력
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