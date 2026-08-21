
void dtls1_start_timer(SSL *param_1)

{
  BIO *bp;
  _func_3150 *p_Var1;
  
                    /* try { // try from 00af23a4 to 00bf23a7 has its CatchHandler @ 00af24ec */
  p_Var1 = param_1->msg_callback;
  if ((*(long *)(p_Var1 + 0x1e8) == 0) && (*(long *)(p_Var1 + 0x1f0) == 0)) {
    *(undefined2 *)(p_Var1 + 0x1f8) = 1;
  }
  gettimeofday((timeval *)(p_Var1 + 0x1e8),(__timezone_ptr_t)0x0);
  p_Var1 = param_1->msg_callback;
  *(ulong *)(p_Var1 + 0x1e8) = *(long *)(p_Var1 + 0x1e8) + (ulong)*(ushort *)(p_Var1 + 0x1f8);
  bp = SSL_get_rbio(param_1);
                    /* try { // try from 00af23f0 to 00bf2483 has its CatchHandler @ 00af2500 */
  BIO_ctrl(bp,0x2d,0,param_1->msg_callback + 0x1e8);
  return;
}

