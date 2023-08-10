if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
	add_link_options("-lUser32")

	include_directories("C:/VulkanSDK/1.3.250.1/Include")

	add_link_options("-lC:/VulkanSDK/1.3.250.1/Lib/vulkan-1")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
	add_link_options("-lwayland-client")

	include_directories("/opt/vulkan/include")

	add_link_options("-L/opt/vulkan/lib")

	add_link_options("-lvku")
	add_link_options("-lvolk")
	add_link_options("-lVkLayer_utils")
	add_link_options("-lVulkanLayerUtils")

	list(APPEND SOURCES "${PLATFORM_DIR}/xdgshell.c")
endif()

add_compile_definitions("WIN32_CLASS_NAME=\"${PROJECT_NAME}_win32_class\"")
add_compile_definitions("WINDOW_NAME=\"${PROJECT_NAME} ${PROJECT_VERSION}\"")

add_compile_definitions("APPLICATION_NAME=\"${PROJECT_NAME}\"")
add_compile_definitions("ENGINE_NAME=\"${PROJECT_NAME}\"")