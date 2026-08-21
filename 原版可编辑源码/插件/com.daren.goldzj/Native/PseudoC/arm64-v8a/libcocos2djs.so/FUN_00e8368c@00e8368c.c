
void FUN_00e8368c(long *param_1,long *param_2,long *param_3,long param_4,long param_5,char param_6)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
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
  lVar14 = plVar1[1];
  plVar10 = param_1 + 0x930;
  if (bVar3) {
    plVar10 = param_1 + 0x934;
  }
  if ((*plVar1 == *param_3) && (lVar14 == param_3[1])) {
    lVar14 = 0;
    param_4 = 0;
    bVar3 = false;
  }
  else {
    lVar12 = *plVar10;
    lVar2 = plVar10[1];
    iVar7 = (int)param_3[1];
    lVar9 = (long)((ulong)(uint)(((int)param_5 + 0x10) - iVar7) << 0x20) >> 0x25;
    iVar8 = (int)*param_3;
    lVar11 = (long)((ulong)(uint)(((int)param_4 + 0x10) - iVar8) << 0x20) >> 0x25;
    iVar5 = FT_MulFix((long)((ulong)(uint)(((int)*plVar1 + 0x10) - (int)lVar12) << 0x20) >> 0x25,
                      lVar9);
    iVar4 = FT_MulFix((long)((ulong)(uint)(((int)lVar14 + 0x10) - (int)lVar2) << 0x20) >> 0x25,
                      lVar11);
    if (iVar5 - iVar4 == 0) {
      lVar14 = 0;
      param_4 = 0;
      bVar3 = false;
    }
    else {
      lVar14 = FT_MulFix((long)((ulong)(uint)((iVar8 + 0x10) - (int)lVar12) << 0x20) >> 0x25,lVar9);
      lVar9 = FT_MulFix((long)((ulong)(uint)((0x10 - (int)lVar2) + iVar7) << 0x20) >> 0x25,lVar11);
      iVar5 = FT_DivFix(lVar14 - lVar9,(long)(iVar5 - iVar4));
      lVar14 = *plVar10;
      iVar4 = FT_MulFix((long)iVar5,(long)((int)*plVar1 - (int)lVar14));
      lVar9 = plVar10[1];
      iVar4 = iVar4 + (int)lVar14;
      iVar5 = FT_MulFix((long)iVar5,(long)((int)plVar1[1] - (int)lVar9));
      lVar11 = *plVar10;
      iVar5 = iVar5 + (int)lVar9;
      lVar9 = (long)iVar5;
      lVar14 = (long)iVar4;
      if (lVar11 == *plVar1) {
        iVar8 = iVar4 - (int)lVar11;
        iVar7 = -iVar8;
        if (-1 < iVar8) {
          iVar7 = iVar8;
        }
        lVar14 = lVar11;
        if (*(int *)((long)param_1 + 0x4924) <= iVar7) {
          lVar14 = (long)iVar4;
        }
      }
      lVar11 = plVar10[1];
      if (lVar11 == plVar1[1]) {
        iVar5 = iVar5 - (int)lVar11;
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if (*(int *)((long)param_1 + 0x4924) <= iVar4) {
          lVar11 = lVar9;
        }
        lVar12 = *param_3;
        lVar9 = lVar11;
        if (lVar12 != param_4) goto LAB_00e83888;
LAB_00e83924:
        iVar5 = (int)lVar12;
        iVar7 = (int)lVar14 - (int)param_4;
        iVar4 = -iVar7;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        if (*(int *)((long)param_1 + 0x4924) <= iVar4) {
          param_4 = lVar14;
        }
        lVar11 = param_3[1];
      }
      else {
        lVar12 = *param_3;
        if (lVar12 == param_4) goto LAB_00e83924;
LAB_00e83888:
        iVar5 = (int)lVar12;
        lVar11 = param_3[1];
        param_4 = lVar14;
      }
      lVar14 = lVar9;
      if (lVar11 == param_5) {
        iVar7 = (int)lVar9 - (int)param_5;
        iVar4 = -iVar7;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        lVar14 = param_5;
        if (*(int *)((long)param_1 + 0x4924) <= iVar4) {
          lVar14 = lVar9;
        }
      }
      iVar5 = iVar5 + (int)*plVar1;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      lVar12 = param_4 - (iVar5 >> 1);
      lVar9 = -(lVar12 << 0x20) >> 0x20;
      if (-1 < lVar12) {
        lVar9 = lVar12;
      }
      if (lVar9 <= (int)param_1[0x924]) {
        iVar5 = (int)lVar11 + (int)plVar1[1];
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        lVar11 = lVar14 - (iVar5 >> 1);
        lVar9 = -(lVar11 << 0x20) >> 0x20;
        if (-1 < lVar11) {
          lVar9 = lVar11;
        }
        if (lVar9 <= (int)param_1[0x924]) {
          bVar3 = true;
          *plVar1 = param_4;
          plVar1[1] = lVar14;
          goto LAB_00e8396c;
        }
      }
      bVar3 = false;
    }
  }
