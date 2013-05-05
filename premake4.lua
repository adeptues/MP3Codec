solution "Codec"
  configurations {"Debug","Release"}
  platforms {"Native","Universal"}
  location "build"
  
project "Codec"
  location "build"
  kind "ConsoleApp"
  language "c++"
  files { "**.h", "**.cpp" }--recurses ** into subdirs
      -- use links {"lib"} to link to livraryes
      --use libdirs{} to find libarys and os.findlib
  
        configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }
