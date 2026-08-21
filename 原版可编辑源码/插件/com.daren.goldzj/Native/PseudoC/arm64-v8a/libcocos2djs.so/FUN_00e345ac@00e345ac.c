
void FUN_00e345ac(int param_1,int param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 <= param_2) {
    lVar4 = *(long *)(param_5 +
                     (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4));
    lVar6 = *(long *)(param_5 +
                     (-(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4));
    lVar7 = (long)param_1;
    uVar2 = param_3;
    if (lVar4 <= lVar6) {
      uVar2 = param_4;
    }
    if (lVar4 <= lVar6) {
      param_4 = param_3;
    }
    uVar8 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    lVar6 = *(long *)(param_5 + uVar8);
    lVar13 = *(long *)(param_5 + uVar9);
    lVar14 = *(long *)(param_6 + uVar8);
    lVar4 = *(long *)(param_6 + uVar9);
    if ((lVar13 != lVar6) || (lVar4 == lVar14)) {
      if (lVar13 - lVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FT_DivFix(lVar4 - lVar14,lVar13 - lVar6);
      }
      lVar12 = lVar7 + -1;
      plVar11 = (long *)(param_5 + lVar7 * 0x10);
      plVar10 = (long *)(param_6 + lVar7 * 0x10);
      do {
        lVar5 = *plVar11;
        if (lVar5 - lVar6 == 0 || lVar5 < lVar6) {
          lVar5 = (lVar14 - lVar6) + lVar5;
        }
        else if (lVar5 < lVar13) {
          lVar5 = FT_MulFix(lVar5 - lVar6,uVar3);
          lVar5 = lVar5 + lVar14;
        }
        else {
          lVar5 = (lVar4 - lVar13) + lVar5;
        }
        lVar12 = lVar12 + 1;
        *plVar10 = lVar5;
        plVar11 = plVar11 + 2;
        plVar10 = plVar10 + 2;
      } while (lVar12 < param_2);
    }
    lVar4 = param_5 + 8;
    lVar6 = *(long *)(lVar4 + (long)(int)param_4 * 0x10);
    lVar13 = *(long *)(lVar4 + (long)(int)uVar2 * 0x10);
    uVar1 = param_4;
    if (lVar6 <= lVar13) {
      uVar1 = uVar2;
    }
    if (lVar6 <= lVar13) {
      uVar2 = param_4;
    }
    uVar9 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
    uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
    lVar6 = *(long *)(lVar4 + uVar9);
    lVar13 = *(long *)(lVar4 + uVar8);
    lVar14 = *(long *)(param_6 + 8 + uVar9);
    lVar4 = *(long *)(param_6 + 8 + uVar8);
    if ((lVar13 != lVar6) || (lVar4 == lVar14)) {
      if (lVar13 - lVar6 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FT_DivFix(lVar4 - lVar14,lVar13 - lVar6);
      }
      lVar12 = lVar7 + -1;
      plVar11 = (long *)(param_5 + lVar7 * 0x10 + 8);
      plVar10 = (long *)(param_6 + lVar7 * 0x10 + 8);
      do {
        lVar7 = *plVar11;
        if (lVar7 - lVar6 == 0 || lVar7 < lVar6) {
          lVar7 = (lVar14 - lVar6) + lVar7;
        }
        else if (lVar7 < lVar13) {
          lVar7 = FT_MulFix(lVar7 - lVar6,uVar3);
          lVar7 = lVar7 + lVar14;
        }
        else {
          lVar7 = (lVar4 - lVar13) + lVar7;
        }
        lVar12 = lVar12 + 1;
        *plVar10 = lVar7;
        plVar11 = plVar11 + 2;
        plVar10 = plVar10 + 2;
      } while (lVar12 < param_2);
    }
  }
  return;
}

