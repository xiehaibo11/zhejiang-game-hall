
undefined8
dtls1_write_app_data_bytes(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int line;
  
  iVar1 = SSL_in_init();
  if ((iVar1 != 0) && (iVar1 = ossl_statem_get_in_handshake(param_1), iVar1 == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      iVar1 = 0xe5;
      line = 0x22;
      goto LAB_00af3010;
    }
  }
  if (param_4 < 0x4001) {
    uVar2 = dtls1_write_bytes(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar1 = 0x14e;
  line = 0x28;
LAB_00af3010:
  ERR_put_error(0x14,0x10c,iVar1,"ssl/d1_msg.c",line);
  return 0xffffffff;
}

