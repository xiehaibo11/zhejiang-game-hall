
undefined8 tls_construct_server_key_exchange(long param_1)

{
  uchar *d;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  EVP_MD_CTX *ctx;
  char *pcVar9;
  size_t sVar10;
  DH *dh;
  BIGNUM *a;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  BUF_MEM *str;
  long lVar14;
  EVP_PKEY *pEVar15;
  EVP_PKEY *pEVar16;
  uint uVar17;
  uchar *puVar18;
  int local_a8 [4];
  BIGNUM *local_98;
  long lStack_90;
  long local_88;
  BIGNUM *pBStack_80;
  uint local_74;
  EVP_MD *local_70;
  void *local_68;
  
                    /* try { // try from 00ae5ef0 to 00be5f5b has its CatchHandler @ 00ae5e54 */
  local_70 = (EVP_MD *)0x0;
  local_68 = (void *)0x0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
                    /* catch() { ... } // from try @ 00ae5ec8 with catch @ 00ae5f40 */
    iVar7 = 0x41;
    iVar6 = 0x663;
LAB_00ae5f58:
    ERR_put_error(0x14,0x179,iVar7,"ssl/statem/statem_srvr.c",iVar6);
    pEVar15 = (EVP_PKEY *)0x0;
LAB_00ae5f60:
    uVar11 = 0x50;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x90);
    str = *(BUF_MEM **)(param_1 + 0x78);
    uVar1 = *(uint *)(*(long *)(lVar14 + 0x228) + 0x14);
    pBStack_80 = (BIGNUM *)0x0;
    local_88 = 0;
    lStack_90 = 0;
    local_98 = (BIGNUM *)0x0;
    if ((uVar1 & 0x1c8) == 0) {
      iVar7 = 0;
    }
    else {
      pcVar9 = *(char **)(*(long *)(param_1 + 0x148) + 0x1d0);
      if (pcVar9 == (char *)0x0) {
        iVar7 = 2;
      }
      else {
        sVar10 = strlen(pcVar9);
        iVar7 = (int)sVar10 + 2;
      }
    }
    uVar17 = uVar1 & 0x102;
    if ((uVar1 & 0x48) == 0) {
      if ((uVar1 & 0x102) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x148) + 0x18) == 0) {
                    /* try { // try from 00ae6350 to 00be63a7 has its CatchHandler @ 00ae6350
                       catch() { ... } // from try @ 00ae6350 with catch @ 00ae6350
                       catch() { ... } // from try @ 00ae653c with catch @ 00ae6350 */
          pEVar15 = (EVP_PKEY *)0x0;
          pEVar16 = *(EVP_PKEY **)(*(long *)(param_1 + 0x148) + 8);
joined_r0x00ae6358:
          if (pEVar16 == (EVP_PKEY *)0x0) {
            pcVar12 = *(code **)(*(long *)(param_1 + 0x148) + 0x10);
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(param_1,0,0x400);
              pEVar15 = (EVP_PKEY *)ssl_dh_to_pkey();
              pEVar16 = pEVar15;
              if (pEVar15 == (EVP_PKEY *)0x0) {
                iVar7 = 0x697;
                goto LAB_00ae66e0;
              }
              goto LAB_00ae6364;
            }
            ERR_put_error(0x14,0x179,0xab,"ssl/statem/statem_srvr.c",0x69f);
            uVar11 = 0x28;
          }
          else {
LAB_00ae6364:
            uVar5 = EVP_PKEY_security_bits(pEVar16);
            iVar6 = ssl_security(param_1,0x40007,uVar5,0,pEVar16);
            if (iVar6 != 0) {
              if (*(long *)(*(long *)(param_1 + 0x90) + 0x230) != 0) {
                    /* try { // try from 00ae63a8 to 00be653b has its CatchHandler @ 00ae65c0 */
                ERR_put_error(0x14,0x179,0x44,"ssl/statem/statem_srvr.c",0x6ab);
                goto LAB_00ae62b8;
              }
              lVar14 = ssl_generate_pkey(pEVar16);
              *(long *)(*(long *)(param_1 + 0x90) + 0x230) = lVar14;
              if (lVar14 == 0) {
                ERR_put_error(0x14,0x179,6,"ssl/statem/statem_srvr.c",0x6b2);
                goto LAB_00ae62b8;
              }
              uVar11 = EVP_PKEY_get0_DH();
              EVP_PKEY_free(pEVar15);
              DH_get0_pqg(uVar11,&local_98,0,&lStack_90);
              DH_get0_key(uVar11,&local_88,0);
              goto LAB_00ae5f94;
            }
            ERR_put_error(0x14,0x179,0x18a,"ssl/statem/statem_srvr.c",0x6a6);
            uVar11 = 0x28;
          }
          goto LAB_00ae5f64;
        }
        dh = (DH *)ssl_get_auto_dh(param_1);
        pEVar15 = EVP_PKEY_new();
                    /* try { // try from 00ae6030 to 00be609f has its CatchHandler @ 00ae6030
                       catch() { ... } // from try @ 00ae6030 with catch @ 00ae6030
                       catch() { ... } // from try @ 00ae60c8 with catch @ 00ae6030 */
        if ((dh != (DH *)0x0) && (pEVar15 != (EVP_PKEY *)0x0)) {
          EVP_PKEY_assign(pEVar15,0x1c,dh);
          pEVar16 = pEVar15;
          goto joined_r0x00ae6358;
        }
        DH_free(dh);
        iVar7 = 0x689;
