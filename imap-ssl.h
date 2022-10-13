#include <QString>
#include <curl/curl.h>

/* This is a simple example showing how to fetch mail using libcurl's IMAP
 * capabilities. It builds on the imap-fetch.c example adding transport
 * security to protect the authentication details from being snooped.
 *
 * Note that this example requires libcurl 7.30.0 or above.
 */

int imap_ssl (const QString username,
	      const QString password, 
	      const QString serverurl,
	      QString errmsg);

