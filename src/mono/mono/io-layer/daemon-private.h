/*
 * daemon-private.h:  External daemon functions
 *
 * Author:
 *	Dick Porter (dick@ximian.com)
 *
 * (C) 2002 Ximian, Inc.
 */

#ifndef _WAPI_DAEMON_PRIVATE_H_
#define _WAPI_DAEMON_PRIVATE_H_

typedef enum {
	DAEMON_STARTING = 0,
	DAEMON_RUNNING  = 1,
	DAEMON_DIED_AT_STARTUP = 2,
} _wapi_daemon_status;

extern void _wapi_daemon_main (void);

#endif /* _WAPI_DAEMON_PRIVATE_H_ */
