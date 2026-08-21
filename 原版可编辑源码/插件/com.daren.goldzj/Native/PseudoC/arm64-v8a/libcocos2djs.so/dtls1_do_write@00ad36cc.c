
long dtls1_do_write(SSL *param_1,int param_2)

{
  int iVar1;
  code cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  EVP_MD_CTX *ctx;
  EVP_CIPHER *pEVar8;
  ulong uVar9;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx_00;
  long lVar10;
  BIO *bp;
  code *pcVar11;
  undefined8 uVar12;
  _func_3150 *p_Var13;
  
  iVar4 = dtls1_query_mtu();
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1->msg_callback + 0x124);
  uVar5 = dtls1_min_mtu(param_1);
  if (uVar6 < uVar5) {
    return 0xffffffff;
  }
  if (((param_2 == 0x16) && (*(int *)((long)&param_1->d1 + 4) == 0)) &&
     (*(int *)&param_1->d1 != *(int *)(param_1->msg_callback + 0x130) + 0xc)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: s->init_num == (int)s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH"
                ,"ssl/statem/statem_dtls.c",0x7f);
  }
  ctx = *(EVP_MD_CTX **)&param_1->verify_mode;
  if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00ad378c:
    iVar4 = 0xd;
    ctx_00 = (EVP_CIPHER_CTX *)param_1->generate_session_id;
  }
  else {
    if ((EVP_CIPHER_CTX *)param_1->generate_session_id != (EVP_CIPHER_CTX *)0x0) {
      pEVar8 = EVP_CIPHER_CTX_cipher((EVP_CIPHER_CTX *)param_1->generate_session_id);
      uVar9 = EVP_CIPHER_flags(pEVar8);
      if (((uint)uVar9 >> 0x15 & 1) != 0) goto LAB_00ad378c;
      ctx = *(EVP_MD_CTX **)&param_1->verify_mode;
    }
    md = EVP_MD_CTX_md(ctx);
    iVar4 = EVP_MD_size(md);
    iVar4 = iVar4 + 0xd;
    ctx_00 = (EVP_CIPHER_CTX *)param_1->generate_session_id;
  }
  if (ctx_00 != (EVP_CIPHER_CTX *)0x0) {
    pEVar8 = EVP_CIPHER_CTX_cipher(ctx_00);
    uVar9 = EVP_CIPHER_flags(pEVar8);
    if ((uVar9 & 0xf0007) == 2) {
      iVar7 = EVP_CIPHER_CTX_block_size((EVP_CIPHER_CTX *)param_1->generate_session_id);
      iVar7 = iVar7 << 1;
      goto LAB_00ad37c8;
    }
  }
  iVar7 = 0;
