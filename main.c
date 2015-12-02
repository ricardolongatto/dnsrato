#include "dnsrato.h"


int
main(int argc, char ** argv) {
    dnsdata_v dnsV;

    if (argc < 2) {
        splash();
        exit(0);
    }
    nslookup (argc, argv, &dnsV);
    nslookup_dump (&dnsV);

    if (dnsV.dnsData != NULL) 
        free(dnsV.dnsData);

    return 0;
}
