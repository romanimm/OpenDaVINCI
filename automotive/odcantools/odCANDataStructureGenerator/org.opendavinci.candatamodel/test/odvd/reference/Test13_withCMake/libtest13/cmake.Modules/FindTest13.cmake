# Test13 - Data structure library generated by CANDataStructureGenerator.
###########################################################################
# Try to find Test13 library.
# The user can specify an additional search path using the CMake variable
# TEST13_DIR
# First, search at the specific user path setting.
IF(NOT ("${TEST13_DIR}" STREQUAL ""))
    FIND_PATH(TEST13_INCLUDE_DIR test13/GeneratedHeaders_Test13.h
                 NAMES test13
                 PATHS ${TEST13_DIR}/include
                 NO_DEFAULT_PATH)
    FIND_LIBRARY(TEST13_LIBRARY
                 NAMES test13 test13-static
                 PATHS ${TEST13_DIR}/lib
                 NO_DEFAULT_PATH)
ENDIF()
IF(   ("${TEST13_INCLUDE_DIR}" STREQUAL "TEST13_INCLUDE_DIR-NOTFOUND")
   OR ("${TEST13_DIR}" STREQUAL "") )
    MESSAGE(STATUS "Trying to find Test13 in default paths.")
    # If not found, use the system's search paths.
    FIND_PATH(TEST13_INCLUDE_DIR test13/GeneratedHeaders_Test13.h
                 NAMES test13
                 PATHS /usr/include
                       /usr/local/include)
    FIND_LIBRARY(TEST13_LIBRARY
                 NAMES test13 test13-static
                 PATHS /usr/lib
                       /usr/lib64
                       /usr/local/lib
                       /usr/local/lib64)
ENDIF()
IF("${TEST13_INCLUDE_DIR}" STREQUAL "")
    MESSAGE(FATAL_ERROR "Could not find Test13 library.")
ENDIF()
###########################################################################
# Set linking libraries.
SET(TEST13_LIBRARIES ${TEST13_LIBRARY})
SET(TEST13_INCLUDE_DIRS ${TEST13_INCLUDE_DIR})
###########################################################################
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(LibTest13 DEFAULT_MSG
                                  TEST13_LIBRARY TEST13_INCLUDE_DIR)
MARK_AS_ADVANCED(TEST13_INCLUDE_DIR TEST13_LIBRARY)
