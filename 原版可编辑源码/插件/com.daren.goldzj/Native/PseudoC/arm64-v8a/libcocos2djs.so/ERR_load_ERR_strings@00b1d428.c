
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
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_01d39280,FUN_00b1d6e8);
  if ((iVar3 != 0) && (DAT_01d39284 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if (((DAT_01d392a0 != 0) ||
        (DAT_01d392a0 = OPENSSL_LH_new(&LAB_00b1ed98,&LAB_00b1eddc), DAT_01d392a0 != 0)) &&
       ((DAT_01d20500 != 0 && (OPENSSL_LH_insert(DAT_01d392a0,&DAT_01d20500), DAT_01d20510 != 0))))
    {
      plVar5 = &DAT_01d20510;
      do {
        OPENSSL_LH_insert(DAT_01d392a0,plVar5);
        plVar5 = plVar5 + 2;
      } while (*plVar5 != 0);
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if ((((DAT_01d392a0 != 0) ||
         (DAT_01d392a0 = OPENSSL_LH_new(&LAB_00b1ed98,&LAB_00b1eddc), DAT_01d392a0 != 0)) &&
        (DAT_01d20350 != 0)) && (OPENSSL_LH_insert(DAT_01d392a0,&DAT_01d20350), DAT_01d20360 != 0))
    {
      plVar5 = &DAT_01d20360;
      do {
        OPENSSL_LH_insert(DAT_01d392a0,plVar5);
        plVar5 = plVar5 + 2;
      } while (*plVar5 != 0);
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if (((DAT_01d392a0 != 0) ||
        (DAT_01d392a0 = OPENSSL_LH_new(&LAB_00b1ed98,&LAB_00b1eddc), DAT_01d392a0 != 0)) &&
       (DAT_01d20240 != 0)) {
      DAT_01d20240 = DAT_01d20240 | 0x2000000;
      OPENSSL_LH_insert(DAT_01d392a0,&DAT_01d20240);
      if (DAT_01d20250 != 0) {
        puVar7 = &DAT_01d20250;
        uVar4 = DAT_01d20250;
        do {
          lVar2 = DAT_01d392a0;
          *puVar7 = uVar4 | 0x2000000;
          OPENSSL_LH_insert(lVar2,puVar7);
          puVar7 = puVar7 + 2;
          uVar4 = *puVar7;
        } while (uVar4 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if ((DAT_01d39270 & 1) == 0) {
      plVar5 = &DAT_01d392b0;
      puVar6 = &DAT_01d39ab0;
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
      DAT_01d39270 = 1;
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    if (((DAT_01d392a0 != 0) ||
        (DAT_01d392a0 = OPENSSL_LH_new(&LAB_00b1ed98,&LAB_00b1eddc), DAT_01d392a0 != 0)) &&
       (DAT_01d392a8 != 0)) {
      DAT_01d392a8 = DAT_01d392a8 | 0x2000000;
      OPENSSL_LH_insert(DAT_01d392a0,&DAT_01d392a8);
      if (DAT_01d392b8 != 0) {
        puVar7 = &DAT_01d392b8;
        uVar4 = DAT_01d392b8;
        do {
          lVar2 = DAT_01d392a0;
          *puVar7 = uVar4 | 0x2000000;
          OPENSSL_LH_insert(lVar2,puVar7);
          puVar7 = puVar7 + 2;
          uVar4 = *puVar7;
        } while (uVar4 != 0);
      }
    }
    CRYPTO_THREAD_unlock(DAT_01d39298);
  }
  return;
}

