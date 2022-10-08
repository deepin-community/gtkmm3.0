# Convert the source listing to object (.obj) listing in
# another NMake Makefile module, include it, and clean it up.
# This is a "fact-of-life" regarding NMake Makefiles...
# This file does not need to be changed unless one is maintaining the NMake Makefiles

# For those wanting to add things here:
# To add a list, do the following:
# # $(description_of_list)
# if [call create-lists.bat header $(makefile_snippet_file) $(variable_name)]
# endif
#
# if [call create-lists.bat file $(makefile_snippet_file) $(file_name)]
# endif
#
# if [call create-lists.bat footer $(makefile_snippet_file)]
# endif
# ... (repeat the if [call ...] lines in the above order if needed)
# !include $(makefile_snippet_file)
#
# (add the following after checking the entries in $(makefile_snippet_file) is correct)
# (the batch script appends to $(makefile_snippet_file), you will need to clear the file unless the following line is added)
#!if [del /f /q $(makefile_snippet_file)]
#!endif

# In order to obtain the .obj filename that is needed for NMake Makefiles to build DLLs/static LIBs or EXEs, do the following
# instead when doing 'if [call create-lists.bat file $(makefile_snippet_file) $(file_name)]'
# (repeat if there are multiple $(srcext)'s in $(source_list), ignore any headers):
# !if [for %c in ($(source_list)) do @if "%~xc" == ".$(srcext)" @call create-lists.bat file $(makefile_snippet_file) $(intdir)\%~nc.obj]
#
# $(intdir)\%~nc.obj needs to correspond to the rules added in build-rules-msvc.mak
# %~xc gives the file extension of a given file, %c in this case, so if %c is a.cc, %~xc means .cc
# %~nc gives the file name of a given file without extension, %c in this case, so if %c is a.cc, %~nc means a

NULL=

gdkmm_generated_private_headers = $(files_hg:.hg=_p.h)

# For gdkmm

!if [call create-lists.bat header gtkmm.mak gdkmm_OBJS]
!endif

!if [for %c in ($(GDKMM_INT_GENERATED_SOURCES)) do @if "%~xc" == ".cc" @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gdkmm\%~nc.obj]
!endif

!if [for %c in ($(gdkmm_files_extra_cc)) do @if "%~xc" == ".cc" @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gdkmm\%~nc.obj]
!endif

!if [@call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gdkmm\gdkmm.res]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

# For gtkmm
!if [call create-lists.bat header gtkmm.mak gtkmm_OBJS]
!endif

!if [for %c in ($(GTKMM_INT_GENERATED_SOURCES)) do @if "%~xc" == ".cc" @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm\%~nc.obj]
!endif

!if [for %c in ($(GTKMM_INT_EXTRA_SOURCES)) do @if "%~xc" == ".cc" @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm\%~nc.obj]
!endif

!if [@call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm\gtkmm.res]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gdkmm_real_hg]
!endif

!if [for %h in ($(GDKMM_HG_FILES)) do @call create-lists.bat file gtkmm.mak ..\gdk\src\%h]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gtkmm_real_hg]
!endif

!if [for %h in ($(GTKMM_HG_FILES)) do @call create-lists.bat file gtkmm.mak ../gtk/src/%h]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

# For gtkmm demos
!if [call create-lists.bat header gtkmm.mak gtkmm_demo_OBJS]
!endif

!if [for %s in (..\demos\gtk-demo\*.cc) do @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm3-demo\%~ns.obj]
!endif

!if [@call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm3-demo\demo_resources.obj]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gtkmm_demo_example_sources]
!endif

!if [for %s in (..\demos\gtk-demo\example_*.cc) do @call create-lists.bat file gtkmm.mak %s]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gtkmm_demo_resources]
!endif

!if [for %x in (gif jpg png webm ui glsl) do @for %s in (..\demos\gtk-demo\*.%x) do @call create-lists.bat file gtkmm.mak %s]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gtkmm_tests]
!endif

