add_library(
	renderer
	STATIC
	include/renderer/commands.h
	include/renderer/functions.h
	include/renderer/profile.h
	include/renderer/state.h
	include/renderer/texture_cache_state.h
	include/renderer/types.h

	include/renderer/gl/types.h
	include/renderer/gl/state.h
	include/renderer/gl/functions.h

	include/renderer/vulkan/types.h
	include/renderer/vulkan/state.h
	include/renderer/vulkan/functions.h

	src/gl/attribute_formats.cpp
	src/gl/compile_program.cpp
	src/gl/draw.cpp
	src/gl/load_shaders.cpp
	src/gl/renderer.cpp
	src/gl/sync_state.cpp
	src/gl/texture_formats.cpp
	src/gl/texture.cpp
	src/gl/uniforms.cpp

	src/vulkan/renderer.cpp
	src/vulkan/allocator.cpp

	src/batch.cpp
	src/creation.cpp
	src/driver_functions.h
	src/renderer.cpp
	src/scene.cpp
	src/state_set.cpp
	src/sync.cpp
	src/texture_cache.cpp
	src/texture_format.cpp
	src/texture_palette.cpp
	src/uniforms.cpp
)

target_include_directories(renderer PUBLIC include)
target_link_libraries(renderer PUBLIC crypto shader glutil threads config vita-headers util vulkan vma)
target_link_libraries(renderer PRIVATE sdl2)
