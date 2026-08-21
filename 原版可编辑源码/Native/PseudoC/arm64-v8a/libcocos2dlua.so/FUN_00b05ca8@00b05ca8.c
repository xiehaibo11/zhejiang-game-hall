
long FUN_00b05ca8(BIO *param_1,int param_2,long param_3,BIO *param_4)

{
  int iVar1;
  BIO *bp;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  void *pvVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  piVar11 = param_1->ptr;
  switch(param_2) {
  case 1:
    piVar11[4] = 0;
    piVar11[5] = 0;
    piVar11[8] = 0;
    piVar11[9] = 0;
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 1;
    break;
  case 3:
    return (long)piVar11[8];
  case 10:
    if (piVar11[4] != 0) {
      return (long)piVar11[4];
    }
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 10;
    break;
  case 0xb:
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    if (0 < piVar11[8]) {
      while( true ) {
        BIO_clear_flags(param_1,0xf);
        if (piVar11[8] < 1) break;
        iVar1 = BIO_write(param_1->next_bio,(void *)(*(long *)(piVar11 + 6) + (long)piVar11[9]),
                          piVar11[8]);
        BIO_copy_next_retry(param_1);
        if (iVar1 < 1) {
          return (long)iVar1;
        }
        piVar11[8] = piVar11[8] - iVar1;
        piVar11[9] = piVar11[9] + iVar1;
      }
      piVar11[8] = 0;
      piVar11[9] = 0;
      bp = param_1->next_bio;
    }
    param_2 = 0xb;
    break;
  case 0xc:
    lVar3 = BIO_int_ctrl(param_4,0x75,(long)*piVar11,0);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = BIO_int_ctrl(param_4,0x75,(long)piVar11[1],1);
    if (lVar3 == 0) {
      return 0;
    }
    return 1;
  case 0xd:
    if (piVar11[8] != 0) {
      return (long)piVar11[8];
    }
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
    param_2 = 0xd;
    break;
  default:
    iVar1 = (int)param_3;
    switch(param_2) {
    case 0x65:
      if (param_1->next_bio != (bio_st *)0x0) {
        BIO_clear_flags(param_1,0xf);
        lVar3 = BIO_ctrl(param_1->next_bio,0x65,param_3,param_4);
        BIO_copy_next_retry(param_1);
        return lVar3;
      }
      return 0;
    case 0x74:
      iVar1 = piVar11[4];
      uVar4 = (ulong)iVar1;
      if (iVar1 < 1) {
        return 0;
      }
      if (iVar1 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4 & 0xfffffffffffffffe;
        if (uVar5 != 0) {
          lVar6 = 0;
          lVar3 = 0;
          pcVar7 = (char *)(*(long *)(piVar11 + 2) + (long)piVar11[5] + 1);
          uVar8 = uVar5;
          do {
            uVar8 = uVar8 - 2;
            if (pcVar7[-1] == '\n') {
              lVar6 = lVar6 + 1;
            }
            if (*pcVar7 == '\n') {
              lVar3 = lVar3 + 1;
            }
            pcVar7 = pcVar7 + 2;
          } while (uVar8 != 0);
          lVar3 = lVar3 + lVar6;
          if (uVar5 == uVar4) {
            return lVar3;
          }
          goto LAB_00b05f4c;
        }
      }
      lVar3 = 0;
LAB_00b05f4c:
      do {
        pcVar7 = (char *)(*(long *)(piVar11 + 2) + (long)piVar11[5] + uVar5);
        uVar5 = uVar5 + 1;
        if (*pcVar7 == '\n') {
          lVar3 = lVar3 + 1;
        }
      } while ((long)uVar5 < (long)uVar4);
      return lVar3;
    case 0x75:
      iVar12 = iVar1;
      iVar10 = iVar1;
      if (param_4 != (BIO *)0x0) {
        if (*(int *)&param_4->method == 0) {
          iVar10 = piVar11[1];
        }
        else {
          iVar12 = *piVar11;
        }
      }
      pvVar2 = *(void **)(piVar11 + 2);
      pvVar9 = *(void **)(piVar11 + 6);
      if (((iVar12 < 0x1001) || (iVar12 == *piVar11)) ||
         (pvVar2 = CRYPTO_malloc(iVar1,"crypto/bio/bf_buff.c",0x138), pvVar2 != (void *)0x0)) {
        if (((iVar10 < 0x1001) || (iVar10 == piVar11[1])) ||
           (pvVar9 = CRYPTO_malloc(iVar1,"crypto/bio/bf_buff.c",0x13d), pvVar9 != (void *)0x0)) {
          if (*(void **)(piVar11 + 2) != pvVar2) {
            CRYPTO_free(*(void **)(piVar11 + 2));
            *(void **)(piVar11 + 2) = pvVar2;
            piVar11[4] = 0;
            piVar11[5] = 0;
            *piVar11 = iVar12;
          }
          if (*(void **)(piVar11 + 6) != pvVar9) {
            CRYPTO_free(*(void **)(piVar11 + 6));
            *(void **)(piVar11 + 6) = pvVar9;
            piVar11[8] = 0;
            piVar11[9] = 0;
            piVar11[1] = iVar10;
          }
          return 1;
        }
        if (pvVar2 != *(void **)(piVar11 + 2)) {
          CRYPTO_free(pvVar2);
        }
      }
LAB_00b06074:
      ERR_put_error(0x20,0x72,0x41,"crypto/bio/bf_buff.c",0x183);
      return 0;
    case 0x7a:
      if (*piVar11 < param_3) {
        pvVar2 = CRYPTO_malloc(iVar1,"crypto/bio/bf_buff.c",0x11b);
        if (pvVar2 == (void *)0x0) goto LAB_00b06074;
        CRYPTO_free(*(void **)(piVar11 + 2));
        *(void **)(piVar11 + 2) = pvVar2;
      }
      else {
        pvVar2 = *(void **)(piVar11 + 2);
      }
      piVar11[4] = iVar1;
      piVar11[5] = 0;
      memcpy(pvVar2,param_4,(long)iVar1);
      return 1;
    }
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    bp = param_1->next_bio;
    if (bp == (bio_st *)0x0) {
      return 0;
    }
  }
  lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar3;
}

