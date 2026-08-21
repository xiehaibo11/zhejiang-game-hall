
undefined8 FUN_00b6f8d8(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 00b6f8f0 to 00c6f8fb has its CatchHandler @ 00b6fa9c */
  iVar1 = OPENSSL_sk_num(uVar4);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
                    /* try { // try from 00b6f910 to 00c6f91b has its CatchHandler @ 00b6fa84 */
      lVar3 = OPENSSL_sk_value(uVar4,iVar1);
                    /* try { // try from 00b6f91c to 00c6faa3 has its CatchHandler @ 00b6f708 */
      iVar2 = (**(code **)(param_2 + 0x48))(param_2,param_3,lVar3);
      if ((iVar2 != 0) && (iVar2 = x509_check_cert_time(param_2,lVar3,0xffffffff), iVar2 != 0)) {
        *param_1 = lVar3;
        if (lVar3 != 0) {
          X509_up_ref(lVar3);
          return 1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar4);
    } while (iVar1 < iVar2);
  }
  *param_1 = 0;
  return 0;
}

