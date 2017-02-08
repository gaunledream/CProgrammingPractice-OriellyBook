##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FinalProject_stat
ConfigurationName      :=Debug
WorkspacePath          :=/home/mlt/Documents/CProgrammingOrielly
ProjectPath            :=/home/mlt/Documents/CProgrammingOrielly/FinalProject_stat
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
ObjectsFileList        :="FinalProject_stat.txt"
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
Objects0=$(IntermediateDirectory)/in_file.c$(ObjectSuffix) $(IntermediateDirectory)/ch_type.c$(ObjectSuffix) $(IntermediateDirectory)/token.c$(ObjectSuffix) $(IntermediateDirectory)/stat.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/in_file.c$(ObjectSuffix): in_file.c $(IntermediateDirectory)/in_file.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/FinalProject_stat/in_file.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/in_file.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/in_file.c$(DependSuffix): in_file.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/in_file.c$(ObjectSuffix) -MF$(IntermediateDirectory)/in_file.c$(DependSuffix) -MM in_file.c

$(IntermediateDirectory)/in_file.c$(PreprocessSuffix): in_file.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/in_file.c$(PreprocessSuffix) in_file.c

$(IntermediateDirectory)/ch_type.c$(ObjectSuffix): ch_type.c $(IntermediateDirectory)/ch_type.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/FinalProject_stat/ch_type.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ch_type.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ch_type.c$(DependSuffix): ch_type.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ch_type.c$(ObjectSuffix) -MF$(IntermediateDirectory)/ch_type.c$(DependSuffix) -MM ch_type.c

$(IntermediateDirectory)/ch_type.c$(PreprocessSuffix): ch_type.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ch_type.c$(PreprocessSuffix) ch_type.c

$(IntermediateDirectory)/token.c$(ObjectSuffix): token.c $(IntermediateDirectory)/token.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/FinalProject_stat/token.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/token.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/token.c$(DependSuffix): token.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/token.c$(ObjectSuffix) -MF$(IntermediateDirectory)/token.c$(DependSuffix) -MM token.c

$(IntermediateDirectory)/token.c$(PreprocessSuffix): token.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/token.c$(PreprocessSuffix) token.c

$(IntermediateDirectory)/stat.c$(ObjectSuffix): stat.c $(IntermediateDirectory)/stat.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/mlt/Documents/CProgrammingOrielly/FinalProject_stat/stat.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stat.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stat.c$(DependSuffix): stat.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stat.c$(ObjectSuffix) -MF$(IntermediateDirectory)/stat.c$(DependSuffix) -MM stat.c

$(IntermediateDirectory)/stat.c$(PreprocessSuffix): stat.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stat.c$(PreprocessSuffix) stat.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


