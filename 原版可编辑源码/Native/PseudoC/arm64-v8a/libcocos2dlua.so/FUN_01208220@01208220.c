
undefined1 * FUN_01208220(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_1 + 1 == param_2) {
    uVar3 = *param_1;
    sVar5 = (long)param_3 - (long)param_2;
    if (sVar5 != 0) {
      memmove(param_1,param_2,sVar5);
    }
    param_3 = param_1 + sVar5;
    *param_3 = uVar3;
  }
  else if (param_2 + 1 == param_3) {
    uVar3 = param_3[-1];
    sVar5 = (long)(param_3 + -1) - (long)param_1;
    if (sVar5 == 0) {
      *param_1 = uVar3;
    }
    else {
      param_3 = param_3 + -sVar5;
      memmove(param_3,param_1,sVar5);
      *param_1 = uVar3;
    }
  }
  else {
    uVar6 = (long)param_2 - (long)param_1;
    uVar7 = (long)param_3 - (long)param_2;
    uVar12 = uVar6;
    uVar11 = uVar7;
    if (uVar6 == uVar7) {
      param_3 = param_2;
      if (param_1 != param_2) {
        puVar8 = param_2;
        if (0x1f < uVar6) {
          uVar11 = uVar6 & 0xffffffffffffffe0;
          uVar12 = 0;
          do {
            puVar1 = (undefined8 *)(param_1 + uVar12);
            puVar2 = (undefined8 *)(param_2 + uVar12);
            uVar15 = *puVar2;
            uVar17 = puVar2[3];
            uVar16 = puVar2[2];
            uVar19 = puVar1[1];
            uVar18 = *puVar1;
            uVar21 = puVar1[3];
            uVar20 = puVar1[2];
            uVar12 = uVar12 + 0x20;
            puVar1[1] = puVar2[1];
            *puVar1 = uVar15;
            puVar1[3] = uVar17;
            puVar1[2] = uVar16;
            puVar2[1] = uVar19;
            *puVar2 = uVar18;
            puVar2[3] = uVar21;
            puVar2[2] = uVar20;
          } while (uVar11 != uVar12);
          puVar8 = param_2 + uVar11;
          param_1 = param_1 + uVar11;
          if (uVar11 == uVar6) {
            return param_2;
          }
        }
        do {
          uVar3 = *param_1;
          puVar9 = param_1 + 1;
          *param_1 = *puVar8;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          param_1 = puVar9;
        } while (param_2 != puVar9);
      }
    }
    else {
      do {
        uVar10 = uVar11;
        lVar4 = 0;
        if (uVar10 != 0) {
          lVar4 = (long)uVar12 / (long)uVar10;
        }
        uVar11 = uVar12 - lVar4 * uVar10;
        uVar12 = uVar10;
      } while (uVar11 != 0);
      if (uVar10 != 0) {
        puVar8 = param_1 + uVar10;
        do {
          puVar8 = puVar8 + -1;
          uVar3 = *puVar8;
          puVar13 = puVar8;
          puVar9 = puVar8 + uVar6;
          do {
            puVar14 = puVar9;
            puVar9 = puVar14 + uVar6;
            if ((long)param_3 - (long)puVar14 <= (long)uVar6) {
              puVar9 = param_1 + (uVar6 - ((long)param_3 - (long)puVar14));
            }
            *puVar13 = *puVar14;
            puVar13 = puVar14;
          } while (puVar9 != puVar8);
          *puVar14 = uVar3;
        } while (puVar8 != param_1);
      }
      param_3 = param_1 + uVar7;
    }
  }
  return param_3;
}

