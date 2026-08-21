
/* WARNING: Removing unreachable block (ram,0x00adf654) */
/* WARNING: Removing unreachable block (ram,0x00adfbd0) */

undefined8 tls_construct_client_key_exchange(int *param_1)

{
  uint uVar1;
  BIGNUM *pBVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  EVP_PKEY *pEVar7;
  uchar *puVar8;
  EVP_PKEY_CTX *pEVar9;
  long lVar10;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  uchar *puVar11;
  int iVar12;
  code *pcVar13;
  size_t len;
  size_t __n;
  char *pcVar14;
  long lVar15;
  bool bVar16;
  uchar *local_1f8;
  BIGNUM *local_1f0 [32];
  uchar auStack_f0 [132];
  uint uStack_6c;
  size_t local_68;
  
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
  local_1f8 = (uchar *)(*(long *)(*(long *)(param_1 + 0x1e) + 8) +
                       (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x6c));
  if ((uVar1 & 0x1c8) == 0) {
    iVar5 = 0;
    iVar12 = -1;
    if ((uVar1 >> 3 & 1) == 0) goto LAB_00adf290;
LAB_00adf3b4:
    iVar4 = 0;
LAB_00adf3b8:
    iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x70))
                      (param_1,0x10,(long)(iVar5 + iVar4));
    if (iVar5 != 0) {
      return 1;
    }
    ssl3_send_alert(param_1,2,0x28);
    iVar5 = 0x165;
    iVar4 = 0x44;
    iVar6 = 0x9e0;
    goto LAB_00adf764;
  }
  pcVar13 = *(code **)(param_1 + 0x6a);
  if (pcVar13 == (code *)0x0) {
    ERR_put_error(0x14,0x197,0xe0,"ssl/statem/statem_clnt.c",0x833);
    __n = 0;
    lVar15 = 0;
    pcVar14 = (char *)0x0;
    len = 0;
LAB_00adf1c0:
    iVar5 = 0;
    bVar16 = true;
    iVar12 = 0x50;
  }
  else {
    memset(auStack_f0,0,0x81);
    uVar3 = (*pcVar13)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x5e) + 0x80),auStack_f0,0x80,
                       local_1f0,0x100);
    len = (size_t)uVar3;
    if (uVar3 < 0x101) {
      if (uVar3 == 0) {
        iVar5 = 0xdf;
        iVar12 = 0x844;
        goto LAB_00adf220;
      }
      __n = strlen((char *)auStack_f0);
      if (__n < 0x81) {
        lVar15 = CRYPTO_memdup(local_1f0,len,"ssl/statem/statem_clnt.c",0x850);
        pcVar14 = CRYPTO_strdup((char *)auStack_f0,"ssl/statem/statem_clnt.c",0x851);
        if ((lVar15 == 0) || (pcVar14 == (char *)0x0)) {
          ERR_put_error(0x14,0x197,0x41,"ssl/statem/statem_clnt.c",0x853);
          goto LAB_00adf1c0;
        }
        CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x2b0));
        lVar10 = *(long *)(param_1 + 0x24);
        *(long *)(lVar10 + 0x2b0) = lVar15;
        *(size_t *)(lVar10 + 0x2b8) = len;
        CRYPTO_free(*(void **)(*(long *)(param_1 + 0x5e) + 0x88));
        *(char **)(*(long *)(param_1 + 0x5e) + 0x88) = pcVar14;
        *local_1f8 = (uchar)(__n >> 8);
        local_1f8[1] = (uchar)__n;
        memcpy(local_1f8 + 2,auStack_f0,__n);
        bVar16 = false;
        lVar15 = 0;
        pcVar14 = (char *)0x0;
        iVar5 = (int)__n + 2;
        local_1f8 = local_1f8 + 2 + __n;
        iVar12 = -1;
        goto LAB_00adf23c;
      }
      ERR_put_error(0x14,0x197,0x44,"ssl/statem/statem_clnt.c",0x84b);
    }
    else {
      iVar5 = 0x44;
      iVar12 = 0x83f;
LAB_00adf220:
      ERR_put_error(0x14,0x197,iVar5,"ssl/statem/statem_clnt.c",iVar12);
      __n = 0;
    }
    iVar5 = 0;
    lVar15 = 0;
    pcVar14 = (char *)0x0;
    bVar16 = true;
    iVar12 = 0x28;
  }
