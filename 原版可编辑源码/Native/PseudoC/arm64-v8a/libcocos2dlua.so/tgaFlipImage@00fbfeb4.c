
/* cocos2d::tgaFlipImage(cocos2d::sImageTGA*) */

void cocos2d::tgaFlipImage(sImageTGA *param_1)

{
  void *__src;
  void *__dest;
  size_t __size;
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  __size = (long)*(short *)(param_1 + 6) * (ulong)((byte)param_1[5] >> 3);
  __dest = malloc(__size);
  if (__dest != (void *)0x0) {
    uVar4 = (uint)*(short *)(param_1 + 8);
    if (1 < *(short *)(param_1 + 8)) {
      lVar1 = 0;
      lVar2 = 0;
      iVar3 = -1;
      do {
        lVar5 = *(long *)(param_1 + 0x10);
        __src = (void *)(lVar5 + lVar1);
        memcpy(__dest,__src,__size);
        lVar2 = lVar2 + 1;
        memcpy(__src,(void *)(lVar5 + (long)(iVar3 + (short)uVar4) * (long)(int)__size),__size);
        memcpy((void *)(*(long *)(param_1 + 0x10) +
                       (long)(iVar3 + *(short *)(param_1 + 8)) * (long)(int)__size),__dest,__size);
        uVar4 = (uint)*(ushort *)(param_1 + 8);
        lVar1 = lVar1 + __size;
        iVar3 = iVar3 + -1;
      } while (lVar2 < (int)((uVar4 + (*(ushort *)(param_1 + 8) >> 0xf)) * 0x10000) >> 0x11);
    }
    free(__dest);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

