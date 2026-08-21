
void asn1_primitive_free(long *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  if (param_2 == (char *)0x0) {
    iVar1 = *(int *)*param_1;
    param_1 = (long *)((int *)*param_1 + 2);
    lVar2 = *param_1;
joined_r0x00b0053c:
    if (lVar2 == 0) {
      return;
    }
    switch(iVar1) {
    case 1:
      if (param_2 == (char *)0x0) {
        *(int *)param_1 = -1;
        return;
      }
LAB_00b005a4:
      *(int *)param_1 = *(int *)(param_2 + 0x28);
      return;
    case 5:
      break;
    case 6:
      ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
      break;
    case -4:
      asn1_primitive_free(param_1,0,0);
      CRYPTO_free((void *)*param_1);
      break;
    default:
      goto switchD_00b0055c_caseD_fffffffd;
    }
  }
  else {
    if ((*(long *)(param_2 + 0x20) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x18),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00b00508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return;
    }
    if (*param_2 != '\x05') {
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 == 1) goto LAB_00b005a4;
      lVar2 = *param_1;
      goto joined_r0x00b0053c;
    }
    if (*param_1 == 0) {
      return;
    }
switchD_00b0055c_caseD_fffffffd:
    asn1_string_embed_free(*param_1,param_3);
  }
  *param_1 = 0;
  return;
}

