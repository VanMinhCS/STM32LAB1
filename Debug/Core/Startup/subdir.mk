################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f103c6ux.s 

OBJS += \
./Core/Startup/startup_stm32f103c6ux.o 

S_DEPS += \
./Core/Startup/startup_stm32f103c6ux.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	$(error unable to generate command line)

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f103c6ux.d ./Core/Startup/startup_stm32f103c6ux.o

.PHONY: clean-Core-2f-Startup

