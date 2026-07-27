/*
 * stm32f407xx.h
 *
 *  Created on: Jul 24, 2026
 *      Author: maksy
 */
#include <stdint.h>
#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#define __IO /*prefix for volatile uint32_t Input Output Pin*/	volatile uint32_t

#define RCC_BASEADDR					0x40023800U  //Reset and clock control base address

/*
 * Base addresses of processor memories
 */

#define FLASH_BASEADDR    				0x08000000U  										           //Flash memory  base address
#define SRAM1_BASEADDR	  				0x20000000U	 										           //SRAM1 memory	 base address
#define SRAM2_BASEADDR	  				0x2001C000U	 										           //SRAM2 memory  base address
#define ROM								0x1FFF0000U  										           //ROM memory    base address
#define SRAM 							SRAM1_BASEADDR										           //SRAM memory base address(SRAM1 memory)

/*
 * Base addresses of processor peripherals
 */

#define PERIPH_BASE 					0x40000000U                     					           //Peripheral base address
#define APB1_PERIPH_BASE				PERIPH_BASE                     					           //APB1 bus base address
#define APB2_PERIPH_BASE				0x40010000U                     					           //APB2 bus base address
#define AHB1_PERIPH_BASE				0x40020000U                     					           //AHB1 bus base address
#define AHB2_PERIPH_BASE				0x50000000U                     					           //AHB2 bus base address
#define AHB3_PERIPH_BASE				0xA0000000U                     					           //AHB3 bus base address




/*
 * Base addresses of peripherals which are hanging on AHB1 bus || Base addresses of GPIO's ports
 */

#define GPIOA_BASEADDR  				(AHB1_PERIPH_BASE + 0x0000)                                    //General Purpose Input Output port A base address
#define GPIOB_BASEADDR  				(AHB1_PERIPH_BASE + 0x0400)                                    //General Purpose Input Output port B base address
#define GPIOC_BASEADDR  				(AHB1_PERIPH_BASE + 0x0800)                                    //General Purpose Input Output port C base address
#define GPIOD_BASEADDR  				(AHB1_PERIPH_BASE + 0x0C00)                                    //General Purpose Input Output port D base address
#define GPIOE_BASEADDR  				(AHB1_PERIPH_BASE + 0x1000)                                    //General Purpose Input Output port E base address
#define GPIOF_BASEADDR  				(AHB1_PERIPH_BASE + 0x1400)                                    //General Purpose Input Output port F base address
#define GPIOG_BASEADDR  				(AHB1_PERIPH_BASE + 0x1800)                                    //General Purpose Input Output port G base address
#define GPIOH_BASEADDR  				(AHB1_PERIPH_BASE + 0x1C00)                                    //General Purpose Input Output port H base address
#define GPIOI_BASEADDR  				(APB1_PERIPH_BASE + 0x2000)                                    //General Purpose Input Output port I base address
#define GPIOJ_BASEADDR  				(AHB1_PERIPH_BASE + 0x2400)                                    //General Purpose Input Output port J base address
#define GPIOK_BASEADDR  				(AHB1_PERIPH_BASE + 0x2800)                                    //General Purpose Input Output port K base address




/*
 * Base addresses of peripherals which are hanging on APB1 bus
 */

#define I2C1_BASEADDR					(APB1_PERIPH_BASE + 0x5400)                                    //I2C1   base address
#define I2C2_BASEADDR					(APB1_PERIPH_BASE + 0x5800)                                    //I2C2   base address
#define I2C3_BASEADDR					(APB1_PERIPH_BASE + 0x5C00)                                    //I2C3   base address

#define SPI2_BASEADDR					(APB1_PERIPH_BASE + 0x3800)                                    //SPI    base address
#define SPI3_BASEADDR					(APB1_PERIPH_BASE + 0x3C00)                                    //SPI    base address

#define USART2_BASEADDR					(APB1_PERIPH_BASE + 0x4400)                                    //USART2 base address
#define USART3_BASEADDR					(APB1_PERIPH_BASE + 0x4800)                                    //USART3 base address

#define UART4_BASEADDR					(APB1_PERIPH_BASE + 0x4C00)                                    //UART4  base address
#define UART5_BASEADDR					(APB1_PERIPH_BASE + 0x5000)                                    //UART5  base address




/*
 * Base addresses of peripherals which are hanging on APB2 bus
 */

