/**
 ******************************************************************************
 * @file    stm32h7xx.h
 * @author  MCD Application Team
 * @brief   CMSIS STM32H7xx Device Peripheral Access Layer Header File.
 *
 *          The file is the unique include file that the application programmer
 *          is using in the C source code, usually in main.c. This file
 *contains:
 *           - Configuration section that allows to select:
 *              - The STM32H7xx device used in the target application
 *              - To use or not the peripheral's drivers in application
 *code(i.e. code will be based on direct access to peripheral's registers rather
 *than drivers API), this option is controlled by
 *                "#define USE_HAL_DRIVER"
 *
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2017 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/** @addtogroup CMSIS
 * @{
 */

/** @addtogroup stm32h7xx
 * @{
 */

#ifndef STM32H7xx_H
#define STM32H7xx_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** @addtogroup Library_configuration_section
 * @{
 */

/**
 * @brief STM32 Family
 */
#if !defined(STM32H7)
#define STM32H7
#endif /* STM32H7 */

/* Uncomment the line below according to the target STM32H7 device used in your
   application
  */

#if !defined(STM32H743xx) && !defined(STM32H753xx) && !defined(STM32H750xx) && \
    !defined(STM32H742xx) && !defined(STM32H745xx) && !defined(STM32H745xG) && \
    !defined(STM32H755xx) && !defined(STM32H747xx) && !defined(STM32H747xG) && \
    !defined(STM32H757xx) && !defined(STM32H7A3xx) &&                          \
    !defined(STM32H7A3xxQ) && !defined(STM32H7B3xx) &&                         \
    !defined(STM32H7B3xxQ) && !defined(STM32H7B0xx) &&                         \
    !defined(STM32H7B0xxQ) && !defined(STM32H735xx) &&                         \
    !defined(STM32H733xx) && !defined(STM32H730xx) &&                          \
    !defined(STM32H730xxQ) && !defined(STM32H725xx) && !defined(STM32H723xx)
/* #define STM32H742xx */  /*!< STM32H742VI, STM32H742ZI, STM32H742AI,
                              STM32H742II, STM32H742BI, STM32H742XI Devices */
/* #define STM32H743xx */  /*!< STM32H743VI, STM32H743ZI, STM32H743AI,
                              STM32H743II, STM32H743BI, STM32H743XI Devices */
/* #define STM32H753xx */  /*!< STM32H753VI, STM32H753ZI, STM32H753AI,
                              STM32H753II, STM32H753BI, STM32H753XI Devices */
/* #define STM32H750xx */  /*!< STM32H750V, STM32H750I, STM32H750X Devices */
/* #define STM32H747xx */  /*!< STM32H747ZI, STM32H747AI, STM32H747II,
                              STM32H747BI, STM32H747XI Devices */
/* #define STM32H747xG */  /*!< STM32H747AG, STM32H747IG, STM32H747BG,
                              STM32H747XG */
/* #define STM32H757xx */  /*!< STM32H757ZI, STM32H757AI, STM32H757II,
                              STM32H757BI, STM32H757XI Devices */
/* #define STM32H745xx */  /*!< STM32H745ZI, STM32H745II, STM32H745BI,
                              STM32H745XI Devices  */
/* #define STM32H745xG */  /*!< STM32H745ZG, STM32H745IG, STM32H745BG,
                              STM32H745XG Devices  */
/* #define STM32H755xx */  /*!< STM32H755ZI, STM32H755II, STM32H755BI,
                              STM32H755XI Devices  */
/* #define STM32H7B0xx */  /*!< STM32H7B0IBTx, STM32H7B0RBTx, STM32H7B0VBTx,
                              STM32H7B0ZBTx Devices */
/* #define STM32H7B0xxQ */ /*!< STM32H7B0ABIxQ, STM32H7B0IBKxQ Devices */
/* #define STM32H7A3xx */  /*!< STM32H7A3IIK6, STM32H7A3IIT6, STM32H7A3NIH6,
                              STM32H7A3RIT6, STM32H7A3VIH6, STM32H7A3VIT6,
                              STM32H7A3ZIT6 */
/* #define STM32H7A3xxQ */ /*!< STM32H7A3QIY6Q, STM32H7A3IIK6Q, STM32H7A3IIT6Q,
                              STM32H7A3LIH6Q, STM32H7A3VIH6Q, STM32H7A3VIT6Q,
                              STM32H7A3AII6Q, STM32H7A3ZIT6Q */
/* #define STM32H7B3xx */  /*!< STM32H7B3IIK6, STM32H7B3IIT6, STM32H7B3NIH6,
                              STM32H7B3RIT6, STM32H7B3VIH6, STM32H7B3VIT6,
                              STM32H7B3ZIT6 */
/* #define STM32H7B3xxQ */ /*!< STM32H7B3QIY6Q, STM32H7B3IIK6Q, STM32H7B3IIT6Q,
                              STM32H7B3LIH6Q, STM32H7B3VIH6Q, STM32H7B3VIT6Q,
                              STM32H7B3AII6Q, STM32H7B3ZIT6Q */
/* #define STM32H735xx */  /*!< STM32H735AGI6, STM32H735IGK6, STM32H735RGV6,
                              STM32H735VGT6, STM32H735VGY6, STM32H735ZGT6 Devices
                            */
/* #define STM32H733xx */  /*!< STM32H733VGH6, STM32H733VGT6, STM32H733ZGI6,
                              STM32H733ZGT6, Devices */
/* #define STM32H730xx */  /*!< STM32H730VBH6, STM32H730VBT6, STM32H730ZBT6,
                              STM32H730ZBI6 Devices */
/* #define STM32H730xxQ */ /*!< STM32H730IBT6Q, STM32H730ABI6Q, STM32H730IBK6Q
                              Devices */
/* #define STM32H725xx */  /*!< STM32H725AGI6, STM32H725IGK6, STM32H725IGT6,
                              STM32H725RGV6, STM32H725VGT6, STM32H725VGY6,
                              STM32H725ZGT6, STM32H725REV6, SM32H725VET6,
                              STM32H725ZET6, STM32H725AEI6, STM32H725IET6,
                              STM32H725IEK6  Devices */
/* #define STM32H723xx */  /*!< STM32H723VGH6, STM32H723VGT6, STM32H723ZGI6,
                              STM32H723ZGT6, STM32H723VET6, STM32H723VEH6,
                              STM32H723ZET6, STM32H723ZEI6 Devices */
#endif

/*  Tip: To avoid modifying this file each time you need to switch between these
        devices, you can define the device in your toolchain compiler
   preprocessor.
  */

#if defined(DUAL_CORE) && !defined(CORE_CM4) && !defined(CORE_CM7)
#error "Dual core device, please select CORE_CM4 or CORE_CM7"
#endif

#if !defined(USE_HAL_DRIVER)
/**
 * @brief Comment the line below if you will not use the peripherals drivers.
   In this case, these drivers will not be included and the application code
 will be based on direct access to peripherals registers
   */
/*#define USE_HAL_DRIVER */
#endif /* USE_HAL_DRIVER */

/**
 * @brief CMSIS Device version number V1.10.6
 */
#define __STM32H7xx_CMSIS_DEVICE_VERSION_MAIN                                  \
  (0x01) /*!< [31:24] main version */
#define __STM32H7xx_CMSIS_DEVICE_VERSION_SUB1                                  \
  (0x0A) /*!< [23:16] sub1 version */
#define __STM32H7xx_CMSIS_DEVICE_VERSION_SUB2                                  \
  (0x06) /*!< [15:8]  sub2 version */
#define __STM32H7xx_CMSIS_DEVICE_VERSION_RC                                    \
  (0x00) /*!< [7:0]  release candidate */
#define __STM32H7xx_CMSIS_DEVICE_VERSION                                       \
  ((__STM32H7xx_CMSIS_DEVICE_VERSION_MAIN << 24) |                             \
   (__STM32H7xx_CMSIS_DEVICE_VERSION_SUB1 << 16) |                             \
   (__STM32H7xx_CMSIS_DEVICE_VERSION_SUB2 << 8) |                              \
   (__STM32H7xx_CMSIS_DEVICE_VERSION_RC))

/**
 * @}
 */

/** @addtogroup Device_Included
 * @{
 */

#if defined(STM32H743xx)
#include "stm32h743xx.h"
#elif defined(STM32H753xx)
#include "stm32h753xx.h"
#elif defined(STM32H750xx)
#include "stm32h750xx.h"
#elif defined(STM32H742xx)
#include "stm32h742xx.h"
#elif defined(STM32H745xx)
#include "stm32h745xx.h"
#elif defined(STM32H745xG)
#include "stm32h745xg.h"
#elif defined(STM32H755xx)
#include "stm32h755xx.h"
#elif defined(STM32H747xx)
#include "stm32h747xx.h"
#elif defined(STM32H747xG)
#include "stm32h747xg.h"
#elif defined(STM32H757xx)
#include "stm32h757xx.h"
#elif defined(STM32H7B0xx)
#include "stm32h7b0xx.h"
#elif defined(STM32H7B0xxQ)
#include "stm32h7b0xxq.h"
#elif defined(STM32H7A3xx)
#include "stm32h7a3xx.h"
#elif defined(STM32H7B3xx)
#include "stm32h7b3xx.h"
#elif defined(STM32H7A3xxQ)
#include "stm32h7a3xxq.h"
#elif defined(STM32H7B3xxQ)
#include "stm32h7b3xxq.h"
#elif defined(STM32H735xx)
#include "stm32h735xx.h"
#elif defined(STM32H733xx)
#include "stm32h733xx.h"
#elif defined(STM32H730xx)
#include "stm32h730xx.h"
#elif defined(STM32H730xxQ)
#include "stm32h730xxq.h"
#elif defined(STM32H725xx)
#include "stm32h725xx.h"
#elif defined(STM32H723xx)
#include "stm32h723xx.h"
#else
#error                                                                         \
    "Please select first the target STM32H7xx device used in your application (in stm32h7xx.h file)"
#endif

/**
 * @}
 */

/** @addtogroup Exported_types
 * @{
 */
typedef enum { RESET = 0, SET = !RESET } FlagStatus, ITStatus;

typedef enum { DISABLE = 0, ENABLE = !DISABLE } FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum { SUCCESS = 0, ERROR = !SUCCESS } ErrorStatus;

/**
 * @}
 */

/** @addtogroup Exported_macros
 * @{
 */
#define SET_BIT(REG, BIT) ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT) ((REG) & (BIT))

#define CLEAR_REG(REG) ((REG) = (0x0))

#define WRITE_REG(REG, VAL) ((REG) = (VAL))

#define READ_REG(REG) ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)                                    \
  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))

