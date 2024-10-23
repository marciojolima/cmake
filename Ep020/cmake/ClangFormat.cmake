# Define a function to create a custom target for running clang-format
function(add_clang_format_target TARGET_NAME SOURCE_DIR)
    #search for clang-format automaticly
    find_program(CLANG-FORMAT_PATH clang-format REQUIRED)

    # Find all C++ source files in the specified directory
    file(GLOB_RECURSE FORMAT_SOURCES
        LIST_DIRECTORIES false
        "${SOURCE_DIR}/*.cpp"
        "${SOURCE_DIR}/*.h"
    )

    message("CLANG-FORMAT_PATH: " ${CLANG-FORMAT_PATH})
    message("FORMAT_SOURCES: " ${FORMAT_SOURCES})
    message("SOURCE_DIR: " ${SOURCE_DIR})
    message("CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR})
    # Create a custom target to run clang-format

    add_custom_target(${TARGET_NAME}
        COMMAND ${CLANG-FORMAT_PATH} -i ${FORMAT_SOURCES}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}  # Change this if needed
        COMMENT "Running clang-format on ${SOURCE_DIR} sources"
    )

endfunction()