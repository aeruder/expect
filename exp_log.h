/* exp_log.h */

extern void		expErrorLog TCL_VARARGS(char *,fmt);
extern void		expErrorLogU (char *);

extern void		expStdoutLog TCL_VARARGS(int,force_stdout);
extern void		expStdoutLogU (char *buf, int force_stdout);

EXTERN void		expDiagInit (void);
EXTERN int		expDiagChannelOpen (Tcl_Interp *,char *);
EXTERN Tcl_Channel	expDiagChannelGet (void);
EXTERN void		expDiagChannelClose (Tcl_Interp *);
EXTERN char *		expDiagFilename (void);
EXTERN int		expDiagToStderrGet (void);
EXTERN void		expDiagToStderrSet (int);
EXTERN void		expDiagWriteBytes (char *,int);
EXTERN void		expDiagWriteChars (char *,int);
EXTERN void		expDiagWriteObj (Tcl_Obj *);
EXTERN void		expDiagLog TCL_VARARGS(char *,fmt);
EXTERN void		expDiagLogU (char *);

EXTERN char *		expPrintify (char *);
EXTERN char *		expPrintifyUni (Tcl_UniChar *,int);
EXTERN char *		expPrintifyObj (Tcl_Obj *);
EXTERN void		expPrintf TCL_VARARGS(char *,fmt);

EXTERN void		expLogInit (void);
EXTERN int		expLogChannelOpen (Tcl_Interp *,char *,int);
EXTERN Tcl_Channel 	expLogChannelGet (void);
EXTERN int		expLogChannelSet (Tcl_Interp *,char *);
EXTERN void		expLogChannelClose (Tcl_Interp *);
EXTERN char *		expLogFilenameGet (void);
EXTERN void		expLogAppendSet (int);
EXTERN int		expLogAppendGet (void);
EXTERN void		expLogLeaveOpenSet (int);
EXTERN int		expLogLeaveOpenGet (void);
EXTERN void		expLogAllSet (int);
EXTERN int		expLogAllGet (void);
EXTERN void		expLogToStdoutSet (int);
EXTERN int		expLogToStdoutGet (void);
EXTERN void		expLogDiagU (char *);
EXTERN int		expWriteBytesAndLogIfTtyU (ExpState *,Tcl_UniChar *,int);

EXTERN int		expLogUserGet (void);
EXTERN void		expLogUserSet (int);

EXTERN void		expLogInteractionU (ExpState *,Tcl_UniChar *,int);
