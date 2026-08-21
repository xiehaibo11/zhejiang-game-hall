
undefined8 FUN_00b9a824(long param_1,int param_2,uint param_3,EVP_MD *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 0x28);
  if (param_2 < 0x1001) {
    uVar3 = 1;
    switch(param_2) {
    case 1:
      iVar2 = EVP_MD_type(param_4);
      if (((((iVar2 == 0x40) || (iVar2 = EVP_MD_type(param_4), iVar2 == 0x74)) ||
           ((iVar2 = EVP_MD_type(param_4), iVar2 == 0x42 ||
            ((iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a3 ||
             (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a0)))))) ||
          (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a1)) ||
         (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a2)) {
LAB_00b9a988:
        *(EVP_MD **)(puVar4 + 6) = param_4;
        return 1;
      }
      iVar2 = 0x96;
      goto LAB_00b9a9e0;
    case 2:
      ERR_put_error(10,0x78,0x96,"crypto/dsa/dsa_pmeth.c",0xa7);
    default:
switchD_00b9a860_caseD_3:
      uVar3 = 0xfffffffe;
      break;
    case 5:
    case 7:
    case 0xb:
      break;
    case 0xd:
      uVar1 = puVar4[7];
      uVar3 = 1;
      param_4->type = puVar4[6];
      param_4->pkey_type = uVar1;
    }
  }
  else {
    if (param_2 != 0x1003) {
      if (param_2 == 0x1002) {
        if (8 < (param_3 >> 5 | param_3 << 0x1b)) {
          return 0xfffffffe;
        }
        if ((1 << (ulong)(param_3 >> 5 & 0x1f) & 0x1a1U) != 0) {
          puVar4[1] = param_3;
          return 1;
        }
        return 0xfffffffe;
      }
      if ((param_2 == 0x1001) && (0xff < (int)param_3)) {
        *puVar4 = param_3;
        return 1;
      }
      goto switchD_00b9a860_caseD_3;
    }
    iVar2 = EVP_MD_type(param_4);
    if (((iVar2 == 0x40) || (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = EVP_MD_type(param_4), iVar2 == 0x2a0)) goto LAB_00b9a988;
    iVar2 = 0x88;
LAB_00b9a9e0:
    ERR_put_error(10,0x78,0x6a,"crypto/dsa/dsa_pmeth.c",iVar2);
    uVar3 = 0;
  }
  return uVar3;
}

