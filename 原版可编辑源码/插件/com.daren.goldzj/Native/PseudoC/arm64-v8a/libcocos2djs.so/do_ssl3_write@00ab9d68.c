
/* WARNING: Type propagation algorithm not settling */

ulong do_ssl3_write(SSL *param_1,uint param_2,EVP_CIPHER_CTX *param_3,long param_4,uint param_5,
                   int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  EVP_MD *pEVar7;
  EVP_CIPHER *cipher;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  KSSL_CTX **ppKVar12;
  int *piVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  uint *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  int local_b84;
  int local_b80;
  undefined4 local_b60 [2];
  uint local_b58 [4];
  long local_b48 [285];
  long local_260 [32];
  long local_160 [32];
  
  uVar19 = (ulong)param_5;
  if (param_5 == 0) {
    uVar24 = 0;
    uVar4 = *(uint *)((long)&param_1[1].cert + 4);
  }
  else {
    if (param_5 < 8) {
      lVar10 = 0;
LAB_00ab9e14:
      uVar24 = 0;
LAB_00ab9e18:
      lVar9 = uVar19 - lVar10;
      piVar13 = (int *)(param_4 + lVar10 * 4);
      do {
        lVar9 = lVar9 + -1;
        uVar24 = *piVar13 + uVar24;
        piVar13 = piVar13 + 1;
      } while (lVar9 != 0);
    }
    else {
      lVar10 = uVar19 - (param_5 & 7);
      if (lVar10 == 0) goto LAB_00ab9e14;
      iVar5 = 0;
      iVar6 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      puVar15 = (undefined8 *)(param_4 + 0x10);
      lVar9 = lVar10;
      do {
        puVar1 = puVar15 + -2;
        puVar2 = puVar15 + -1;
        puVar3 = puVar15 + 1;
        uVar31 = *puVar15;
        lVar9 = lVar9 + -8;
        puVar15 = puVar15 + 4;
        iVar5 = (int)*puVar1 + iVar5;
        iVar6 = (int)((ulong)*puVar1 >> 0x20) + iVar6;
        iVar25 = (int)*puVar2 + iVar25;
        iVar26 = (int)((ulong)*puVar2 >> 0x20) + iVar26;
        iVar27 = (int)uVar31 + iVar27;
        iVar28 = (int)((ulong)uVar31 >> 0x20) + iVar28;
        iVar29 = (int)*puVar3 + iVar29;
        iVar30 = (int)((ulong)*puVar3 >> 0x20) + iVar30;
      } while (lVar9 != 0);
      uVar24 = iVar27 + iVar5 + iVar28 + iVar6 + iVar29 + iVar25 + iVar30 + iVar26;
      if ((param_5 & 7) != 0) goto LAB_00ab9e18;
    }
    uVar4 = *(uint *)((long)&param_1[1].cert + 4);
  }
  if ((uVar4 != 0) && (*(int *)(param_1[1].sid_ctx + (ulong)(uVar4 - 1) * 0x20 + 0x38) != 0))
  goto LAB_00ab9e5c;
  if (*(int *)(*(long *)&param_1->read_ahead + 0xf4) != 0) {
    uVar4 = (*param_1->method->ssl_dispatch_alert)(param_1);
    if ((int)uVar4 < 1) {
      return (ulong)uVar4;
    }
                    /* try { // try from 00ab9e88 to 00bb9fcf has its CatchHandler @ 00ab9e88
                       catch() { ... } // from try @ 00ab9e88 with catch @ 00ab9e88
                       catch() { ... } // from try @ 00ab9fd8 with catch @ 00ab9e88 */
    uVar4 = *(uint *)((long)&param_1[1].cert + 4);
  }
  if ((uVar4 < param_5) && (iVar5 = ssl3_setup_write_buffer(param_1,uVar19,0), iVar5 == 0)) {
    return 0xffffffff;
  }
  if (uVar24 == 0 && param_6 == 0) {
    return 0;
  }
  if (((param_1->ctx == (SSL_CTX *)0x0) || (param_1->generate_session_id == (GEN_SESSION_CB)0x0)) ||
     (pEVar7 = EVP_MD_CTX_md(*(EVP_MD_CTX **)&param_1->verify_mode), pEVar7 == (EVP_MD *)0x0)) {
    local_b80 = 0;
    if (param_1->generate_session_id != (GEN_SESSION_CB)0x0 && param_6 == 0) goto LAB_00ab9f08;
LAB_00ab9f14:
    local_b84 = 0;
    if (param_6 != 0) goto LAB_00ab9f20;
LAB_00ab9fbc:
    if (local_b84 == 0) {
                    /* try { // try from 00ab9fd8 to 00bba0bb has its CatchHandler @ 00ab9e88 */
      if (param_5 != 0) {
        uVar11 = uVar19;
        ppKVar12 = (KSSL_CTX **)&param_1[1].verify_mode;
        plVar14 = local_160;
        do {
          uVar11 = uVar11 - 1;
          uVar16 = (ulong)~((int)ppKVar12[-3] + 4U) & 7;
          *plVar14 = (long)((long)ppKVar12[-3] + uVar16);
          *(int *)ppKVar12 = (int)uVar16;
          ppKVar12 = ppKVar12 + 4;
          plVar14 = plVar14 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      local_160[0] = *(long *)(param_1[1].sid_ctx + 0x1c) + (long)param_1[1].verify_mode +
                     (long)local_b84;
                    /* try { // try from 00ab9fd0 to 00bb9fd7 has its CatchHandler @ 00aba098 */
    }
  }
  else {
    pEVar7 = EVP_MD_CTX_md(*(EVP_MD_CTX **)&param_1->verify_mode);
    local_b80 = EVP_MD_size(pEVar7);
    if (local_b80 < 0) {
      return 0xffffffff;
    }
    if (param_6 != 0) goto LAB_00ab9f14;
LAB_00ab9f08:
    lVar10 = *(long *)&param_1->read_ahead;
    if (*(int *)(lVar10 + 0xd4) != 0) goto LAB_00ab9f14;
    local_b84 = 0;
    if ((param_2 == 0x17) && (*(int *)(lVar10 + 0xd0) != 0)) {
      local_b60[0] = 0;
      local_b84 = do_ssl3_write(param_1,0x17,param_3,local_b60,1,1);
      if (local_b84 < 1) {
        return 0xffffffff;
      }
      if (0x55 < local_b84) {
        iVar5 = 0x44;
        iVar6 = 700;
        goto LAB_00aba5a0;
      }
      lVar10 = *(long *)&param_1->read_ahead;
    }
    *(undefined4 *)(lVar10 + 0xd4) = 1;
    if (param_6 == 0) goto LAB_00ab9fbc;
LAB_00ab9f20:
    uVar11 = (ulong)~((int)*(long *)(param_1[1].sid_ctx + 0x1c) + 1U) & 7;
    local_160[0] = *(long *)(param_1[1].sid_ctx + 0x1c) + uVar11;
    param_1[1].verify_mode = (int)uVar11;
  }
  if (((EVP_CIPHER_CTX *)param_1->generate_session_id == (EVP_CIPHER_CTX *)0x0) ||
     (((byte)param_1->method->get_timeout[0x68] & 1) == 0)) {
LAB_00aba06c:
    iVar5 = 0;
  }
  else {
    cipher = EVP_CIPHER_CTX_cipher((EVP_CIPHER_CTX *)param_1->generate_session_id);
    uVar11 = EVP_CIPHER_flags(cipher);
    uVar24 = (uint)uVar11 & 0xf0007;
    if (uVar24 - 6 < 2) {
      iVar5 = 8;
    }
    else {
      if (uVar24 != 2) goto LAB_00aba06c;
      iVar6 = EVP_CIPHER_CTX_iv_length((EVP_CIPHER_CTX *)param_1->generate_session_id);
      iVar5 = 0;
      if (1 < iVar6) {
        iVar5 = iVar6;
      }
    }
  }
  memset(local_b60,0,0x900);
  if (param_5 == 0) {
    uVar24 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00ab9fd0 with catch @ 00aba098 */
    if (local_b80 == 0) {
      uVar11 = 0;
      uVar24 = 0;
      plVar14 = local_160;
      puVar23 = local_b60;
      do {
        puVar21 = (undefined1 *)*plVar14;
        *puVar21 = (char)param_2;
        puVar23[1] = param_2;
        iVar6 = param_1->version;
        *plVar14 = (long)(puVar21 + 2);
        puVar21[1] = (char)((uint)iVar6 >> 8);
        iVar6 = SSL_get_state(param_1);
        if ((((iVar6 == 0xc) && (param_1[1].init_off == 0)) &&
            (uVar4 = SSL_version(param_1), (uVar4 & 0xffffff00) == 0x300)) &&
           (iVar6 = SSL_version(param_1), 0x301 < iVar6)) {
          uVar8 = 1;
        }
        else {
          uVar8 = (undefined1)param_1->version;
        }
        puVar21[2] = uVar8;
        local_260[uVar11] = (long)(puVar21 + 3);
        puVar21 = puVar21 + 5;
        *plVar14 = (long)puVar21;
        *(undefined1 **)(puVar23 + 6) = puVar21 + iVar5;
        uVar4 = *(uint *)(param_4 + uVar11 * 4);
        *(uchar **)(puVar23 + 8) = param_3->oiv + ((ulong)uVar24 - 0x18);
        puVar23[2] = uVar4;
        if (*(long *)(param_1->sid_ctx + 0x1c) == 0) {
          plVar18 = local_b48 + uVar11 * 9;
          plVar17 = local_b48 + uVar11 * 9 + 1;
          memcpy(puVar21 + iVar5,param_3->oiv + ((ulong)uVar24 - 0x18),(ulong)uVar4);
          puVar21 = (undefined1 *)*plVar14;
          *(undefined8 *)(puVar23 + 8) = *(undefined8 *)(puVar23 + 6);
        }
        else {
          iVar6 = ssl3_do_compress(param_1,puVar23);
          if (iVar6 == 0) goto LAB_00aba4b0;
          plVar18 = (long *)(puVar23 + 6);
          plVar17 = (long *)(puVar23 + 8);
        }
        uVar24 = uVar4 + uVar24;
        *plVar18 = (long)puVar21;
        *plVar17 = (long)puVar21;
        if (iVar5 != 0) {
          puVar23[2] = puVar23[2] + iVar5;
        }
        uVar11 = uVar11 + 1;
        plVar14 = plVar14 + 1;
        puVar23 = puVar23 + 0x12;
      } while (uVar11 < uVar19);
    }
    else {
      uVar11 = 0;
      uVar24 = 0;
      plVar14 = local_160;
      puVar23 = local_b60;
      do {
        puVar21 = (undefined1 *)*plVar14;
        *puVar21 = (char)param_2;
        puVar23[1] = param_2;
        iVar6 = param_1->version;
        *plVar14 = (long)(puVar21 + 2);
        puVar21[1] = (char)((uint)iVar6 >> 8);
        iVar6 = SSL_get_state(param_1);
        if (((iVar6 == 0xc) && (param_1[1].init_off == 0)) &&
           ((uVar4 = SSL_version(param_1), (uVar4 & 0xffffff00) == 0x300 &&
            (iVar6 = SSL_version(param_1), 0x301 < iVar6)))) {
          uVar8 = 1;
        }
        else {
          uVar8 = (undefined1)param_1->version;
        }
        puVar21[2] = uVar8;
        local_260[uVar11] = (long)(puVar21 + 3);
        puVar21 = puVar21 + 5;
        *plVar14 = (long)puVar21;
        *(undefined1 **)(puVar23 + 6) = puVar21 + iVar5;
        uVar4 = *(uint *)(param_4 + uVar11 * 4);
        *(uchar **)(puVar23 + 8) = param_3->oiv + ((ulong)uVar24 - 0x18);
        puVar23[2] = uVar4;
        if (*(long *)(param_1->sid_ctx + 0x1c) == 0) {
          memcpy(puVar21 + iVar5,param_3->oiv + ((ulong)uVar24 - 0x18),(ulong)uVar4);
          *(undefined8 *)(puVar23 + 8) = *(undefined8 *)(puVar23 + 6);
        }
        else {
          iVar6 = ssl3_do_compress(param_1,puVar23);
          if (iVar6 == 0) goto LAB_00aba4b0;
        }
        if ((*(byte *)(*(long *)&param_1->read_ahead + 1) & 1) == 0) {
          lVar10 = *plVar14;
          iVar6 = (**(code **)(param_1->method->get_timeout + 8))
                            (param_1,puVar23,lVar10 + (ulong)(uint)(puVar23[2] + iVar5),1);
          if (iVar6 < 0) {
            return 0xffffffff;
          }
          puVar23[2] = puVar23[2] + local_b80;
        }
        else {
          lVar10 = *plVar14;
        }
        uVar24 = uVar4 + uVar24;
        *(long *)(puVar23 + 6) = lVar10;
        *(long *)(puVar23 + 8) = lVar10;
        if (iVar5 != 0) {
          puVar23[2] = puVar23[2] + iVar5;
        }
        uVar11 = uVar11 + 1;
        plVar14 = plVar14 + 1;
        puVar23 = puVar23 + 0x12;
      } while (uVar11 < uVar19);
    }
  }
  uVar19 = (ulong)param_5;
  iVar5 = (**(code **)param_1->method->get_timeout)(param_1,local_b60,uVar19,1);
  if (iVar5 < 1) {
    return 0xffffffff;
  }
  if (param_5 != 0) {
    if (local_b80 == 0) {
                    /* try { // try from 00aba4cc to 00bba523 has its CatchHandler @ 00aba414 */
      uVar11 = 0;
      lVar10 = 0x3f4;
      puVar20 = local_b58;
      do {
        puVar21 = (undefined1 *)local_260[uVar11];
        *puVar21 = (char)(*puVar20 >> 8);
        puVar21[1] = (char)*puVar20;
        local_260[uVar11] = (long)(puVar21 + 2);
        if (param_1->msg_callback_arg != (code *)0x0) {
                    /* try { // try from 00aba524 to 00bba52b has its CatchHandler @ 00aba59c */
          (*param_1->msg_callback_arg)
                    (1,0,0x100,puVar21 + -3,5,param_1,*(undefined8 *)&param_1->hit);
                    /* try { // try from 00aba52c to 00bba587 has its CatchHandler @ 00aba414 */
        }
        uVar4 = *puVar20;
        puVar20[-1] = param_2;
        *puVar20 = uVar4 + 5;
        if (param_6 != 0) goto LAB_00aba584;
        uVar11 = uVar11 + 1;
        puVar20 = puVar20 + 0x12;
        *(uint *)((long)&param_1->version + lVar10) = uVar4 + 5 + local_b84;
        lVar10 = lVar10 + 0x20;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba4a8 with catch @ 00aba55c
                        */
      } while (uVar11 < uVar19);
    }
    else {
      uVar11 = 0;
      lVar10 = 0x3f4;
      puVar20 = local_b58;
      do {
        if ((*(byte *)(*(long *)&param_1->read_ahead + 1) & 1) == 0) {
          uVar4 = *puVar20;
          puVar22 = puVar20;
        }
        else {
          iVar5 = (**(code **)(param_1->method->get_timeout + 8))
                            (param_1,puVar20 + -2,local_160[uVar11] + (ulong)*puVar20,1);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba4cc with catch @ 00aba414
                       catch(type#1 @ 00000000) { ... } // from try @ 00aba52c with catch @ 00aba414
                       catch(type#1 @ 00000000) { ... } // from try @ 00aba594 with catch @ 00aba414
                        */
          puVar22 = local_b58 + uVar11 * 0x12;
          uVar4 = *puVar20 + local_b80;
          *puVar20 = uVar4;
        }
        puVar21 = (undefined1 *)local_260[uVar11];
        *puVar21 = (char)(uVar4 >> 8);
        puVar21[1] = (char)*puVar22;
        local_260[uVar11] = (long)(puVar21 + 2);
        if (param_1->msg_callback_arg != (code *)0x0) {
          (*param_1->msg_callback_arg)
                    (1,0,0x100,puVar21 + -3,5,param_1,*(undefined8 *)&param_1->hit);
        }
        puVar20[-1] = param_2;
        uVar4 = *puVar22;
        *puVar22 = uVar4 + 5;
        if (param_6 != 0) goto LAB_00aba584;
        uVar11 = uVar11 + 1;
        puVar20 = puVar20 + 0x12;
        *(uint *)((long)&param_1->version + lVar10) = uVar4 + 5 + local_b84;
        lVar10 = lVar10 + 0x20;
                    /* try { // try from 00aba4a8 to 00bba4ab has its CatchHandler @ 00aba55c */
      } while (uVar11 < uVar19);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba4c0 with catch @ 00aba560
                        */
  *(uint *)((long)&param_1[6].read_hash + 4) = uVar24;
  param_1[6].enc_write_ctx = param_3;
  *(uint *)&param_1[6].expand = param_2;
  *(uint *)((long)&param_1[6].expand + 4) = uVar24;
LAB_00ab9e5c:
  uVar19 = ssl3_write_pending(param_1,param_2,param_3,uVar24);
  return uVar19;
LAB_00aba4b0:
                    /* try { // try from 00aba4c0 to 00bba4cb has its CatchHandler @ 00aba560 */
  iVar5 = 0x8d;
  iVar6 = 0x317;
  goto LAB_00aba5a0;
LAB_00aba584:
  if ((int)uVar11 == 0) {
    return (ulong)local_b58[0];
  }
                    /* try { // try from 00aba588 to 00bba58b has its CatchHandler @ 00aba58c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba588 with catch @ 00aba58c
                        */
                    /* try { // try from 00aba590 to 00bba593 has its CatchHandler @ 00aba598 */
                    /* try { // try from 00aba594 to 00bba5db has its CatchHandler @ 00aba414 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba590 with catch @ 00aba598
                        */
  iVar5 = 0x44;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aba524 with catch @ 00aba59c
                        */
  iVar6 = 0x359;
LAB_00aba5a0:
  ERR_put_error(0x14,0x68,iVar5,"ssl/record/rec_layer_s3.c",iVar6);
  return 0xffffffff;
}

