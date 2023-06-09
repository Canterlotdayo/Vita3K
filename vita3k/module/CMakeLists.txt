add_library(
	module
	STATIC
	include/module/args_layout.h
	include/module/bridge.h
	include/module/bridge_types.h
	include/module/lay_out_args.h
	include/module/load_module.h
	include/module/module.h
	include/module/read_arg.h
	include/module/write_return_value.h
	src/load_module.cpp
	src/module.cpp
	src/read_arg.cpp
	src/write_return_value.cpp
)

target_include_directories(module PUBLIC include)
target_link_libraries(module PUBLIC config cpu emuenv dlmalloc kernel printf util)
if(TRACY_ENABLE_ON_CORE_COMPONENTS)
	target_link_libraries(module PUBLIC tracy)
endif()

add_executable(
	module-tests
	tests/arg_layout_tests.cpp
)

target_include_directories(module-tests PRIVATE include)
target_link_libraries(module-tests PRIVATE googletest util)
add_test(NAME module COMMAND module-tests)
