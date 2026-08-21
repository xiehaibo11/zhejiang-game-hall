
undefined8 dtls1_handle_timeout(SSL *param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  BIO *pBVar4;
  undefined8 uVar5;
  _func_3150 *p_Var6;
  long lVar7;
  int iVar8;
  long lVar9;
  timeval local_30;
  
  if ((*(long *)(param_1->msg_callback + 0x1e8) == 0) &&
     (*(long *)(param_1->msg_callback + 0x1f0) == 0)) {
    return 0;
  }
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
  p_Var6 = param_1->msg_callback;
  lVar7 = *(long *)(p_Var6 + 0x1e8);
  if (local_30.tv_sec <= lVar7) {
    if (lVar7 - local_30.tv_sec == 0) {
      lVar9 = *(long *)(p_Var6 + 0x1f0);
      if (lVar9 <= local_30.tv_usec) goto LAB_00af2214;
    }
    else {
      lVar9 = *(long *)(p_Var6 + 0x1f0);
    }
    lVar9 = lVar9 - local_30.tv_usec;
    lVar2 = lVar9 + 1000000;
    if (-1 < lVar9) {
      lVar2 = lVar9;
    }
    lVar9 = (lVar7 - local_30.tv_sec) + (lVar9 >> 0x3f);
    if ((14999 < lVar2) || (lVar9 != 0)) {
      if (0 < lVar9) {
        return 0;
      }
      if (0 < lVar2) {
        return 0;
      }
    }
  }
LAB_00af2214:
  uVar1 = *(short *)(p_Var6 + 0x1f8) << 1;
  if (0x3b < uVar1) {
    uVar1 = 0x3c;
  }
  *(ushort *)(p_Var6 + 0x1f8) = uVar1;
  if ((lVar7 == 0) && (*(long *)(p_Var6 + 0x1f0) == 0)) {
    *(undefined2 *)(p_Var6 + 0x1f8) = 1;
  }
  gettimeofday((timeval *)(p_Var6 + 0x1e8),(__timezone_ptr_t)0x0);
  p_Var6 = param_1->msg_callback;
  *(ulong *)(p_Var6 + 0x1e8) = *(long *)(p_Var6 + 0x1e8) + (ulong)*(ushort *)(p_Var6 + 0x1f8);
  pBVar4 = SSL_get_rbio(param_1);
  BIO_ctrl(pBVar4,0x2d,0,param_1->msg_callback + 0x1e8);
  p_Var6 = param_1->msg_callback;
  iVar8 = *(int *)(p_Var6 + 0x1e0);
  *(uint *)(p_Var6 + 0x1e0) = iVar8 + 1U;
  if (2 < iVar8 + 1U) {
    uVar3 = SSL_get_options(param_1);
    if ((uVar3 >> 0xc & 1) == 0) {
      pBVar4 = SSL_get_wbio(param_1);
      lVar7 = BIO_ctrl(pBVar4,0x2f,0,(void *)0x0);
      p_Var6 = param_1->msg_callback;
      if ((uint)lVar7 < *(uint *)(p_Var6 + 0x124)) {
        *(uint *)(p_Var6 + 0x124) = (uint)lVar7;
      }
    }
    else {
      p_Var6 = param_1->msg_callback;
    }
  }
  if (0xc < *(uint *)(p_Var6 + 0x1e0)) {
    ERR_put_error(0x14,0x13e,0x138,"ssl/d1_lib.c",0x169);
    return 0xffffffff;
  }
  iVar8 = 1;
  if (*(int *)(p_Var6 + 0x1d8) + 1U < 3) {
    iVar8 = *(int *)(p_Var6 + 0x1d8) + 1;
  }
  *(int *)(p_Var6 + 0x1d8) = iVar8;
  if ((*(long *)(p_Var6 + 0x1e8) == 0) && (*(long *)(p_Var6 + 0x1f0) == 0)) {
    *(undefined2 *)(p_Var6 + 0x1f8) = 1;
  }
  gettimeofday((timeval *)(p_Var6 + 0x1e8),(__timezone_ptr_t)0x0);
  p_Var6 = param_1->msg_callback;
                    /* try { // try from 00af234c to 00bf23a3 has its CatchHandler @ 00af234c
                       catch() { ... } // from try @ 00af234c with catch @ 00af234c
                       catch() { ... } // from try @ 00af2490 with catch @ 00af234c */
  *(ulong *)(p_Var6 + 0x1e8) = *(long *)(p_Var6 + 0x1e8) + (ulong)*(ushort *)(p_Var6 + 0x1f8);
  pBVar4 = SSL_get_rbio(param_1);
  BIO_ctrl(pBVar4,0x2d,0,param_1->msg_callback + 0x1e8);
  uVar5 = dtls1_retransmit_buffered_messages(param_1);
  return uVar5;
}