LAB_00adf23c:
  OPENSSL_cleanse(local_1f0,len);
  OPENSSL_cleanse(auStack_f0,0x81);
  CRYPTO_clear_free(lVar15,len,"ssl/statem/statem_clnt.c",0x869);
  CRYPTO_clear_free(pcVar14,__n,"ssl/statem/statem_clnt.c",0x86a);
  if (bVar16) {
joined_r0x00adf710:
    if (iVar12 == -1) goto LAB_00adf780;
  }
  else {
    if ((uVar1 >> 3 & 1) != 0) goto LAB_00adf3b4;
LAB_00adf290:
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) == 0) {
        if ((uVar1 & 0x84) == 0) {
          if ((uVar1 >> 4 & 1) != 0) {
            iVar4 = 0x329;
            if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x18) & 0x80) != 0) {
              iVar4 = 0x3d6;
            }
            if (*(long *)(*(long *)(param_1 + 0x5e) + 0x98) == 0) {
              ERR_put_error(0x14,0x196,0x14a,"ssl/statem/statem_clnt.c",0x93b);
              iVar12 = 0x28;
              goto joined_r0x00adf710;
            }
            pEVar7 = (EVP_PKEY *)X509_get0_pubkey();
            pEVar9 = EVP_PKEY_CTX_new(pEVar7,(ENGINE *)0x0);
            if (pEVar9 == (EVP_PKEY_CTX *)0x0) {
              ERR_put_error(0x14,0x196,0x41,"ssl/statem/statem_clnt.c",0x942);
            }
            else {
              puVar8 = CRYPTO_malloc(0x20,"ssl/statem/statem_clnt.c",0x94d);
              if (puVar8 == (uchar *)0x0) {
                iVar5 = 0x41;
                iVar12 = 0x950;
LAB_00adfae0:
                ERR_put_error(0x14,0x196,iVar5,"ssl/statem/statem_clnt.c",iVar12);
                ctx = (EVP_MD_CTX *)0x0;
              }
              else {
                iVar6 = EVP_PKEY_encrypt_init(pEVar9);
                if ((iVar6 < 1) || (iVar6 = RAND_bytes(puVar8,0x20), iVar6 < 1)) {
                  iVar5 = 0x44;
                  iVar12 = 0x958;
                  goto LAB_00adfae0;
                }
                ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
                if (ctx != (EVP_MD_CTX *)0x0) {
                  pcVar14 = OBJ_nid2sn(iVar4);
                  type = EVP_get_digestbyname(pcVar14);
                  iVar4 = EVP_DigestInit(ctx,type);
                  if ((((0 < iVar4) &&
                       (iVar4 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x24) + 0xb0),0x20
                                                ), 0 < iVar4)) &&
                      (iVar4 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x24) + 0x90),0x20)
                      , 0 < iVar4)) &&
                     (iVar4 = EVP_DigestFinal_ex(ctx,auStack_f0,&uStack_6c), 0 < iVar4)) {
                    EVP_MD_CTX_free(ctx);
                    iVar4 = EVP_PKEY_CTX_ctrl(pEVar9,-1,0x100,8,8,auStack_f0);
                    if (iVar4 < 0) {
                      iVar5 = 0x112;
                      iVar12 = 0x970;
                    }
                    else {
                      *local_1f8 = '0';
                      local_68 = 0xff;
                      iVar4 = EVP_PKEY_encrypt(pEVar9,(uchar *)local_1f0,&local_68,puVar8,0x20);
                      if (0 < iVar4) {
                        if (local_68 < 0x80) {
                          local_1f8[1] = (uchar)local_68;
                          puVar11 = local_1f8 + 2;
                          iVar4 = (int)local_68 + 2;
                        }
                        else {
                          local_1f8[1] = 0x81;
                          puVar11 = local_1f8 + 3;
                          local_1f8[2] = (uchar)local_68;
                          iVar4 = (int)local_68 + 3;
                        }
                        memcpy(puVar11,local_1f0,local_68);
                        EVP_PKEY_CTX_free(pEVar9);
                        lVar15 = *(long *)(param_1 + 0x24);
                        *(uchar **)(lVar15 + 0x2a0) = puVar8;
                        *(undefined8 *)(lVar15 + 0x2a8) = 0x20;
                        goto LAB_00adf3b8;
                      }
                      iVar5 = 0x112;
                      iVar12 = 0x97b;
                    }
                    goto LAB_00adfae0;
                  }
                }
                ERR_put_error(0x14,0x196,0x44,"ssl/statem/statem_clnt.c",0x968);
              }
              EVP_PKEY_CTX_free(pEVar9);
              CRYPTO_clear_free(puVar8,0x20,"ssl/statem/statem_clnt.c",0x98f);
              EVP_MD_CTX_free(ctx);
            }
            iVar12 = 0x50;
            goto joined_r0x00adf710;
          }
          if ((uVar1 >> 5 & 1) == 0) {
            ssl3_send_alert(param_1,2,0x28);
            iVar5 = 0x165;
            iVar4 = 0x44;
            iVar6 = 0x9d8;
          }
          else if (*(BIGNUM **)(param_1 + 0xd8) == (BIGNUM *)0x0) {
            iVar5 = 0x19a;
            iVar4 = 0x44;
            iVar6 = 0x9a3;
          }
          else {
            iVar6 = BN_num_bits(*(BIGNUM **)(param_1 + 0xd8));
            iVar4 = iVar6 + 0xe;
            if (-1 < iVar6 + 7) {
              iVar4 = iVar6 + 7;
            }
            iVar4 = iVar4 >> 3;
            *local_1f8 = (uchar)((uint)iVar4 >> 8);
            local_1f8[1] = (uchar)iVar4;
            BN_bn2bin(*(BIGNUM **)(param_1 + 0xd8),local_1f8 + 2);
            CRYPTO_free(*(void **)(*(long *)(param_1 + 0x5e) + 0x148));
            pcVar14 = CRYPTO_strdup(*(char **)(param_1 + 0xce),"ssl/statem/statem_clnt.c",0x9a7);
            *(char **)(*(long *)(param_1 + 0x5e) + 0x148) = pcVar14;
            if (pcVar14 != (char *)0x0) {
              iVar4 = iVar4 + 2;
              goto LAB_00adf3b8;
            }
            iVar5 = 0x19a;
            iVar4 = 0x41;
            iVar6 = 0x9a9;
          }
        }
        else {
          local_1f0[0] = (BIGNUM *)0x0;
          lVar15 = *(long *)(*(long *)(param_1 + 0x24) + 0x3f8);
          if (lVar15 != 0) {
            pEVar7 = (EVP_PKEY *)ssl_generate_pkey(lVar15);
            iVar4 = ssl_derive(param_1,pEVar7,lVar15);
            if (iVar4 == 0) {
              iVar5 = 0x195;
              iVar4 = 6;
              iVar6 = 0x8fd;
            }
            else {
              iVar4 = EVP_PKEY_get1_tls_encodedpoint(pEVar7,local_1f0);
              if (iVar4 != 0) {
                EVP_PKEY_free(pEVar7);
                *local_1f8 = (uchar)iVar4;
                memcpy(local_1f8 + 1,local_1f0[0],(long)iVar4);
                iVar4 = iVar4 + 1;
                CRYPTO_free(local_1f0[0]);
                goto LAB_00adf3b8;
              }
              iVar5 = 0x195;
              iVar4 = 0x10;
              iVar6 = 0x905;
            }
            goto LAB_00adf670;
          }
          iVar5 = 0x195;
          iVar4 = 0x44;
          iVar6 = 0x8f6;
        }
      }
      else {
        lVar15 = *(long *)(*(long *)(param_1 + 0x24) + 0x3f8);
        if (lVar15 != 0) {
          pEVar7 = (EVP_PKEY *)ssl_generate_pkey(lVar15);
          lVar10 = EVP_PKEY_get0_DH();
          if ((lVar10 != 0) && (iVar4 = ssl_derive(param_1,pEVar7,lVar15), iVar4 != 0)) {
            DH_get0_key(lVar10,local_1f0,0);
            iVar6 = BN_num_bits(local_1f0[0]);
            iVar4 = iVar6 + 0xe;
            if (-1 < iVar6 + 7) {
              iVar4 = iVar6 + 7;
            }
            iVar4 = iVar4 >> 3;
            *local_1f8 = (uchar)((uint)iVar4 >> 8);
            local_1f8[1] = (uchar)iVar4;
            BN_bn2bin(local_1f0[0],local_1f8 + 2);
            iVar4 = iVar4 + 2;
            EVP_PKEY_free(pEVar7);
            goto LAB_00adf3b8;
          }
          iVar5 = 0x194;
          iVar4 = 0x44;
          iVar6 = 0x8d8;
LAB_00adf670:
          ERR_put_error(0x14,iVar5,iVar4,"ssl/statem/statem_clnt.c",iVar6);
          EVP_PKEY_free(pEVar7);
          goto joined_r0x00adf710;
        }
        iVar5 = 0x194;
        iVar4 = 0x44;
        iVar6 = 0x8d1;
      }
