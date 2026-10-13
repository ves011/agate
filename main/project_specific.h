/*
 * project_specific.h
 *
 *  Created on: Mar 20, 2023
 *      Author: viorel_serbu
 */

/**
 * @file project_specific.h
 * @brief defines the controller type: ACTIVE_CONTROLLER and ID: CTRL_DEV_ID
 */
#ifndef MAIN_PROJECT_SPECIFIC_H_
#define MAIN_PROJECT_SPECIFIC_H_
#define TEST_BUILD (1)
#if(TEST_BUILD == 1)
	#define WITH_CONSOLE
	#define TEST1
	#define CTRL_DEV_ID					(98)
	#define LOG_SERVER_DEV				"proxy.gnet"
#else
	#define CTRL_DEV_ID					(1)
#endif

#define WITH_CONSOLE
#define COMM_PROTO	MQTT_PROTO
#define CONFIG_BROKER_URL 			"mqtts://proxy.gnet:1886"
#define MQTT_RECONNECT_TIMEOUT_MS	10000
#define ENABLE_MQTT_FAIL_REBOOT		1
#define MQTT_FAILATTEMPTS			10		//this means a rebbot is triggered if MQTT_FAILATTEMPTS in a row = 100 sec

#define OTA_SUPPORT

#define WIFI_STA_ON 					(1)
#define WIFI_AP_ON						(0)
#define MQTT_PUBLISH					(1)

#define FILESYSTEM	SPIFFS
#define DEV_NAME					"Poarta Auto"
#define PROMPT_STR "AGATE"

extern int controller_op_registered;

#endif /* MAIN_PROJECT_SPECIFIC_H_ */
