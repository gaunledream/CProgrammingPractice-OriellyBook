##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ModuleTutC
ConfigurationName      :=Debug
WorkspacePath          :=/home/mlt/Documents/CProgrammingOrielly
ProjectPath            :=/home/mlt/Documents/CProgrammingOrielly/ModuleTutC
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Laxmi Thebe
Date                   :=28/01/17
CodeLitePath           :=/home/mlt/.codelite
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="ModuleTutC.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/ia.c$(ObjectSuffix) $(IntermediateDirectory)/hist.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/ia.c$(ObjectSuffix): ia.c $(IntermediateDirectory)/ia.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/ModuleTutC/ia.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ia.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ia.c$(DependSuffix): ia.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ia.c$(ObjectSuffix) -MF$(IntermediateDirectory)/ia.c$(DependSuffix) -MM ia.c

$(IntermediateDirectory)/ia.c$(PreprocessSuffix): ia.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ia.c$(PreprocessSuffix) ia.c

$(IntermediateDirectory)/hist.c$(ObjectSuffix): hist.c $(IntermediateDirectory)/hist.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/ModuleTutC/hist.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hist.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hist.c$(DependSuffix): hist.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hist.c$(ObjectSuffix) -MF$(IntermediateDirectory)/hist.c$(DependSuffix) -MM hist.c

$(IntermediateDirectory)/hist.c$(PreprocessSuffix): hist.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hist.c$(PreprocessSuffix) hist.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