LAB_00ad37c8:
  iVar4 = iVar4 + iVar7;
  uVar9 = 0;
  bVar3 = true;
  param_1->rwstate = 1;
  while( true ) {
    iVar7 = *(int *)&param_1->d1;
    while( true ) {
      if (iVar7 < 1) {
        return 0;
      }
      if ((param_2 == 0x16) && (iVar1 = *(int *)((long)&param_1->d1 + 4), iVar1 != 0)) {
        if ((int)uVar9 == 0) {
          uVar9 = (ulong)*(uint *)(param_1->msg_callback + 0x140);
        }
        else {
          if (iVar1 < 0xd) {
            return 0xffffffff;
          }
          *(int *)&param_1->d1 = iVar7 + 0xc;
          *(int *)((long)&param_1->d1 + 4) = iVar1 + -0xc;
        }
      }
      lVar10 = BIO_ctrl(param_1->wbio,0xd,0,(void *)0x0);
      p_Var13 = param_1->msg_callback;
      uVar6 = iVar4 + (int)lVar10;
      uVar5 = *(uint *)(p_Var13 + 0x124) - uVar6;
      if ((*(uint *)(p_Var13 + 0x124) < uVar6 || uVar5 == 0) || (uVar5 < 0xd)) {
        lVar10 = BIO_ctrl(param_1->wbio,0xb,0,(void *)0x0);
        if ((int)lVar10 < 1) {
          param_1->rwstate = 2;
          return lVar10;
        }
        p_Var13 = param_1->msg_callback;
        if (*(uint *)(p_Var13 + 0x124) <= iVar4 + 0xcU) {
          return 0xffffffff;
        }
        uVar5 = *(uint *)(p_Var13 + 0x124) - iVar4;
      }
      if (*(uint *)&param_1->d1 <= uVar5) {
        uVar5 = *(uint *)&param_1->d1;
      }
      if (0x7ffffffe < uVar5) {
        uVar5 = 0x7fffffff;
      }
      if (param_2 == 0x16) {
        if (uVar5 < 0xc) {
          return 0xffffffff;
        }
        *(ulong *)(p_Var13 + 0x140) = uVar9;
        *(ulong *)(p_Var13 + 0x148) = (ulong)(uVar5 - 0xc);
        pcVar11 = (code *)(*(long *)&param_1->s2->escape + (long)*(int *)((long)&param_1->d1 + 4));
        *pcVar11 = p_Var13[0x128];
        pcVar11[1] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 0x10,0);
        pcVar11[2] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 8,0);
        pcVar11[3] = SUB81(*(undefined8 *)(p_Var13 + 0x130),0);
        pcVar11[4] = p_Var13[0x139];
        pcVar11[5] = p_Var13[0x138];
        pcVar11[6] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x140) >> 0x10,0);
        pcVar11[7] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x140) >> 8,0);
        pcVar11[8] = SUB81(*(undefined8 *)(p_Var13 + 0x140),0);
        pcVar11[9] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x148) >> 0x10,0);
        pcVar11[10] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x148) >> 8,0);
        pcVar11[0xb] = SUB81(*(undefined8 *)(p_Var13 + 0x148),0);
      }
      uVar6 = dtls1_write_bytes(param_1,param_2,
                                *(long *)&param_1->s2->escape +
                                (long)*(int *)((long)&param_1->d1 + 4),uVar5);
      if ((int)uVar6 < 0) break;
      if (uVar5 != uVar6) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: len == (unsigned int)ret","ssl/statem/statem_dtls.c",0x109);
      }
      if ((param_2 == 0x16) && (p_Var13 = param_1->msg_callback, *(int *)(p_Var13 + 0x1fc) == 0)) {
        pcVar11 = (code *)(*(long *)&param_1->s2->escape + (long)*(int *)((long)&param_1->d1 + 4));
        if (((int)uVar9 == 0) && (param_1->version != 0x100)) {
          *pcVar11 = p_Var13[0x128];
          pcVar11[1] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 0x10,0);
          pcVar11[2] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 8,0);
          pcVar11[3] = SUB81(*(undefined8 *)(p_Var13 + 0x130),0);
          pcVar11[4] = p_Var13[0x139];
          cVar2 = p_Var13[0x138];
          pcVar11[6] = (code)0x0;
          *(undefined2 *)(pcVar11 + 7) = 0;
          pcVar11[5] = cVar2;
          pcVar11[9] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 0x10,0);
          pcVar11[10] = SUB81((ulong)*(undefined8 *)(p_Var13 + 0x130) >> 8,0);
          pcVar11[0xb] = SUB81(*(undefined8 *)(p_Var13 + 0x130),0);
          uVar6 = uVar5;
        }
        else {
          pcVar11 = pcVar11 + 0xc;
          uVar6 = uVar5 - 0xc;
        }
        iVar7 = ssl3_finish_mac(param_1,pcVar11,uVar6);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
      }
      iVar7 = *(int *)&param_1->d1 - uVar5;
      if (iVar7 == 0) {
        if (param_1->msg_callback_arg != (code *)0x0) {
          uVar12._0_4_ = param_1->s2->escape;
          uVar12._4_4_ = param_1->s2->ssl2_rollback;
          (*param_1->msg_callback_arg)
                    (1,param_1->version,param_2,uVar12,
                     (long)*(int *)((long)&param_1->d1 + 4) + (long)(int)uVar5,param_1,
                     *(undefined8 *)&param_1->hit);
        }
        param_1->d1 = (dtls1_state_st *)0x0;
        return 1;
                    /* catch() { ... } // from try @ 00ad3b5c with catch @ 00ad3ad4
                       catch() { ... } // from try @ 00ad3bb8 with catch @ 00ad3ad4 */
      }
      iVar1 = *(int *)((long)&param_1->d1 + 4);
      p_Var13 = param_1->msg_callback;
      uVar9 = (ulong)(((int)uVar9 + uVar5) - 0xc);
      *(int *)&param_1->d1 = iVar7;
      *(uint *)((long)&param_1->d1 + 4) = iVar1 + uVar5;
      *(ulong *)(p_Var13 + 0x140) = uVar9;
      *(undefined8 *)(p_Var13 + 0x148) = 0;
    }
    if (!bVar3) {
      return 0xffffffff;
    }
    bp = SSL_get_wbio(param_1);
    lVar10 = BIO_ctrl(bp,0x2b,0,(void *)0x0);
    if (lVar10 < 1) break;
    uVar6 = SSL_get_options(param_1);
    if ((uVar6 >> 0xc & 1) != 0) {
      return 0xffffffff;
    }
    iVar7 = dtls1_query_mtu(param_1);
    bVar3 = false;
    if (iVar7 == 0) {
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

