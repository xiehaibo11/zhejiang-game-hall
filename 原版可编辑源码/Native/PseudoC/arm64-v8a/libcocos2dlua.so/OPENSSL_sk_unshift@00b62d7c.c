
uint OPENSSL_sk_unshift(uint *param_1,undefined8 param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = 0;
  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    uVar2 = 0;
    if ((-1 < (int)uVar3) && (uVar3 != 0x7fffffff)) {
      uVar4 = *(ulong *)(param_1 + 6);
      if (uVar4 <= (long)(int)uVar3 + 1U) {
        if (uVar4 << 1 < uVar4) {
          return 0;
        }
        if ((uVar4 & 0x7fffffffffffffff) >> 0x3c != 0) {
          return 0;
        }
        pvVar1 = CRYPTO_realloc(*(void **)(param_1 + 2),(int)(uVar4 << 4),"crypto/stack/stack.c",
                                0x8c);
        if (pvVar1 == (void *)0x0) {
          return 0;
        }
        uVar3 = *param_1;
        *(void **)(param_1 + 2) = pvVar1;
        *(ulong *)(param_1 + 6) = uVar4 << 1;
      }
      uVar2 = uVar3;
      if (0 < (int)uVar3) {
        memmove((void *)((long)*(void **)(param_1 + 2) + 8),*(void **)(param_1 + 2),
                -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
        uVar3 = 0;
        uVar2 = *param_1;
      }
      uVar2 = uVar2 + 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)(int)uVar3 * 8) = param_2;
      *param_1 = uVar2;
      param_1[4] = 0;
    }
  }
  return uVar2;
}

