/*
 * bindAirConditioning.h
 * Created on: Sep 25, 2018
 * Author: jerry
 * Description: ���ڽ�1·�յ��¿������󶨵�16·�յ�Э��ת���������485Э��ת��������ĳһ·��
 *              ����1·�յ�����״̬�ı佫ͨ������װ������Ӧ16·�յ�Э��ת������ĳһ·��
 *              ��ת��������ʵ�ʿյ���
 */

#ifndef SRC_BINDAIRCONDITIONING_H_
#define SRC_BINDAIRCONDITIONING_H_

/***************************************************
 * �������ƣ�bindListInit
 * ��   ���������ݿ��д����󶨱�����Ѿ���������ݰ󶨱��е����ݴ���������;
 * ����˵����@sqlite3 *pd�����ݿ�����������;
 * ���ؽ����0�ɹ���-1ʧ��
 **************************************************/
int bindListInit(sqlite3 *pd);

/***************************************************
 * �������ƣ�bindAddItem
 * ��   ���������ݿ�Ͱ���������Ӱ󶨹�ϵ;
 * ����˵����@char *targetAddr��16·�յ�Э��ת������ַ��mac;
 *         @int targetEndpoint��16·�յ�Э��ת�����ĵڼ�·��
 *         @char *pannelAddr��·�յ����ĵ�ַ
 * ���ؽ����0�ɹ���-1ʧ��
 **************************************************/
int bindAddItem(char *targetAddr,int targetEndpoint,char *pannelAddr);

/***************************************************
 * �������ƣ�bindDeleteAllItem
 * ��   ���������ݿ�Ͱ�������ɾ�����к͵�ַaddress�йص����а󶨹�ϵ;
 * ����˵����@char *address��16·�յ�Э��ת������1·�յ��¿�������ַ��mac;
 * ���ؽ����0�ɹ���-1ʧ��
 **************************************************/
int bindDeleteAllItem(char *address);

/***************************************************
 * �������ƣ�bindDeleteItem
 * ��   ���������ݿ�Ͱ�������ɾ��ĳһ���󶨹�ϵ;
 * ����˵����@char *targetAddr��16·�յ�Э��ת������ַ��mac;
 *         @int targetEndpoint��16·�յ�Э��ת�����ĵڼ�·��
 *         @char *pannelAddr��1·�յ����ĵ�ַ
 * ���ؽ����0�ɹ���-1ʧ��
 **************************************************/
int bindDeleteItem(char *targetAddr,int targetEndpoint,char *pannelAddr);

/***************************************************
 * �������ƣ�bindClearList
 * ��   ���������ݿ�Ͱ�������ɾ�����а󶨹�ϵ;
 * ����˵����
 * ���ؽ����0�ɹ���-1ʧ��
 **************************************************/
int bindClearList();

/***************************************************
 * �������ƣ�bindCheck
 * ��   ������ѯ1·�յ�����Ƿ���ڰ󶨹�ϵ;
 * ����˵����@char *pannelAddr��1·�յ����ĵ�ַ
 * 		   @char *targetAddr�����а󶨹�ϵ���˴�����16·�յ�Э��ת������ַ��mac;
 *         @int targetEndpoint�����а󶨹�ϵ���˴�����16·�յ�Э��ת�����ĵڼ�·��
 * ���ؽ����0�ɹ���-1�����ڰ󶨹�ϵ
 **************************************************/
int bindCheck(char *pannelAddr,char *targetAddr,int *targetEndpoint);

/***************************************************
 * �������ƣ�bindQueryList
 * ��   ������ѯ�յ�Э��ת�������еİ󶨹�ϵ����;
 * ����˵����@char *targetAddr��16·�յ�Э��ת������ַ��mac;
 * 		   char *outBuff������󶨹�ϵ��jsong��ʽ
 * ���ؽ���������0�ɹ�
 **************************************************/
int bindQueryList(char *targetAddr,char *outBuff);

/***************************************************
 * �������ƣ�packageAirBindResult
 * ��   ��������󶨲���ִ�н���ϱ���Ϣ;
 * ����˵����@char *deviceId��16·�յ�Э��ת������ַ��mac
 * 		   @char *key���������ͣ�A��Ӱ󶨣�Dɾ���󶨣�C������а�
 * 		   @char *pannelAddr��1·�յ����ĵ�ַ;
 *         @int endpont���󶨵�16·�յ�Э��ת�����ĵڼ�·��
 *         @char *result���������
 *         @char*outBuff���������õ�JOSN�ַ���
 * ���ؽ������
 **************************************************/
void packageAirBindResult(char *deviceId, char *key, char *pannelAddr,char *endpont,char *result,char*outBuff);

#endif /* SRC_BINDAIRCONDITIONING_H_ */
