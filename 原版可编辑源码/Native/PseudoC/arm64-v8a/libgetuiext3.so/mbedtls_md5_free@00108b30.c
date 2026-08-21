
void mbedtls_md5_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_1 + lVar1) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x58);
  }
  return;
}

