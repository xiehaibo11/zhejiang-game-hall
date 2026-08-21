
ulong FUN_00b00a84(long *param_1,char *param_2,int param_3)

{
  int type;
  ulong uVar1;
  undefined4 *puVar2;
  ASN1_OBJECT *pAVar3;
  code *UNRECOVERED_JUMPTABLE;
  ASN1_STRING *pAVar4;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00b00abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar1;
  }
  if (*param_2 == '\x05') {
    type = -1;
switchD_00b00b18_caseD_fffffffd:
    if (param_3 == 0) {
      pAVar4 = ASN1_STRING_type_new(type);
      *param_1 = (long)pAVar4;
    }
    else {
      pAVar4 = (ASN1_STRING *)*param_1;
      pAVar4->length = 0;
      pAVar4->type = 0;
      pAVar4->data = (uchar *)0x0;
      pAVar4->type = type;
      pAVar4->flags = 0x80;
    }
    if ((pAVar4 != (ASN1_STRING *)0x0) && (*param_2 == '\x05')) {
      pAVar4->flags = pAVar4->flags | 0x40;
    }
LAB_00b00b70:
    uVar1 = (ulong)(*param_1 != 0);
  }
  else {
    type = *(int *)(param_2 + 8);
    switch(type) {
    case 1:
      uVar1 = 1;
      *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
      break;
    case 5:
      uVar1 = 1;
      *param_1 = 1;
      break;
    case 6:
      pAVar3 = OBJ_nid2obj(0);
      *param_1 = (long)pAVar3;
      uVar1 = 1;
      break;
    case -4:
      puVar2 = CRYPTO_malloc(0x10,"crypto/asn1/tasn_new.c",0x120);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      *(undefined8 *)(puVar2 + 2) = 0;
      *puVar2 = 0xffffffff;
      *param_1 = (long)puVar2;
      goto LAB_00b00b70;
    default:
      goto switchD_00b00b18_caseD_fffffffd;
    }
  }
  return uVar1;
}