LAB_00ae66e0:
        ERR_put_error(0x14,0x179,0x44,"ssl/statem/statem_srvr.c",iVar7);
        goto LAB_00ae5f60;
      }
      if ((uVar1 & 0x84) != 0) {
        if (*(long *)(lVar14 + 0x230) == 0) {
                    /* catch() { ... } // from try @ 00ae66f8 with catch @ 00ae6780 */
          tls1_shared_curve(param_1,0xfffffffe);
          iVar6 = tls1_ec_nid2curve_id();
          if (iVar6 == 0) {
            iVar7 = 0x13b;
            iVar6 = 0x6ce;
          }
          else {
            lVar14 = ssl_generate_pkey_curve(iVar6);
            *(long *)(*(long *)(param_1 + 0x90) + 0x230) = lVar14;
            if (lVar14 == 0) {
              iVar7 = 6;
              iVar6 = 0x6d5;
              goto LAB_00ae5f58;
            }
            iVar8 = EVP_PKEY_get1_tls_encodedpoint(lVar14,&local_68);
            if (iVar8 != 0) {
                    /* try { // try from 00ae67b8 to 00be6857 has its CatchHandler @ 00ae67b8
                       catch() { ... } // from try @ 00ae67b8 with catch @ 00ae67b8
                       catch() { ... } // from try @ 00ae6860 with catch @ 00ae67b8 */
              uVar17 = 0;
              iVar7 = iVar7 + iVar8 + 4;
              pBStack_80 = (BIGNUM *)0x0;
              local_88 = 0;
              lStack_90 = 0;
              local_98 = (BIGNUM *)0x0;
              goto LAB_00ae5f9c;
            }
            iVar7 = 0x10;
            iVar6 = 0x6dd;
          }
        }
        else {
          iVar7 = 0x44;
                    /* catch() { ... } // from try @ 00ae60a0 with catch @ 00ae6140 */
          iVar6 = 0x6c5;
        }
        goto LAB_00ae62b0;
      }
      if ((uVar1 >> 5 & 1) != 0) {
        if ((((*(BIGNUM **)(param_1 + 0x340) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x348) == 0))
            || (*(long *)(param_1 + 0x350) == 0)) ||
           (*(BIGNUM **)(param_1 + 0x358) == (BIGNUM *)0x0)) {
          iVar7 = 0x166;
                    /* catch() { ... } // from try @ 00ae6858 with catch @ 00ae68c0 */
          iVar6 = 0x6f8;
          goto LAB_00ae62b0;
        }
        uVar17 = 0;
        iVar6 = 0;
                    /* try { // try from 00ae6858 to 00be685f has its CatchHandler @ 00ae68c0 */
        iVar8 = 0;
        local_98 = *(BIGNUM **)(param_1 + 0x340);
        lStack_90 = *(long *)(param_1 + 0x348);
                    /* try { // try from 00ae6860 to 00be68f7 has its CatchHandler @ 00ae67b8 */
        local_88 = *(long *)(param_1 + 0x350);
        pBStack_80 = *(BIGNUM **)(param_1 + 0x358);
        goto LAB_00ae5f9c;
      }
      iVar7 = 0xfa;
      iVar6 = 0x704;
    }
    else {
LAB_00ae5f94:
      iVar6 = 0;
      iVar8 = 0;
LAB_00ae5f9c:
      local_74 = 0;
      if ((uVar1 >> 5 & 1) == 0) {
        if (uVar17 == 0) {
          do {
            if ((&local_98)[(int)local_74] == (BIGNUM *)0x0) break;
            iVar3 = BN_num_bits((&local_98)[(int)local_74]);
            uVar2 = local_74;
            iVar4 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
              iVar4 = iVar3 + 7;
            }
            local_a8[(int)local_74] = iVar4 >> 3;
            iVar7 = iVar7 + (iVar4 >> 3) + 2;
            local_74 = local_74 + 1;
          } while ((int)uVar2 < 3);
        }
        else {
          do {
            if ((&local_98)[(int)local_74] == (BIGNUM *)0x0) break;
            iVar3 = BN_num_bits((&local_98)[(int)local_74]);
            uVar2 = local_74;
            lVar14 = (long)(int)local_74;
            iVar4 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
              iVar4 = iVar3 + 7;
            }
            local_a8[lVar14] = iVar4 >> 3;
            if (local_74 == 2) {
              lVar14 = 0;
            }
            local_74 = local_74 + 1;
            iVar7 = iVar7 + local_a8[lVar14] + 2;
          } while ((int)uVar2 < 3);
        }
      }
      else {
        a = local_98;
        if (uVar17 == 0) {
          do {
            if ((&local_98)[(int)local_74] == (BIGNUM *)0x0) break;
            iVar3 = BN_num_bits((&local_98)[(int)local_74]);
            uVar2 = local_74;
            iVar4 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
              iVar4 = iVar3 + 7;
            }
            iVar3 = 1;
            if (local_74 != 2) {
              iVar3 = 2;
            }
            local_a8[(int)local_74] = iVar4 >> 3;
            iVar7 = iVar3 + iVar7 + (iVar4 >> 3);
            local_74 = local_74 + 1;
          } while ((int)uVar2 < 3);
        }
        else {
                    /* try { // try from 00ae60a0 to 00be60c7 has its CatchHandler @ 00ae6140 */
          while (a != (BIGNUM *)0x0) {
            while( true ) {
              iVar3 = BN_num_bits(a);
              uVar2 = local_74;
              iVar4 = iVar3 + 0xe;
              if (-1 < iVar3 + 7) {
                iVar4 = iVar3 + 7;
              }
              iVar4 = iVar4 >> 3;
                    /* try { // try from 00ae60c8 to 00be615b has its CatchHandler @ 00ae6030 */
              local_a8[(int)local_74] = iVar4;
              if (local_74 == 2) break;
              local_74 = local_74 + 1;
              iVar7 = iVar7 + iVar4 + 2;
              if ((2 < (int)uVar2) || (a = (&local_98)[(int)local_74], a == (BIGNUM *)0x0))
              goto LAB_00ae61f0;
            }
            local_74 = 3;
            iVar7 = iVar7 + iVar4 + 1;
            a = pBStack_80;
          }
        }
      }
