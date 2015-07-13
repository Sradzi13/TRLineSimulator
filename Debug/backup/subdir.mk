################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../backup/CoaxXSection.cpp \
../backup/MicrostripXSection.cpp \
../backup/StriplineXSection.cpp \
../backup/TRLine.cpp \
../backup/TRLineXSect.cpp \
../backup/TRLinesTotal.cpp \
../backup/TRTest.cpp 

OBJS += \
./backup/CoaxXSection.o \
./backup/MicrostripXSection.o \
./backup/StriplineXSection.o \
./backup/TRLine.o \
./backup/TRLineXSect.o \
./backup/TRLinesTotal.o \
./backup/TRTest.o 

CPP_DEPS += \
./backup/CoaxXSection.d \
./backup/MicrostripXSection.d \
./backup/StriplineXSection.d \
./backup/TRLine.d \
./backup/TRLineXSect.d \
./backup/TRLinesTotal.d \
./backup/TRTest.d 


# Each subdirectory must supply rules for building sources it contributes
backup/%.o: ../backup/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