LAB_00e8396c:
  plVar1 = param_1 + 0x92b;
  lStack_a8 = param_1[0x92c];
  local_b0 = *plVar1;
  iVar5 = *(int *)((long)param_1 + 0x497c);
  if (iVar5 == 4) {
    uVar13 = param_1[0x933];
    local_70 = iVar5;
    iVar5 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x932]);
    iVar4 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
    iVar7 = FUN_00e83f08(param_2,uVar13 & 0xffffffff);
    iVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)(iVar4 + iVar5));
    iVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar7);
    local_a0 = (long)(iVar6 + iVar8 + (int)param_1[0x91b]);
    iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)(iVar4 + iVar5));
    iVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar7);
    lStack_98 = (long)(iVar4 + iVar5 + (int)param_1[0x91c]);
    uVar13 = param_1[0x935];
    iVar5 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x934]);
    iVar4 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
    iVar7 = FUN_00e83f08(param_2,uVar13 & 0xffffffff);
    iVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)(iVar4 + iVar5));
    iVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar7);
    local_90 = (long)(iVar6 + iVar8 + (int)param_1[0x91b]);
    iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)(iVar4 + iVar5));
    iVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar7);
    local_88 = (long)(iVar4 + iVar5 + (int)param_1[0x91c]);
    uVar13 = param_1[0x937];
    iVar5 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x936]);
    iVar4 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
    iVar7 = FUN_00e83f08(param_2,uVar13 & 0xffffffff);
    iVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)(iVar4 + iVar5));
    iVar6 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar7);
    local_80 = (long)(iVar6 + iVar8 + (int)param_1[0x91b]);
    iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)(iVar4 + iVar5));
    iVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar7);
    lStack_78 = (long)(iVar4 + iVar5 + (int)param_1[0x91c]);
    (**(code **)(param_1[1] + 0x18))(param_1[1],&local_b0);
    lVar9 = local_80;
    lVar11 = lStack_78;
  }
  else {
    if (iVar5 != 2) goto LAB_00e83d80;
    if (param_6 == '\0') {
      uVar13 = param_1[0x933];
      local_70 = iVar5;
      iVar4 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x932]);
      iVar5 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
      iVar5 = iVar5 + iVar4;
      plVar10 = param_2;
    }
    else {
      uVar13 = param_1[0x933];
      local_70 = iVar5;
      iVar4 = FT_MulFix((long)(int)param_1[0x919],(long)(int)param_1[0x932]);
      iVar5 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
      iVar5 = iVar5 + iVar4;
      plVar10 = param_1 + 0x307;
    }
    iVar4 = FUN_00e83f08(plVar10,uVar13 & 0xffffffff);
    iVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)iVar5);
    iVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar4);
    lVar9 = param_1[0x91b];
    iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    iVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar4);
    local_a0 = (long)(iVar8 + iVar7 + (int)lVar9);
    lStack_98 = (long)(iVar4 + iVar5 + (int)param_1[0x91c]);
    if ((local_b0 == local_a0) && (lStack_a8 == lStack_98)) goto LAB_00e83d80;
    (**(code **)(param_1[1] + 8))(param_1[1],&local_b0);
    lVar9 = local_a0;
    lVar11 = lStack_98;
  }
  param_1[0x92c] = lVar11;
  *plVar1 = lVar9;
LAB_00e83d80:
  if ((param_6 != '\0') || (!bVar3)) {
    if (param_6 == '\0') {
      uVar13 = param_3[1];
      iVar4 = FT_MulFix((long)(int)param_1[0x919],(long)(int)*param_3);
      iVar5 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
      iVar5 = iVar5 + iVar4;
    }
    else {
      uVar13 = param_3[1];
      param_2 = param_1 + 0x307;
      iVar4 = FT_MulFix((long)(int)param_1[0x919],(long)(int)*param_3);
      iVar5 = FT_MulFix((long)*(int *)((long)param_1 + 0x48cc),(long)(int)uVar13);
      iVar5 = iVar5 + iVar4;
    }
    iVar4 = FUN_00e83f08(param_2,uVar13 & 0xffffffff);
    iVar7 = FT_MulFix((long)*(int *)(*param_1 + 0x44),(long)iVar5);
    iVar8 = FT_MulFix((long)*(int *)(*param_1 + 0x4c),(long)iVar4);
    local_a0 = (long)(iVar8 + iVar7 + (int)param_1[0x91b]);
    iVar5 = FT_MulFix((long)*(int *)(*param_1 + 0x48),(long)iVar5);
    iVar4 = FT_MulFix((long)*(int *)(*param_1 + 0x50),(long)iVar4);
    lStack_98 = (long)(iVar4 + iVar5 + (int)param_1[0x91c]);
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
    *param_3 = param_4;
    param_3[1] = lVar14;
  }
  return;
}

