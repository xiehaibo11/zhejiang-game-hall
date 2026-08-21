
undefined8 OPENSSL_init_crypto(uint param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_01d3ab64 == '\x01') {
    if ((DAT_01d3ab74 & 1) == 0) {
      DAT_01d3ab74 = 1;
      ERR_put_error(0xf,0x74,0x46,"crypto/init.c",0x1f5);
    }
    uVar3 = 0;
  }
  else {
    iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abb4,&LAB_00b2dc84);
    uVar3 = 0;
    if ((iVar2 != 0) && (DAT_01d3abb8 != 0)) {
      if ((param_1 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abbc,&LAB_00b2dce8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab78 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 1 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abbc,FUN_00b2dcf8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3abc0 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 4 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abc4,&LAB_00b2dd24);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab7c == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 2 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abc4,FUN_00b2dd34);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab80 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 5 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abc8,&LAB_00b2dd24);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab7c == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 3 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abc8,FUN_00b2dd54);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab84 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 7 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abcc,FUN_00b2dd74);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab88 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 6 & 1) != 0) {
        CRYPTO_THREAD_write_lock(DAT_01d3abf8);
        if (param_2 == (undefined8 *)0x0) {
          DAT_01d3ac00 = 0;
        }
        else {
          DAT_01d3ac00 = *param_2;
        }
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abcc,FUN_00b2dd94);
        cVar1 = DAT_01d3ab8c;
        CRYPTO_THREAD_unlock(DAT_01d3abf8);
        if (iVar2 == 0) {
          return 0;
        }
        if (cVar1 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 8 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abd0,FUN_00b2ddc0);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3abd4 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 0xb & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abd8,FUN_00b2ddf8);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab90 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 9 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abdc,FUN_00b2de18);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab94 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 10 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abe0,FUN_00b2de38);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab98 == '\0') {
          return 0;
        }
      }
      if ((param_1 >> 0xe & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abe4,FUN_00b2de58);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3ab9c == '\0') {
          return 0;
        }
      }
      if ((param_1 & 0xfe00) != 0) {
        ENGINE_register_all_complete();
      }
      if ((param_1 >> 0x10 & 1) != 0) {
        iVar2 = CRYPTO_THREAD_run_once(&DAT_01d3abe8,&LAB_00b2de78);
        if (iVar2 == 0) {
          return 0;
        }
        if (DAT_01d3aba0 == '\0') {
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

