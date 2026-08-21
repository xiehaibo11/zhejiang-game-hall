
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
  
                    /* catch() { ... } // from try @ 00abb6c8 with catch @ 00abb6ec */
                    /* try { // try from 00abb708 to 00bbb75b has its CatchHandler @ 00abb708
                       catch() { ... } // from try @ 00abb708 with catch @ 00abb708
                       catch() { ... } // from try @ 00abb768 with catch @ 00abb708 */
  uVar3 = param_1[0x84];
  lVar10 = *(long *)(param_1 + 0x5e);
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
                    /* try { // try from 00abb75c to 00bbb767 has its CatchHandler @ 00abb780 */
                    /* try { // try from 00abb768 to 00bbb79b has its CatchHandler @ 00abb708 */
      uVar6 = ssl3_read_n(param_1,5,param_1[0xf2],0,uVar13 == 1);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
      pbVar17 = *(byte **)(param_1 + 0x436);
                    /* catch() { ... } // from try @ 00abb75c with catch @ 00abb780 */
      param_1[0xeb] = 0xf1;
                    /* try { // try from 00abb79c to 00bbb7cf has its CatchHandler @ 00abb79c
                       catch() { ... } // from try @ 00abb79c with catch @ 00abb79c
                       catch() { ... } // from try @ 00abb7dc with catch @ 00abb79c */
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
                    /* catch() { ... } // from try @ 00abb7d0 with catch @ 00abb840 */
        uVar9 = (uint)CONCAT11(pbVar17[3],pbVar17[4]);
        param_1[(ulong)uVar16 * 0x12 + 0x1f8] = uVar9;
        if ((param_1[0x80] == 0) && (uVar15 != *param_1)) {
                    /* try { // try from 00abbe24 to 00bbbe2b has its CatchHandler @ 00abbecc */
          ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xd0);
                    /* try { // try from 00abbe40 to 00bbbe4b has its CatchHandler @ 00abbec8 */
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
          goto LAB_00abbeac;
        }
        if (bVar1 != 3) {
          if (param_1[0x448] != 0) {
            pcVar12 = *(char **)(param_1 + 0x436);
            iVar4 = strncmp(pcVar12,"GET ",4);
                    /* try { // try from 00abbd34 to 00bbbd37 has its CatchHandler @ 00abbed0 */
                    /* try { // try from 00abbd38 to 00bbbd87 has its CatchHandler @ 00abb89c */
            if ((((iVar4 != 0) && (iVar4 = strncmp(pcVar12,"POST ",5), iVar4 != 0)) &&
                (iVar4 = strncmp(pcVar12,"HEAD ",5), iVar4 != 0)) &&
               (iVar4 = strncmp(pcVar12,"PUT ",4), iVar4 != 0)) {
              iVar4 = strncmp(pcVar12,"CONNE",5);
              if (iVar4 != 0) {
                ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xfa);
                return 0xffffffff;
                    /* try { // try from 00abbd88 to 00bbbd93 has its CatchHandler @ 00abbf04 */
              }
              ERR_put_error(0x14,0x8f,0x9b,"ssl/record/ssl3_record.c",0xf4);
              return 0xffffffff;
            }
            ERR_put_error(0x14,0x8f,0x9c,"ssl/record/ssl3_record.c",0xf0);
            return 0xffffffff;
          }
          ERR_put_error(0x14,0x8f,0x10b,"ssl/record/ssl3_record.c",0xfe);
          uVar14 = 0x46;
          goto LAB_00abbeac;
        }
        if (*(long *)(param_1 + 0xf2) - 5U < (ulong)uVar9) {
          iVar4 = 0xc6;
          iVar5 = 0x107;
          goto LAB_00abbea4;
        }
      }
      else {
        (param_1 + (ulong)uVar16 * 0x12 + 0x1f6)[0] = 2;
        (param_1 + (ulong)uVar16 * 0x12 + 0x1f6)[1] = 0x16;
        uVar9 = (uint)pbVar17[1] | (*pbVar17 & 0x7f) << 8;
        param_1[(ulong)uVar16 * 0x12 + 0x1f8] = uVar9;
                    /* try { // try from 00abb7d0 to 00bbb7db has its CatchHandler @ 00abb840 */
        if (*(long *)(param_1 + 0xf2) - 2U < (ulong)uVar9) {
                    /* try { // try from 00abbf28 to 00bbbfc7 has its CatchHandler @ 00abbf28
                       catch() { ... } // from try @ 00abbf28 with catch @ 00abbf28
                       catch() { ... } // from try @ 00abbfd0 with catch @ 00abbf28
                       catch() { ... } // from try @ 00abc1ac with catch @ 00abbf28 */
          iVar4 = 0xc6;
          iVar5 = 0xb7;
          goto LAB_00abbea4;
        }
                    /* try { // try from 00abb7dc to 00bbb89b has its CatchHandler @ 00abb79c */
        if (uVar9 < 9) {
          ERR_put_error(0x14,0x8f,0xa0,"ssl/record/ssl3_record.c",0xbd);
          uVar14 = 0x28;
          goto LAB_00abbeac;
        }
        uVar15 = 2;
      }
    }
    uVar18 = (ulong)uVar16;
    uVar16 = uVar9 - 3;
                    /* try { // try from 00abb89c to 00bbbab3 has its CatchHandler @ 00abb89c
                       catch() { ... } // from try @ 00abb89c with catch @ 00abb89c
                       catch() { ... } // from try @ 00abbd38 with catch @ 00abb89c
                       catch() { ... } // from try @ 00abbea8 with catch @ 00abb89c
                       catch() { ... } // from try @ 00abbeb0 with catch @ 00abb89c */
    if (uVar15 != 2) {
      uVar16 = uVar9;
    }
    if (0 < (int)uVar16) {
      uVar6 = ssl3_read_n(param_1,uVar16,uVar16,1,0);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
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
      goto LAB_00abbea4;
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
          goto LAB_00abbef8;
        }
        puVar19[2] = uVar9;
        lVar20 = *(long *)(puVar19 + 6);
        iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar19,auStack_a0,0);
        if ((iVar4 < 0) ||
           (iVar4 = CRYPTO_memcmp(auStack_a0,(void *)(lVar20 + (ulong)uVar9),(ulong)uVar3),
           iVar4 != 0)) {
          iVar4 = 0x16d;
          goto LAB_00abbcdc;
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
                    /* try { // try from 00abbab4 to 00bbbae7 has its CatchHandler @ 00abbf00 */
        do {
          if (puVar19[3] < uVar3) {
LAB_00abbee0:
            iVar4 = 0x1a0;
LAB_00abbef8:
            ERR_put_error(0x14,0x8f,0xa0,"ssl/record/ssl3_record.c",iVar4);
            uVar14 = 0x32;
                    /* catch() { ... } // from try @ 00abbab4 with catch @ 00abbf00 */
            goto LAB_00abbeac;
          }
          pEVar7 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
          uVar18 = EVP_CIPHER_flags(pEVar7);
          if (((uVar18 & 0xf0007) == 2) && (puVar19[3] < uVar3 + 1)) goto LAB_00abbee0;
          pEVar7 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
          uVar18 = EVP_CIPHER_flags(pEVar7);
          if ((uVar18 & 0xf0007) == 2) {
            b = auStack_e0;
            ssl3_cbc_copy_mac(auStack_e0,puVar19,uVar3);
            uVar9 = puVar19[2] - uVar3;
          }
          else {
                    /* try { // try from 00abbb2c to 00bbbb2f has its CatchHandler @ 00abbec4 */
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
                    /* try { // try from 00abbba4 to 00bbbbbf has its CatchHandler @ 00abbf04 */
        uVar18 = 0;
        puVar19 = param_1 + 0x200;
        do {
          ctx = *(COMP_CTX **)(param_1 + 0x4c);
          uVar3 = puVar19[-8];
          if (ctx != (COMP_CTX *)0x0) {
            if (uVar3 < 0x4401) {
              out = *(uchar **)puVar19;
              if (out == (uchar *)0x0) {
                    /* try { // try from 00abbbd8 to 00bbbbdb has its CatchHandler @ 00abbf08 */
                out = CRYPTO_malloc(0x4540,"ssl/record/ssl3_record.c",0x20b);
                *(uchar **)puVar19 = out;
                if (out != (uchar *)0x0) {
                  ctx = *(COMP_CTX **)(param_1 + 0x4c);
                  uVar3 = puVar19[-8];
                  goto LAB_00abbbf8;
                }
              }
              else {
LAB_00abbbf8:
                    /* try { // try from 00abbc00 to 00bbbccb has its CatchHandler @ 00abbf0c */
                uVar3 = COMP_expand_block(ctx,out,0x4000,*(uchar **)(puVar19 + -4),uVar3);
                if (-1 < (int)uVar3) {
                  puVar19[-8] = uVar3;
                  *(undefined8 *)(puVar19 + -4) = *(undefined8 *)puVar19;
                  goto LAB_00abbc20;
                }
              }
                    /* try { // try from 00abbe08 to 00bbbe1b has its CatchHandler @ 00abbec0 */
              ERR_put_error(0x14,0x8f,0x6b,"ssl/record/ssl3_record.c",0x1d9);
              uVar14 = 0x1e;
            }
            else {
                    /* try { // try from 00abbe9c to 00bbbe9f has its CatchHandler @ 00abbebc */
              iVar4 = 0x8c;
                    /* try { // try from 00abbea0 to 00bbbea7 has its CatchHandler @ 00abbeb8 */
              iVar5 = 0x1d4;
LAB_00abbea4:
              ERR_put_error(0x14,0x8f,iVar4,"ssl/record/ssl3_record.c",iVar5);
                    /* try { // try from 00abbea8 to 00bbbeab has its CatchHandler @ 00abb89c */
              uVar14 = 0x16;
            }
            goto LAB_00abbeac;
          }
LAB_00abbc20:
          if (0x4000 < uVar3) {
            iVar4 = 0x92;
            iVar5 = 0x1e0;
            goto LAB_00abbea4;
          }
          puVar19[-6] = 0;
          if (uVar3 == 0) {
            uVar3 = param_1[0x43e];
            param_1[0x43e] = uVar3 + 1;
            if (0x20 < uVar3 + 1) {
                    /* catch() { ... } // from try @ 00abbba4 with catch @ 00abbf04
                       catch() { ... } // from try @ 00abbd88 with catch @ 00abbf04 */
                    /* catch() { ... } // from try @ 00abbbd8 with catch @ 00abbf08 */
                    /* catch() { ... } // from try @ 00abbc00 with catch @ 00abbf0c */
              ERR_put_error(0x14,0x8f,0x12a,"ssl/record/ssl3_record.c",499);
              uVar14 = 10;
              goto LAB_00abbeac;
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
LAB_00abbcdc:
    uVar14 = 0x14;
    ERR_put_error(0x14,0x8f,0x119,"ssl/record/ssl3_record.c",iVar4);
  }
LAB_00abbeac:
                    /* try { // try from 00abbeac to 00bbbeaf has its CatchHandler @ 00abbeb4 */
                    /* try { // try from 00abbeb0 to 00bbbf27 has its CatchHandler @ 00abb89c */
                    /* catch() { ... } // from try @ 00abbeac with catch @ 00abbeb4 */
                    /* catch() { ... } // from try @ 00abbea0 with catch @ 00abbeb8 */
  ssl3_send_alert(param_1,2,uVar14);
                    /* catch() { ... } // from try @ 00abbe9c with catch @ 00abbebc */
                    /* catch() { ... } // from try @ 00abbe08 with catch @ 00abbec0 */
                    /* catch() { ... } // from try @ 00abbb2c with catch @ 00abbec4 */
                    /* catch() { ... } // from try @ 00abbe40 with catch @ 00abbec8 */
                    /* catch() { ... } // from try @ 00abbe24 with catch @ 00abbecc */
                    /* catch() { ... } // from try @ 00abbd34 with catch @ 00abbed0 */
  return 0xffffffff;
}

