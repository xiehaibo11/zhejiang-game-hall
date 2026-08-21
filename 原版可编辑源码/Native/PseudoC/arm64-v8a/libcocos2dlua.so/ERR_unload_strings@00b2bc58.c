
void ERR_unload_strings(int lib,ERR_STRING_DATA *str)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  if ((iVar2 != 0) && (DAT_01783004 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if ((DAT_01783020 != 0) && (uVar3 = str->error, uVar3 != 0)) {
      if (lib == 0) {
        do {
          OPENSSL_LH_delete(DAT_01783020,str);
          str = str + 1;
        } while (str->error != 0);
      }
      else {
        do {
          lVar1 = DAT_01783020;
          str->error = uVar3 | (uint)(lib << 0x18);
          OPENSSL_LH_delete(lVar1,str);
          str = str + 1;
          uVar3 = str->error;
        } while (uVar3 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
  }
  return;
}

