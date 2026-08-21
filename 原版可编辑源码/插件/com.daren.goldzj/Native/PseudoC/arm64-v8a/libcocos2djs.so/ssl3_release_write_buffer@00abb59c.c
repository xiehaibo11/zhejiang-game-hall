
undefined8 ssl3_release_write_buffer(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x3b4);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + (ulong)(iVar1 - 1) * 0x20 + 0x3d8);
    do {
      CRYPTO_free((void *)*puVar2);
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + -4;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  return 1;
}

