
undefined8 OPENSSL_init_crypto(uint param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_017848e4 == '\x01') {
    if ((DAT_017848f4 & 1) == 0) {
      DAT_017848f4 = 1;
      ERR_put_error(0xf,0x74,0x46,"crypto/init.c",0x1f5);
    }
    uVar3 = 0;
  }
  else {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_01784934,&LAB_00b3c104);
    uVar3 = 0;
    if ((iVar2 != 0) && (DAT_01784938 != 0)) {
      if ((param_1 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_0178493c,&LAB_00b3c168);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_017848f8 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 1 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_0178493c,FUN_00b3c178);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784940 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 4 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784944,&LAB_00b3c1a4);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_017848fc == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 2 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784944,FUN_00b3c1b4);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784900 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 5 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784948,&LAB_00b3c1a4);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_017848fc == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 3 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784948,FUN_00b3c1d4);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784904 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 7 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_0178494c,FUN_00b3c1f4);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784908 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 6 & 1) != 0) {
        CRYPTO_THREAD_write_lock(DAT_01784978);
        if (param_2 == (undefined8 *)0x0) {
          DAT_01784980 = 0;
        }
        else {
          DAT_01784980 = *param_2;
        }
        iVar2 = CRYPTO_THREAD_run_once(&DAT_0178494c,FUN_00b3c214);
        cVar1 = DAT_0178490c;
        CRYPTO_THREAD_unlock(DAT_01784978);
        if (iVar2 == 0) {
          return 0;
        }
        if (cVar1 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 8 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784950,FUN_00b3c240);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784954 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 0xb & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784958,FUN_00b3c278);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784910 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 9 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_0178495c,FUN_00b3c298);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784914 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 10 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784960,FUN_00b3c2b8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784918 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 0xe & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784964,FUN_00b3c2d8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_0178491c == '\0') {
          return 0;
        }
      }
      if ((param_1 & 0xfe00) != 0) {
        ENGINE_register_all_complete();
      }
      if ((param_1 >> 0x10 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01784968,&LAB_00b3c2f8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01784920 == '\0') {
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

