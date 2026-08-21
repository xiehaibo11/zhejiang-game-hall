
void SSL_set0_rbio(long param_1,undefined8 param_2)

{
  BIO_free_all(*(BIO **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}

