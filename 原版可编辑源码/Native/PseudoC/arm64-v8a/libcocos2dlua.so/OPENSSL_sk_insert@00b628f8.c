
int OPENSSL_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar4 = *param_1;
    iVar2 = 0;
    if ((-1 < iVar4) && (iVar4 != 0x7fffffff)) {
      uVar6 = *(ulong *)(param_1 + 6);
      if (uVar6 <= (long)iVar4 + 1U) {
        if (uVar6 << 1 < uVar6) {
          return 0;
        }
        if ((uVar6 & 0x7fffffffffffffff) >> 0x3c != 0) {
          return 0;
        }
        pvVar3 = CRYPTO_realloc(*(void **)(param_1 + 2),(int)(uVar6 << 4),"crypto/stack/stack.c",
                                0x8c);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        iVar4 = *param_1;
        *(void **)(param_1 + 2) = pvVar3;
        *(ulong *)(param_1 + 6) = uVar6 << 1;
      }
      iVar5 = iVar4;
      if (-1 < param_3) {
        uVar1 = iVar4 - param_3;
        if (uVar1 != 0 && param_3 <= iVar4) {
          pvVar3 = (void *)(*(long *)(param_1 + 2) + (long)param_3 * 8);
          memmove((void *)((long)pvVar3 + 8),pvVar3,
                  -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
          iVar4 = *param_1;
          iVar5 = param_3;
        }
      }
      iVar2 = iVar4 + 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar5 * 8) = param_2;
      *param_1 = iVar2;
      param_1[4] = 0;
    }
  }
  return iVar2;
}

