################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../intermediate/util/CrossReferencer.cpp 

OBJS += \
./intermediate/util/CrossReferencer.o 

CPP_DEPS += \
./intermediate/util/CrossReferencer.d 


# Each subdirectory must supply rules for building sources it contributes
intermediate/util/%.o: ../intermediate/util/%.cpp intermediate/util/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/include/antlr4-runtime -I"/Users/huyduong/eclipse-workspace/CMPE_152_project" -I/usr/local/Cellar/antlr4-cpp-runtime/4.9.2/lib -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


