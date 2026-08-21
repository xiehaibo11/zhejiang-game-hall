
void ossl_statem_clear(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0x100000000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

