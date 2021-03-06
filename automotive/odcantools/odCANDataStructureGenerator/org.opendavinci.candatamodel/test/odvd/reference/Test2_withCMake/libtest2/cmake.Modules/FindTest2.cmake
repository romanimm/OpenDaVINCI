# Test2 - Data structure library generated by CANDataStructureGenerator.
###########################################################################
# Try to find Test2 library.
# The user can specify an additional search path using the CMake variable
# TEST2_DIR
# First, search at the specific user path setting.
IF(NOT ("${TEST2_DIR}" STREQUAL ""))
    FIND_PATH(TEST2_INCLUDE_DIR test2/GeneratedHeaders_Test2.h
                 NAMES test2
                 PATHS ${TEST2_DIR}/include
                 NO_DEFAULT_PATH)
    FIND_LIBRARY(TEST2_LIBRARY
                 NAMES test2 test2-static
                 PATHS ${TEST2_DIR}/lib
                 NO_DEFAULT_PATH)
ENDIF()
IF(   ("${TEST2_INCLUDE_DIR}" STREQUAL "TEST2_INCLUDE_DIR-NOTFOUND")
   OR ("${TEST2_DIR}" STREQUAL "") )
    MESSAGE(STATUS "Trying to find Test2 in default paths.")
    # If not found, use the system's search paths.
    FIND_PATH(TEST2_INCLUDE_DIR test2/GeneratedHeaders_Test2.h
                 NAMES test2
                 PATHS /usr/include
                       /usr/local/include)
    FIND_LIBRARY(TEST2_LIBRARY
                 NAMES test2 test2-static
                 PATHS /usr/lib
                       /usr/lib64
                       /usr/local/lib
                       /usr/local/lib64)
ENDIF()
IF("${TEST2_INCLUDE_DIR}" STREQUAL "")
    MESSAGE(FATAL_ERROR "Could not find Test2 library.")
ENDIF()
###########################################################################
# Set linking libraries.
SET(TEST2_LIBRARIES ${TEST2_LIBRARY})
SET(TEST2_INCLUDE_DIRS ${TEST2_INCLUDE_DIR})
###########################################################################
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(LibTest2 DEFAULT_MSG
                                  TEST2_LIBRARY TEST2_INCLUDE_DIR)
MARK_AS_ADVANCED(TEST2_INCLUDE_DIR TEST2_LIBRARY)
