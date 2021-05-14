/*******************************************************************************************************
**                                           File description
** File Name:           rex_export_type.h
** Description:         ����SDK����
** Creator:             xieshaobing
** Creation Date:       2017��4��7��
** Modify Log:          none
** Last Modified Date:  2017��4��7��
*******************************************************************************************************/

#ifndef __INC_REX_EXPORT_TYPE_H
#define __INC_REX_EXPORT_TYPE_H

/* If this is a C++ compiler, use C linkage */
#if defined(__cplusplus)
extern "C"
{
#endif

/** ��¼��־ˮƽ */
enum REX_LOG_LEVEL {
    //None������¼��־
    REX_LL_NONE = 0,
    //Error����¼������־
    REX_LL_ERROR,
    //Debug����¼������־+�������ø�����־
    REX_LL_DEBUG,
    //INFO����¼������־+�������ø�����־+�շ���Ϣ��־
    REX_LL_INFO
};

/** ������ʾˮƽ */
enum REX_TRACK_LEVEL {
    //None������ʾ
    REX_TL_NONE = 0,
    //Error����ʾ����
    REX_TL_ERROR,
    //Debug����ʾ����+�������ø���
    REX_TL_DEBUG,
    //INFO����ʾ����+�������ø���+�շ���Ϣ
    REX_TL_INFO
};

/** �ص��������� */
enum REX_CALLBACK_TYPE {
    //�豸�����ص�����
    REX_DEVICE_JOIN = 0,
    //�豸�����ص�����
    REX_DEVICE_LEAVE,
    //�ϱ�״̬���ݻص�����
    REX_REPORT_STATE_DATA,
    //�ϱ��¼����ݻص�����
    REX_REPORT_EVENT_DATA,
    //�ϱ��Զ������ݻص�����
    REX_REPORT_SELF_DEFINING_DATA
};

/**
 * REX_DEVICE_JOIN_CB
 *     �豸�����ص�����
 * address[in]: �豸��ַ
 * reporting[in]: �ϱ�����
 * type[in]: �豸����
 * model_id[in]: Model Id
 * return: 0�ɹ�,����-1
 * note: �豸��ַ����16��16�����ַ���ʾ������0000000000000000��~��FFFFFFFFFFFFFFFF��
 *       model_id�6���ֽ�
 */
typedef int (*REX_DEVICE_JOIN_CB)(char *address, unsigned short reporting, char *type, char *model_id);

/**
 * REX_DEVICE_LEAVE_CB
 *     �豸�����ص�����
 * address[in]: �豸��ַ
 * return: 0�ɹ�,����-1
 * note: �豸��ַ����16��16�����ַ���ʾ������0000000000000000��~��FFFFFFFFFFFFFFFF��
 */
typedef int (*REX_DEVICE_LEAVE_CB)(char *address);

/**
 * REX_REPORT_STATE_DATA_CB
 *     �ϱ�״̬���ݻص�����
 * address[in]: �豸��ַ
 * endpoint_id[in]: �豸��ID��,Ĭ��Ϊ1,��·�豸��1���ε���
 * state_type[in]: ״̬����
 * state[in]: ״̬����,ΪJSON�ַ���
 * return: 0�ɹ�,����-1
 * note: �豸��ַ����16��16�����ַ���ʾ������0000000000000000��~��FFFFFFFFFFFFFFFF��
 */
typedef int (*REX_REPORT_STATE_DATA_CB)(char *address, unsigned char endpoint_id, unsigned short state_type, char *state);

/**
 * REX_REPORT_EVENT_DATA_CB
 *     �ϱ��¼����ݻص�����
 * address[in]: �豸��ַ
 * endpoint_id[in]: �豸��ID��,Ĭ��Ϊ1,��·�豸��1���ε���
 * event_type[in]: �¼�����
 * event[in]: �¼�����,ΪJSON�ַ���
 * return: 0�ɹ�,����-1
 * note: �豸��ַ����16��16�����ַ���ʾ������0000000000000000��~��FFFFFFFFFFFFFFFF��
 */
typedef int (*REX_REPORT_EVENT_DATA_CB)(char *address, unsigned char endpoint_id, unsigned short event_type, char *event);

/**
 * REX_REPORT_SELF_DEFINING_DATA_CB
 *     �ϱ��Զ������ݻص�����
 * address[in]: �豸��ַ
 * endpoint_id[in]: �豸��ID��,Ĭ��Ϊ1,��·�豸��1���ε���
 * data[in]: �Զ�������
 * length[in]: �Զ������ݳ���
 * return: 0�ɹ�,����-1
 * note: none
 */
typedef int (*REX_REPORT_SELF_DEFINING_DATA_CB)(char *address, unsigned char endpoint_id, char *data, unsigned short length);

/* If this is a C++ compiler, use C linkage */
#if defined(__cplusplus)
}
#endif

#endif
/*******************************************************************************************************
**                                           End of file
*******************************************************************************************************/
