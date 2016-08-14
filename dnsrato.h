#ifndef DNSRATO_H_
#define DNSRATO_H_

/* System header files */
#include<stdio.h>

#define HOSTLEN   128
#define WORDLEN     50
#define DEFAULT_WORLDLIST "rato.txt"
#define BOOL    unsigned char
#define TRUE    1
#define FALSE   0

typedef struct _dns_data_t {
    char host[128];
    char * host_addr;
    
} dnsdata_t;

typedef struct _dnsdata_v {
    dnsdata_t * dnsData;
    size_t size;
}dnsdata_v;

void nslookup (const int argc, char ** argv, dnsdata_v * dnsV);
void splash(void);
void nslookup_dump (dnsdata_v * dnsV);
int file_possible_len (FILE * fp); 

#endif /* DNSRATO_H_ */
