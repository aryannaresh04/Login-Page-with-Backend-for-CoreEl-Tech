# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/LoginPage_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/LoginPage_autogen.dir/ParseCache.txt"
  "LoginPage_autogen"
  )
endif()
