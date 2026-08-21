
void FUN_00aadc0c(void *param_1)

{
  long lVar1;
  int iVar2;
  SSL *s;
  BIO *rbio;
  undefined8 uVar3;
  char *pcVar4;
  char local_a8 [128];
  long local_28;
  
                    /* try { // try from 00aadc14 to 00badc1b has its CatchHandler @ 00aadcb4 */
                    /* try { // try from 00aadc1c to 00badc23 has its CatchHandler @ 00aadc94 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00aadc24 to 00badc2b has its CatchHandler @ 00aadc74 */
                    /* try { // try from 00aadc2c to 00badc33 has its CatchHandler @ 00aadc34 */
                    /* catch() { ... } // from try @ 00aadbc4 with catch @ 00aadc34
                       catch() { ... } // from try @ 00aadc2c with catch @ 00aadc34
                       try { // try from 00aadc34 to 00badccf has its CatchHandler @ 00aad90c */
  iVar2 = lws_hdr_copy(param_1,local_a8,0x80,0x57);
  if (iVar2 < 1) {
                    /* catch() { ... } // from try @ 00aadb3c with catch @ 00aadc74
                       catch() { ... } // from try @ 00aadc24 with catch @ 00aadc74 */
    _lws_log(1,"%s: Unable to get hostname\n","lws_ssl_client_bio_create");
  }
  else {
    pcVar4 = local_a8;
    while (local_a8[0] != '\0') {
      if (local_a8[0] == ':') {
        *pcVar4 = '\0';
        break;
      }
      pcVar4 = pcVar4 + 1;
      local_a8[0] = *pcVar4;
    }
    s = SSL_new(*(SSL_CTX **)(*(long *)((long)param_1 + 0x228) + 0x1b8));
                    /* catch() { ... } // from try @ 00aadab0 with catch @ 00aadc94
                       catch() { ... } // from try @ 00aadc1c with catch @ 00aadc94 */
    *(SSL **)((long)param_1 + 0x2b0) = s;
    if (s != (SSL *)0x0) {
      SSL_set_verify(s,1,FUN_00aadd94);
                    /* catch() { ... } // from try @ 00aada1c with catch @ 00aadcb4
                       catch() { ... } // from try @ 00aadc14 with catch @ 00aadcb4 */
      SSL_ctrl(*(SSL **)((long)param_1 + 0x2b0),0x21,2,(void *)0x0);
      SSL_ctrl(*(SSL **)((long)param_1 + 0x2b0),0x37,0,local_a8);
      rbio = BIO_new_socket(*(int *)((long)param_1 + 0x2d0),0);
      *(BIO **)((long)param_1 + 0x2b8) = rbio;
      SSL_set_bio(*(SSL **)((long)param_1 + 0x2b0),rbio,rbio);
      BIO_ctrl(*(BIO **)((long)param_1 + 0x2b8),0x66,1,(void *)0x0);
                    /* try { // try from 00aadd10 to 00badd13 has its CatchHandler @ 00aadd78 */
      SSL_set_ex_data(*(SSL **)((long)param_1 + 0x2b0),DAT_01d54498,param_1);
      uVar3 = 0;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
      goto LAB_00aadd3c;
    }
    iVar2 = FUN_00aac8fc(param_1,0);
    pcVar4 = ERR_error_string((long)iVar2,(char *)0x0);
    _lws_log(1,"SSL_new failed: %s\n",pcVar4);
    FUN_00aaca34();
  }
  uVar3 = 0xffffffff;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aadd10 with catch @ 00aadd78
                        */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00aadd3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

