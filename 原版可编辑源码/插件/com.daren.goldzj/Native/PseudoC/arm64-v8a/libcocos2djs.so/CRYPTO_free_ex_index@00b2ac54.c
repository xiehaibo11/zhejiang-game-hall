
undefined4 CRYPTO_free_ex_index(uint param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int line;
  undefined4 uVar4;
  
  if (param_1 < 0xe) {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3aaa0,FUN_00b2b674);
    if ((iVar2 != 0) && (DAT_01d3aaa4 != 0)) {
      if (DAT_01d3aaa8 == 0) {
        return 0;
      }
      puVar1 = &DAT_01d3aab0 + (int)param_1;
      CRYPTO_THREAD_write_lock();
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      if (((param_2 < 0) || (iVar2 = OPENSSL_sk_num(*puVar1), iVar2 <= param_2)) ||
         (lVar3 = OPENSSL_sk_value(*puVar1,param_2), lVar3 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
        *(undefined1 **)(lVar3 + 0x20) = &LAB_00b2ad68;
        *(undefined **)(lVar3 + 0x18) = &UNK_00b2ad70;
        *(undefined **)(lVar3 + 0x10) = &UNK_00b2ad64;
      }
      CRYPTO_THREAD_unlock(DAT_01d3aaa8);
      return uVar4;
    }
    iVar2 = 0x41;
    line = 0x3c;
  }
  else {
    iVar2 = 7;
    line = 0x37;
  }
  ERR_put_error(0xf,0x71,iVar2,"crypto/ex_data.c",line);
  return 0;
}

