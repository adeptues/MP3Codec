solution "Codec"
  configurations {"Debug","Release"}
  platforms {"Native","Universal"}
  location "build"
  
project "Codec"
  location "build"
  kind "ConsoleApp"
  language "c++"
  files { "**.h", "**.cpp" }--recurses ** into subdirs
  excludes{"**/gtest/**"}
      -- use links {"lib"} to link to livraryes
      --use libdirs{} to find libarys and os.findlib
  
        configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }

project "CodecTest"--need seperate source dir for test project
  location "build_test"
  kind "ConsoleApp"
  language "c++"
  includedirs{"include/**"}
  libdirs{"libs"}
  links{"gtest"}
  files{"**.h","**.cpp"}
  
       configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }