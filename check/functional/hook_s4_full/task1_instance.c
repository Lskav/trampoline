/*Instance of task t1*/

#include "embUnit.h"
#include "tpl_os.h"

DeclareTask(t2);

/*test case:test the reaction of the system called with 
 an activation of a task*/
static void test_t1_instance(void)
{
	StatusType result_inst_1, result_inst_2;
	
	result_inst_1 = GetActiveApplicationMode();
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_1);
	
	EnableAllInterrupts();
	
	result_inst_2 = ChainTask(t2);
	TEST_ASSERT_EQUAL_INT(E_OK , result_inst_2);	
	
}

/*create the test suite with all the test cases*/
TestRef HookTest_seq4_t1_instance(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
		new_TestFixture("test_t1_instance",test_t1_instance)
	};
	EMB_UNIT_TESTCALLER(HookTest,"HookTest_sequence4",NULL,NULL,fixtures);
	
	return (TestRef)&HookTest;
}