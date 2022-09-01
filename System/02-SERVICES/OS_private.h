/*****************************************/
/* Author  :  Ahmed Farag                */
/* Version :  V01                        */
/* Date    :  30 Sep 2020                */
/*****************************************/
#ifndef OS_PRIVATE_H
#define OS_PRIVATE_H

typedef struct
{
	u16 priodicity      ;
	void (* Fptr) (void);
	u8 FirstDelay ;
	u8 State ;
	
	
}TASK;


#endif