
void FUN_01086160(long *param_1,long *param_2,long *param_3,long param_4,long param_5,char param_6)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  int local_70;
  
  bVar3 = *(int *)((long)param_1 + 0x497c) != 2;
  plVar1 = param_1 + 0x932;
  if (bVar3) {
    plVar1 = param_1 + 0x936;
  }
  lVar11 = *param_3;
  lVar12 = param_3[1];
  lVar8 = plVar1[1];
  plVar2 = param_1 + 0x930;
  if (bVar3) {
    plVar2 = param_1 + 0x934;
  }
  if ((*plVar1 == lVar11) && (lVar8 == lVar12)) {
    lVar11 = 0;
    lVar12 = 0;
    bVar3 = false;
  }
  else {
    lVar6 = *plVar2;
    lVar7 = plVar2[1];
    lVar13 = (param_5 + 0x10) - lVar12 >> 5;
    lVar9 = (param_4 + 0x10) - lVar11 >> 5;
    iVar5 = FT_MulFix((*plVar1 + 0x10) - lVar6 >> 5,lVar13);
    iVar4 = FT_MulFix((lVar8 + 0x10) - lVar7 >> 5,lVar9);
    if (iVar5 - iVar4 == 0) {
      lVar11 = 0;
      lVar12 = 0;
      bVar3 = false;
    }
    else {
      lVar11 = FT_MulFix((0x10 - lVar6) + lVar11 >> 5,lVar13);
      lVar12 = FT_MulFix((0x10 - lVar7) + lVar12 >> 5,lVar9);
      iVar5 = FT_DivFix(lVar11 - lVar12,(long)(iVar5 - iVar4));
      lVar12 = *plVar2;
      lVar11 = FT_MulFix((long)iVar5,*plVar1 - lVar12);
      lVar8 = plVar2[1];
      lVar11 = lVar11 + lVar12;
      lVar12 = FT_MulFix((long)iVar5,plVar1[1] - lVar8);
      lVar6 = *plVar2;
      lVar12 = lVar12 + lVar8;
      lVar8 = lVar11;
      if (lVar6 == *plVar1) {
        lVar8 = lVar11 - lVar6;
        lVar7 = -lVar8;
        if (-1 < lVar8) {
          lVar7 = lVar8;
        }
        lVar8 = lVar6;
        if (*(int *)((long)param_1 + 0x4924) <= lVar7) {
          lVar8 = lVar11;
        }
      }
      lVar11 = plVar2[1];
      lVar6 = lVar12;
      if (lVar11 == plVar1[1]) {
        lVar6 = lVar12 - lVar11;
        lVar7 = -lVar6;
        if (-1 < lVar6) {
          lVar7 = lVar6;
        }
        lVar6 = lVar11;
        if (*(int *)((long)param_1 + 0x4924) <= lVar7) {
          lVar6 = lVar12;
        }
      }
      lVar12 = lVar8;
      if (*param_3 == param_4) {
        lVar12 = lVar8 - param_4;
        lVar11 = -lVar12;
        if (-1 < lVar12) {
          lVar11 = lVar12;
        }
        lVar12 = param_4;
        if (*(int *)((long)param_1 + 0x4924) <= lVar11) {
          lVar12 = lVar8;
        }
      }
      lVar11 = lVar6;
      if (param_3[1] == param_5) {
        lVar11 = lVar6 - param_5;
        lVar8 = -lVar11;
        if (-1 < lVar11) {
          lVar8 = lVar11;
        }
        lVar11 = param_5;
        if (*(int *)((long)param_1 + 0x4924) <= lVar8) {
          lVar11 = lVar6;
        }
      }
      lVar8 = *param_3 + *plVar1;
      if (lVar8 < 0) {
        lVar8 = lVar8 + 1;
      }
      lVar6 = lVar12 - (lVar8 >> 1);
      lVar8 = -lVar6;
      if (-1 < lVar6) {
        lVar8 = lVar6;
      }
      if (lVar8 <= (int)param_1[0x924]) {
        lVar8 = param_3[1] + plVar1[1];
        if (lVar8 < 0) {
          lVar8 = lVar8 + 1;
        }
        lVar6 = lVar11 - (lVar8 >> 1);
        lVar8 = -lVar6;
        if (-1 < lVar6) {
          lVar8 = lVar6;
        }
        if (lVar8 <= (int)param_1[0x924]) {
          bVar3 = true;
          *plVar1 = lVar12;
          plVar1[1] = lVar11;
          goto LAB_010863e0;
        }
      }
      bVar3 = false;
    }
  }
