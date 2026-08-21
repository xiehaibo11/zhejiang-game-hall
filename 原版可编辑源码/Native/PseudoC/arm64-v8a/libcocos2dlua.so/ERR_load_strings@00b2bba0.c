
void ERR_load_strings(int lib,ERR_STRING_DATA *str)

{
  long lVar1;
  int extraout_w0;
  ulong uVar2;
  
  ERR_load_ERR_strings();
  if (extraout_w0 != 0) {
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if (((DAT_01783020 != 0) ||
        (DAT_01783020 = OPENSSL_LH_new(&LAB_00b2d218,&LAB_00b2d25c), DAT_01783020 != 0)) &&
       (uVar2 = str->error, uVar2 != 0)) {
      if (lib == 0) {
        do {
          OPENSSL_LH_insert(DAT_01783020,str);
          str = str + 1;
        } while (str->error != 0);
      }
      else {
        do {
          lVar1 = DAT_01783020;
          str->error = uVar2 | (uint)(lib << 0x18);
          OPENSSL_LH_insert(lVar1,str);
          str = str + 1;
          uVar2 = str->error;
        } while (uVar2 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
  }
  return;
}

