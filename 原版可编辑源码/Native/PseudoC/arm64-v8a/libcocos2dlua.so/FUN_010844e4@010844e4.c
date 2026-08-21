
void FUN_010844e4(int param_1,int param_2,int param_3,int *param_4,int param_5,char param_6,
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
  int iVar11;
  
  *param_4 = 0;
  if (param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar9 = 0;
    goto LAB_010846d4;
  }
  iVar9 = param_7[2];
  iVar11 = param_7[3];
  iVar7 = *param_7;
  iVar1 = param_7[1];
  iVar3 = param_7[4];
  iVar4 = param_7[7];
  iVar10 = param_7[5];
  iVar2 = param_7[6];
  iVar6 = FT_MulFix((long)(param_5 + param_3),(long)param_1);
  if ((0x3e - (int)LZCOUNT(param_2)) - (int)LZCOUNT(iVar6) < 0x2e) {
    iVar8 = FT_MulFix((long)iVar6,(long)param_2);
  }
  else {
    iVar8 = iVar2 << 0x10;
  }
  iVar5 = iVar7 * 0x10000;
  if (iVar8 < iVar5) {
LAB_010845c4:
    iVar7 = FT_DivFix((long)(iVar1 << 0x10),(long)param_2);
  }
  else {
    if (iVar8 < iVar9 * 0x10000) {
      iVar7 = iVar9 - iVar7;
      iVar8 = FT_DivFix((long)iVar5,(long)param_2);
      if (iVar7 == 0) {
LAB_0108464c:
        iVar8 = iVar3 - iVar9;
        iVar9 = FT_DivFix((long)(iVar9 * 0x10000),(long)param_2);
        if (iVar8 == 0) {
          iVar7 = iVar3 << 0x10;
          goto LAB_01084674;
        }
        goto LAB_0108468c;
      }
                    /* catch() { ... } // from try @ 0108495c with catch @ 010845f4 */
      iVar9 = FT_MulDiv((long)(iVar6 - iVar8),(long)(iVar11 - iVar1),(long)iVar7);
      iVar11 = iVar1;
    }
    else {
      iVar7 = iVar3 * 0x10000;
      if (iVar8 < iVar7) goto LAB_0108464c;
      iVar1 = iVar4;
      if (iVar2 * 0x10000 <= iVar8) goto LAB_010845c4;
LAB_01084674:
      iVar8 = iVar2 - iVar3;
      iVar9 = FT_DivFix((long)iVar7,(long)param_2);
      iVar11 = iVar10;
      iVar10 = iVar4;
      iVar1 = iVar4;
      if (iVar8 == 0) goto LAB_010845c4;
LAB_0108468c:
      iVar9 = FT_MulDiv((long)(iVar6 - iVar9),(long)(iVar10 - iVar11),(long)iVar8);
    }
    iVar7 = FT_DivFix((long)(iVar11 << 0x10),(long)param_2);
    iVar7 = iVar7 + iVar9;
  }
  *param_4 = iVar7;
  iVar9 = FT_DivFix((long)iVar7,(long)(param_1 << 1));
  *param_4 = iVar9;
LAB_010846d4:
  if (param_5 < 0) {
    param_5 = param_5 + 1;
  }
  *param_4 = iVar9 + (param_5 >> 1);
  return;
}

