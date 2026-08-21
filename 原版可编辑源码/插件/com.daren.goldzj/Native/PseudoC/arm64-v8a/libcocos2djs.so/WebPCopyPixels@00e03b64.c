
void WebPCopyPixels(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  void *__src;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_2 + 0x50);
    iVar3 = *(int *)(param_1 + 0x50);
    __dest = *(void **)(param_2 + 0x48);
    __src = *(void **)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0xc) + 1;
    do {
      memcpy(__dest,__src,(long)iVar1 << 2);
      iVar4 = iVar4 + -1;
      __src = (void *)((long)__src + (long)iVar3 * 4);
      __dest = (void *)((long)__dest + (long)iVar2 * 4);
    } while (1 < iVar4);
  }
  return;
}

