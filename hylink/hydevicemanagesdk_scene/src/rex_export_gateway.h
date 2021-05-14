/*******************************************************************************************************
**                                           File description
** File Name:           rex_export_gateway.h
** Description:         ����SDK�ӿں���
** Creator:             xieshaobing
** Creation Date:       2017��4��7��
** Modify Log:          none
** Last Modified Date:  2017��4��7��
*******************************************************************************************************/

#ifndef __INC_REX_EXPORT_GATEWAY_H
#define __INC_REX_EXPORT_GATEWAY_H

/* If this is a C++ compiler, use C linkage */
#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * rex_init_process
 *     ��ʼ������
 * log_level[in]: ��¼��־ˮƽ, �μ�REX_LOG_LEVELö��
 * log_max_szie[in]: ��־����ֽ���
 * track_level[in]: ������ʾˮƽ, �μ�REX_TRACK_LEVELö��
 * return: 0�ɹ�,����-1
 * note: none
 */
extern int rex_init_process(char log_level, int log_max_szie, char track_level);

/**
 * rex_set_serial_port
 *     ���ô���
 * name[in]: ��������
 * baud_rate[in]: ���ڲ�����
 * return: 0�ɹ�,����-1
 * note: none
 */
extern int rex_set_serial_port(char *name, unsigned int baud_rate);

/**
 * rex_set_ota_image_file_path
 *    ����OTA�̼��ļ�·��
 * path[in]: ·�������þ���·��
 * return: 0�ɹ�,����-1
 */
extern int rex_set_ota_image_file_path(char *path);

/**
 * rex_set_callback
 *     ���ûص�����
 * cb_type[in]:�ص���������
 * cb_function[in]: �ص�����
 * return: 0�ɹ�,����-1
 * note: none
 */
extern int rex_set_callback(unsigned char cb_type, void *cb_function);

/**
 * rex_start
 *     ��ʼ
 * return: 0�ɹ�,����-1
 * note: none
 */
extern int rex_start();

/**
 * rex_configure_attribute
 *     ��������
 * cluster_id[in]: �ر�ʶ��
 * attribute_id[in]: ���Ա�ʶ��
 * attribute_name[in]: ��������
 * attribute_type[in]: ����������
 * return: 0�ɹ�,1������������,2�ر�ʶ�������Ա�ʶ���ظ�,3��������
 */
extern int rex_configure_attribute(unsigned short cluster_id, unsigned short attribute_id, char *attribute_name, unsigned char attribute_type);

/**
 * rex_send_command_data
 *     ������������
 * address[in]: �豸��ַ
 * endpoint_id[in]: �豸��ID��,Ĭ��Ϊ1,��·�豸��1���ε���
 * command_type[in]: ��������
 * command[in]: ��������,ΪJSON�ַ���
 * return: 0�ɹ�,����-1
 * note: �豸��ַ����16��16�����ַ���ʾ������0000000000000000��~��FFFFFFFFFFFFFFFF��
 *       �������سɹ�ֻ��������ͳɹ�������������ִ�гɹ�������ִ���Ƿ�ɹ�ȡ������Ӧ���ݵ��ϱ�
 */
extern int rex_send_command_data(char *address, unsigned char endpoint_id, unsigned short command_type, char *command);

/**
 * rex_send_group_command_data
 *     ��������������
 * group_id[in]: ���
 * endpoint_id[in]: �豸��ID��,Ԥ��Ϊ1,��·�豸��1���ε���
 * command_type[in]: ��������
 * command[in]: ��������,ΪJSON�ַ���
 * return: 0�ɹ�,����-1
 * note: ���ȡֵ1~65527
 *       �������سɹ�ֻ��������ͳɹ�������������ִ�гɹ�������ִ���Ƿ�ɹ�ȡ������Ӧ���ݵ��ϱ�
 *
 */
extern int rex_send_group_command_data(unsigned short group_id, unsigned char endpoint_id, unsigned short command_type, char *command);

/**
 * rex_send_self_defining_data
 *     �����Զ�������
 * address[in]: �豸��ַ
 * group_id[in]: ���
 * endpoint_id[in]: �豸��ID��,Ԥ��Ϊ1,��·�豸��1���ε���
 * data[in]: �Զ�������,Ϊ�ֽ���
 * length[in]: �Զ������ݳ���
 * return: 0�ɹ�,����-1
 * note: ���ȡֵ1~65527
 *       �������سɹ�ֻ��������ͳɹ�������������ִ�гɹ�������ִ���Ƿ�ɹ�ȡ������Ӧ���ݵ��ϱ�
 */
extern int rex_send_self_defining_data(char *address, unsigned short group_id, unsigned char endpoint_id, char *data, unsigned short length);

/**
 * rex_end
 *     ����
 * return: 0�ɹ�,����-1
 * note: none
 */
extern int rex_end();

/* If this is a C++ compiler, use C linkage */
#if defined(__cplusplus)
}
#endif

#endif
/*******************************************************************************************************
**                                           End of file
*******************************************************************************************************/