LAB_010863e0:
  plVar1 = param_1 + 0x92b;
  lStack_a8 = param_1[0x92c];
  local_b0 = *plVar1;
  iVar5 = *(int *)((long)param_1 + 0x497c);
  if (iVar5 == 4) {
    uVar10 = param_1[0x933];
    local_70 = iVar5;
    lVar8 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x932]);
    lVar6 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar10);
    iVar5 = FUN_010868b0(param_2,uVar10 & 0xffffffff);
    lVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar6 + lVar8);
    lVar9 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    local_a0 = lVar9 + lVar7 + param_1[0x91b];
    lVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar6 + lVar8);
    lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar5);
    lStack_98 = lVar6 + lVar8 + param_1[0x91c];
    uVar10 = param_1[0x935];
    lVar8 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x934]);
    lVar6 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar10);
    iVar5 = FUN_010868b0(param_2,uVar10 & 0xffffffff);
    lVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar6 + lVar8);
    lVar9 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    local_90 = lVar9 + lVar7 + param_1[0x91b];
    lVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar6 + lVar8);
    lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar5);
    local_88 = lVar6 + lVar8 + param_1[0x91c];
    uVar10 = param_1[0x937];
    lVar8 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x936]);
    lVar6 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar10);
    iVar5 = FUN_010868b0(param_2,uVar10 & 0xffffffff);
    lVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar6 + lVar8);
    lVar9 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    local_80 = lVar9 + lVar7 + param_1[0x91b];
    lVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar6 + lVar8);
    lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar5);
    lStack_78 = lVar6 + lVar8 + param_1[0x91c];
    (**(code **)(param_1[1] + 0x18))(param_1[1],&local_b0);
    lVar8 = local_80;
    lVar6 = lStack_78;
  }
  else {
    if (iVar5 != 2) goto LAB_0108676c;
    uVar10 = param_1[0x933];
    plVar2 = param_2;
    if (param_6 != '\0') {
      plVar2 = param_1 + 0x307;
    }
    local_70 = iVar5;
    lVar6 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x932]);
    lVar7 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar10);
    iVar5 = FUN_010868b0(plVar2,uVar10 & 0xffffffff);
    lVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar7 + lVar6);
    lVar9 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    lVar8 = lVar9 + lVar8 + param_1[0x91b];
    local_a0 = lVar8;
    lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar7 + lVar6);
    lVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar5);
    lStack_98 = lVar7 + lVar6 + param_1[0x91c];
    if ((local_b0 == lVar8) && (lStack_a8 == lStack_98)) goto LAB_0108676c;
    (**(code **)(param_1[1] + 8))(param_1[1],&local_b0);
    lVar8 = local_a0;
    lVar6 = lStack_98;
  }
  param_1[0x92c] = lVar6;
  *plVar1 = lVar8;
LAB_0108676c:
  if ((param_6 != '\0') || (!bVar3)) {
    uVar10 = param_3[1];
    if (param_6 != '\0') {
      param_2 = param_1 + 0x307;
    }
    lVar8 = FT_MulFix((long)(int)param_1[0x919],(long)(int)*param_3);
    lVar6 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar10);
    iVar5 = FUN_010868b0(param_2,uVar10 & 0xffffffff);
    lVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x40),lVar6 + lVar8);
    lVar9 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    local_a0 = lVar9 + lVar7 + param_1[0x91b];
    lVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),lVar6 + lVar8);
    lVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar5);
    lStack_98 = lVar6 + lVar8 + param_1[0x91c];
    if ((local_a0 != param_1[0x92b]) || (lStack_98 != param_1[0x92c])) {
      local_70 = 2;
      lStack_a8 = param_1[0x92c];
      local_b0 = *plVar1;
      (**(code **)(param_1[1] + 8))(param_1[1],&local_b0);
      param_1[0x92c] = lStack_98;
      *plVar1 = local_a0;
    }
  }
  if (bVar3) {
    *param_3 = lVar12;
    param_3[1] = lVar11;
  }
  return;
}

