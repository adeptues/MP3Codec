solution "Codec"
  configurations {"Debug","Release","Debuglib"}
  platforms {"Native","Universal"}
  location "build"
  
project "Codec"
  location "build"
  kind "ConsoleApp"
  language "c++"
  files { "**.h", "**.cpp" }--recurses ** into subdirs
  excludes{"**/gtest/**","tests/**"}
      -- use links {"lib"} to link to livraryes
      --use libdirs{} to find libarys and os.findlib
  
        configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }
	 
      configuration "Debuglib"
	 defines {"DEBUG"}
	 flags {"Symbols"}
	 kind "StaticLib"
	 targetdir "libs"



project "CodecTest"--need seperate source dir for test project
  location "build_test"
  kind "ConsoleApp"
  language "c++"
  includedirs{"./include/**.h","./lib-include"}
  buildoptions("-pthread")
  libdirs{"libs"}
  links{"gtest","pthread","Codec"}
  files{"tests/**.cpp","tests/**.h"}
  
       configuration "Debug"
         defines { "DEBUG" }
         flags { "Symbols" }
 
      configuration "Release"
         defines { "NDEBUG" }
         flags { "Optimize" }
	 
    configuration "Debuglib"
	 defines {"DEBUG"}
	 flags {"Symbols"}