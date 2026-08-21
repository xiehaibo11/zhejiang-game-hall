
void FUN_00e8196c(int param_1,int param_2,int param_3,int *param_4,int param_5,char param_6,
                 int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_4 = 0;
  if (param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar8 = 0;
    goto LAB_00e81b60;
  }
  iVar8 = param_7[2];
  iVar10 = param_7[3];
  iVar7 = *param_7;
  iVar3 = param_7[1];
  iVar1 = param_7[4];
  iVar9 = param_7[5];
  iVar2 = param_7[6];
  iVar4 = param_7[7];
  iVar5 = FT_MulFix((long)(param_5 + param_3),(long)param_1);
  if ((0x3e - (int)LZCOUNT(param_2)) - (int)LZCOUNT(iVar5) < 0x2e) {
    iVar6 = FT_MulFix((long)iVar5,(long)param_2);
    if (iVar7 * 0x10000 <= iVar6) goto LAB_00e81a24;
LAB_00e81aa0:
    iVar8 = FT_DivFix((long)(iVar3 << 0x10),(long)param_2);
  }
  else {
    iVar6 = iVar2 * 0x10000;
    if (iVar6 < iVar7 * 0x10000) goto LAB_00e81aa0;
LAB_00e81a24:
    if (iVar6 < iVar8 * 0x10000) {
      iVar6 = FT_DivFix((long)(iVar7 * 0x10000),(long)param_2);
      if (iVar8 - iVar7 == 0) {
LAB_00e81ad8:
        iVar6 = iVar1 - iVar8;
        iVar8 = FT_DivFix((long)(iVar8 * 0x10000),(long)param_2);
        if (iVar6 == 0) {
          iVar7 = iVar1 << 0x10;
          goto LAB_00e81b00;
        }
        goto LAB_00e81b18;
      }
      iVar7 = FT_MulDiv((long)(iVar5 - iVar6),(long)(iVar10 - iVar3),(long)(iVar8 - iVar7));
      iVar10 = iVar3;
    }
    else {
      iVar7 = iVar1 * 0x10000;
      if (iVar6 < iVar7) goto LAB_00e81ad8;
      iVar3 = iVar4;
      if (iVar2 * 0x10000 <= iVar6) goto LAB_00e81aa0;
LAB_00e81b00:
      iVar6 = iVar2 - iVar1;
      iVar8 = FT_DivFix((long)iVar7,(long)param_2);
      iVar10 = iVar9;
      iVar9 = iVar4;
      iVar3 = iVar4;
      if (iVar6 == 0) goto LAB_00e81aa0;
LAB_00e81b18:
      iVar7 = FT_MulDiv((long)(iVar5 - iVar8),(long)(iVar9 - iVar10),(long)iVar6);
    }
    iVar8 = FT_DivFix((long)(iVar10 << 0x10),(long)param_2);
    iVar8 = iVar8 + iVar7;
  }
  *param_4 = iVar8;
  iVar8 = FT_DivFix((long)iVar8,(long)(param_1 << 1));
  *param_4 = iVar8;
LAB_00e81b60:
  if (param_5 < 0) {
    param_5 = param_5 + 1;
  }
  *param_4 = iVar8 + (param_5 >> 1);
  return;
}

