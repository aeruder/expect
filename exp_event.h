/* exp_event.h - event definitions */

int exp_get_next_event (Tcl_Interp *,ExpState **, int, ExpState **, int, int);
int exp_get_next_event_info (Tcl_Interp *, ExpState *);
int exp_dsleep (Tcl_Interp *, double);
void exp_init_event (void);

extern void (*exp_event_exit) (Tcl_Interp *);

void exp_event_disarm (ExpState *,Tcl_FileProc *);
void exp_event_disarm_bg (ExpState *);
void exp_event_disarm_fg (ExpState *);

void exp_arm_background_channelhandler (ExpState *);
void exp_disarm_background_channelhandler (ExpState *);
void exp_disarm_background_channelhandler_force (ExpState *);
void exp_unblock_background_channelhandler (ExpState *);
void exp_block_background_channelhandler (ExpState *);

void exp_background_channelhandler (ClientData,int);

