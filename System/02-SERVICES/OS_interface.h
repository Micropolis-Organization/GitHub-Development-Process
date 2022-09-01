/*****************************************/
/* Author  :  Ahmed Farag                */
/* Version :  V01                        */
/* Date    :  30 Sep 2020                */
/*****************************************/
#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H


void SOS_voidCreatTask (u8 Copy_u8Priority , u16 Copy_u16Priodicity , void (*ptr) (void) ,u8 Copy_FirstDelay);
void SOS_voidStart(void);

#endif 