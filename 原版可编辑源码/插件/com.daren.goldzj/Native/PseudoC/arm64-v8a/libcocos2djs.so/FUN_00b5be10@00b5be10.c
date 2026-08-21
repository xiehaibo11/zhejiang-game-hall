
int FUN_00b5be10(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  iVar1 = *piVar2;
  if (iVar1 - *piVar3 != 0) {
    return iVar1 - *piVar3;
  }
  if (iVar1 != 2) {
    if (iVar1 == 1) {
                    /* try { // try from 00b5be3c to 00c5be7f has its CatchHandler @ 00b5bf6c */
      iVar1 = X509_subject_name_cmp(*(X509 **)(piVar2 + 2),*(X509 **)(piVar3 + 2));
      return iVar1;
    }
    return 0;
  }
  iVar1 = X509_CRL_cmp(*(X509_CRL **)(piVar2 + 2),*(X509_CRL **)(piVar3 + 2));
  return iVar1;
}

