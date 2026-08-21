
undefined8 SSL_set_ct_validation_callback(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x1b8),0x12);
    if (iVar1 != 0) {
      ERR_put_error(0x14,399,0xce,"ssl/ssl_lib.c",0xff3);
      return 0;
    }
    lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x41,1,0);
    if (lVar2 == 0) {
      return 0;
    }
  }
  *(long *)(param_1 + 0x238) = param_2;
  *(undefined8 *)(param_1 + 0x240) = param_3;
  return 1;
}

