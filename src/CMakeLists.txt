configure_file(config.h.in config.h)

add_executable(MTLauncher main.cpp)

target_include_directories(MTLauncher PUBLIC ${PROJECT_BINARY_DIR}/src)
