
void FUN_00af55ec(void)

{
  void *ptr;
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (DAT_01782db8 != (void *)0x0) {
    if (DAT_01782dc0 != 0) {
      uVar1 = 0;
      do {
        puVar2 = (undefined8 *)((long)DAT_01782db8 + uVar1 * 0x18);
        CRYPTO_free((void *)*puVar2);
        plVar3 = puVar2 + 1;
        ptr = (void *)*plVar3;
        if (puVar2[2] != 0) {
          lVar4 = 0;
          uVar5 = 0;
          do {
            CRYPTO_free(*(void **)((long)ptr + lVar4));
            CRYPTO_free(*(void **)(*plVar3 + lVar4 + 8));
            ptr = (void *)*plVar3;
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar5 < (ulong)puVar2[2]);
        }
        CRYPTO_free(ptr);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_01782dc0);
    }
    CRYPTO_free(DAT_01782db8);
    DAT_01782db8 = (void *)0x0;
    DAT_01782dc0 = 0;
  }
  return;
}

