
void SSL3_RECORD_release(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    puVar2 = (undefined8 *)(param_1 + 0x28);
    do {
      CRYPTO_free((void *)*puVar2);
      uVar1 = uVar1 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 9;
    } while (uVar1 != 0);
  }
  return;
}

