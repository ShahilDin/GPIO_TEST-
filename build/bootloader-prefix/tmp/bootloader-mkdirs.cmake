# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v5.0/components/bootloader/subproject"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/tmp"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/src/bootloader-stamp"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/src"
  "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Sync/Shahil Din/Software/ESP32_GIPO/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
