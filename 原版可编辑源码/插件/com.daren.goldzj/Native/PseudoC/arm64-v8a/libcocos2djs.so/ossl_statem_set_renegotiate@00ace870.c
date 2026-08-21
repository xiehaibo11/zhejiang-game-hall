
void ossl_statem_set_renegotiate(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 2;
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}

