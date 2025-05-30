# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Del3_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Del3_autogen.dir\\ParseCache.txt"
  "Del3_autogen"
  )
endif()
