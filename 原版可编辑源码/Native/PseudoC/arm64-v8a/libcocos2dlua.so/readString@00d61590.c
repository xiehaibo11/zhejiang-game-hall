
void * readString(long *param_1)

{
  void *__dest;
  uint uVar1;
  byte *pbVar2;
  size_t __n;
  
                    /* catch() { ... } // from try @ 00d61330 with catch @ 00d61598 */
                    /* catch() { ... } // from try @ 00d61344 with catch @ 00d6159c */
  pbVar2 = (byte *)*param_1;
  *param_1 = (long)(pbVar2 + 1);
  uVar1 = *pbVar2 & 0x7f;
  if ((char)*pbVar2 < '\0') {
    *param_1 = (long)(pbVar2 + 2);
    uVar1 = uVar1 | (pbVar2[1] & 0x7f) << 7;
    if ((char)pbVar2[1] < '\0') {
      *param_1 = (long)(pbVar2 + 3);
      uVar1 = uVar1 | (pbVar2[2] & 0x7f) << 0xe;
                    /* try { // try from 00d615e0 to 00e6166b has its CatchHandler @ 00d615e0
                       catch() { ... } // from try @ 00d615e0 with catch @ 00d615e0
                       catch() { ... } // from try @ 00d61790 with catch @ 00d615e0 */
      if ((char)pbVar2[2] < '\0') {
        *param_1 = (long)(pbVar2 + 4);
        uVar1 = uVar1 | (pbVar2[3] & 0x7f) << 0x15;
        if ((char)pbVar2[3] < '\0') {
          *param_1 = (long)(pbVar2 + 5);
          uVar1 = uVar1 | (uint)pbVar2[4] << 0x1c;
        }
      }
    }
  }
  if (uVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)_spMalloc((long)(int)uVar1,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.c"
                               ,0x9a);
    __n = (long)(int)uVar1 - 1;
    memcpy(__dest,(void *)*param_1,__n);
    *param_1 = *param_1 + __n;
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  return __dest;
}

