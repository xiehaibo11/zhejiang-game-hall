
int FUN_00acb04c(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
                    /* try { // try from 00acb050 to 00bcb057 has its CatchHandler @ 00acb280 */
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x14,0x159,0x41,"ssl/ssl_lib.c",0xf47);
      return -1;
    }
  }
  lVar2 = OPENSSL_sk_pop(param_2);
  iVar3 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return iVar3;
    }
    iVar1 = SCT_set_source(lVar2,param_3);
                    /* try { // try from 00acb0b8 to 00bcb0e7 has its CatchHandler @ 00acb27c */
    if ((iVar1 != 1) || (iVar1 = OPENSSL_sk_push(*param_1,lVar2), iVar1 < 1)) break;
    iVar3 = iVar3 + 1;
    lVar2 = OPENSSL_sk_pop(param_2);
  }
  OPENSSL_sk_push(param_2,lVar2);
  return -1;
}

