
int EVP_PKEY_copy_parameters(EVP_PKEY *to,EVP_PKEY *from)

{
  int iVar1;
  int line;
  code *UNRECOVERED_JUMPTABLE;
  
  if (to->type == 0) {
    iVar1 = FUN_00b36974(to,from->type,0,0xffffffff);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (to->type != from->type) {
    iVar1 = 0x65;
    line = 0x4f;
    goto LAB_00b36798;
  }
  if (((from->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(from->ameth + 0x80), UNRECOVERED_JUMPTABLE == (code *)0x0)
      ) || (iVar1 = (*UNRECOVERED_JUMPTABLE)(from), iVar1 == 0)) {
    if (((to->ameth != (EVP_PKEY_ASN1_METHOD *)0x0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(to->ameth + 0x80), UNRECOVERED_JUMPTABLE != (code *)0x0)
        ) && (iVar1 = (*UNRECOVERED_JUMPTABLE)(to), iVar1 != 0)) {
      if (from->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(from->ameth + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00b36748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(to,from);
      return iVar1;
    }
    if (((to->type == from->type) && (to->ameth != (EVP_PKEY_ASN1_METHOD *)0x0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(to->ameth + 0x90), UNRECOVERED_JUMPTABLE != (code *)0x0
        && (iVar1 = (*UNRECOVERED_JUMPTABLE)(to,from), iVar1 == 1)))) {
      return 1;
    }
    iVar1 = 0x99;
    line = 0x5b;
  }
  else {
    iVar1 = 0x67;
    line = 0x54;
  }
LAB_00b36798:
  ERR_put_error(6,0x67,iVar1,"crypto/evp/p_lib.c",line);
  return 0;
}

