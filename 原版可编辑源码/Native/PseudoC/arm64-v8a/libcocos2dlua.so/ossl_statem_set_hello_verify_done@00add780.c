
void ossl_statem_set_hello_verify_done(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0x100000014;
  return;
}

