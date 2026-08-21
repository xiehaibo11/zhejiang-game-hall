
int ASN1_INTEGER_set_uint64(ASN1_STRING *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 local_18 [8];
  undefined1 *puVar6;
  
  param_1->type = 2;
  if (param_2 < 0x100) {
    local_18[0] = (undefined1)param_2;
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    uVar4 = param_2;
    do {
      lVar2 = lVar3;
      uVar4 = uVar4 >> 8;
      lVar3 = lVar2 + 1;
    } while (uVar4 != 0);
    puVar6 = local_18 + lVar2;
    do {
      puVar5 = puVar6 + -1;
      *puVar6 = (char)param_2;
      param_2 = param_2 >> 8;
      puVar6 = puVar5;
    } while (local_18 <= puVar5);
  }
  iVar1 = ASN1_STRING_set(param_1,local_18,(int)lVar3);
  return iVar1;
}

