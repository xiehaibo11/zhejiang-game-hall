
void FUN_01085d78(long *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  cVar2 = *(char *)(*param_1 + 0xec);
  *param_7 = 0;
  *param_6 = 0;
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  bVar3 = cVar2 == '\0';
  iVar4 = -param_4;
  if (bVar3) {
    iVar4 = param_4;
  }
  iVar1 = -param_5;
  if (bVar3) {
    iVar1 = param_5;
  }
  if (*(char *)((long)param_1 + 0x48ea) == '\0') {
    return;
  }
  *(int *)(param_1[1] + 0x20) =
       ((param_5 >> 0x10) * (param_2 >> 0x10) - (param_4 >> 0x10) * (param_3 >> 0x10)) +
       *(int *)(param_1[1] + 0x20);
  if (iVar4 < 0) {
    if (iVar1 < 0) {
      if (iVar1 * -2 < -iVar4) goto LAB_01085e70;
      iVar6 = (int)param_1[0x923];
      if (iVar4 * -2 < -iVar1) goto LAB_01085ed0;
      uVar5 = 0xffffffffffff4cce;
    }
    else {
      if (iVar1 * 2 < -iVar4) {
LAB_01085e70:
        *param_6 = 0;
        iVar4 = *(int *)((long)param_1 + 0x491c) << 1;
        goto LAB_01085f10;
      }
      iVar6 = (int)param_1[0x923];
      if (iVar4 * -2 < iVar1) goto LAB_01085e44;
      uVar5 = 0xb333;
    }
    iVar4 = FT_MulFix(uVar5,(long)iVar6);
    *param_6 = iVar4;
    iVar4 = *(int *)((long)param_1 + 0x491c);
    uVar5 = 0x1b333;
LAB_01085f0c:
    iVar4 = FT_MulFix(uVar5,(long)iVar4);
  }
  else {
    if (iVar1 < 0) {
      if (iVar4 <= iVar1 * -2) {
        iVar6 = (int)param_1[0x923];
        if (-iVar1 <= iVar4 * 2) {
          uVar5 = 0xffffffffffff4cce;
          goto LAB_01085ea0;
        }
LAB_01085ed0:
        *param_6 = -iVar6;
LAB_01085ed8:
        iVar4 = *(int *)((long)param_1 + 0x491c);
        goto LAB_01085f10;
      }
    }
    else if (iVar4 <= iVar1 * 2) {
      iVar6 = (int)param_1[0x923];
      if (iVar4 * 2 < iVar1) {
LAB_01085e44:
        *param_6 = iVar6;
        goto LAB_01085ed8;
      }
      uVar5 = 0xb333;
LAB_01085ea0:
      iVar4 = FT_MulFix(uVar5,(long)iVar6);
      *param_6 = iVar4;
      iVar4 = *(int *)((long)param_1 + 0x491c);
      uVar5 = 0x4ccd;
      goto LAB_01085f0c;
    }
    iVar4 = 0;
    *param_6 = 0;
  }
LAB_01085f10:
  *param_7 = iVar4;
  return;
}

