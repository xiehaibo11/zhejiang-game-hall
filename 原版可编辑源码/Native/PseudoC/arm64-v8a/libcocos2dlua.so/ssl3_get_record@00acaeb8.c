
undefined8 ssl3_get_record(uint *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  EVP_CIPHER *pEVar7;
  EVP_MD *pEVar8;
  COMP_CTX *ctx;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uchar *out;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  uint *puVar19;
  undefined1 *b;
  long lVar20;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  uVar3 = param_1[0x84];
  lVar10 = *(long *)(param_1 + 0x5e);
                    /* try { // try from 00acaee8 to 00bcaeeb has its CatchHandler @ 00acaf30 */
  uVar18 = 1;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  while( true ) {
    uVar11 = uVar18;
    uVar13 = (uint)uVar11;
    uVar16 = uVar13 - 1;
    if ((param_1[0xeb] == 0xf1) && (4 < param_1[0x438])) {
      uVar15 = param_1[(ulong)uVar16 * 0x12 + 0x1f6];
      uVar9 = param_1[(ulong)uVar16 * 0x12 + 0x1f8];
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acaee8 with catch @ 00acaf30
                        */
                    /* try { // try from 00acaf34 to 00bcaf8b has its CatchHandler @ 00acaf34
                       catch() { ... } // from try @ 00acaf34 with catch @ 00acaf34
                       catch() { ... } // from try @ 00acafa4 with catch @ 00acaf34 */
      uVar6 = ssl3_read_n(param_1,5,param_1[0xf2],0,uVar13 == 1);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
      pbVar17 = *(byte **)(param_1 + 0x436);
      param_1[0xeb] = 0xf1;
      if ((((param_1[0xe] == 0) || (param_1[0x448] == 0)) || (-1 < (char)*pbVar17)) ||
         (pbVar17[2] != 1)) {
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))(0,0,0x100,pbVar17,5,param_1,*(undefined8 *)(param_1 + 0x2a))
          ;
        }
        param_1[(ulong)uVar16 * 0x12 + 0x1f7] = (uint)*pbVar17;
        bVar1 = pbVar17[1];
        uVar2 = CONCAT11(bVar1,pbVar17[2]);
        uVar15 = (uint)(short)uVar2;
        param_1[(ulong)uVar16 * 0x12 + 0x1f6] = uVar15;
                    /* catch() { ... } // from try @ 00acafa0 with catch @ 00acb014 */
        uVar9 = (uint)CONCAT11(pbVar17[3],pbVar17[4]);
        param_1[(ulong)uVar16 * 0x12 + 0x1f8] = uVar9;
                    /* catch() { ... } // from try @ 00acaf8c with catch @ 00acb02c */
        if ((param_1[0x80] == 0) && (uVar15 != *param_1)) {
          ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xd0);
          if ((((*param_1 ^ uVar15) & 0xff00) == 0) &&
             ((*(long *)(param_1 + 0x4e) == 0 && (*(long *)(param_1 + 0x50) == 0)))) {
            if (param_1[0x1f7] == 0x15) {
              return 0xffffffff;
            }
            *param_1 = (uint)uVar2;
            uVar14 = 0x46;
          }
          else {
            uVar14 = 0x46;
          }
          goto LAB_00acb680;
        }
                    /* try { // try from 00acb040 to 00bcb067 has its CatchHandler @ 00acb040
                       catch() { ... } // from try @ 00acb040 with catch @ 00acb040
                       catch() { ... } // from try @ 00acb070 with catch @ 00acb040 */
        if (bVar1 != 3) {
          if (param_1[0x448] != 0) {
            pcVar12 = *(char **)(param_1 + 0x436);
            iVar4 = strncmp(pcVar12,"GET ",4);
            if ((((iVar4 != 0) && (iVar4 = strncmp(pcVar12,"POST ",5), iVar4 != 0)) &&
                (iVar4 = strncmp(pcVar12,"HEAD ",5), iVar4 != 0)) &&
               (iVar4 = strncmp(pcVar12,"PUT ",4), iVar4 != 0)) {
              iVar4 = strncmp(pcVar12,"CONNE",5);
              if (iVar4 != 0) {
                ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xfa);
                return 0xffffffff;
              }
              ERR_put_error(0x14,0x8f,0x9b,"ssl/record/ssl3_record.c",0xf4);
              return 0xffffffff;
            }
            ERR_put_error(0x14,0x8f,0x9c,"ssl/record/ssl3_record.c",0xf0);
            return 0xffffffff;
          }
          ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xfe);
          uVar14 = 0x46;
          goto LAB_00acb680;
        }
        if (*(long *)(param_1 + 0xf2) - 5U < (ulong)uVar9) {
          iVar4 = 0xc6;
          iVar5 = 0x107;
          goto LAB_00acb678;
        }
      }
      else {
        (param_1 + (ulong)uVar16 * 0x12 + 0x1f6)[0] = 2;
        (param_1 + (ulong)uVar16 * 0x12 + 0x1f6)[1] = 0x16;
                    /* try { // try from 00acaf8c to 00bcaf97 has its CatchHandler @ 00acb02c */
        uVar9 = (uint)pbVar17[1] | (*pbVar17 & 0x7f) << 8;
        param_1[(ulong)uVar16 * 0x12 + 0x1f8] = uVar9;
                    /* try { // try from 00acafa0 to 00bcafa3 has its CatchHandler @ 00acb014 */
                    /* try { // try from 00acafa4 to 00bcb03f has its CatchHandler @ 00acaf34 */
        if (*(long *)(param_1 + 0xf2) - 2U < (ulong)uVar9) {
          iVar4 = 0xc6;
          iVar5 = 0xb7;
          goto LAB_00acb678;
        }
        if (uVar9 < 9) {
          ERR_put_error(0x14,0x8f,0xa0,"ssl/record/ssl3_record.c",0xbd);
          uVar14 = 0x28;
          goto LAB_00acb680;
        }
        uVar15 = 2;
      }
    }
    uVar18 = (ulong)uVar16;
                    /* try { // try from 00acb068 to 00bcb06f has its CatchHandler @ 00acb09c */
    uVar16 = uVar9 - 3;
                    /* try { // try from 00acb070 to 00bcb0af has its CatchHandler @ 00acb040 */
    if (uVar15 != 2) {
      uVar16 = uVar9;
    }
    if (0 < (int)uVar16) {
      uVar6 = ssl3_read_n(param_1,uVar16,uVar16,1,0);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
                    /* catch() { ... } // from try @ 00acb068 with catch @ 00acb09c */
      uVar9 = param_1[uVar18 * 0x12 + 0x1f8];
      uVar15 = param_1[uVar18 * 0x12 + 0x1f6];
    }
    param_1[0xeb] = 0xf0;
    lVar20 = *(long *)(param_1 + 0x436) + 2;
    if (uVar15 != 2) {
      lVar20 = *(long *)(param_1 + 0x436) + 5;
    }
    *(long *)(param_1 + uVar18 * 0x12 + 0x1fe) = lVar20;
    if (0x4540 < uVar9) {
      iVar4 = 0x96;
      iVar5 = 0x141;
      goto LAB_00acb678;
    }
    *(long *)(param_1 + uVar18 * 0x12 + 0x1fc) = lVar20;
    param_1[uVar18 * 0x12 + 0x1f9] = uVar9;
    param_1[uVar18 * 0x12 + 0x202] = 0;
    param_1[0x438] = 0;
    param_1[0x448] = 0;
    if (((uVar3 <= uVar13) || (param_1[uVar18 * 0x12 + 0x1f7] != 0x17)) ||
       (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) & 1) == 0 ||
        (*(EVP_CIPHER_CTX **)(param_1 + 0x46) == (EVP_CIPHER_CTX *)0x0)))) break;
    pEVar7 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
    uVar18 = EVP_CIPHER_flags(pEVar7);
    if (((((uint)uVar18 >> 0x17 & 1) == 0) || (*(long *)(param_1 + 0xee) == 0)) ||
       (((int)param_1[0xf5] < 5 ||
        ((pcVar12 = (char *)(*(long *)(param_1 + 0xee) + (long)(int)param_1[0xf4]),
         *pcVar12 != '\x17' ||
         (uVar18 = (ulong)(uVar13 + 1),
         (int)param_1[0xf5] < (int)(CONCAT11(pcVar12[3],pcVar12[4]) + 5))))))) break;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x24) + 1) & 1) != 0) &&
     (*(EVP_MD_CTX **)(param_1 + 0x48) != (EVP_MD_CTX *)0x0)) {
    pEVar8 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48));
    uVar3 = EVP_MD_size(pEVar8);
    if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: mac_size <= EVP_MAX_MD_SIZE","ssl/record/ssl3_record.c",0x160);
    }
    if (uVar13 != 0) {
      uVar16 = 0;
      puVar19 = param_1 + 0x1f6;
      do {
        uVar9 = puVar19[2] - uVar3;
        if (puVar19[2] < uVar3) {
          iVar4 = 0x164;
          goto LAB_00acb6cc;
        }
        puVar19[2] = uVar9;
        lVar20 = *(long *)(puVar19 + 6);
        iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar19,auStack_a0,0);
        if ((iVar4 < 0) ||
           (iVar4 = CRYPTO_memcmp(auStack_a0,(void *)(lVar20 + (ulong)uVar9),(ulong)uVar3),
           iVar4 != 0)) {
          iVar4 = 0x16d;
          goto LAB_00acb4b0;
        }
        uVar16 = uVar16 + 1;
        puVar19 = puVar19 + 0x12;
      } while (uVar16 < uVar13);
    }
  }
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))
                    (param_1,param_1 + 0x1f6,uVar11,0);
  if (iVar4 == 0) {
    ERR_put_error(0x14,0x8f,0x81,"ssl/record/ssl3_record.c",0x17c);
    uVar14 = 0x15;
  }
  else {
    if ((((lVar10 != 0) && (*(long *)(param_1 + 0x46) != 0)) &&
        (pEVar8 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48)), pEVar8 != (EVP_MD *)0x0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x24) + 1) & 1) == 0)) {
      pEVar8 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48));
      uVar3 = EVP_MD_size(pEVar8);
      if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: mac_size <= EVP_MAX_MD_SIZE","ssl/record/ssl3_record.c",0x192
                   );
      }
      if (uVar13 != 0) {
        uVar16 = 0;
        puVar19 = param_1 + 0x1f6;
        do {
          if (puVar19[3] < uVar3) {
LAB_00acb6b4:
            iVar4 = 0x1a0;
LAB_00acb6cc:
            ERR_put_error(0x14,0x8f,0xa0,"ssl/record/ssl3_record.c",iVar4);
            uVar14 = 0x32;
            goto LAB_00acb680;
          }
          pEVar7 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
          uVar18 = EVP_CIPHER_flags(pEVar7);
          if (((uVar18 & 0xf0007) == 2) && (puVar19[3] < uVar3 + 1)) goto LAB_00acb6b4;
          pEVar7 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
          uVar18 = EVP_CIPHER_flags(pEVar7);
          if ((uVar18 & 0xf0007) == 2) {
            b = auStack_e0;
            ssl3_cbc_copy_mac(auStack_e0,puVar19,uVar3);
            uVar9 = puVar19[2] - uVar3;
          }
          else {
            uVar9 = puVar19[2] - uVar3;
            b = (undefined1 *)(*(long *)(puVar19 + 6) + (ulong)uVar9);
          }
          puVar19[2] = uVar9;
          iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar19,auStack_a0,0);
          if (((b == (undefined1 *)0x0) || (iVar5 < 0)) ||
             (iVar5 = CRYPTO_memcmp(auStack_a0,b,(ulong)uVar3), iVar5 != 0)) {
            iVar4 = -1;
          }
          uVar16 = uVar16 + 1;
          puVar19 = puVar19 + 0x12;
          if (uVar3 + 0x4400 < param_1[0x1f8]) {
            iVar4 = -1;
          }
        } while (uVar16 < uVar13);
      }
    }
    if (-1 < iVar4) {
      if (uVar13 != 0) {
        uVar18 = 0;
        puVar19 = param_1 + 0x200;
        do {
          ctx = *(COMP_CTX **)(param_1 + 0x4c);
          uVar3 = puVar19[-8];
          if (ctx != (COMP_CTX *)0x0) {
            if (uVar3 < 0x4401) {
              out = *(uchar **)puVar19;
              if (out == (uchar *)0x0) {
                out = CRYPTO_malloc(0x4540,"ssl/record/ssl3_record.c",0x20b);
                *(uchar **)puVar19 = out;
                if (out != (uchar *)0x0) {
                  ctx = *(COMP_CTX **)(param_1 + 0x4c);
                  uVar3 = puVar19[-8];
                  goto LAB_00acb3cc;
                }
              }
              else {
LAB_00acb3cc:
                uVar3 = COMP_expand_block(ctx,out,0x4000,*(uchar **)(puVar19 + -4),uVar3);
                if (-1 < (int)uVar3) {
                  puVar19[-8] = uVar3;
                  *(undefined8 *)(puVar19 + -4) = *(undefined8 *)puVar19;
                  goto LAB_00acb3f4;
                }
              }
              ERR_put_error(0x14,0x8f,0x6b,"ssl/record/ssl3_record.c",0x1d9);
              uVar14 = 0x1e;
            }
            else {
              iVar4 = 0x8c;
              iVar5 = 0x1d4;
LAB_00acb678:
              ERR_put_error(0x14,0x8f,iVar4,"ssl/record/ssl3_record.c",iVar5);
              uVar14 = 0x16;
            }
            goto LAB_00acb680;
          }
LAB_00acb3f4:
          if (0x4000 < uVar3) {
            iVar4 = 0x92;
            iVar5 = 0x1e0;
            goto LAB_00acb678;
          }
          puVar19[-6] = 0;
          if (uVar3 == 0) {
            uVar3 = param_1[0x43e];
            param_1[0x43e] = uVar3 + 1;
            if (0x20 < uVar3 + 1) {
              ERR_put_error(0x14,0x8f,0x12a,"ssl/record/ssl3_record.c",499);
              uVar14 = 10;
              goto LAB_00acb680;
            }
          }
          else {
            param_1[0x43e] = 0;
          }
          uVar18 = uVar18 + 1;
          puVar19 = puVar19 + 0x12;
        } while (uVar18 < uVar11);
      }
      param_1[0xec] = uVar13;
      return 1;
    }
    iVar4 = 0x1cb;
LAB_00acb4b0:
    uVar14 = 0x14;
    ERR_put_error(0x14,0x8f,0x119,"ssl/record/ssl3_record.c",iVar4);
  }
LAB_00acb680:
  ssl3_send_alert(param_1,2,uVar14);
  return 0xffffffff;
}

