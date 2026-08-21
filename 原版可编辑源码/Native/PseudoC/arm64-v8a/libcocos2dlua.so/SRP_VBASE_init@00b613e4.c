
undefined4 SRP_VBASE_init(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BIO_METHOD *type;
  BIO *bp;
  long lVar5;
  TXT_DB *db;
  undefined8 *puVar6;
  undefined8 *ptr;
  char *pcVar7;
  char *pcVar8;
  BIGNUM *pBVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char *local_a30;
  uchar auStack_a24 [2500];
  
  lVar4 = OPENSSL_sk_new_null();
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    db = (TXT_DB *)0x0;
    uVar10 = 3;
  }
  else {
    uVar10 = 3;
    lVar5 = BIO_ctrl(bp,0x6c,3,param_2);
    if ((int)lVar5 < 1) {
      db = (TXT_DB *)0x0;
    }
    else {
      db = TXT_DB_read(bp,6);
      if (db == (TXT_DB *)0x0) {
        uVar10 = 1;
      }
      else {
        local_a30 = (char *)0x0;
        if (param_1[2] != 0) {
          puVar6 = (undefined8 *)SRP_get_default_gN(0);
          local_a30 = (char *)*puVar6;
        }
        iVar2 = OPENSSL_sk_num(db->data);
        if (0 < iVar2) {
          iVar2 = 0;
          uVar10 = 4;
          do {
            puVar6 = (undefined8 *)OPENSSL_sk_value(db->data,iVar2);
            if (*(char *)*puVar6 == 'V') {
              lVar5 = FUN_00b6191c(puVar6[4],lVar4);
              if (lVar5 == 0) goto LAB_00b61634;
              ptr = CRYPTO_malloc(0x30,"crypto/srp/srp_vfy.c",0x9a);
              if (ptr == (undefined8 *)0x0) {
                uVar10 = 4;
              }
              else {
                ptr[3] = 0;
                ptr[2] = 0;
                ptr[5] = 0;
                ptr[4] = 0;
                ptr[1] = 0;
                *ptr = 0;
                uVar11 = *(undefined8 *)(lVar5 + 8);
                ptr[4] = *(undefined8 *)(lVar5 + 0x10);
                ptr[3] = uVar11;
                pcVar7 = (char *)puVar6[5];
                if ((char *)puVar6[3] == (char *)0x0) {
LAB_00b6159c:
                  if (pcVar7 != (char *)0x0) {
                    pcVar7 = CRYPTO_strdup(pcVar7,"crypto/srp/srp_vfy.c",0xb2);
                    ptr[5] = pcVar7;
                    if (pcVar7 == (char *)0x0) goto LAB_00b61720;
                  }
                  uVar11 = puVar6[1];
                  uVar1 = puVar6[2];
                  ptr[1] = 0;
                  ptr[2] = 0;
                  iVar3 = FUN_00b621a4(auStack_a24,uVar11);
                  if (-1 < iVar3) {
                    pBVar9 = BN_bin2bn(auStack_a24,iVar3,(BIGNUM *)0x0);
                    ptr[2] = pBVar9;
                    if (pBVar9 != (BIGNUM *)0x0) {
                      iVar3 = FUN_00b621a4(auStack_a24,uVar1);
                      if (-1 < iVar3) {
                        pBVar9 = BN_bin2bn(auStack_a24,iVar3,(BIGNUM *)0x0);
                        ptr[1] = pBVar9;
                        if (pBVar9 != (BIGNUM *)0x0) {
                          iVar3 = OPENSSL_sk_insert(*param_1,ptr,0);
                          uVar10 = 2;
                          if (iVar3 != 0) goto LAB_00b61634;
                          goto LAB_00b61724;
                        }
                      }
                      BN_free((BIGNUM *)ptr[2]);
                      ptr[2] = 0;
                    }
                  }
                  uVar10 = 2;
                }
                else {
                  pcVar8 = CRYPTO_strdup((char *)puVar6[3],"crypto/srp/srp_vfy.c",0xb0);
                  *ptr = pcVar8;
                  if (pcVar8 != (char *)0x0) goto LAB_00b6159c;
LAB_00b61720:
                  uVar10 = 4;
                }
LAB_00b61724:
                BN_free((BIGNUM *)ptr[1]);
                BN_clear_free((BIGNUM *)ptr[2]);
                CRYPTO_free((void *)*ptr);
                CRYPTO_free((void *)ptr[5]);
LAB_00b61760:
                CRYPTO_free(ptr);
              }
              goto LAB_00b6176c;
            }
            if (*(char *)*puVar6 == 'I') {
              ptr = CRYPTO_malloc(0x18,"crypto/srp/srp_vfy.c",0x17c);
              if (ptr != (undefined8 *)0x0) {
                pcVar7 = CRYPTO_strdup((char *)puVar6[3],"crypto/srp/srp_vfy.c",0x17f);
                *ptr = pcVar7;
                if (pcVar7 != (char *)0x0) {
                  lVar5 = FUN_00b617b0(param_1[1],puVar6[1]);
                  ptr[2] = lVar5;
                  if (lVar5 != 0) {
                    lVar5 = FUN_00b617b0(param_1[1],puVar6[2]);
                    ptr[1] = lVar5;
                    if ((lVar5 != 0) && (iVar3 = OPENSSL_sk_insert(lVar4,ptr,0), iVar3 != 0)) {
                      if (param_1[2] != 0) {
                        local_a30 = (char *)puVar6[3];
                      }
                      goto LAB_00b61634;
                    }
                  }
                }
                CRYPTO_free((void *)*ptr);
                goto LAB_00b61760;
              }
              goto LAB_00b6176c;
            }
LAB_00b61634:
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(db->data);
          } while (iVar2 < iVar3);
        }
        if (local_a30 == (char *)0x0) {
          uVar10 = 0;
        }
        else {
          if ((lVar4 != 0) && (iVar2 = OPENSSL_sk_num(lVar4), 0 < iVar2)) {
            iVar2 = 0;
            do {
              puVar6 = (undefined8 *)OPENSSL_sk_value(lVar4,iVar2);
              if ((puVar6 != (undefined8 *)0x0) &&
                 (iVar3 = strcmp((char *)*puVar6,local_a30), iVar3 == 0)) goto LAB_00b616ac;
              iVar2 = iVar2 + 1;
              iVar3 = OPENSSL_sk_num(lVar4);
            } while (iVar2 < iVar3);
          }
          puVar6 = (undefined8 *)SRP_get_default_gN(local_a30);
LAB_00b616ac:
          if (puVar6 == (undefined8 *)0x0) {
            uVar10 = 2;
          }
          else {
            uVar11 = puVar6[1];
            uVar10 = 0;
            param_1[4] = puVar6[2];
            param_1[3] = uVar11;
          }
        }
      }
    }
  }
LAB_00b6176c:
  TXT_DB_free(db);
  BIO_free_all(bp);
  OPENSSL_sk_free(lVar4);
  return uVar10;
}

