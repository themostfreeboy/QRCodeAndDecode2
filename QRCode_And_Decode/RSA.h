/*
RSA�����㷨˵��:

p:����(����)

q:����(����)

n=p*q(����)

e:(����)
����:e��(p-1)*(q-1)����

d:(����)
����:e*d = 1 (mod ((p-1)*(q-1)) )

m:����(m>=0&&m<n)

c:����(c>=0&&c<n)

�����㷨:
c=m^e mod n

�����㷨:
m=c^d mod n

*/

#pragma once

#ifndef __RSA_H
#define __RSA_H


#include <math.h>
#include <time.h>
#include <stdio.h>

int Prime_Judge(int number);//�ж�number�Ƿ�Ϊ����
int Greatest_Common_Divisor_Calculate(int number1,int number2);//����number1��number2�����Լ��(շת�����)
int RSA_All_Check(int p,int q,int n,int e,int d);//���RSA�㷨�е����в����Ƿ���ȷ
int RSA_d_Calculate(int p,int q,int e);//����RSA�㷨�е�d��ֵ
int RSA_Code(int e,int n,int m);//RSA�����㷨c=m^e mod n
int RSA_Decode(int d,int n,int c);//RSA�����㷨m=c^d mod n
void Random(int min,int max,int number,int data[]);//����min��max֮���number�������,������ݴ洢��data������
void RSA_Key_Create(int e_min,int e_max,int number);//����number�����RSA�㷨��Կ����
void Print_Prime(int min,int max);//��ʾmin��max֮�����������
void RSA_e_Calculate(int p,int q,int min,int max);//��֪p��q������min��max֮�����������e��ֵ
void RSA_Print_SmallKey();//Ϊ������1��char��8λ���ݵı���룬��ֹint�ͷ�Χ�����������С��RSA�㷨����Կ����
int RSA_KeyResult_Check(int p,int q,int n,int e,int d);//Ϊ������1��char��8λ���ݵı���룬��0-255���ܽ��ܵĽ������У��
void RSA_File_Code(const char* readfilename, const char* writefilename,int e,int n);//RSA�㷨���ļ�����(�˺�����ƻ���p=131,q=223,n=29213,e=133,d=217)
void RSA_File_Decode(const char* readfilename, const char* writefilename,int d,int n);//RSA�㷨���ļ�����(�˺�����ƻ���p=131,q=223,n=29213,e=133,d=217)

#endif