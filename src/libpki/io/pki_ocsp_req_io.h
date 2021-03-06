/* PKI_X509_OCSP_REQ I/O management */

#ifndef _LIBPKI_X509_OCSP_REQ_IO_H
#define _LIBPKI_X509_OCSP_REQ_IO_H

#define PKI_X509_OCSP_REQ_BEGIN_ARMOUR	"-----BEGIN OCSP REQUEST-----"
#define PKI_X509_OCSP_REQ_END_ARMOUR		"-----END OCSP REQUEST-----"

/* ------------------- OCSP_REQ get Operations --------------------------- */
PKI_X509_OCSP_REQ *PKI_X509_OCSP_REQ_get (char *url_s,PKI_CRED *cred,HSM *hsm);
PKI_X509_OCSP_REQ *PKI_X509_OCSP_REQ_get_url (URL *url, PKI_CRED *cred, 
					HSM *hsm );
PKI_X509_OCSP_REQ *PKI_X509_OCSP_REQ_get_mem (PKI_MEM *mem, PKI_CRED *cred);

PKI_X509_OCSP_REQ_STACK *PKI_X509_OCSP_REQ_STACK_get ( char *url_s, 
					PKI_CRED *cred, HSM *hsm );
PKI_X509_OCSP_REQ_STACK *PKI_X509_OCSP_REQ_STACK_get_url ( URL *url, 
					PKI_CRED *cred, HSM *hsm );
PKI_X509_OCSP_REQ_STACK *PKI_X509_OCSP_REQ_STACK_get_mem ( PKI_MEM *mem, 
					PKI_CRED *cred );

/* ------------------- OCSP_REQ put Operations --------------------------- */
int PKI_X509_OCSP_REQ_put (PKI_X509_OCSP_REQ *req, PKI_DATA_FORMAT format, 
			char *url_s, char *mime, PKI_CRED *cred, HSM *hsm);
int PKI_X509_OCSP_REQ_put_url(PKI_X509_OCSP_REQ *req, PKI_DATA_FORMAT format, 
			URL *url, char *mime, PKI_CRED *cred, HSM *hsm);
PKI_MEM *PKI_X509_OCSP_REQ_put_mem( PKI_X509_OCSP_REQ *req, 
			PKI_DATA_FORMAT format, PKI_MEM **pki_mem,
				PKI_CRED *cred, HSM *hsm);

int PKI_X509_OCSP_REQ_STACK_put ( PKI_X509_OCSP_REQ_STACK *sk, 
			PKI_DATA_FORMAT format, char *url_s, char *mime,
				PKI_CRED *cred, HSM *hsm);
int PKI_X509_OCSP_REQ_STACK_put_url (PKI_X509_OCSP_REQ_STACK *sk, 
			PKI_DATA_FORMAT format, URL *url, char *mime,
				PKI_CRED *cred, HSM *hsm );
PKI_MEM *PKI_X509_OCSP_REQ_STACK_put_mem (PKI_X509_OCSP_REQ_STACK *sk, 
			PKI_DATA_FORMAT format, PKI_MEM **pki_mem, 
				PKI_CRED *cred, HSM *hsm );

#endif

