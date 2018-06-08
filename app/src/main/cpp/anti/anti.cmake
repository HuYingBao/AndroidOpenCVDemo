get_filename_component(ANTI_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

add_definitions(-D__CMAKE__)

set(ANTI_INC ${ANTI_CMAKE_DIR})

set(ANTI_SRC
        ${ANTI_CMAKE_DIR}/daxpy.c
        ${ANTI_CMAKE_DIR}/ddot.c
        ${ANTI_CMAKE_DIR}/dnrm2.c
        ${ANTI_CMAKE_DIR}/dscal.c
        ${ANTI_CMAKE_DIR}/linear.cpp
        ${ANTI_CMAKE_DIR}/live_demo.cpp
        ${ANTI_CMAKE_DIR}/tron.cpp)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DVL_DISABLE_SSE2 -DVL_DISABLE_AVX")
