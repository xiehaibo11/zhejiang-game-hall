
undefined8 SSL_CTX_enable_ct(long param_1,int param_2)

{
  int iVar1;
  int reason;
  int line;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 == 0) {
      puVar2 = &LAB_00ada31c;
LAB_00ada308:
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
      goto LAB_00ada2f4;
    }
    iVar1 = SSL_CTX_has_client_custom_ext(param_1,0x12);
    if (iVar1 == 0) {
      puVar2 = &LAB_00ada324;
      goto LAB_00ada308;
    }
  }
  iVar1 = 0x18c;
  reason = 0xce;
  line = 0x1010;
LAB_00ada2f4:
  ERR_put_error(0x14,iVar1,reason,"ssl/ssl_lib.c",line);
  return 0;
}

