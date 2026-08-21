
int ASN1_INTEGER_set_int64(ASN1_STRING *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 local_18 [8];
  undefined1 *puVar7;
  
  param_1->type = 2;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    if (0xff < param_2) {
      lVar3 = 0;
      uVar5 = param_2;
      do {
        lVar2 = lVar3;
        uVar5 = uVar5 >> 8;
        lVar3 = lVar2 + 1;
      } while (uVar5 != 0);
      puVar7 = local_18 + lVar2;
      do {
        puVar6 = puVar7 + -1;
        *puVar7 = (char)param_2;
        param_2 = param_2 >> 8;
        puVar7 = puVar6;
      } while (local_18 <= puVar6);
      uVar4 = param_1->type | 0x100;
      goto LAB_00b7ca74;
    }
    local_18[0] = (undefined1)param_2;
    uVar4 = 0x102;
  }
  else {
    if (0xff < param_2) {
      lVar3 = 0;
      uVar5 = param_2;
      do {
        lVar2 = lVar3;
        uVar5 = uVar5 >> 8;
        lVar3 = lVar2 + 1;
      } while (uVar5 != 0);
      puVar7 = local_18 + lVar2;
      do {
        puVar6 = puVar7 + -1;
        *puVar7 = (char)param_2;
        param_2 = param_2 >> 8;
        puVar7 = puVar6;
      } while (local_18 <= puVar6);
      uVar4 = param_1->type & 0xfffffeff;
      goto LAB_00b7ca74;
    }
    local_18[0] = (undefined1)param_2;
    uVar4 = 2;
  }
  lVar3 = 1;
LAB_00b7ca74:
  param_1->type = uVar4;
  iVar1 = ASN1_STRING_set(param_1,local_18,(int)lVar3);
  return iVar1;
}

