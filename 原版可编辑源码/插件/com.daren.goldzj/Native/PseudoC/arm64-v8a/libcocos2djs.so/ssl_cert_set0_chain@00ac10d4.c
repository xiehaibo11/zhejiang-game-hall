
undefined8 ssl_cert_set0_chain(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x148);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x120);
  }
  lVar5 = *(long *)*puVar1;
  if (lVar5 == 0) {
LAB_00ac11a0:
    uVar4 = 0;
  }
  else {
    iVar2 = OPENSSL_sk_num(param_3);
    if (0 < iVar2) {
                    /* try { // try from 00ac1120 to 00bc1127 has its CatchHandler @ 00ac13f4 */
      iVar2 = 0;
      do {
                    /* try { // try from 00ac1128 to 00bc114b has its CatchHandler @ 00ac1044 */
        uVar4 = OPENSSL_sk_value(param_3,iVar2);
        iVar3 = ssl_security_cert(param_1,param_2,uVar4,0,0);
                    /* try { // try from 00ac114c to 00bc115f has its CatchHandler @ 00ac13fc */
        if (iVar3 != 1) {
          ERR_put_error(0x14,0x154,iVar3,"ssl/ssl_cert.c",0x111);
          goto LAB_00ac11a0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(param_3);
      } while (iVar2 < iVar3);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar5 + 0x10),X509_free);
    uVar4 = 1;
    *(undefined8 *)(lVar5 + 0x10) = param_3;
  }
  return uVar4;
}

