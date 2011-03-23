#
# Wizard autogenerated makefile.
# DO NOT EDIT, use the sam3x-ek_display_user.mk file instead.
#

# Constants automatically defined by the selected modules
sam3x-ek_display_DEBUG = 1

# Our target application
TRG += sam3x-ek_display

sam3x-ek_display_PREFIX = "arm-none-eabi-"

sam3x-ek_display_SUFFIX = ""

sam3x-ek_display_SRC_PATH = boards/sam3x-ek/examples/sam3x-ek_display

sam3x-ek_display_HW_PATH = boards/sam3x-ek

# Files automatically generated by the wizard. DO NOT EDIT, USE sam3x-ek_display_USER_CSRC INSTEAD!
sam3x-ek_display_WIZARD_CSRC = \
	bertos/struct/heap.c \
	bertos/cpu/cortex-m3/hw/switch_ctx_cm3.c \
	bertos/mware/event.c \
	bertos/gfx/bitmap.c \
	bertos/gfx/text.c \
	bertos/cpu/cortex-m3/drv/timer_cm3.c \
	bertos/drv/timer.c \
	bertos/mware/formatwr.c \
	bertos/mware/sprintf.c \
	bertos/gfx/line.c \
	bertos/drv/lcd_hx8347.c \
	bertos/drv/adc.c \
	bertos/gfx/text_format.c \
	bertos/drv/kbd.c \
	bertos/fonts/luBS14.c \
	bertos/kern/signal.c \
	bertos/kern/proc.c \
	bertos/cpu/cortex-m3/drv/adc_sam3.c \
	bertos/mware/hex.c \
	bertos/gui/menu.c \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE sam3x-ek_display_USER_PCSRC INSTEAD!
sam3x-ek_display_WIZARD_PCSRC = \
	 \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE sam3x-ek_display_USER_CPPASRC INSTEAD!
sam3x-ek_display_WIZARD_CPPASRC = \
	 \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE sam3x-ek_display_USER_CXXSRC INSTEAD!
sam3x-ek_display_WIZARD_CXXSRC = \
	 \
	#

# Files automatically generated by the wizard. DO NOT EDIT, USE sam3x-ek_display_USER_ASRC INSTEAD!
sam3x-ek_display_WIZARD_ASRC = \
	 \
	#

sam3x-ek_display_CPPFLAGS = -D'CPU_FREQ=(84000000UL)' -D'ARCH=(ARCH_DEFAULT)' -D'WIZ_AUTOGEN' -I$(sam3x-ek_display_HW_PATH) -I$(sam3x-ek_display_SRC_PATH) $(sam3x-ek_display_CPU_CPPFLAGS) $(sam3x-ek_display_USER_CPPFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_LDFLAGS = $(sam3x-ek_display_CPU_LDFLAGS) $(sam3x-ek_display_WIZARD_LDFLAGS) $(sam3x-ek_display_USER_LDFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_CPPAFLAGS = $(sam3x-ek_display_CPU_CPPAFLAGS) $(sam3x-ek_display_WIZARD_CPPAFLAGS) $(sam3x-ek_display_USER_CPPAFLAGS)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_CSRC = $(sam3x-ek_display_CPU_CSRC) $(sam3x-ek_display_WIZARD_CSRC) $(sam3x-ek_display_USER_CSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_PCSRC = $(sam3x-ek_display_CPU_PCSRC) $(sam3x-ek_display_WIZARD_PCSRC) $(sam3x-ek_display_USER_PCSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_CPPASRC = $(sam3x-ek_display_CPU_CPPASRC) $(sam3x-ek_display_WIZARD_CPPASRC) $(sam3x-ek_display_USER_CPPASRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_CXXSRC = $(sam3x-ek_display_CPU_CXXSRC) $(sam3x-ek_display_WIZARD_CXXSRC) $(sam3x-ek_display_USER_CXXSRC)

# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_ASRC = $(sam3x-ek_display_CPU_ASRC) $(sam3x-ek_display_WIZARD_ASRC) $(sam3x-ek_display_USER_ASRC)

# CPU specific flags and options, defined in the CPU definition files.
# Automatically generated by the wizard. PLEASE DO NOT EDIT!
sam3x-ek_display_CPU_CPPASRC = bertos/cpu/cortex-m3/hw/crt_cm3.S bertos/cpu/cortex-m3/hw/vectors_cm3.S 
sam3x-ek_display_CPU_CPPAFLAGS = -g -gdwarf-2 -mthumb -mno-thumb-interwork
sam3x-ek_display_CPU_CPPFLAGS = -O0 -g3 -gdwarf-2 -mthumb -mno-thumb-interwork -fno-strict-aliasing -fwrapv -fverbose-asm -Ibertos/cpu/cortex-m3/ -D__ARM_SAM3X8__
sam3x-ek_display_CPU_CSRC = bertos/cpu/cortex-m3/hw/init_cm3.c bertos/cpu/cortex-m3/drv/irq_cm3.c bertos/cpu/cortex-m3/drv/clock_sam3.c 
sam3x-ek_display_PROGRAMMER_CPU = sam3
sam3x-ek_display_CPU_LDFLAGS = -mthumb -mno-thumb-interwork -nostartfiles -Wl,--no-warn-mismatch -Wl,-dT bertos/cpu/cortex-m3/scripts/sam3x8_rom.ld
sam3x-ek_display_STOPFLASH_SCRIPT = bertos/prg_scripts/arm/stopopenocd.sh
sam3x-ek_display_CPU = cortex-m3
sam3x-ek_display_STOPDEBUG_SCRIPT = bertos/prg_scripts/arm/stopopenocd.sh
sam3x-ek_display_DEBUG_SCRIPT = bertos/prg_scripts/arm/debug.sh
sam3x-ek_display_FLASH_SCRIPT = bertos/prg_scripts/arm/flash-sam3.sh

include $(sam3x-ek_display_SRC_PATH)/sam3x-ek_display_user.mk