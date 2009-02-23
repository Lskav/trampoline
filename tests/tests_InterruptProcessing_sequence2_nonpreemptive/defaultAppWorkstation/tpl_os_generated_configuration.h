#ifndef APP_HEADER_H
#define APP_HEADER_H

#include "tpl_app_objects.h"

/*=============================================================================
 * Declaration of event related defines and structures
 */


/*=============================================================================
 * Declaration of Resource related defines and structures
 */


/*=============================================================================
 * Declaration of Task related defines and structures
 */

#define task_id_of_t1  0
#define t1  task_id_of_t1


/*=============================================================================
 * Declaration of ISR2 related defines and structures
 */

#define isr_id_of_isr1  0
#define isr1  isr_id_of_isr1
#define isr_id_of_isr2  1
#define isr2  isr_id_of_isr2


/*=============================================================================
 * Declaration of Counters related defines and structures
 */


/*=============================================================================
 * Declaration of Alarm related defines and structures
 */


/*=============================================================================
 * Declaration of flags macros
 */
 

/*=============================================================================
 * Declaration of messages identifiers
 */






#ifdef WITH_AUTOSAR
/*=============================================================================
 * Declaration of schedule tables related defines and structures
 */
$SCHEDULETABLES$

/*=============================================================================
 * Declaration of counters ids
 */


#endif

#endif

/* End of file tpl_os_generated_configuration.h */