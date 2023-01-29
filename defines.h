 /*----------------------------------------------------------------------------
  Project :
  Author  : Jaesung Oh
  TEXT Encoding : UTF-8
  ----------------------------------------------------------------------------*/
/* Define to prevent recursive inclusion */
#ifndef __DEFINES_H
#define __DEFINES_H
#ifdef __cplusplus
 extern "C" {
#endif

/* [사용자 디파인] */

//펌웨어 보호설정 자동변경
//#define AUTO_RDP_L1       0

//디버그 메시지 UART
#define DBG_UART          USART2

//반복 타이머
#define BASE_TIM          TIM2
#define BASE_TIM_FREQ     1000   //1kHz (주기:1ms)


/* [사용자 매크로] */

#define BTN_isIN()        !LL_GPIO_IsInputPinSet(B1_GPIO_Port, B1_Pin)

//GPIO제어 메크로
#define LED_ON()          LL_GPIO_SetOutputPin(LD2_GPIO_Port, LD2_Pin)
#define LED_OFF()         LL_GPIO_ResetOutputPin(LD2_GPIO_Port, LD2_Pin)
#define LED_TOGGLE()      LL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin)


#ifdef __cplusplus
}
#endif
#endif /*__ DEFINES_H */
