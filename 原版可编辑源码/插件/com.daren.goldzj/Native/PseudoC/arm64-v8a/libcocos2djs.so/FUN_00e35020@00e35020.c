
void FUN_00e35020(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (((param_2 <= param_3) && (param_4 < *(uint *)(param_1 + 3))) &&
     (param_5 < *(uint *)(param_1 + 3))) {
    lVar6 = *(long *)(param_1[2] + (ulong)param_4 * 0x10);
    lVar7 = *(long *)(param_1[2] + (ulong)param_5 * 0x10);
    lVar4 = *param_1;
    lVar3 = param_1[1];
    uVar1 = param_4;
    if (lVar6 <= lVar7) {
      uVar1 = param_5;
    }
    if (lVar6 <= lVar7) {
      param_5 = param_4;
    }
    lVar11 = *(long *)(lVar4 + (ulong)param_5 * 0x10);
    lVar12 = *(long *)(lVar4 + (ulong)uVar1 * 0x10);
    lVar13 = *(long *)(lVar3 + (ulong)param_5 * 0x10);
    lVar5 = *(long *)(lVar3 + (ulong)uVar1 * 0x10);
    lVar8 = lVar7;
    if (lVar6 <= lVar7) {
      lVar8 = lVar6;
      lVar6 = lVar7;
    }
    lVar7 = lVar5 - lVar12;
    if ((lVar6 - lVar8 == 0) || (lVar5 = lVar5 - lVar13, lVar5 == 0)) {
      do {
        while( true ) {
          lVar6 = (ulong)param_2 * 0x10;
          lVar8 = *(long *)(lVar4 + lVar6);
          if (lVar8 <= lVar11) break;
          lVar5 = lVar13;
          if (lVar12 <= lVar8) {
            lVar5 = lVar8 + lVar7;
          }
          param_2 = param_2 + 1;
          *(long *)(lVar3 + lVar6) = lVar5;
          if (param_3 < param_2) {
            return;
          }
        }
        param_2 = param_2 + 1;
        *(long *)(lVar3 + lVar6) = lVar8 + (lVar13 - lVar11);
      } while (param_2 <= param_3);
    }
    else {
      uVar10 = 0;
      bVar2 = false;
      while( true ) {
        lVar9 = (ulong)param_2 * 0x10;
        lVar4 = *(long *)(lVar4 + lVar9);
        if (lVar11 < lVar4) {
          if (lVar4 < lVar12) {
            if (!bVar2) {
              uVar10 = FT_DivFix(lVar5,lVar6 - lVar8);
              bVar2 = true;
            }
            lVar4 = FT_MulFix(*(long *)(param_1[2] + lVar9) - lVar8,uVar10);
            lVar3 = param_1[1];
            *(long *)(lVar3 + lVar9) = lVar4 + lVar13;
          }
          else {
            *(long *)(lVar3 + lVar9) = lVar4 + lVar7;
          }
        }
        else {
          *(long *)(lVar3 + lVar9) = lVar4 + (lVar13 - lVar11);
        }
        if (param_3 < param_2 + 1) break;
        param_2 = param_2 + 1;
        lVar4 = *param_1;
      }
    }
  }
  return;
}

