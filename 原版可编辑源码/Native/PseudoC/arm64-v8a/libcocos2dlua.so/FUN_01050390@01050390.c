
void FUN_01050390(void *param_1)

{
  long lVar1;
  int iVar2;
  SSL *s;
  BIO *rbio;
  undefined8 uVar3;
  char *pcVar4;
  char local_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 010503b8 to 011503bf has its CatchHandler @ 01053e98 */
  iVar2 = lws_hdr_copy(param_1,local_a8,0x80,0x57);
                    /* try { // try from 010503c4 to 011503cb has its CatchHandler @ 01053e78 */
  if (iVar2 < 1) {
    _lws_log(1,"%s: Unable to get hostname\n","lws_ssl_client_bio_create");
  }
  else {
    pcVar4 = local_a8;
                    /* try { // try from 010503cc to 011503d7 has its CatchHandler @ 01053e58 */
    while (local_a8[0] != '\0') {
                    /* try { // try from 010503d8 to 011503eb has its CatchHandler @ 01053e40 */
      if (local_a8[0] == ':') {
        *pcVar4 = '\0';
        break;
      }
      pcVar4 = pcVar4 + 1;
      local_a8[0] = *pcVar4;
    }
    s = SSL_new(*(SSL_CTX **)(*(long *)((long)param_1 + 0x228) + 0x1b8));
    *(SSL **)((long)param_1 + 0x2b0) = s;
    if (s != (SSL *)0x0) {
      SSL_set_verify(s,1,FUN_01050518);
      SSL_ctrl(*(SSL **)((long)param_1 + 0x2b0),0x21,2,(void *)0x0);
      SSL_ctrl(*(SSL **)((long)param_1 + 0x2b0),0x37,0,local_a8);
      rbio = BIO_new_socket(*(int *)((long)param_1 + 0x2d0),0);
      *(BIO **)((long)param_1 + 0x2b8) = rbio;
      SSL_set_bio(*(SSL **)((long)param_1 + 0x2b0),rbio,rbio);
      BIO_ctrl(*(BIO **)((long)param_1 + 0x2b8),0x66,1,(void *)0x0);
                    /* try { // try from 010504a8 to 011504bb has its CatchHandler @ 0105382c */
      SSL_set_ex_data(*(SSL **)((long)param_1 + 0x2b0),DAT_01795f7c,param_1);
      uVar3 = 0;
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return;
      }
      goto LAB_010504c0;
    }
    iVar2 = FUN_0104f080(param_1,0);
    pcVar4 = ERR_error_string((long)iVar2,(char *)0x0);
    _lws_log(1,"SSL_new failed: %s\n",pcVar4);
    FUN_0104f1b8();
  }
  uVar3 = 0xffffffff;
                    /* try { // try from 010504f8 to 0115050b has its CatchHandler @ 01053828 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 01050510 to 01150537 has its CatchHandler @ 0105395c */
    return;
  }
LAB_010504c0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010504c0 to 011504e7 has its CatchHandler @ 01053970 */
  __stack_chk_fail(uVar3);
}

