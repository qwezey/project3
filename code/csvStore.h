#ifndef csvStore_h
#define csvStore_h

void initializeId(uint32_t id, unsigned int sortIndex);
int addTable(struct Table * table, uint32_t id);
struct Table * dumpTable(uint32_t id);

#endif /* csvStore_h */
