cmake_minimum_required (VERSION 3.9)

set(targetName wserver)

project (${targetName})

IF(APPLE)
	set(CMAKE_INSTALL_RPATH "@executable_path")
ENDIF(APPLE)

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS KEEP_RPATHS)


set( ALL_DIRS
	"${CMAKE_CURRENT_LIST_DIR}/src"
	"${CMAKE_CURRENT_LIST_DIR}/../protos"
)

FOREACH(item ${ALL_DIRS})
	IF( IS_DIRECTORY ${item} )
	    file(GLOB tmp "${item}/*.cpp" "${item}/*.cc"  )
	    list(APPEND defaultSources ${tmp})

	    file(GLOB tmp "${item}/*.h" "${item}/*.hpp")
	    list(APPEND defaultHeaders ${tmp})
	ENDIF()
ENDFOREACH()

set(ALL_DIRS ${ALL_DIRS} "${CMAKE_CURRENT_SOURCE_DIR}" )

file(GLOB tmp "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")
list(APPEND defaultSources ${tmp})

file(GLOB tmp "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
list(APPEND defaultHeaders ${tmp})

add_executable(${targetName} ${defaultSources} ${defaultHeaders})

target_include_directories(${targetName} PUBLIC ${ALL_DIRS})

set_property(TARGET ${targetName} PROPERTY CXX_STANDARD 14)

target_link_libraries(${targetName} CONAN_PKG::boost_asio CONAN_PKG::mysql-connector-c ${PROTOBUF_LIBRARY})