LAB_00adf764:
      ERR_put_error(0x14,iVar5,iVar4,"ssl/statem/statem_clnt.c",iVar6);
      goto joined_r0x00adf710;
    }
    if (*(long *)(*(long *)(param_1 + 0x5e) + 0x98) == 0) {
      iVar5 = 0x199;
      iVar4 = 0x44;
      iVar6 = 0x882;
      goto LAB_00adf764;
    }
    pEVar7 = (EVP_PKEY *)X509_get0_pubkey();
    lVar15 = EVP_PKEY_get0_RSA();
    if (lVar15 == 0) {
      iVar5 = 0x199;
      iVar4 = 0x44;
      iVar6 = 0x888;
      goto LAB_00adf764;
    }
    puVar8 = CRYPTO_malloc(0x30,"ssl/statem/statem_clnt.c",0x88d);
    if (puVar8 != (uchar *)0x0) {
      *puVar8 = (uchar)((uint)param_1[0x81] >> 8);
      puVar8[1] = (uchar)param_1[0x81];
      iVar4 = RAND_bytes(puVar8 + 2,0x2e);
      if (iVar4 < 1) {
        pEVar9 = (EVP_PKEY_CTX *)0x0;
      }
      else {
        puVar11 = local_1f8 + 2;
        if (*param_1 < 0x301) {
          puVar11 = local_1f8;
        }
        pEVar9 = EVP_PKEY_CTX_new(pEVar7,(ENGINE *)0x0);
        if (((pEVar9 == (EVP_PKEY_CTX *)0x0) || (iVar4 = EVP_PKEY_encrypt_init(pEVar9), iVar4 < 1))
           || (iVar4 = EVP_PKEY_encrypt(pEVar9,(uchar *)0x0,(size_t *)local_1f0,puVar8,0x30),
              iVar4 < 1)) {
          iVar5 = 6;
          iVar4 = 0x8a1;
        }
        else {
          iVar4 = EVP_PKEY_encrypt(pEVar9,puVar11,(size_t *)local_1f0,puVar8,0x30);
          pBVar2 = local_1f0[0];
          if (0 < iVar4) {
            iVar4 = (int)local_1f0[0];
            EVP_PKEY_CTX_free(pEVar9);
            if (0x300 < *param_1) {
              local_1f8[1] = (uchar)pBVar2;
              iVar4 = iVar4 + 2;
              *local_1f8 = (uchar)((ulong)pBVar2 >> 8);
            }
            lVar15 = *(long *)(param_1 + 0x24);
            *(uchar **)(lVar15 + 0x2a0) = puVar8;
            *(undefined8 *)(lVar15 + 0x2a8) = 0x30;
            goto LAB_00adf3b8;
          }
          iVar5 = 0x77;
          iVar4 = 0x8a5;
        }
        ERR_put_error(0x14,0x199,iVar5,"ssl/statem/statem_clnt.c",iVar4);
      }
      CRYPTO_clear_free(puVar8,0x30,"ssl/statem/statem_clnt.c",0x8bd);
      EVP_PKEY_CTX_free(pEVar9);
      goto joined_r0x00adf710;
    }
    ERR_put_error(0x14,0x199,0x41,"ssl/statem/statem_clnt.c",0x88f);
    iVar12 = 0x50;
  }
  ssl3_send_alert(param_1,2,iVar12);
LAB_00adf780:
  CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a0),
                    *(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a8),"ssl/statem/statem_clnt.c",
                    0x9e8);
  lVar15 = *(long *)(param_1 + 0x24);
  *(undefined8 *)(lVar15 + 0x2a0) = 0;
  CRYPTO_clear_free(*(undefined8 *)(lVar15 + 0x2b0),*(undefined8 *)(lVar15 + 0x2b8),
                    "ssl/statem/statem_clnt.c",0x9eb);
  *(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2b0) = 0;
  ossl_statem_set_error(param_1);
  return 0;
}

