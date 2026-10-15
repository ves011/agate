idf_component_register	(
SRCS 					"main.c"
						"../../esp32_common/tcp/ntp_sync.c"
						"../../esp32_common/utils/utils.c"
						"../../esp32_common/utils/ota.c"
						"../../esp32_common/cmds/cmd_wifi.c"
						"../../esp32_common/cmds/cmd_system.c"
						"../../esp32_common/tcp/mqtt_ctrl.c"
						"../../esp32_common/tcp/tcp_log.c"
						"../../esp32_common/utils/crash_handler.c"
						"../gate_op/gateop.c"
						
INCLUDE_DIRS 			"."
						"../../esp32_common"
    					"../../esp32_common/cmds"
    					"../../esp32_common/tcp"
    					"../../esp32_common/utils"
    					"../../esp32_common/owb"
						"../gate_op"
REQUIRES 
        console
        esp_driver_uart
		esp_driver_pcnt
		esp_driver_gptimer
		esp_driver_rmt
        esp_timer
        esp_ringbuf
        app_update
        spi_flash
        nvs_flash
        freertos
		spiffs
        mqtt
        esp_netif
        esp_wifi
        esp_pm
        esp_driver_gpio	
		esp_http_client					
						)
target_link_libraries(${COMPONENT_LIB} INTERFACE "-ucommon_app_desc")
target_compile_definitions(${COMPONENT_LIB} PRIVATE
    COMMON_REPO_VERSION="${COMMON_REPO_VERSION}"
    )