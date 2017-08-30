#pragma once
#ifndef _NAME_CARD_H__
#define _NAME_CARD_H__

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct __namecard
{
	char name[NAME_LEN];
	char phone[PHONE_LEN];
} NameCard;

//namecard ����ü ������ ���� �Ҵ� �� �ʱ�ȭ �� �ּ� �� ��ȯ
NameCard *MakeNameCard(char *name, char *phone);

//namecard ����ü ������ ���� ���

void ShowNameCardInfo(NameCard*pcard);

//�̸��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
int NameCompared(NameCard*pcard, char*name);

//��ȭ��ȣ ������ ����
void ChangePhoneNum(NameCard*pcard, char*phone);


#endif
