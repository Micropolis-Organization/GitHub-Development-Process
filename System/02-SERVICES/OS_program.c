/*****************************************/
/* Author  :  Ahmed Farag                */
/* Version :  V01                        */
/* Date    :  30 Sep 2020                */
/*****************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_interface.h"

#include "OS_interface.h"
#include "OS_private.h"
#include "OS_config.h"

#define NULL              (void*)0

volatile u16 TickCounts = 0 ;
 
/*Array of structure to put Tasks in it with priorities */
static TASK OS_Tasks[NUMBER_OF_TASK]  = {NULL} ;

void SOS_voidCreatTask (u8 Copy_u8Priority , u16 Copy_u16Priodicity , void (*ptr) (void) , Copy_FirstDelay)
{
	OS_Tasks[Copy_u8Priority].priodicity = Copy_u16Priodicity ;
	OS_Tasks[Copy_u8Priority].Fptr       = ptr				  ;
}

void SOS_voidStart(void)
{
	/* Initialization of OS */
	MSTK_voidInit();
	/* Tick => 1 msec */
	MSTK_voidSetIntervalPeriodic(1000 , SOS_voidScheduler );
}

/*static void SOS_voidScheduler (void)
{
	for(u8 i = 0 ; i < NUMBER_OF_TASK ; i++)
	{
		if((TickCounts % OS_Tasks[i].priodicity) == 0 )
		{
			OS_Tasks[i].Fptr();
		}
	}
	TickCounts ++ ;
	
}*/

static void SOS_voidScheduler (void)
{
	for(u8 i = 0 ; i < NUMBER_OF_TASK ; i++)
	{
		if(OS_Tasks[i].FirstDelay == 0 )
		{
			OS_Tasks[i].FirstDelay = OS_Tasks[i].priodicity - 1 ;
			OS_Tasks[i].Fptr();
		}
		else 
		{
			OS_Tasks[i].FirstDelay -- ;
		}
	}
	
}