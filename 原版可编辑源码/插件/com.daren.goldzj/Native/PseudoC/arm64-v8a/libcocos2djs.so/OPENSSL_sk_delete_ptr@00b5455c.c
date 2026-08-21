
long OPENSSL_sk_delete_ptr(int *param_1,long param_2)

{
  uint uVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    pvVar5 = *(void **)(param_1 + 2);
    lVar4 = 0;
    lVar6 = 0x100000000;
    __dest = pvVar5;
    do {
      if (*(long *)((long)pvVar5 + lVar4 * 8) == param_2) {
        iVar3 = (int)lVar4;
        if (iVar3 < 0) {
          return 0;
        }
        if (iVar2 + -1 != iVar3) {
          uVar1 = (iVar2 + -1) - iVar3;
          memmove(__dest,(void *)((long)pvVar5 + (lVar6 >> 0x1d)),
                  -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
          iVar2 = *param_1;
        }
        *param_1 = iVar2 + -1;
        return param_2;
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x100000000;
      __dest = (void *)((long)__dest + 8);
    } while (lVar4 < iVar2);
  }
  return 0;
}

