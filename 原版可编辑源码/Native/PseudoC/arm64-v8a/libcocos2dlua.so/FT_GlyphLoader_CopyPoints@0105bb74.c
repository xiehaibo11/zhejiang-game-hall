
int FT_GlyphLoader_CopyPoints(long param_1,long param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  size_t __n;
  ulong __n_00;
  long lVar5;
  
  sVar1 = *(short *)(param_2 + 0x1a);
  __n_00 = (ulong)sVar1;
  sVar2 = *(short *)(param_2 + 0x18);
  iVar3 = FT_GlyphLoader_CheckPoints(param_1,__n_00 & 0xffffffff,(long)sVar2 & 0xffffffff);
  if (iVar3 == 0) {
    __n = __n_00 << 4;
    lVar5 = (long)(int)sVar1;
    memcpy(*(void **)(param_1 + 0x20),*(void **)(param_2 + 0x20),__n);
    memcpy(*(void **)(param_1 + 0x28),*(void **)(param_2 + 0x28),__n_00);
    memcpy(*(void **)(param_1 + 0x30),*(void **)(param_2 + 0x30),(long)sVar2 << 1);
    cVar4 = *(char *)(param_1 + 0x14);
    if ((cVar4 != '\0') && (*(char *)(param_2 + 0x14) != '\0')) {
      memcpy(*(void **)(param_1 + 0x40),*(void **)(param_2 + 0x40),__n);
      memcpy(*(void **)(param_1 + 0x48),*(void **)(param_2 + 0x48),__n);
      cVar4 = *(char *)(param_1 + 0x14);
    }
    *(short *)(param_1 + 0x1a) = sVar1;
    *(short *)(param_1 + 0x18) = sVar2;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x20) + lVar5 * 0x10;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x28) + lVar5;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30) + (long)(int)sVar2 * 2;
    if (cVar4 != '\0') {
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x40) + lVar5 * 0x10;
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x48) + lVar5 * 0x10;
    }
  }
                    /* try { // try from 0105bc6c to 0115bc8b has its CatchHandler @ 0105bd74 */
  return iVar3;
}

