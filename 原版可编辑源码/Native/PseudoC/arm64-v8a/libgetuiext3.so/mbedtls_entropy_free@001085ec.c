
void mbedtls_entropy_free(long param_1)

{
  long lVar1;
  
  (*pcRam0000000000000000)(param_1 + 0x400);
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x430);
  return;
}

