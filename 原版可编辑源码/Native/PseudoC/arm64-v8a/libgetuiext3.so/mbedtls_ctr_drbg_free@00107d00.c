
void mbedtls_ctr_drbg_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    (*pcRam0000000000000000)(param_1 + 0x158);
    thunk_EXT_FUN_00002bb0(param_1 + 0x28);
    lVar1 = 0;
    do {
      *(undefined1 *)(param_1 + lVar1) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x188);
  }
  return;
}

