
undefined8 dtls1_query_mtu(SSL *param_1)

{
  int iVar1;
  uint uVar2;
  BIO *pBVar3;
  long lVar4;
  long lVar5;
  _func_3150 *p_Var6;
  
  iVar1 = *(int *)(param_1->msg_callback + 0x120);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(param_1->msg_callback + 0x124);
  }
  else {
    pBVar3 = SSL_get_wbio(param_1);
    lVar4 = BIO_ctrl(pBVar3,0x31,0,(void *)0x0);
    p_Var6 = param_1->msg_callback;
    uVar2 = iVar1 - (int)lVar4;
    *(uint *)(p_Var6 + 0x124) = uVar2;
    *(undefined4 *)(p_Var6 + 0x120) = 0;
  }
  pBVar3 = SSL_get_wbio(param_1);
  lVar4 = BIO_ctrl(pBVar3,0x31,0,(void *)0x0);
  if (uVar2 < 0x100U - (int)lVar4) {
    uVar2 = SSL_get_options(param_1);
                    /* catch() { ... } // from try @ 00ae3fa0 with catch @ 00ae4030 */
    if ((uVar2 >> 0xc & 1) != 0) {
      return 0;
    }
    pBVar3 = SSL_get_wbio(param_1);
    lVar4 = BIO_ctrl(pBVar3,0x28,0,(void *)0x0);
                    /* try { // try from 00ae404c to 00be40e7 has its CatchHandler @ 00ae404c
                       catch() { ... } // from try @ 00ae404c with catch @ 00ae404c
                       catch() { ... } // from try @ 00ae40f0 with catch @ 00ae404c
                       catch() { ... } // from try @ 00ae4120 with catch @ 00ae404c
                       catch() { ... } // from try @ 00ae4174 with catch @ 00ae404c */
    *(uint *)(param_1->msg_callback + 0x124) = (uint)lVar4;
    pBVar3 = SSL_get_wbio(param_1);
    lVar5 = BIO_ctrl(pBVar3,0x31,0,(void *)0x0);
    if ((uint)lVar4 < 0x100U - (int)lVar5) {
      pBVar3 = SSL_get_wbio(param_1);
      lVar4 = BIO_ctrl(pBVar3,0x31,0,(void *)0x0);
      *(int *)(param_1->msg_callback + 0x124) = 0x100 - (int)lVar4;
      pBVar3 = SSL_get_wbio(param_1);
      BIO_ctrl(pBVar3,0x2a,(ulong)*(uint *)(param_1->msg_callback + 0x124),(void *)0x0);
    }
  }
  return 1;
}

