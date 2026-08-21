
undefined4
FUN_00b6604c(BIO *param_1,undefined8 *param_2,int param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 00b65fec with catch @ 00b6604c */
                    /* catch() { ... } // from try @ 00b65f34 with catch @ 00b66050 */
                    /* catch() { ... } // from try @ 00b65f64 with catch @ 00b66054 */
  iVar1 = X509_NAME_print_ex(param_1,(X509_NAME *)*param_2,param_3,*(ulong *)(param_5 + 8));
  uVar2 = 0;
  if (0 < iVar1) {
    uVar2 = 2;
  }
  return uVar2;
}

