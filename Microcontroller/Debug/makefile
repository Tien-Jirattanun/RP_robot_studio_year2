################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/TransformFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/SupportFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/StatisticsFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/SVMFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/QuaternionMathFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/MatrixFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/InterpolationFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/FilteringFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/FastMathFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/DistanceFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/ControllerFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/ComplexMathFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/CommonTables/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/BayesFunctions/subdir.mk
-include Middlewares/Third_Party/ARM_CMSIS/Source/BasicMathFunctions/subdir.mk
-include Drivers/STM32G4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := RP_Robot
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
RP_Robot.elf \

MAP_FILES += \
RP_Robot.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
RP_Robot.list \


# All Target
all: main-build

# Main-build Target
main-build: RP_Robot.elf secondary-outputs

# Tool invocations
RP_Robot.elf RP_Robot.map: $(OBJS) $(USER_OBJS) C:\Users\spwkp\OneDrive\Desktop\RP_robot_studio_year2\Microcontroller\STM32G474RETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "RP_Robot.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\spwkp\OneDrive\Desktop\RP_robot_studio_year2\Microcontroller\STM32G474RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="RP_Robot.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

RP_Robot.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "RP_Robot.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) RP_Robot.elf RP_Robot.list RP_Robot.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
