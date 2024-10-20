# Define a function to create a custom target for running clang-format
function(add_clang_format_target TARGET_NAME SOURCE_DIR)
    #search for clang-format automaticly, as long as clang is setting in the ENV PATH
    #find_program(CLANG-FORMAT_PATH clang-format REQUIRED)
    #set manually
    set(CLANG-FORMAT_PATH "C:/compilers/llvm/clang_llvm-18.1.7-x86_64-pc-windows-msvc/bin/clang-format.exe")

    # Find all C++ source files in the specified directory
    file(GLOB_RECURSE FORMAT_SOURCES
        LIST_DIRECTORIES false
        "${SOURCE_DIR}/*.cpp"
        "${SOURCE_DIR}/*.h"
    )

    # Create a custom target to run clang-format
    add_custom_target(${TARGET_NAME}
        COMMAND ${CLANG-FORMAT_PATH} -i ${FORMAT_SOURCES}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}  # Change this if needed
        COMMENT "Running clang-format on ${SOURCE_DIR} sources"
    )

endfunction()