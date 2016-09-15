# Microsoft Developer Studio Generated NMAKE File, Based on frqvc.dsp
!IF "$(CFG)" == ""
CFG=frqvc - Win32 Debug
!MESSAGE No configuration specified. Defaulting to frqvc - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "frqvc - Win32 Release" && "$(CFG)" != "frqvc - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "frqvc.mak" CFG="frqvc - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "frqvc - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "frqvc - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "frqvc - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\frqvc.exe"

!ELSE 

ALL : "$(OUTDIR)\frqvc.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\F.obj"
	-@erase "$(INTDIR)\FILE.obj"
	-@erase "$(INTDIR)\FORM_MW.OBJ"
	-@erase "$(INTDIR)\frqvc.obj"
	-@erase "$(INTDIR)\frqvc.pch"
	-@erase "$(INTDIR)\frqvc.res"
	-@erase "$(INTDIR)\frqvcDlg.obj"
	-@erase "$(INTDIR)\IO.obj"
	-@erase "$(INTDIR)\R.obj"
	-@erase "$(INTDIR)\READ_MW.OBJ"
	-@erase "$(INTDIR)\RED.obj"
	-@erase "$(INTDIR)\SF_M.OBJ"
	-@erase "$(INTDIR)\SIZE.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\frqvc.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /Fp"$(INTDIR)\frqvc.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x419 /fo"$(INTDIR)\frqvc.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\frqvc.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\frqvc.pdb" /machine:I386 /out:"$(OUTDIR)\frqvc.exe" 
LINK32_OBJS= \
	"$(INTDIR)\F.obj" \
	"$(INTDIR)\FILE.obj" \
	"$(INTDIR)\FORM_MW.OBJ" \
	"$(INTDIR)\frqvc.obj" \
	"$(INTDIR)\frqvc.res" \
	"$(INTDIR)\frqvcDlg.obj" \
	"$(INTDIR)\IO.obj" \
	"$(INTDIR)\R.obj" \
	"$(INTDIR)\READ_MW.OBJ" \
	"$(INTDIR)\RED.obj" \
	"$(INTDIR)\SF_M.OBJ" \
	"$(INTDIR)\SIZE.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\frqvc.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "frqvc - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\frqvc.exe"

!ELSE 

ALL : "$(OUTDIR)\frqvc.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\F.obj"
	-@erase "$(INTDIR)\FILE.obj"
	-@erase "$(INTDIR)\FORM_MW.OBJ"
	-@erase "$(INTDIR)\frqvc.obj"
	-@erase "$(INTDIR)\frqvc.pch"
	-@erase "$(INTDIR)\frqvc.res"
	-@erase "$(INTDIR)\frqvcDlg.obj"
	-@erase "$(INTDIR)\IO.obj"
	-@erase "$(INTDIR)\R.obj"
	-@erase "$(INTDIR)\READ_MW.OBJ"
	-@erase "$(INTDIR)\RED.obj"
	-@erase "$(INTDIR)\SF_M.OBJ"
	-@erase "$(INTDIR)\SIZE.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\frqvc.exe"
	-@erase "$(OUTDIR)\frqvc.ilk"
	-@erase "$(OUTDIR)\frqvc.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /Fp"$(INTDIR)\frqvc.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC=rc.exe
RSC_PROJ=/l 0x419 /fo"$(INTDIR)\frqvc.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\frqvc.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\frqvc.pdb" /debug /machine:I386 /out:"$(OUTDIR)\frqvc.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\F.obj" \
	"$(INTDIR)\FILE.obj" \
	"$(INTDIR)\FORM_MW.OBJ" \
	"$(INTDIR)\frqvc.obj" \
	"$(INTDIR)\frqvc.res" \
	"$(INTDIR)\frqvcDlg.obj" \
	"$(INTDIR)\IO.obj" \
	"$(INTDIR)\R.obj" \
	"$(INTDIR)\READ_MW.OBJ" \
	"$(INTDIR)\RED.obj" \
	"$(INTDIR)\SF_M.OBJ" \
	"$(INTDIR)\SIZE.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\frqvc.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(CFG)" == "frqvc - Win32 Release" || "$(CFG)" == "frqvc - Win32 Debug"
SOURCE=.\F.cpp
DEP_CPP_F_CPP=\
	".\COMPLEX1.H"\
	".\F.h"\
	".\frqvc.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\F.obj" : $(SOURCE) $(DEP_CPP_F_CPP) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\FILE.cpp
DEP_CPP_FILE_=\
	".\COMPLEX1.H"\
	".\FILE.h"\
	".\frqvc.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\FILE.obj" : $(SOURCE) $(DEP_CPP_FILE_) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\FORM_MW.CPP
DEP_CPP_FORM_=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\FORM_MW.OBJ" : $(SOURCE) $(DEP_CPP_FORM_) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\frqvc.cpp
DEP_CPP_FRQVC=\
	".\COMPLEX1.H"\
	".\F.h"\
	".\FILE.h"\
	".\frqvc.h"\
	".\frqvcDlg.h"\
	".\IO.h"\
	".\R.h"\
	".\RED.h"\
	".\SIZE.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\frqvc.obj" : $(SOURCE) $(DEP_CPP_FRQVC) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\frqvc.rc
DEP_RSC_FRQVC_=\
	".\res\frqvc.ico"\
	".\res\frqvc.rc2"\
	

"$(INTDIR)\frqvc.res" : $(SOURCE) $(DEP_RSC_FRQVC_) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\frqvcDlg.cpp
DEP_CPP_FRQVCD=\
	".\COMPLEX1.H"\
	".\F.h"\
	".\FILE.h"\
	".\frqvc.h"\
	".\frqvcDlg.h"\
	".\IO.h"\
	".\R.h"\
	".\RED.h"\
	".\SIZE.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\frqvcDlg.obj" : $(SOURCE) $(DEP_CPP_FRQVCD) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\IO.cpp
DEP_CPP_IO_CP=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\IO.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\IO.obj" : $(SOURCE) $(DEP_CPP_IO_CP) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\R.cpp
DEP_CPP_R_CPP=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\R.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\R.obj" : $(SOURCE) $(DEP_CPP_R_CPP) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\READ_MW.CPP
DEP_CPP_READ_=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\READ_MW.OBJ" : $(SOURCE) $(DEP_CPP_READ_) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\RED.cpp
DEP_CPP_RED_C=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\RED.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\RED.obj" : $(SOURCE) $(DEP_CPP_RED_C) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\SF_M.CPP
DEP_CPP_SF_M_=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\SF_M.OBJ" : $(SOURCE) $(DEP_CPP_SF_M_) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\SIZE.cpp
DEP_CPP_SIZE_=\
	".\COMPLEX1.H"\
	".\frqvc.h"\
	".\SIZE.h"\
	".\StdAfx.h"\
	".\ZF1_MW.H"\
	

"$(INTDIR)\SIZE.obj" : $(SOURCE) $(DEP_CPP_SIZE_) "$(INTDIR)"\
 "$(INTDIR)\frqvc.pch"


SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "frqvc - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /Fp"$(INTDIR)\frqvc.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\frqvc.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "frqvc - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /Fp"$(INTDIR)\frqvc.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\frqvc.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

