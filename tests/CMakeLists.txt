set(TARGET_NAME tests)

add_executable(${TARGET_NAME} tests.cpp)
target_include_directories(${TARGET_NAME} PRIVATE ../src)

add_test(
  NAME ${TARGET_NAME}
  COMMAND ${TARGET_NAME} -o report.xml -r junit)
