#ifndef clientTools_h
#define clientTools_h

FILE * connectToServer(const char * hostname, const char * port);
uint32_t requestId(const char * columnHeader);
char sortCsv(const char * path, uint32_t id);
void retrieveCsv(uint32_t id);

#endif /* clientTools_h */
