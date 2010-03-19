/* exp_win.h - window support

Written by: Don Libes, NIST, 10/25/93

This file is in the public domain.  However, the author and NIST
would appreciate credit if you use this file or parts of it.
*/

#include <tcl.h> /* For _ANSI_ARGS_ */

int exp_window_size_set(int);
int exp_window_size_get(int);

void  exp_win_rows_set    (char* rows);
char* exp_win_rows_get    (void);
void  exp_win_columns_set (char* columns);
char* exp_win_columns_get (void);

void  exp_win2_rows_set    (int fd, char* rows);
char* exp_win2_rows_get    (int fd);
void  exp_win2_columns_set (int fd, char* columns);
char* exp_win2_columns_get (int fd);
