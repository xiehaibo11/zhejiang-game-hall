
void SCT_set0_signature(long param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_free(*(void **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

