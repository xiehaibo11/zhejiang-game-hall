
undefined8 SSL_CTX_enable_ct(long param_1,int param_2)

{
  int iVar1;
  int reason;
  int line;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 == 0) {
      puVar2 = &LAB_00acae34;
LAB_00acae20:
      *(undefined1 **)(param_1 + 400) = puVar2;
      *(undefined8 *)(param_1 + 0x198) = 0;
      return 1;
    }
  }
  else {
    if (param_2 != 1) {
      iVar1 = 0x18e;
      reason = 0xd4;
      line = 0x1086;
      goto LAB_00acae0c;
    }
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 == 0) {
                    /* try { // try from 00acadbc to 00bcae9f has its CatchHandler @ 00acadbc
                       catch() { ... } // from try @ 00acadbc with catch @ 00acadbc
                       catch() { ... } // from try @ 00acaf20 with catch @ 00acadbc
                       catch() { ... } // from try @ 00acafd0 with catch @ 00acadbc
                       catch() { ... } // from try @ 00acb01c with catch @ 00acadbc
                       catch() { ... } // from try @ 00acb16c with catch @ 00acadbc
                       catch() { ... } // from try @ 00acb1b8 with catch @ 00acadbc
                       catch() { ... } // from try @ 00acb234 with catch @ 00acadbc */
      puVar2 = &DAT_00acae3c;
      goto LAB_00acae20;
    }
  }
  iVar1 = 0x18c;
  reason = 0xce;
  line = 0x1010;
LAB_00acae0c:
  ERR_put_error(0x14,iVar1,reason,"ssl/ssl_lib.c",line);
  return 0;
}

