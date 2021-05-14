/***********************************************************
*文件名     : json_key.h
*版   本   : v1.0.0.0
*日   期   : 2018.05.03
*说   明   : 该头文件用于存放json键名宏定义
*修改记录: 
************************************************************/

#ifndef JSON_KEY_H
#define JSON_KEY_H


#define JSON_KEY_COMMAND						"Command"
#define JSON_KEY_FRAMENUMBER					"FrameNumber"
#define JSON_KEY_GATEWAY_ID						"GatewayId"
#define JSON_KEY_TYPE							"Type"
#define JSON_KEY_DATA							"Data"
#define JSON_KEY_OPERATION						"Op"
#define JSON_KEY_SCENE_ID						"Id"
#define JSON_KEY_SCENE_NAME						"Name"
#define JSON_KEY_SCENE_ENABLE					"Enable"
#define JSON_KEY_SCENE_EXEC_DELAYED				"ExecDelayed"
#define JSON_KEY_SCENE_UPTIME					"UpdateTime"
#define JSON_KEY_SCENE_NOTE						"Note"
#define JSON_KEY_COND_LOGIC						"Logic"
#define JSON_KEY_COND_TYPE						"CondType"
#define JSON_KEY_COND_TRIGGER_TYPE				"TriggerType"
#define JSON_KEY_COND_CONTINUE_TIME				"ContinueTime"
#define JSON_KEY_COND_TRIGGER_INTERVAL			"TriggerInterval"
#define JSON_KEY_COND_TIME_KEY					"TimeKey"
#define JSON_KEY_COND_START_HOUR				"StartHour"
#define JSON_KEY_COND_START_MINU				"StartMinu"
#define JSON_KEY_COND_END_HOUR					"EndHour"
#define JSON_KEY_COND_END_MINU					"EndMinu"
#define JSON_KEY_COND_WEEK						"Week"
#define JSON_KEY_COND_REPEAT					"Repeat"
#define JSON_KEY_COND_DEV_ID					"DevId"
#define JSON_KEY_COND_KEY						"Key"
#define JSON_KEY_COND_VALUE						"Value"
#define JSON_KEY_COND_ACTIVE					"Active"
#define JSON_KEY_ACTION_ID						"ActionId"
#define JSON_KEY_ACTION_DEV_ID					"DevId"
#define JSON_KEY_ACTION_KEY						"Key"
#define JSON_KEY_ACTION_VALUECODING				"ValueCoding"
#define JSON_KEY_ACTION_VALUE					"Value"
#define JSON_KEY_PANEL_DEV_ID					"DevId"
#define JSON_KEY_PANEL_KEY						"Key"
#define JSON_KEY_PANEL_VALUE					"Value"
#define JSON_KEY_PANEL_ENABLE					"Enable"

#define JSON_KEY_GROUP_ID						"GroupId"
#define JSON_KEY_DATA_DAVICE_ID					"DeviceId"
#define JSON_KEY_DATA_TYPE						"Type"
#define JSON_KEY_DATA_KEY						"Key"
#define JSON_KEY_DATA_VALUE						"Value"
#define JSON_KEY_CALL_BACK_ID					"CbId"
#define JSON_KEY_PARAMETER						"Param"

#define JSON_VALUE_COMMAND_REPORT				"Report"
#define JSON_VALUE_COMMAND_DISPATCH				"Dispatch"
#define JSON_VALUE_FRAMENUMBER_00				"00"
#define JSON_VALUE_TYPE_SCENE					"LocalScene"
#define JSON_VALUE_TYPE_ATTRIBUTE				"Attribute"
#define JSON_VALUE_TYPE_EVENT					"Event"
#define JSON_VALUE_TYPE_CTRL					"Ctrl"
#define JSON_VALUE_TYPE_UNREGISTER				"UnRegister"
#define JSON_VALUE_TYPE_DELETE					"Delete"
#define JSON_VALUE_TYPE_REFACTORY				"ReFactory"
#define JSON_VALUE_TYPE_MULTICAST				"Multicast"
#define JSON_VALUE_KEY_MANUAL					"Manual"
#define JSON_VALUE_OPERATION_ADD_SCENE			"AddScene"
#define JSON_VALUE_OPERATION_DEL_SCENE			"DelScene"
#define JSON_VALUE_OPERATION_GET_SCENE			"GetScene"
#define JSON_VALUE_OPERATION_EXEC_SCENE			"ExecScene"
#define JSON_VALUE_OPERATION_BIND_SCENE			"BindScene"
#define JSON_VALUE_OPERATION_UNBIND_SCENE		"UnbindScene"
#define JSON_VALUE_OPERATION_GETBIND_SCENE		"GetBindScene"
#define JSON_VALUE_OPERATION_ADD_ACTION			"AddAction"
#define JSON_VALUE_OPERATION_DEL_ACTION			"DelAction"
#define JSON_VALUE_OPERATION_GET_ACTION			"GetAction"
#define JSON_VALUE_OPERATION_ADD_COND			"AddCond"
#define JSON_VALUE_OPERATION_DEL_COND			"DelCond"
#define JSON_VALUE_OPERATION_GET_COND			"GetCond"
#define JSON_VALUE_COND_LOGIC_OR				"Or"
#define JSON_VALUE_COND_LOGIC_AND				"And"
#define JSON_VALUE_COND_TYPE_TIME				"Time"
#define JSON_VALUE_COND_TYPE_EVENT				"Event"
#define JSON_VALUE_KEY_SCENE_ID					"SceneId"
#define JSON_VALUE_KEY_PUSH_ZIGBEE				"PushZigbee"
#define JSON_VALUE_KEY_SLEEP					"Sleep"
#define JSON_VALUE_KEY_GROUP					"Group"
#define JSON_VALUE_KEY_CALL_BACK				"CallBack"
#define JSON_VALUE_VALUECOGING_ORIGINAL			"Original"
#define JSON_VALUE_VALUECOGING_BASE64			"Base64"
#define JSON_VALUE_ALL							"All"

#define JSON_VALUE_COND_TRIGGER_TYPE_INSTANT_ONCE	"InstantOnce"
#define JSON_VALUE_COND_TRIGGER_TYPE_INSTANT_EVERY	"InstantEvery"
#define JSON_VALUE_COND_TRIGGER_TYPE_CONTINUE_ONCE	"ContinueOnce"
#define JSON_VALUE_COND_TRIGGER_TYPE_CONTINUE_EVERY	"ContinueEvery"
#define JSON_VALUE_COND_TRIGGER_TYPE_STATE_SYNC		"StateSync"



#endif /* JSON_KEY_Hs */

