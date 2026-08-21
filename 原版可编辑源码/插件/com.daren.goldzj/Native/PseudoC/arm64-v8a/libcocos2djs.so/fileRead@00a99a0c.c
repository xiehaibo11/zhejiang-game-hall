
/* cocos2d::AudioDecoder::fileRead(void*, unsigned long, unsigned long, void*) */

size_t cocos2d::AudioDecoder::fileRead(void *param_1,ulong param_2,ulong param_3,void *param_4)

{
  size_t __n;
  long lVar1;
  size_t sVar2;
  
                    /* try { // try from 00a99a10 to 00b99a17 has its CatchHandler @ 00a99b7c */
                    /* try { // try from 00a99a18 to 00b99a1f has its CatchHandler @ 00a99b74 */
                    /* try { // try from 00a99a20 to 00b99a37 has its CatchHandler @ 00a99b9c */
                    /* try { // try from 00a99a38 to 00b99a3f has its CatchHandler @ 00a99b6c */
  lVar1 = Data::getSize((Data *)((long)param_4 + 0x58));
                    /* try { // try from 00a99a40 to 00b99a57 has its CatchHandler @ 00a99b94 */
  sVar2 = lVar1 - *(long *)((long)param_4 + 0x68);
  __n = param_3 * param_2;
  if ((long)sVar2 <= (long)(param_3 * param_2)) {
    __n = sVar2;
  }
  if (0 < (long)__n) {
                    /* try { // try from 00a99a58 to 00b99a5f has its CatchHandler @ 00a99b64 */
    lVar1 = Data::getBytes((Data *)((long)param_4 + 0x58));
                    /* try { // try from 00a99a60 to 00b99af3 has its CatchHandler @ 00a99ba4 */
    memcpy(param_1,(void *)(lVar1 + *(long *)((long)param_4 + 0x68)),__n);
    *(size_t *)((long)param_4 + 0x68) = *(long *)((long)param_4 + 0x68) + __n;
  }
  return __n;
}

