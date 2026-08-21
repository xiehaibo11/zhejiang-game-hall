
undefined8 dtls1_check_timeout_num(SSL *param_1)

{
  int iVar1;
  uint uVar2;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  _func_3150 *p_Var5;
  
  p_Var5 = param_1->msg_callback;
  iVar1 = *(int *)(p_Var5 + 0x1e0);
  *(uint *)(p_Var5 + 0x1e0) = iVar1 + 1U;
  if (2 < iVar1 + 1U) {
    uVar2 = SSL_get_options(param_1);
    if ((uVar2 >> 0xc & 1) == 0) {
      bp = SSL_get_wbio(param_1);
      lVar3 = BIO_ctrl(bp,0x2f,0,(void *)0x0);
      p_Var5 = param_1->msg_callback;
      if ((uint)lVar3 < *(uint *)(p_Var5 + 0x124)) {
        *(uint *)(p_Var5 + 0x124) = (uint)lVar3;
                    /* try { // try from 00ae379c to 00be37a7 has its CatchHandler @ 00ae3a28 */
      }
    }
    else {
      p_Var5 = param_1->msg_callback;
    }
  }
  if (*(uint *)(p_Var5 + 0x1e0) < 0xd) {
    uVar4 = 0;
  }
  else {
    ERR_put_error(0x14,0x13e,0x138,"ssl/d1_lib.c",0x169);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