LAB_00ae61f0:
      lVar14 = *(long *)(*(long *)(param_1 + 0x90) + 0x228);
      if (((*(byte *)(lVar14 + 0x18) & 0x44) == 0) && ((*(ushort *)(lVar14 + 0x14) & 0x1c8) == 0)) {
        pEVar15 = (EVP_PKEY *)ssl_get_sign_pkey(param_1,lVar14,&local_70);
        if (pEVar15 != (EVP_PKEY *)0x0) {
          iVar4 = EVP_PKEY_size(pEVar15);
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 2) != 0) {
            iVar4 = iVar4 + 2;
          }
          iVar4 = iVar4 + 2;
          goto LAB_00ae6220;
        }
        pEVar15 = (EVP_PKEY *)0x0;
        uVar11 = 0x32;
        goto LAB_00ae5f64;
      }
      iVar4 = 0;
      pEVar15 = (EVP_PKEY *)0x0;
LAB_00ae6220:
      iVar4 = BUF_MEM_grow_clean(str,(ulong)(uint)(iVar4 + iVar7 +
                                                  *(int *)(*(long *)(*(long *)(param_1 + 8) + 0xc0)
                                                          + 0x6c)));
      if (iVar4 == 0) {
        iVar7 = 7;
        iVar6 = 0x72e;
LAB_00ae62b0:
        ERR_put_error(0x14,0x179,iVar7,"ssl/statem/statem_srvr.c",iVar6);
        pEVar15 = (EVP_PKEY *)0x0;
        goto LAB_00ae62b8;
      }
      d = (uchar *)(*(long *)(*(long *)(param_1 + 0x78) + 8) +
                   (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c));
      puVar18 = d;
      if ((uVar1 & 0x1c8) != 0) {
        pcVar9 = *(char **)(*(long *)(param_1 + 0x148) + 0x1d0);
        if (pcVar9 == (char *)0x0) {
          puVar18 = d + 2;
          d[0] = '\0';
          d[1] = '\0';
        }
        else {
          sVar10 = strlen(pcVar9);
          if (0x80 < sVar10) {
            iVar7 = 0x44;
            iVar6 = 0x73e;
            goto LAB_00ae62b0;
          }
          *d = (uchar)(sVar10 >> 8);
          d[1] = (uchar)sVar10;
          memcpy(d + 2,*(void **)(*(long *)(param_1 + 0x148) + 0x1d0),sVar10);
          puVar18 = d + 2 + sVar10;
        }
      }
      local_74 = 0;
      if ((uVar1 >> 5 & 1) == 0) {
        do {
          if ((&local_98)[(int)local_74] == (BIGNUM *)0x0) break;
          if ((uVar17 == 0) || (local_74 != 2)) {
            *puVar18 = (uchar)((uint)local_a8[(int)local_74] >> 8);
            puVar18[1] = (uchar)local_a8[(int)local_74];
            puVar18 = puVar18 + 2;
          }
          else {
            *puVar18 = (uchar)((uint)local_a8[0] >> 8);
            puVar18[1] = (uchar)local_a8[0];
            puVar18 = puVar18 + 2;
            if (local_a8[2] < local_a8[0]) {
              lVar14 = 0;
              do {
                puVar18[lVar14] = '\0';
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < local_a8[0] - local_a8[2]);
              puVar18 = puVar18 + lVar14;
            }
          }
          BN_bn2bin((&local_98)[(int)local_74],puVar18);
          uVar2 = local_74;
          lVar14 = (long)(int)local_74;
          local_74 = local_74 + 1;
          puVar18 = puVar18 + local_a8[lVar14];
        } while ((int)uVar2 < 3);
      }
      else {
        do {
          if ((&local_98)[(int)local_74] == (BIGNUM *)0x0) break;
          if (local_74 == 2) {
            *puVar18 = (uchar)local_a8[(int)local_74];
            lVar14 = 1;
          }
          else {
            *puVar18 = (uchar)((uint)local_a8[(int)local_74] >> 8);
            puVar18[1] = (uchar)local_a8[(int)local_74];
            lVar14 = 2;
          }
          BN_bn2bin((&local_98)[(int)local_74],puVar18 + lVar14);
          uVar17 = local_74;
          lVar13 = (long)(int)local_74;
          local_74 = local_74 + 1;
          puVar18 = puVar18 + lVar14 + local_a8[lVar13];
        } while ((int)uVar17 < 3);
      }
      if ((uVar1 & 0x84) != 0) {
        puVar18[0] = '\x03';
        puVar18[1] = '\0';
        puVar18[2] = (uchar)iVar6;
                    /* try { // try from 00ae653c to 00be662b has its CatchHandler @ 00ae6350 */
        puVar18[3] = (uchar)iVar8;
        memcpy(puVar18 + 4,local_68,(long)iVar8);
        CRYPTO_free(local_68);
        puVar18 = puVar18 + 4 + iVar8;
        local_68 = (void *)0x0;
      }
      if (pEVar15 == (EVP_PKEY *)0x0) {
        lVar14 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
        iVar6 = iVar7;
      }
      else {
        if (local_70 == (EVP_MD *)0x0) {
                    /* try { // try from 00ae66f8 to 00be66ff has its CatchHandler @ 00ae6780 */
          iVar7 = 0xfb;
          iVar6 = 0x7a4;
                    /* try { // try from 00ae6700 to 00be67b7 has its CatchHandler @ 00ae6670 */
          goto LAB_00ae673c;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1) != 0) {
          iVar6 = tls12_get_sigandhash(puVar18,pEVar15,local_70);
          if (iVar6 == 0) {
            iVar7 = 0x44;
            iVar6 = 0x788;
            goto LAB_00ae5f58;
          }
          puVar18 = puVar18 + 2;
        }
                    /* catch() { ... } // from try @ 00ae63a8 with catch @ 00ae65c0 */
        iVar6 = EVP_DigestInit_ex(ctx,local_70,(ENGINE *)0x0);
        if ((((iVar6 < 1) ||
             (iVar6 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
             iVar6 < 1)) ||
            (iVar6 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
            iVar6 < 1)) ||
           ((iVar6 = EVP_DigestUpdate(ctx,d,(long)iVar7), iVar6 < 1 ||
            (iVar6 = EVP_SignFinal(ctx,puVar18 + 2,&local_74,pEVar15), iVar6 < 1)))) {
          iVar7 = 6;
          iVar6 = 0x798;
          goto LAB_00ae5f58;
        }
        *puVar18 = (uchar)(local_74 >> 8);
        puVar18[1] = (uchar)local_74;
        lVar14 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
        iVar6 = iVar7 + local_74 + 2;
        if ((*(byte *)(lVar14 + 0x68) & 2) != 0) {
          iVar6 = iVar7 + local_74 + 4;
        }
      }
      iVar7 = (**(code **)(lVar14 + 0x70))(param_1,0xc,(long)iVar6);
      if (iVar7 != 0) {
        EVP_MD_CTX_free(ctx);
        return 1;
      }
      iVar7 = 0x44;
      iVar6 = 0x7ab;
    }
LAB_00ae673c:
    ERR_put_error(0x14,0x179,iVar7,"ssl/statem/statem_srvr.c",iVar6);
    pEVar15 = (EVP_PKEY *)0x0;
    uVar11 = 0x28;
  }
LAB_00ae5f64:
  ssl3_send_alert(param_1,2,uVar11);
LAB_00ae62b8:
  EVP_PKEY_free(pEVar15);
  CRYPTO_free(local_68);
  EVP_MD_CTX_free(ctx);
  ossl_statem_set_error(param_1);
  return 0;
}

