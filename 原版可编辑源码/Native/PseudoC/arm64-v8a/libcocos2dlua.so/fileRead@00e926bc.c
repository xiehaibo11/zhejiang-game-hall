
/* cocos2d::experimental::AudioDecoder::fileRead(void*, unsigned long, unsigned long, void*) */

size_t cocos2d::experimental::AudioDecoder::fileRead
                 (void *param_1,ulong param_2,ulong param_3,void *param_4)

{
  size_t __n;
  long lVar1;
  size_t sVar2;
  
  lVar1 = Data::getSize((Data *)((long)param_4 + 0x58));
  sVar2 = lVar1 - *(long *)((long)param_4 + 0x68);
  __n = param_3 * param_2;
  if ((long)sVar2 <= (long)(param_3 * param_2)) {
    __n = sVar2;
  }
  if (0 < (long)__n) {
    lVar1 = Data::getBytes((Data *)((long)param_4 + 0x58));
    memcpy(param_1,(void *)(lVar1 + *(long *)((long)param_4 + 0x68)),__n);
    *(size_t *)((long)param_4 + 0x68) = *(long *)((long)param_4 + 0x68) + __n;
  }
  return __n;
}

