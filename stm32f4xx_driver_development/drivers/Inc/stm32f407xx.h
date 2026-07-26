/*
 * stm32f407xx.h
 *
 *  Created on: Jul 24, 2026
 *      Author: maksy
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_


#define RCC_BASEADDR					0x40023800U  //Reset and clock control base address

/*
 * Base addresses of processor memories
 */

#define FLASH_BASEADDR    				0x08000000U  //Flash memory  base address
#define SRAM1_BASEADDR	  				0x20000000U	 //SRAM1 memory	 base address
#define SRAM2_BASEADDR	  				0x2001C000U	 //SRAM2 memory  base address
#define ROM								0x1FFF0000U  //ROM memory    base address
#define SRAM 							SRAM1_BASEADDR //SRAM memory base address(SRAM1 memory)

/*
 * Base addresses of processor peripherals
 */

#define PERIPH_BASE 					0x40000000U //Peripheral base address
#define APB1_PERIPH_BASE				PERIPH_BASE //APB1 bus base address
#define APB2_PERIPH_BASE				0x40010000U //APB2 bus base address
#define AHB1_PERIPH_BASE				0x40020000U //AHB1 bus base address
#define AHB2_PERIPH_BASE				0x50000000U //AHB2 bus base address
#define AHB3_PERIPH_BASE				0xA0000000U //AHB3 bus base address

/*
 * Base addresses of peripherals which are hanging on AHB1 bus || Base addresses of GPIO's ports
 */

#define GPIOA_BASEADDR  				(AHB1_PERIPH_BASE + 0x0000)//General Purpose Input Output port A base address
#define GPIOB_BASEADDR  				(AHB1_PERIPH_BASE + 0x0400)//General Purpose Input Output port B base address
#define GPIOC_BASEADDR  				(AHB1_PERIPH_BASE + 0x0800)//General Purpose Input Output port C base address
#define GPIOD_BASEADDR  				(AHB1_PERIPH_BASE + 0x0C00)//General Purpose Input Output port D base address
#define GPIOE_BASEADDR  				(AHB1_PERIPH_BASE + 0x1000)//General Purpose Input Output port E base address
#define GPIOF_BASEADDR  				(AHB1_PERIPH_BASE + 0x1400)//General Purpose Input Output port F base address
#define GPIOG_BASEADDR  				(AHB1_PERIPH_BASE + 0x1800)//General Purpose Input Output port G base address
#define GPIOH_BASEADDR  				(AHB1_PERIPH_BASE + 0x1C00)//General Purpose Input Output port H base address
#define GPIOI_BASEADDR  				(APB1_PERIPH_BASE + 0x2000)//General Purpose Input Output port I base address
#define GPIOJ_BASEADDR  				(AHB1_PERIPH_BASE + 0x2400)//General Purpose Input Output port J base address
#define GPIOK_BASEADDR  				(AHB1_PERIPH_BASE + 0x2800)//General Purpose Input Output port K base address

/*
 * Base addresses of peripherals which are hanging on APB1 bus
 */

#define I2C1_BASEADDR					(APB1_PERIPH_BASE + 0x5400)//I2C1   base address
#define I2C2_BASEADDR					(APB1_PERIPH_BASE + 0x5800)//I2C2   base address
#define I2C3_BASEADDR					(APB1_PERIPH_BASE + 0x5C00)//I2C3   base address

#define SPI2_BASEADDR					(APB1_PERIPH_BASE + 0x3800)//SPI    base address
#define SPI3_BASEADDR					(APB1_PERIPH_BASE + 0x3C00)//SPI    base address

#define USART2_BASEADDR					(APB1_PERIPH_BASE + 0x4400)//USART2 base address
#define USART3_BASEADDR					(APB1_PERIPH_BASE + 0x4800)//USART3 base address

#define UART4_BASEADDR					(APB1_PERIPH_BASE + 0x4C00)//UART4  base address
#define UART5_BASEADDR					(APB1_PERIPH_BASE + 0x5000)//UART5  base address

/*
 * Base addresses of peripherals which are hanging on APB2 bus
 */

#define SPI1_BASEADDR					(APB2_PERIPH_BASE + 0x3000)// SPI1   base address

#define USART1_BASEADDR					(APB2_PERIPH_BASE + 0x1000)// USART1 base address
#define USART6_BASEADDR					(APB2_PERIPH_BASE + 0x1400)// USART6 base address

#define EXTI_BASEADDR					(APB2_PERIPH_BASE + 0x3C00)// EXTI   base address

#define SYSCFG_BASEADDR					(APB2_PERIPH_BASE + 0x3800)// SYSCFG base address

#endif /* INC_STM32F407XX_H_ */