#define SPI1_BASEADDR					(APB2_PERIPH_BASE + 0x3000)                                    // SPI1   base address

#define USART1_BASEADDR					(APB2_PERIPH_BASE + 0x1000)                                    // USART1 base address
#define USART6_BASEADDR					(APB2_PERIPH_BASE + 0x1400)                                    // USART6 base address

#define EXTI_BASEADDR					(APB2_PERIPH_BASE + 0x3C00)                                    // EXTI   base address

#define SYSCFG_BASEADDR					(APB2_PERIPH_BASE + 0x3800)                                    // SYSCFG base address



/*
 * Note: Registers of peripheral are specific to MCU
 * e.g.: Registers of STM32F4xx series microcontrollers may slightly vary.
 * Please check your Devise's Reference manual
 */














/*
 * Peripheral definitions (Peripheral base address type casted to xxx_RegDef_t)
 */

/*
 * GPIO ports section || GPIOA->xx == (GPIO_RegDef_t*)GPIOA_BASEADDR.xx
 */

typedef struct
{
	__IO MODER;						   //Offset: 0x00 				   	                               //GPIO port mode register (GPIOx_MODER)
	__IO OTYPER;                       //Offset: 0x04                                                  //GPIO port output type register (GPIOx_OTYPER)
	__IO OSPEEDR;                      //Offset: 0x08                                                  //GPIO port output speed register (GPIOx_OSPEEDR)
	__IO PUPDR;                        //Offset: 0x0C                                                  //GPIO port pull-up/pull-down register (GPIOx_PUPDR)
	__IO IDR;                          //Offset: 0x10                                                  //GPIO port input data register (GPIOx_IDR)
	__IO ODR;                          //Offset: 0x14                                                  //GPIO port output data register (GPIOx_ODR)
	__IO BSRR;                         //Offset: 0x18                                                  //GPIO port bit set/reset register (GPIOx_BSRR)
	__IO LCKR;                         //Offset: 0x1C                                                  //GPIO port configuration lock register (GPIOx_LCKR)
	__IO AFRL;                         //Offset: 0x20                                                  //GPIO alternate function low register (GPIOx_AFRL)
	__IO AFRH;                         //Offset: 0x24                                                  //GPIO alternate function high register (GPIOx_AFRH)
}GPIO_RegDef_t;                        //General Purpose Input Output Register Definition

#define GPIOA 							((GPIO_RegDef_t*)GPIOA_BASEADDR)                               //GPIOA type casted to GPIO_RegDef_t
#define GPIOB 							((GPIO_RegDef_t*)GPIOB_BASEADDR)                               //...
#define GPIOC 							((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD 							((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE 							((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF 							((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG 							((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH 							((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI 							((GPIO_RegDef_t*)GPIOI_BASEADDR)
#define GPIOJ 							((GPIO_RegDef_t*)GPIOJ_BASEADDR)
#define GPIOK 							((GPIO_RegDef_t*)GPIOK_BASEADDR)                               //GPIOK type casted to GPIO_RegDef_t


/*
 * RCC port section || RCC->xx == (RCC_RegDef_t*)RCC_BASEADDR.xx
 */

