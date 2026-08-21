
long FUN_00ab7a24(undefined8 param_1,int param_2,fp *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)BIO_get_data();
  if (param_2 == 0xe) {
    SSL_set_info_callback((SSL *)*puVar1,(cb *)param_3);
    return 1;
  }
  lVar2 = BIO_callback_ctrl(((SSL *)*puVar1)->rbio,param_2,param_3);
  return lVar2;
}

