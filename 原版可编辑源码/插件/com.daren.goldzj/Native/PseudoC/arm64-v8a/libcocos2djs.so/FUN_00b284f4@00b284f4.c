
undefined8 FUN_00b284f4(undefined4 *param_1,int param_2,char *param_3,int param_4)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  code *pcVar2;
  ENGINE *local_38;
  
  local_38 = (ENGINE *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 8) != 0) {
      if ((*(long *)(param_1 + 4) != 0) &&
         (pcVar2 = *(code **)(*(long *)(param_1 + 4) + 0xa8), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      ENGINE_finish(*(ENGINE **)(param_1 + 6));
      *(undefined8 *)(param_1 + 6) = 0;
    }
    if ((param_1[1] == param_2) && (*(long *)(param_1 + 4) != 0)) {
      return 1;
    }
    ENGINE_finish(*(ENGINE **)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
  }
  if (param_3 == (char *)0x0) {
    pEVar1 = EVP_PKEY_asn1_find(&local_38,param_2);
  }
  else {
    pEVar1 = EVP_PKEY_asn1_find_str(&local_38,param_3,param_4);
  }
  if (param_1 == (undefined4 *)0x0) {
    ENGINE_finish(local_38);
  }
  if (pEVar1 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *(EVP_PKEY_ASN1_METHOD **)(param_1 + 4) = pEVar1;
      *(ENGINE **)(param_1 + 6) = local_38;
      *param_1 = *(undefined4 *)pEVar1;
      param_1[1] = param_2;
    }
    return 1;
  }
  ERR_put_error(6,0x9e,0x9c,"crypto/evp/p_lib.c",0xcc);
  return 0;
}

