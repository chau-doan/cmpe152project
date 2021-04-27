################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/goBaseVisitor.cpp \
../target/generated-sources/antlr4/goLexer.cpp \
../target/generated-sources/antlr4/goParser.cpp \
../target/generated-sources/antlr4/goVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/goBaseVisitor.o \
./target/generated-sources/antlr4/goLexer.o \
./target/generated-sources/antlr4/goParser.o \
./target/generated-sources/antlr4/goVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/goBaseVisitor.d \
./target/generated-sources/antlr4/goLexer.d \
./target/generated-sources/antlr4/goParser.d \
./target/generated-sources/antlr4/goVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp target/generated-sources/antlr4/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/include/antlr4-runtime -I"/Users/huyduong/eclipse-workspace/CMPE_152_project/target/generated-sources/antlr4" -I"/Users/huyduong/eclipse-workspace/CMPE_152_project" -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/lib -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


