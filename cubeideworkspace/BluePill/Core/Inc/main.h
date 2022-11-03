/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MCU_HSE_IN_Pin GPIO_PIN_0
#define MCU_HSE_IN_GPIO_Port GPIOH
#define MCU_HSE_OUT_Pin GPIO_PIN_1
#define MCU_HSE_OUT_GPIO_Port GPIOH
#define IMU_INTERRUPT_Pin GPIO_PIN_1
#define IMU_INTERRUPT_GPIO_Port GPIOB
#define MCU_BOOT1_Pin GPIO_PIN_2
#define MCU_BOOT1_GPIO_Port GPIOB
#define MCU_I2C2_SCL_Pin GPIO_PIN_10
#define MCU_I2C2_SCL_GPIO_Port GPIOB
#define MCU_I2C_SDA_Pin GPIO_PIN_11
#define MCU_I2C_SDA_GPIO_Port GPIOB
#define MCU_I2C1_SCL_Pin GPIO_PIN_6
#define MCU_I2C1_SCL_GPIO_Port GPIOB
#define MCU_I2C1_SDA_Pin GPIO_PIN_7
#define MCU_I2C1_SDA_GPIO_Port GPIOB
#define MCU_CAN1_RX_Pin GPIO_PIN_8
#define MCU_CAN1_RX_GPIO_Port GPIOB
#define MCU_CAN1_TX_Pin GPIO_PIN_9
#define MCU_CAN1_TX_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
