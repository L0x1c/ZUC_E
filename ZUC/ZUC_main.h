/*********************************************************************************
  *Copyright(C),�й�������������
  *FileName:���֮���������㷨_���㷨
  *Author:TFflyer
  *Version:V1.0
  *Date:2019-03-28
  *Description: demo and without main()����Ҫ�����Կ��������
  *Others: my email:myownflyer@foxmail.com
  *Function List:
	 1.ģ 2^31-1�ӷ�
	 2.���Է�����λ�Ĵ����ĳ�ʼ��
	 3.���Է�����λ�Ĵ�������ģʽ
	 4.��������
	 5.F�������Ժ����任
	 6.��ʼ��
	 7.������Կ����������
  *History:
	 1.Date:2019-03-29
	   Author:TFflyer
	   Modification:�ع������㷨��ͷ�ļ���ʹ�����㷨���Ա�˳������
**********************************************************************************/
#pragma once
typedef unsigned char u8;
typedef unsigned int u32;
u32 AddM(u32 a, u32 b);
void LFSRWithInitialisationMode(u32 u);
void LFSRWithWorkMode();
void BitReorganization();
u32 F();
void Initialization(u8* k, u8* iv);
void GenerateKeystream(u32* pKeystream, int KeystreamLen);
