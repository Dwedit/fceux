int32 NeoFilterSound(int32 *in, int32 *out, uint32 inlen, int32 *leftover);
void MakeFilters(int32 rate);
void SexyFilter(int32 *in, int32 *out, int32 count);

extern int64 sexyfilter2_acc;
extern int64 sexyfilter_acc1;
extern int64 sexyfilter_acc2;
