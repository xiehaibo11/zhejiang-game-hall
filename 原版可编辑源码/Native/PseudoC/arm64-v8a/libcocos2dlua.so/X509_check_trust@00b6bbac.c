
int X509_check_trust(X509 *x,int id,int flags)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int local_58 [10];
  
  if (id == 0) {
    iVar1 = FUN_00b6bca4(0x38e,x,flags | 8);
    return iVar1;
  }
  uVar3 = id - 1;
  if (uVar3 < 8) {
LAB_00b6bbdc:
    puVar2 = &DAT_0176ecd8 + (long)(int)uVar3 * 0x28;
LAB_00b6bbf0:
    iVar1 = (**(code **)(puVar2 + 8))(puVar2,x,flags);
  }
  else {
    local_58[0] = id;
    if (DAT_01784f90 != 0) {
      iVar1 = OPENSSL_sk_find(DAT_01784f90,local_58);
      if ((iVar1 != -1) && (uVar3 = iVar1 + 8, uVar3 != 0xffffffff)) {
        if ((int)uVar3 < 0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          if ((int)uVar3 < 8) goto LAB_00b6bbdc;
          puVar2 = (undefined *)OPENSSL_sk_value(DAT_01784f90,iVar1);
        }
        goto LAB_00b6bbf0;
      }
    }
    iVar1 = (*(code *)PTR_FUN_0176ecd0)(id,x,flags);
  }
  return iVar1;
}

