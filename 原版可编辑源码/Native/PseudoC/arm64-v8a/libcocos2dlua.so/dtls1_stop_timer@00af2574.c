
void dtls1_stop_timer(SSL *param_1)

{
  BIO *bp;
  pitem *item;
  _func_3150 *p_Var1;
  
  p_Var1 = param_1->msg_callback;
  *(undefined4 *)(p_Var1 + 0x1e0) = 0;
  *(undefined8 *)(p_Var1 + 0x1d8) = 0;
  p_Var1 = param_1->msg_callback;
  *(undefined8 *)(p_Var1 + 0x1e8) = 0;
  *(undefined8 *)(p_Var1 + 0x1f0) = 0;
  *(undefined2 *)(param_1->msg_callback + 0x1f8) = 1;
  bp = SSL_get_rbio(param_1);
  BIO_ctrl(bp,0x2d,0,param_1->msg_callback + 0x1e8);
  while (item = pqueue_pop(*(pqueue *)(param_1->msg_callback + 0x118)), item != (pitem *)0x0) {
    dtls1_hm_fragment_free(item->data);
    pitem_free(item);
  }
  return;
}

