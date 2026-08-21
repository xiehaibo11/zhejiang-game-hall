
undefined4 * FUN_012083b4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_1 + 1 == param_2) {
    uVar4 = *param_1;
    sVar5 = (long)param_3 - (long)param_2;
    if (sVar5 != 0) {
      memmove(param_1,param_2,sVar5);
    }
    param_2 = param_1 + ((long)sVar5 >> 2);
    *param_2 = uVar4;
  }
  else if (param_2 + 1 == param_3) {
    uVar4 = param_3[-1];
    sVar5 = (long)(param_3 + -1) - (long)param_1;
    param_2 = param_3;
    if (sVar5 != 0) {
      memmove((undefined4 *)((long)param_3 - sVar5),param_1,sVar5);
      param_2 = (undefined4 *)((long)param_3 - sVar5);
    }
    *param_1 = uVar4;
  }
  else {
    lVar9 = (long)param_2 - (long)param_1 >> 2;
    lVar6 = (long)param_3 - (long)param_2 >> 2;
    lVar14 = lVar9;
    lVar12 = lVar6;
    if (lVar9 == lVar6) {
      if (param_1 != param_2) {
        uVar7 = ((long)param_2 - (long)param_1) - 4;
        uVar1 = (uVar7 >> 2) + 1;
        puVar8 = param_2;
        if ((7 < uVar1) &&
           ((lVar14 = (uVar7 & 0xfffffffffffffffc) + 4,
            (undefined4 *)((long)param_2 + lVar14) <= param_1 ||
            ((undefined4 *)((long)param_1 + lVar14) <= param_2)))) {
          uVar13 = uVar1 & 0x7ffffffffffffff8;
          lVar14 = 0;
          uVar7 = uVar13;
          do {
            puVar2 = (undefined8 *)((long)param_1 + lVar14);
            puVar3 = (undefined8 *)((long)param_2 + lVar14);
            uVar17 = *puVar3;
            uVar19 = puVar3[3];
            uVar18 = puVar3[2];
            uVar21 = puVar2[1];
            uVar20 = *puVar2;
            uVar23 = puVar2[3];
            uVar22 = puVar2[2];
            uVar7 = uVar7 - 8;
            lVar14 = lVar14 + 0x20;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar17;
            puVar2[3] = uVar19;
            puVar2[2] = uVar18;
            puVar3[1] = uVar21;
            *puVar3 = uVar20;
            puVar3[3] = uVar23;
            puVar3[2] = uVar22;
          } while (uVar7 != 0);
          puVar8 = param_2 + uVar13;
          param_1 = param_1 + uVar13;
          if (uVar1 == uVar13) {
            return param_2;
          }
        }
        do {
          uVar4 = *param_1;
          puVar10 = param_1 + 1;
          *param_1 = *puVar8;
          *puVar8 = uVar4;
          puVar8 = puVar8 + 1;
          param_1 = puVar10;
        } while (param_2 != puVar10);
      }
    }
    else {
      do {
        lVar11 = lVar12;
        lVar12 = 0;
        if (lVar11 != 0) {
          lVar12 = lVar14 / lVar11;
        }
        lVar12 = lVar14 - lVar12 * lVar11;
        lVar14 = lVar11;
      } while (lVar12 != 0);
      if (lVar11 != 0) {
        puVar8 = param_1 + lVar11;
        do {
          puVar8 = puVar8 + -1;
          uVar4 = *puVar8;
          puVar15 = puVar8;
          puVar10 = puVar8 + lVar9;
          do {
            puVar16 = puVar10;
            lVar14 = (long)param_3 - (long)puVar16 >> 2;
            puVar10 = puVar16 + lVar9;
            if (lVar14 <= lVar9) {
              puVar10 = param_1 + (lVar9 - lVar14);
            }
            *puVar15 = *puVar16;
            puVar15 = puVar16;
          } while (puVar10 != puVar8);
          *puVar16 = uVar4;
        } while (puVar8 != param_1);
      }
      param_2 = param_1 + lVar6;
    }
  }
  return param_2;
}

