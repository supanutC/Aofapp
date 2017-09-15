#include "af.h"

int 
af_state_idle(int messageType, EC_UTILS* utils, EQX_MSG *emsg, AF_INSTANCE *instance, char* err)
{	
	SFLOG_DEBUG("In state idle");
	instance->command = MY_AF_SEND_ANY;
	(void) ec_log_write (utils, "LOGNAME", "Any word");

	strcpy(emsg->diag, "in state idle");
	return 0;
}

