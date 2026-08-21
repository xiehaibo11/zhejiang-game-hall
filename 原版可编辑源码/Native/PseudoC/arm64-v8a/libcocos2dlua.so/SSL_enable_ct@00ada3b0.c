
undefined8 SSL_enable_ct(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int reason;
  int line;
  undefined1 *puVar3;
  
  if (param_2 == 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x1b8),0x12);
    if (iVar1 == 0) {
      lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x41,1,0);
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = &LAB_00ada31c;
LAB_00ada488:
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined1 **)(param_1 + 0x238) = puVar3;
      return 1;
    }
  }
  else {
    if (param_2 != 1) {
      iVar1 = 0x192;
      reason = 0xd4;
      line = 0x1093;
      goto LAB_00ada44c;
    }
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x1b8),0x12);
    if (iVar1 == 0) {
      lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x41,1,0);
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = &LAB_00ada324;
      goto LAB_00ada488;
    }
  }
  iVar1 = 399;
  reason = 0xce;
  line = 0xff3;
LAB_00ada44c:
  ERR_put_error(0x14,iVar1,reason,"ssl/ssl_lib.c",line);
  return 0;
}

