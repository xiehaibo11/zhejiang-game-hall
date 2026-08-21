
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ERR_load_ERR_strings(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  ulong *puVar7;
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  if ((iVar3 != 0) && (DAT_01783004 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if (((DAT_01783020 != 0) ||
        (DAT_01783020 = OPENSSL_LH_new(&LAB_00b2d218,&LAB_00b2d25c), DAT_01783020 != 0)) &&
       ((DAT_0176e750 != 0 && (OPENSSL_LH_insert(DAT_01783020,&DAT_0176e750), DAT_0176e760 != 0))))
    {
      plVar5 = &DAT_0176e760;
      do {
        OPENSSL_LH_insert(DAT_01783020,plVar5);
        plVar5 = plVar5 + 2;
      } while (*plVar5 != 0);
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if ((((DAT_01783020 != 0) ||
         (DAT_01783020 = OPENSSL_LH_new(&LAB_00b2d218,&LAB_00b2d25c), DAT_01783020 != 0)) &&
        (DAT_0176e5a0 != 0)) && (OPENSSL_LH_insert(DAT_01783020,&DAT_0176e5a0), DAT_0176e5b0 != 0))
    {
      plVar5 = &DAT_0176e5b0;
      do {
        OPENSSL_LH_insert(DAT_01783020,plVar5);
        plVar5 = plVar5 + 2;
      } while (*plVar5 != 0);
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if (((DAT_01783020 != 0) ||
        (DAT_01783020 = OPENSSL_LH_new(&LAB_00b2d218,&LAB_00b2d25c), DAT_01783020 != 0)) &&
       (DAT_0176e490 != 0)) {
      DAT_0176e490 = DAT_0176e490 | 0x2000000;
      OPENSSL_LH_insert(DAT_01783020,&DAT_0176e490);
      if (DAT_0176e4a0 != 0) {
        puVar7 = &DAT_0176e4a0;
        uVar4 = DAT_0176e4a0;
        do {
          lVar2 = DAT_01783020;
          *puVar7 = uVar4 | 0x2000000;
          OPENSSL_LH_insert(lVar2,puVar7);
          puVar7 = puVar7 + 2;
          uVar4 = *puVar7;
        } while (uVar4 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if ((DAT_01782ff0 & 1) == 0) {
      plVar5 = &DAT_01783030;
      puVar6 = &DAT_01783830;
      uVar4 = 1;
      do {
        plVar5[-1] = uVar4;
        if (*plVar5 == 0) {
          iVar3 = openssl_strerror_r(uVar4 & 0xffffffff,puVar6,0x20);
          if (iVar3 == 0) {
            puVar1 = (undefined *)*plVar5;
          }
          else {
            *plVar5 = (long)puVar6;
            puVar1 = puVar6;
          }
          if (puVar1 == (undefined *)0x0) {
            *plVar5 = (long)"unknown";
          }
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 0x20;
        plVar5 = plVar5 + 2;
      } while (uVar4 != 0x80);
      DAT_01782ff0 = 1;
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
    CRYPTO_THREAD_write_lock(DAT_01783018);
    if (((DAT_01783020 != 0) ||
        (DAT_01783020 = OPENSSL_LH_new(&LAB_00b2d218,&LAB_00b2d25c), DAT_01783020 != 0)) &&
       (DAT_01783028 != 0)) {
      DAT_01783028 = DAT_01783028 | 0x2000000;
      OPENSSL_LH_insert(DAT_01783020,&DAT_01783028);
      if (DAT_01783038 != 0) {
        puVar7 = &DAT_01783038;
        uVar4 = DAT_01783038;
        do {
          lVar2 = DAT_01783020;
          *puVar7 = uVar4 | 0x2000000;
          OPENSSL_LH_insert(lVar2,puVar7);
          puVar7 = puVar7 + 2;
          uVar4 = *puVar7;
        } while (uVar4 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01783018);
  }
  return;
}