typedef struct {
    __IO CR;                            // Offset: 0x00                                                // RCC clock control register
    __IO PLLCFGR;                       // Offset: 0x04                                                // RCC PLL configuration register
    __IO CFGR;                          // Offset: 0x08                                                // RCC clock configuration register
    __IO CIR;                           // Offset: 0x0C                                                // RCC clock interrupt register
    __IO AHB1RSTR;                      // Offset: 0x10                                                // RCC AHB1 peripheral reset register
    __IO AHB2RSTR;                      // Offset: 0x14                                                // RCC AHB2 peripheral reset register
    __IO AHB3RSTR;                      // Offset: 0x18                                                // RCC AHB3 peripheral reset register
    uint32_t      RESERVED0;            // Offset: 0x1C                                                // Reserved
    __IO APB1RSTR;                      // Offset: 0x20                                                // RCC APB1 peripheral reset register
    __IO APB2RSTR;                      // Offset: 0x24                                                // RCC APB2 peripheral reset register
    uint32_t      RESERVED1[2];         // Offset: 0x28 - 0x2C                                         // Reserved
    __IO AHB1ENR;                       // Offset: 0x30                                                // RCC AHB1 peripheral clock enable register
    __IO AHB2ENR;                       // Offset: 0x34                                                // RCC AHB2 peripheral clock enable register
    __IO AHB3ENR;                       // Offset: 0x38                                                // RCC AHB3 peripheral clock enable register
    uint32_t      RESERVED2;            // Offset: 0x3C                                                // Reserved
    __IO APB1ENR;                       // Offset: 0x40                                                // RCC APB1 peripheral clock enable register
    __IO APB2ENR;                       // Offset: 0x44                                                // RCC APB2 peripheral clock enable register
    uint32_t      RESERVED3[2];         // Offset: 0x48 - 0x4C                                         // Reserved
    __IO AHB1LPENR;                     // Offset: 0x50                                                // RCC AHB1 peripheral clock enable in low power mode register
    __IO AHB2LPENR;                     // Offset: 0x54                                                // RCC AHB2 peripheral clock enable in low power mode register
    __IO AHB3LPENR;                     // Offset: 0x58                                                // RCC AHB3 peripheral clock enable in low power mode register
    uint32_t      RESERVED4;            // Offset: 0x5C                                                // Reserved
    __IO APB1LPENR;                     // Offset: 0x60                                                // RCC APB1 peripheral clock enable in low power mode register
    __IO APB2LPENR;                     // Offset: 0x64                                                // RCC APB2 peripheral clock enable in low power mode register
    uint32_t      RESERVED5[2];         // Offset: 0x68 - 0x6C                                         // Reserved
    __IO BDCR;                          // Offset: 0x70                                                // RCC Backup domain control register
    __IO CSR;                           // Offset: 0x74                                                // RCC clock control & status register
    uint32_t      RESERVED6[2];         // Offset: 0x78 - 0x7C                                         // Reserved
    __IO SSCGR;                         // Offset: 0x80                                                // RCC spread spectrum clock generation register
    __IO PLLI2SCFGR;                    // Offset: 0x84                                                // RCC PLLI2S configuration register
} RCC_RegDef_t;                         // Reset And Clock Control Register Definition

#define RCC								((RCC_RegDef_t*)RCC_BASEADDR)                                  //RCC type casted to RCC_RegDef_t






/*
 * Clock Enable Macros for GPIOx peripherals
 * */

#define GPIOA_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 0));
#define GPIOB_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 1));
#define GPIOC_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 2));
#define GPIOD_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 3));
#define GPIOE_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 4));
#define GPIOF_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 5));
#define GPIOG_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 6));
#define GPIOH_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 7));
#define GPIOI_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 8));
#define GPIOJ_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 9));
#define GPIOK_PCLK_ENR()		(RCC->AHB1ENR |= (1 << 10));


/*
 * Clock Enable Macros for I2Cx peripherals
 * */

#define I2C1_PCLK_ENR()		(RCC->APB1ENR |= (1 << 21));
#define I2C2_PCLK_ENR()		(RCC->APB1ENR |= (1 << 22));
#define I2C3_PCLK_ENR()		(RCC->APB1ENR |= (1 << 23));


/*
 * Clock Enable Macros for I2Cx peripherals
 * */

#define SPI1_PCLK_ENR()	 	(RCC->APB2ENR |= (1 << 12));
#define SPI2_PCLK_ENR()	 	(RCC->APB1ENR |= (1 << 14));
#define SPI3_PCLK_ENR()		(RCC->APB1ENR |= (1 << 15));

/*
 * Clock Enable Macros for USARTx peripherals
 * */

#define USART1_PCLK_ENR()    (RCC->APB2ENR |= (1 << 4));
#define USART2_PCLK_ENR()    (RCC->APB1ENR |= (1 << 17));
#define USART3_PCLK_ENR()    (RCC->APB1ENR |= (1 << 18));
#define USART6_PCLK_ENR()    (RCC->APB2ENR |= (1 << 5));


/*
 * Clock Enable Macros for UARTx peripherals
 * */

#define UART4_PCLK_ENR()    (RCC->APB1ENR |= (1 << 19));
#define UART5_PCLK_ENR()    (RCC->APB2ENR |= (1 << 20));


/*
 * Clock Enable Macros for SYSCFG (System Configuration)
 * */

#define SYSCFG_PCLK_ENR()    (RCC->APB2ENR |= (1 << 14));






