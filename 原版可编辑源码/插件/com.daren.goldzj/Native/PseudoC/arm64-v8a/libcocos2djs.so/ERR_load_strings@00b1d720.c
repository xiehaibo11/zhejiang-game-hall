
void ERR_load_strings(int lib,ERR_STRING_DATA *str)

{
  long lVar1;
  int extraout_w0;
  ulong uVar2;
  
  ERR_load_ERR_strings();
  if (extraout_w0 != 0) {
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if (((DAT_01d392a0 != 0) ||
        (DAT_01d392a0 = OPENSSL_LH_new(&LAB_00b1ed98,&LAB_00b1eddc), DAT_01d392a0 != 0)) &&
       (uVar2 = str->error, uVar2 != 0)) {
      if (lib == 0) {
        do {
          OPENSSL_LH_insert(DAT_01d392a0,str);
          str = str + 1;
        } while (str->error != 0);
      }
      else {
        do {
          lVar1 = DAT_01d392a0;
          str->error = uVar2 | (uint)(lib << 0x18);
          OPENSSL_LH_insert(lVar1,str);
          str = str + 1;
          uVar2 = str->error;
        } while (uVar2 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
  }
  return;
}