/* Use of CMSIS compiler intrinsics for register exclusive access */
/* Atomic 32-bit register access macro to set one or several bits */
#define ATOMIC_SET_BIT(REG, BIT)                                               \
  do {                                                                         \
    uint32_t val;                                                              \
    do {                                                                       \
      val = __LDREXW((__IO uint32_t *)&(REG)) | (BIT);                         \
    } while ((__STREXW(val, (__IO uint32_t *)&(REG))) != 0U);                  \
  } while (0)

/* Atomic 32-bit register access macro to clear one or several bits */
#define ATOMIC_CLEAR_BIT(REG, BIT)                                             \
  do {                                                                         \
    uint32_t val;                                                              \
    do {                                                                       \
      val = __LDREXW((__IO uint32_t *)&(REG)) & ~(BIT);                        \
    } while ((__STREXW(val, (__IO uint32_t *)&(REG))) != 0U);                  \
  } while (0)

/* Atomic 32-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFY_REG(REG, CLEARMSK, SETMASK)                              \
  do {                                                                         \
    uint32_t val;                                                              \
    do {                                                                       \
      val = (__LDREXW((__IO uint32_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK);     \
    } while ((__STREXW(val, (__IO uint32_t *)&(REG))) != 0U);                  \
  } while (0)

/* Atomic 16-bit register access macro to set one or several bits */
#define ATOMIC_SETH_BIT(REG, BIT)                                              \
  do {                                                                         \
    uint16_t val;                                                              \
    do {                                                                       \
      val = __LDREXH((__IO uint16_t *)&(REG)) | (BIT);                         \
    } while ((__STREXH(val, (__IO uint16_t *)&(REG))) != 0U);                  \
  } while (0)

/* Atomic 16-bit register access macro to clear one or several bits */
#define ATOMIC_CLEARH_BIT(REG, BIT)                                            \
  do {                                                                         \
    uint16_t val;                                                              \
    do {                                                                       \
      val = __LDREXH((__IO uint16_t *)&(REG)) & ~(BIT);                        \
    } while ((__STREXH(val, (__IO uint16_t *)&(REG))) != 0U);                  \
  } while (0)

/* Atomic 16-bit register access macro to clear and set one or several bits */
#define ATOMIC_MODIFYH_REG(REG, CLEARMSK, SETMASK)                             \
  do {                                                                         \
    uint16_t val;                                                              \
    do {                                                                       \
      val = (__LDREXH((__IO uint16_t *)&(REG)) & ~(CLEARMSK)) | (SETMASK);     \
    } while ((__STREXH(val, (__IO uint16_t *)&(REG))) != 0U);                  \
  } while (0)

/**
 * @}
 */

#if defined(USE_HAL_DRIVER)
#include "stm32h7xx_hal.h"
#endif /* USE_HAL_DRIVER */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* STM32H7xx_H */
/**
 * @}
 */

/**
 * @}
 */
