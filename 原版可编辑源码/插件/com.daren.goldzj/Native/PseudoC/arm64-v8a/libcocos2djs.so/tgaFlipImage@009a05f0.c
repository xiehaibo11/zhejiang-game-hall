
/* cocos2d::tgaFlipImage(cocos2d::sImageTGA*) */

void cocos2d::tgaFlipImage(sImageTGA *param_1)

{
  void *__src;
  void *__dest;
  size_t __size;
  long lVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  
  __size = (long)*(short *)(param_1 + 6) * (ulong)((byte)param_1[5] >> 3);
  __dest = malloc(__size);
  if (__dest != (void *)0x0) {
    sVar4 = *(short *)(param_1 + 8);
    if (1 < sVar4) {
                    /* catch() { ... } // from try @ 009a042c with catch @ 009a063c */
      lVar1 = 0;
                    /* catch() { ... } // from try @ 009a0420 with catch @ 009a0640 */
      lVar2 = 0;
                    /* catch() { ... } // from try @ 009a0400 with catch @ 009a0644 */
      iVar3 = -1;
      do {
        lVar5 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 009a0438 with catch @ 009a0654 */
        __src = (void *)(lVar5 + lVar1);
        memcpy(__dest,__src,__size);
        lVar2 = lVar2 + 1;
        memcpy(__src,(void *)(lVar5 + (long)(iVar3 + sVar4) * (long)(int)__size),__size);
        memcpy((void *)(*(long *)(param_1 + 0x10) +
                       (long)(iVar3 + *(short *)(param_1 + 8)) * (long)(int)__size),__dest,__size);
        sVar4 = *(short *)(param_1 + 8);
        lVar1 = lVar1 + __size;
        iVar3 = iVar3 + -1;
                    /* try { // try from 009a06ac to 00aa070b has its CatchHandler @ 009a06ac
                       catch() { ... } // from try @ 009a06ac with catch @ 009a06ac
                       catch() { ... } // from try @ 009a0904 with catch @ 009a06ac */
      } while (lVar2 < (short)((uint)(int)(short)(sVar4 - (sVar4 >> 0xf)) >> 1));
    }
    free(__dest);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

