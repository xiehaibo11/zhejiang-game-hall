
int FUN_00ada534(long *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x14,0x159,0x41,"ssl/ssl_lib.c",0xf47);
      return -1;
    }
  }
                    /* try { // try from 00ada568 to 00bda5b7 has its CatchHandler @ 00ada568
                       catch() { ... } // from try @ 00ada568 with catch @ 00ada568
                       catch() { ... } // from try @ 00ada68c with catch @ 00ada568
                       catch() { ... } // from try @ 00ada6f4 with catch @ 00ada568
                       catch() { ... } // from try @ 00ada720 with catch @ 00ada568 */
  lVar2 = OPENSSL_sk_pop(param_2);
  iVar3 = 0;
  while( true ) {
    if (lVar2 == 0) {
      return iVar3;
    }
    iVar1 = SCT_set_source(lVar2,param_3);
                    /* try { // try from 00ada5b8 to 00bda5e7 has its CatchHandler @ 00ada758 */
    if ((iVar1 != 1) || (iVar1 = OPENSSL_sk_push(*param_1,lVar2), iVar1 < 1)) break;
    iVar3 = iVar3 + 1;
    lVar2 = OPENSSL_sk_pop(param_2);
  }
  OPENSSL_sk_push(param_2,lVar2);
  return -1;
}

