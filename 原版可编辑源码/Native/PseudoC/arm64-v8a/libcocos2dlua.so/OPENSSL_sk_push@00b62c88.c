
int OPENSSL_sk_push(int *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar5 = 0;
    if ((-1 < iVar2) && (iVar2 != 0x7fffffff)) {
      uVar6 = *(ulong *)(param_1 + 6);
      uVar1 = (long)iVar2 + 1;
      iVar7 = iVar2;
      iVar5 = iVar2;
      if (uVar6 <= uVar1) {
        if (uVar6 << 1 < uVar6) {
          return 0;
        }
        if ((uVar6 & 0x7fffffffffffffff) >> 0x3c != 0) {
          return 0;
        }
        pvVar4 = CRYPTO_realloc(*(void **)(param_1 + 2),(int)(uVar6 << 4),"crypto/stack/stack.c",
                                0x8c);
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        iVar7 = *param_1;
        *(void **)(param_1 + 2) = pvVar4;
        *(ulong *)(param_1 + 6) = uVar6 << 1;
        uVar3 = iVar7 - iVar2;
        iVar5 = iVar7;
        if (uVar3 != 0 && iVar2 <= iVar7) {
          memmove((void *)((long)pvVar4 + uVar1 * 8),(void *)((long)pvVar4 + (long)iVar2 * 8),
                  -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
          iVar7 = iVar2;
          iVar5 = *param_1;
        }
      }
      iVar5 = iVar5 + 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar7 * 8) = param_2;
      *param_1 = iVar5;
      param_1[4] = 0;
    }
  }
  return iVar5;
}

