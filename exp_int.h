/* exp_int.h - private symbols common to both expect program and library

Written by: Don Libes, libes@cme.nist.gov, NIST, 12/3/90

Design and implementation of this program was paid for by U.S. tax
dollars.  Therefore it is public domain.  However, the author and NIST
would appreciate credit if this program or parts of it are used.
*/

#ifndef _EXPECT_INT_H
#define _EXPECT_INT_H

#ifndef TRUE
#define FALSE 0
#define TRUE 1
#endif

#ifndef HAVE_MEMCPY
#define memcpy(x,y,len) bcopy(y,x,len)
#endif

#include <errno.h>
#include <stdlib.h>

void	exp_console_set     (void);
void	expDiagLogPtrSet    (void (*)(char *));
void	expDiagLogPtr       (char *);
void	expDiagLogPtrX      (char *,int);
void	expDiagLogPtrStr    (char *,char *);
void	expDiagLogPtrStrStr (char *,char *,char *);
void	expErrnoMsgSet      (char * (*) (int));
char * expErrnoMsg    (int);


#endif /* _EXPECT_INT_H */
