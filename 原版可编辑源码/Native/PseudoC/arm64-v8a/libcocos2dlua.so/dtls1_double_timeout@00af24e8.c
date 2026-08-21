
void dtls1_double_timeout(SSL *param_1)

{
  ushort uVar1;
  BIO *bp;
  _func_3150 *p_Var2;
  
                    /* catch() { ... } // from try @ 00af23a4 with catch @ 00af24ec */
  p_Var2 = param_1->msg_callback;
                    /* catch() { ... } // from try @ 00af23f0 with catch @ 00af2500 */
  uVar1 = *(short *)(p_Var2 + 0x1f8) << 1;
  if (0x3b < uVar1) {
    uVar1 = 0x3c;
  }
  *(ushort *)(p_Var2 + 0x1f8) = uVar1;
  if ((*(long *)(p_Var2 + 0x1e8) == 0) && (*(long *)(p_Var2 + 0x1f0) == 0)) {
    *(undefined2 *)(p_Var2 + 0x1f8) = 1;
  }
  gettimeofday((timeval *)(p_Var2 + 0x1e8),(__timezone_ptr_t)0x0);
  p_Var2 = param_1->msg_callback;
  *(ulong *)(p_Var2 + 0x1e8) = *(long *)(p_Var2 + 0x1e8) + (ulong)*(ushort *)(p_Var2 + 0x1f8);
  bp = SSL_get_rbio(param_1);
  BIO_ctrl(bp,0x2d,0,param_1->msg_callback + 0x1e8);
  return;
}

