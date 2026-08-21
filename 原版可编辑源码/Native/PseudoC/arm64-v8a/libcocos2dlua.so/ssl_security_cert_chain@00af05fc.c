
undefined8
ssl_security_cert_chain(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
                    /* try { // try from 00af05fc to 00bf0603 has its CatchHandler @ 00af06f8 */
                    /* try { // try from 00af0604 to 00bf0627 has its CatchHandler @ 00af0594 */
  bVar1 = param_3 == 0;
  if (bVar1) {
                    /* try { // try from 00af0628 to 00bf0633 has its CatchHandler @ 00af06f8 */
    param_3 = OPENSSL_sk_value(param_2,0);
                    /* try { // try from 00af0634 to 00bf065b has its CatchHandler @ 00af0594 */
  }
  uVar4 = (uint)bVar1;
  uVar3 = ssl_security_cert(param_1,0,param_3,param_4,1);
  if ((int)uVar3 == 1) {
    iVar2 = OPENSSL_sk_num(param_2);
                    /* try { // try from 00af065c to 00bf0663 has its CatchHandler @ 00af06f4 */
    if ((int)uVar4 < iVar2) {
      do {
                    /* try { // try from 00af0664 to 00bf0683 has its CatchHandler @ 00af0594 */
        uVar3 = OPENSSL_sk_value(param_2,uVar4);
                    /* try { // try from 00af0684 to 00bf068b has its CatchHandler @ 00af06f4 */
        uVar3 = ssl_security_cert(param_1,0,uVar3,param_4,0);
                    /* try { // try from 00af068c to 00bf06ab has its CatchHandler @ 00af0594 */
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        uVar4 = uVar4 + 1;
        iVar2 = OPENSSL_sk_num(param_2);
      } while ((int)uVar4 < iVar2);
    }
    uVar3 = 1;
  }
                    /* try { // try from 00af06ac to 00bf06b7 has its CatchHandler @ 00af06f4 */
  return uVar3;
}

