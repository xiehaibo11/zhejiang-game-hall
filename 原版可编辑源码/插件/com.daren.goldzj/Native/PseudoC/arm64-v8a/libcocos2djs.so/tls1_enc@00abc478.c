
uint tls1_enc(undefined4 *param_1,long param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  EVP_MD *pEVar13;
  EVP_CIPHER *cipher;
  ulong uVar14;
  EVP_CIPHER *pEVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  int *piVar22;
  long lVar23;
  undefined8 uVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  EVP_CIPHER_CTX *ctx;
  ulong uVar28;
  undefined8 local_400 [32];
  undefined8 local_300;
  undefined1 local_2f8 [408];
  ulong local_160 [32];
  
  if (param_4 == 0) {
    pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48));
    if (pEVar13 != (EVP_MD *)0x0) {
      pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48));
      iVar9 = EVP_MD_size(pEVar13);
      if (iVar9 < 0) {
                    /* try { // try from 00abccec to 00bbccf3 has its CatchHandler @ 00abcd84 */
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: n >= 0","ssl/record/ssl3_record.c",0x2b2);
      }
    }
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x46);
    if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_00abc5e8;
    cipher = EVP_CIPHER_CTX_cipher(ctx);
  }
  else {
    pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x50));
    if (pEVar13 != (EVP_MD *)0x0) {
      pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x50));
      iVar9 = EVP_MD_size(pEVar13);
      if (iVar9 < 0) {
                    /* try { // try from 00abccc4 to 00bbcceb has its CatchHandler @ 00abcc24 */
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: n >= 0","ssl/record/ssl3_record.c",0x291);
      }
    }
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x4e);
    if (ctx == (EVP_CIPHER_CTX *)0x0) goto LAB_00abc5e8;
    cipher = EVP_CIPHER_CTX_cipher(ctx);
    if (((((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) & 1) != 0) &&
         (uVar14 = EVP_CIPHER_flags(cipher), (uVar14 & 0xf0007) == 2)) &&
        (iVar9 = EVP_CIPHER_iv_length(cipher), 1 < iVar9)) && (param_3 != 0)) {
      uVar25 = 0;
      puVar17 = (undefined8 *)(param_2 + 0x20);
      do {
        if ((uchar *)puVar17[-1] != (uchar *)*puVar17) {
          iVar9 = 0x44;
          iVar10 = 0x2a6;
          goto LAB_00abcc98;
        }
        iVar10 = RAND_bytes((uchar *)puVar17[-1],iVar9);
        if (iVar10 < 1) {
                    /* try { // try from 00abcc8c to 00bbcc93 has its CatchHandler @ 00abcd88 */
          iVar9 = 0x44;
                    /* try { // try from 00abcc94 to 00bbccb7 has its CatchHandler @ 00abcc24 */
          iVar10 = 0x2a9;
          goto LAB_00abcc98;
        }
        uVar25 = uVar25 + 1;
        puVar17 = puVar17 + 9;
      } while (uVar25 < param_3);
    }
  }
  if (((cipher == (EVP_CIPHER *)0x0) || (ctx == (EVP_CIPHER_CTX *)0x0)) ||
     (*(long *)(param_1 + 0x5e) == 0)) {
LAB_00abc5e8:
    if (param_3 != 0) {
      uVar14 = (ulong)param_3;
      puVar17 = (undefined8 *)(param_2 + 0x20);
      do {
        memmove((void *)puVar17[-1],(void *)*puVar17,(ulong)*(uint *)(puVar17 + -3));
        uVar14 = uVar14 - 1;
        *puVar17 = puVar17[-1];
        puVar17 = puVar17 + 9;
      } while (uVar14 != 0);
    }
                    /* try { // try from 00abccb8 to 00bbccc3 has its CatchHandler @ 00abcd88 */
    return 1;
  }
  pEVar15 = EVP_CIPHER_CTX_cipher(ctx);
  iVar9 = EVP_CIPHER_block_size(pEVar15);
  if (param_3 < 2) {
    if (param_3 != 0) goto LAB_00abc620;
    iVar10 = 0;
    bVar8 = true;
  }
  else {
    pEVar15 = EVP_CIPHER_CTX_cipher(ctx);
    uVar14 = EVP_CIPHER_flags(pEVar15);
    if (((uint)uVar14 >> 0x17 & 1) == 0) {
      iVar9 = 0x196;
      iVar10 = 0x2cb;
      goto LAB_00abcc98;
    }
LAB_00abc620:
    uVar14 = (ulong)param_3;
    pcVar2 = (char *)(param_1 + 0x446);
    if (param_4 == 0) {
      pcVar2 = (char *)(param_1 + 0x444);
    }
    uVar28 = 0;
    iVar10 = 0;
    uVar27 = (ulong)iVar9;
    pcVar1 = pcVar2 + 2;
    do {
      puVar26 = (uint *)(param_2 + uVar28 * 0x48 + 8);
      local_160[uVar28] = (ulong)*puVar26;
      pEVar15 = EVP_CIPHER_CTX_cipher(ctx);
      uVar16 = EVP_CIPHER_flags(pEVar15);
      if (((uint)uVar16 >> 0x15 & 1) == 0) {
        if (param_4 != 0 && iVar9 != 1) {
          iVar11 = 0;
          iVar18 = (int)local_160[uVar28];
          if (iVar9 != 0) {
            iVar11 = iVar18 / iVar9;
          }
          iVar11 = iVar9 - (iVar18 - iVar11 * iVar9);
          uVar16 = local_160[uVar28] + (long)iVar11;
          if (iVar18 < (int)uVar16) {
            lVar19 = (long)iVar18;
            do {
              *(char *)(*(long *)(param_2 + uVar28 * 0x48 + 0x20) + lVar19) = (char)iVar11 + -1;
              lVar19 = lVar19 + 1;
              uVar16 = local_160[uVar28] + (long)iVar11;
            } while (lVar19 < (int)uVar16);
          }
          local_160[uVar28] = uVar16;
          *puVar26 = *puVar26 + iVar11;
        }
        if (param_4 == 0) {
LAB_00abc890:
          uVar16 = local_160[uVar28];
          if (uVar16 == 0) {
            return 0;
          }
          uVar7 = 0;
          if (uVar27 != 0) {
            uVar7 = uVar16 / uVar27;
          }
          if (uVar16 != uVar7 * uVar27) {
            return 0;
          }
        }
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
          uVar24 = *(undefined8 *)pcVar2;
          puVar17 = (undefined8 *)((long)&local_300 + uVar28 * 0xd);
          *puVar17 = uVar24;
          cVar5 = pcVar2[7];
          pcVar2[7] = cVar5 + '\x01';
          if (((((char)(cVar5 + '\x01') == '\0') &&
               (cVar5 = pcVar2[6], pcVar2[6] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) &&
              ((cVar5 = pcVar2[5], pcVar2[5] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0' &&
               (((cVar5 = pcVar2[4], pcVar2[4] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0' &&
                 (cVar5 = pcVar2[3], pcVar2[3] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) &&
                (cVar5 = *pcVar1, *pcVar1 = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')))))) &&
             (cVar5 = pcVar2[1], pcVar2[1] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) {
            *pcVar2 = (char)uVar24 + '\x01';
          }
        }
        else {
          lVar19 = uVar28 * 0xd;
          puVar17 = (undefined8 *)((long)&local_300 + lVar19);
          puVar3 = *(undefined2 **)(param_1 + 0x44a) + 1;
          if (param_4 == 0) {
            puVar3 = *(undefined2 **)(param_1 + 0x44a);
          }
          uVar6 = *puVar3;
          *(char *)puVar17 = (char)((ushort)uVar6 >> 8);
          *(char *)((long)&local_300 + lVar19 + 1) = (char)uVar6;
          *(undefined2 *)(local_2f8 + lVar19 + -2) = *(undefined2 *)(pcVar2 + 6);
          *(undefined4 *)((long)&local_300 + lVar19 + 2) = *(undefined4 *)pcVar1;
        }
        lVar19 = uVar28 * 0xd;
        local_2f8[lVar19] = (char)*(undefined4 *)(param_2 + uVar28 * 0x48 + 4);
        uVar4 = *param_1;
        local_2f8[lVar19 + 2] = (char)uVar4;
        local_2f8[lVar19 + 1] = (char)((uint)uVar4 >> 8);
        uVar25 = *puVar26;
        local_2f8[lVar19 + 3] = (char)(uVar25 >> 8);
        local_2f8[lVar19 + 4] = (char)uVar25;
        iVar10 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0xd,puVar17);
        if (iVar10 < 1) {
          return 0xffffffff;
        }
        if (param_4 == 0) goto LAB_00abc890;
        local_160[uVar28] = local_160[uVar28] + (long)iVar10;
        *puVar26 = *puVar26 + iVar10;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar14);
    if (1 < param_3) {
      lVar19 = uVar14 - (param_3 & 1);
      if (lVar19 == 0) {
LAB_00abc908:
        lVar23 = uVar14 - lVar19;
        puVar17 = local_400 + lVar19;
        puVar21 = (undefined8 *)(param_2 + lVar19 * 0x48 + 0x18);
        do {
          lVar23 = lVar23 + -1;
          *puVar17 = *puVar21;
          puVar17 = puVar17 + 1;
          puVar21 = puVar21 + 9;
        } while (lVar23 != 0);
      }
      else {
        puVar17 = local_400 + 1;
        puVar21 = (undefined8 *)(param_2 + 0x60);
        lVar23 = lVar19;
        do {
          uVar24 = *puVar21;
          lVar23 = lVar23 + -2;
          puVar17[-1] = puVar21[-9];
          *puVar17 = uVar24;
          puVar17 = puVar17 + 2;
          puVar21 = puVar21 + 0x12;
        } while (lVar23 != 0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abc974 with catch @ 00abc904
                       catch(type#1 @ 00000000) { ... } // from try @ 00abc9a4 with catch @ 00abc904
                       catch(type#1 @ 00000000) { ... } // from try @ 00abc9d4 with catch @ 00abc904
                       catch(type#1 @ 00000000) { ... } // from try @ 00abc9fc with catch @ 00abc904
                       catch(type#1 @ 00000000) { ... } // from try @ 00abca28 with catch @ 00abc904
                        */
        if ((param_3 & 1) != 0) goto LAB_00abc908;
      }
      iVar11 = EVP_CIPHER_CTX_ctrl(ctx,0x22,param_3,local_400);
      if (iVar11 < 1) {
        ERR_put_error(0x14,0x191,0x196,"ssl/record/ssl3_record.c",0x314);
      }
                    /* try { // try from 00abc96c to 00bbc973 has its CatchHandler @ 00abca68 */
      if (param_3 < 2) {
                    /* try { // try from 00abc974 to 00bbc997 has its CatchHandler @ 00abc904 */
        lVar19 = 0;
LAB_00abc9d0:
                    /* try { // try from 00abc9d4 to 00bbc9f3 has its CatchHandler @ 00abc904 */
        lVar23 = uVar14 - lVar19;
        puVar17 = local_400 + lVar19;
        puVar21 = (undefined8 *)(param_2 + lVar19 * 0x48 + 0x20);
        do {
          lVar23 = lVar23 + -1;
                    /* try { // try from 00abc9f4 to 00bbc9fb has its CatchHandler @ 00abca64 */
          *puVar17 = *puVar21;
          puVar17 = puVar17 + 1;
          puVar21 = puVar21 + 9;
        } while (lVar23 != 0);
      }
      else {
                    /* try { // try from 00abc998 to 00bbc9a3 has its CatchHandler @ 00abca68 */
        lVar19 = uVar14 - (param_3 & 1);
        if (lVar19 == 0) goto LAB_00abc9d0;
                    /* try { // try from 00abc9a4 to 00bbc9cb has its CatchHandler @ 00abc904 */
        puVar17 = local_400 + 1;
        puVar21 = (undefined8 *)(param_2 + 0x68);
        lVar23 = lVar19;
        do {
          uVar24 = *puVar21;
          lVar23 = lVar23 + -2;
          puVar17[-1] = puVar21[-9];
          *puVar17 = uVar24;
          puVar17 = puVar17 + 2;
          puVar21 = puVar21 + 0x12;
        } while (lVar23 != 0);
                    /* try { // try from 00abc9cc to 00bbc9d3 has its CatchHandler @ 00abca64 */
        if ((param_3 & 1) != 0) goto LAB_00abc9d0;
      }
                    /* try { // try from 00abc9fc to 00bbca1b has its CatchHandler @ 00abc904 */
      iVar11 = EVP_CIPHER_CTX_ctrl(ctx,0x23,param_3,local_400);
                    /* try { // try from 00abca1c to 00bbca27 has its CatchHandler @ 00abca64 */
                    /* try { // try from 00abca28 to 00bbca6b has its CatchHandler @ 00abc904 */
      if ((iVar11 < 1) || (iVar11 = EVP_CIPHER_CTX_ctrl(ctx,0x24,param_3,local_160), iVar11 < 1)) {
        iVar9 = 0x196;
        iVar10 = 0x31e;
LAB_00abcc98:
        ERR_put_error(0x14,0x191,iVar9,"ssl/record/ssl3_record.c",iVar10);
        return 0xffffffff;
      }
    }
    bVar8 = false;
  }
  iVar11 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x18),*(uchar **)(param_2 + 0x20),(uint)local_160[0]
                     );
  pEVar15 = EVP_CIPHER_CTX_cipher(ctx);
  uVar14 = EVP_CIPHER_flags(pEVar15);
  if (((uint)uVar14 >> 0x14 & 1) == 0) {
    if (iVar11 != 0) {
LAB_00abca64:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abc9cc with catch @ 00abca64
                       catch(type#1 @ 00000000) { ... } // from try @ 00abc9f4 with catch @ 00abca64
                       catch(type#1 @ 00000000) { ... } // from try @ 00abca1c with catch @ 00abca64
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abc96c with catch @ 00abca68
                       catch(type#1 @ 00000000) { ... } // from try @ 00abc998 with catch @ 00abca68
                        */
      if (param_4 == 0) {
        uVar14 = EVP_CIPHER_flags(cipher);
        if ((uVar14 & 0xf0007) == 6) {
          if (!bVar8) {
            uVar14 = (ulong)param_3;
            plVar20 = (long *)(param_2 + 0x18);
            do {
              uVar14 = uVar14 - 1;
              plVar20[1] = plVar20[1] + 8;
              *plVar20 = *plVar20 + 8;
              *(int *)(plVar20 + -2) = (int)plVar20[-2] + -8;
              plVar20 = plVar20 + 9;
            } while (uVar14 != 0);
          }
        }
        else {
          uVar14 = EVP_CIPHER_flags(cipher);
          if (((uVar14 & 0xf0007) == 7) && (param_3 != 0)) {
            uVar14 = (ulong)param_3;
            plVar20 = (long *)(param_2 + 0x18);
            do {
              uVar14 = uVar14 - 1;
              plVar20[1] = plVar20[1] + 8;
              *plVar20 = *plVar20 + 8;
              *(int *)(plVar20 + -2) = (int)plVar20[-2] + -8;
              plVar20 = plVar20 + 9;
            } while (uVar14 != 0);
          }
        }
      }
      if (((*(byte *)(*(long *)(param_1 + 0x24) + 1) & 1) == 0) &&
         (pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48)), pEVar13 != (EVP_MD *)0x0)) {
        pEVar13 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x48));
        iVar11 = EVP_MD_size(pEVar13);
      }
      else {
        iVar11 = 0;
      }
      uVar25 = 1;
      if (((param_3 != 0) && (uVar25 = 1, param_4 == 0)) && (iVar9 != 1)) {
        uVar14 = 0;
        uVar25 = 1;
        lVar19 = param_2;
        do {
          uVar12 = tls1_cbc_remove_padding(param_1,lVar19,iVar9,iVar11);
          if (uVar12 == 0) {
            return 0;
          }
          uVar14 = uVar14 + 1;
          uVar25 = uVar25 | (int)((uVar12 ^ 1) - 1 & (uVar12 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU;
          lVar19 = lVar19 + 0x48;
        } while (uVar14 < param_3);
      }
      if (param_3 == 0) {
        return uVar25;
      }
      if (param_4 != 0) {
        return uVar25;
      }
      if (iVar10 != 0) {
        if (param_3 < 2) {
          lVar19 = 0;
        }
        else {
          lVar19 = (ulong)param_3 - (ulong)(param_3 & 1);
          if (lVar19 != 0) {
            piVar22 = (int *)(param_2 + 0x50);
            lVar23 = lVar19;
            do {
              lVar23 = lVar23 + -2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abcc94 with catch @ 00abcc24
                       catch(type#1 @ 00000000) { ... } // from try @ 00abccc4 with catch @ 00abcc24
                       catch(type#1 @ 00000000) { ... } // from try @ 00abccf4 with catch @ 00abcc24
                       catch(type#1 @ 00000000) { ... } // from try @ 00abcd1c with catch @ 00abcc24
                       catch(type#1 @ 00000000) { ... } // from try @ 00abcd48 with catch @ 00abcc24
                        */
              piVar22[-0x12] = piVar22[-0x12] - iVar10;
              *piVar22 = *piVar22 - iVar10;
              piVar22 = piVar22 + 0x24;
            } while (lVar23 != 0);
            if ((param_3 & 1) == 0) {
              return uVar25;
            }
          }
        }
        lVar23 = (ulong)param_3 - lVar19;
        piVar22 = (int *)(param_2 + lVar19 * 0x48 + 8);
        do {
          lVar23 = lVar23 + -1;
          *piVar22 = *piVar22 - iVar10;
          piVar22 = piVar22 + 0x12;
        } while (lVar23 != 0);
        return uVar25;
      }
      return uVar25;
    }
  }
  else if (-1 < iVar11) goto LAB_00abca64;
  return 0xffffffff;
}

