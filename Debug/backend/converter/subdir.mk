################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../backend/converter/CodeGenerator.cpp \
../backend/converter/Converter.cpp 

OBJS += \
./backend/converter/CodeGenerator.o \
./backend/converter/Converter.o 

CPP_DEPS += \
./backend/converter/CodeGenerator.d \
./backend/converter/Converter.d 


# Each subdirectory must supply rules for building sources it contributes
backend/converter/%.o: ../backend/converter/%.cpp backend/converter/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/include/antlr4-runtime -I"/Users/huyduong/eclipse-workspace/CMPE_152_project/target/generated-sources/antlr4" -I"/Users/huyduong/eclipse-workspace/CMPE_152_project" -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/lib -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