!if [for /f %d in ('dir /ad /b ..\tests\') do @call create-lists.bat file gtkmm.mak ^vs$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm3-test-%d.exe]
!endif

!if [call create-lists.bat footer gtkmm.mak]
!endif

!if [call create-lists.bat header gtkmm.mak gtkmm_tests & @(for /f %t in ('dir /ad /b ..\tests') do @call create-lists.bat file gtkmm.mak vs$(VSVER)\$(CFG)\$(PLAT)\%t.exe) & @call create-lists.bat footer gtkmm.mak]
!endif

!if [for /f %t in ('dir /ad /b ..\tests') do @for %s in (..\tests\%t\*.cc) do @echo vs^$(VSVER)\^$(CFG)\^$(PLAT)\gtkmm-tests\%t-%~ns.obj: %s>>gtkmm.mak & @echo. if not exist ^$(@D)\ md ^$(@D)>>gtkmm.mak & @echo.	^$(CXX) ^$(GTKMM_DEMO_CFLAGS) ^$(CFLAGS) /Fo^$(@D)\%t-%~ns.obj /Fd^$(@D)\ ^$** /c>>gtkmm.mak & @echo.>>gtkmm.mak]
!endif

!if [for /f %t in ('dir /ad /b ..\tests') do @call create-lists.bat header gtkmm.mak %t_OBJS & @(for %s in (..\tests\%t\*.cc) do @call create-lists.bat file gtkmm.mak vs$(VSVER)\$(CFG)\$(PLAT)\gtkmm-tests\%t-%~ns.obj) & @call create-lists.bat footer gtkmm.mak]
!endif

!if [for /f %t in ('dir /ad /b ..\tests') do @echo vs^$(VSVER)\^$(CFG)\^$(PLAT)\%t.exe: ^$(GTKMM_LIB) ^$(GDKMM_LIB) ^$(%t_OBJS)>>gtkmm.mak & @echo.	link ^$(LDFLAGS) ^$** ^$(GTKMM_DEMO_DEP_LIBS) ^$(LIBSIGC_LIB) /out:^$@>>gtkmm.mak & @echo.>>gtkmm.mak]
!endif

!if [for %f in (gdkmm\applaunchcontext.h) do @if not exist ..\untracked\gdk\%f if not exist ..\gdk\%f if not exist vs$(VSVER)\$(CFG)\$(PLAT)\%f (md vs$(VSVER)\$(CFG)\$(PLAT)\gdkmm\private) & ($(PERL) -- $(GMMPROC_DIR)/gmmproc -I ../tools/m4 -I $(GMMPROC_PANGO_DIR) -I $(GMMPROC_ATK_DIR) --defs ../gdk/src applaunchcontext ../gdk/src vs$(VSVER)/$(CFG)/$(PLAT)/gdkmm)]
!endif

!if [for %d in (vs$(VSVER)\$(CFG)\$(PLAT)\gdkmm ..\untracked\gdk\gdkmm ..\gdk\gdkmm) do @if exist %d\applaunchcontext.h call get-gmmproc-ver %d\applaunchcontext.h>>gtkmm.mak]
!endif

!include gtkmm.mak

!if [del /f /q gtkmm.mak]
!endif

!if "$(GMMPROC_VER)" >= "2.64.3"
GDKMM_INT_TARGET = vs$(VSVER)\$(CFG)\$(PLAT)\gdkmm
GTKMM_INT_TARGET = vs$(VSVER)\$(CFG)\$(PLAT)\gtkmm
GDKMM_DEF_LDFLAG =
!else
GDKMM_INT_TARGET = vs$(VSVER)\$(CFG)\$(PLAT)\gdkmm\gdkmm.def
GDKMM_DEF_LDFLAG = /def:$(GDKMM_INT_TARGET)
GDKMM_BASE_CFLAGS = $(GDKMM_BASE_CFLAGS) /DGDKMM_USE_GENDEF
GTKMM_INT_TARGET = $(GDKMM_INT_TARGET:gdk=gtk)
GTKMM_DEF_LDFLAG = /def:$(GDKMM_INT_TARGET:gdk=gtk)
GTKMM_BASE_CFLAGS = $(GTKMM_BASE_CFLAGS) /DGTKMM_USE_GENDEF
!endif
