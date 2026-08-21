
int * OPENSSL_sk_deep_copy(uint *param_1,code *param_2,code *param_3)

{
  bool bVar1;
  uint uVar2;
  int *ptr;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (-1 < (int)*param_1) {
    ptr = CRYPTO_malloc(0x28,"crypto/stack/stack.c",0x48);
    if (ptr == (int *)0x0) {
      return (int *)0x0;
    }
    *(undefined8 *)(ptr + 8) = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(ptr + 6) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(ptr + 4) = uVar6;
    uVar6 = *(undefined8 *)param_1;
    *(undefined8 *)(ptr + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)ptr = uVar6;
    uVar2 = *param_1;
    if ((int)uVar2 < 5) {
      uVar2 = 4;
    }
    *(ulong *)(ptr + 6) = (ulong)uVar2;
    lVar3 = CRYPTO_zalloc((ulong)uVar2 << 3,"crypto/stack/stack.c",0x4f);
    *(long *)(ptr + 2) = lVar3;
    if (lVar3 != 0) {
      iVar5 = *ptr;
      if (iVar5 < 1) {
        return ptr;
      }
      lVar3 = 0;
      while (*(long *)(*(long *)(param_1 + 2) + lVar3 * 8) == 0) {
LAB_00b542ec:
        lVar3 = lVar3 + 1;
        if (iVar5 <= lVar3) {
          return ptr;
        }
      }
      lVar4 = (*param_2)();
      *(long *)(*(long *)(ptr + 2) + lVar3 * 8) = lVar4;
      if (lVar4 != 0) {
        iVar5 = *ptr;
        goto LAB_00b542ec;
      }
      if (0 < (int)lVar3) {
        lVar3 = (long)(int)lVar3;
        do {
          if (*(long *)(*(long *)(ptr + 2) + (lVar3 + -1) * 8) != 0) {
            (*param_3)();
          }
          bVar1 = 1 < lVar3;
          lVar3 = lVar3 + -1;
        } while (bVar1);
      }
      CRYPTO_free(*(void **)(ptr + 2));
    }
    CRYPTO_free(ptr);
  }
  return (int *)0x0;
}

