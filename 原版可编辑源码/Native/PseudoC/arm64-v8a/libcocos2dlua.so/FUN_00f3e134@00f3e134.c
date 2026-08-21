
undefined8 * FUN_00f3e134(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_1 + 1 == param_2) {
    uVar5 = *param_1;
    sVar2 = (long)param_3 - (long)param_2;
    if (sVar2 != 0) {
      memmove(param_1,param_2,sVar2);
    }
    param_2 = param_1 + ((long)sVar2 >> 3);
    *param_2 = uVar5;
  }
  else if (param_2 + 1 == param_3) {
    uVar5 = param_3[-1];
    sVar2 = (long)(param_3 + -1) - (long)param_1;
    param_2 = param_3;
    if (sVar2 != 0) {
      param_2 = (undefined8 *)((long)param_3 - sVar2);
      memmove(param_2,param_1,sVar2);
    }
    *param_1 = uVar5;
  }
  else {
    lVar4 = (long)param_2 - (long)param_1 >> 3;
    lVar3 = (long)param_3 - (long)param_2 >> 3;
    lVar11 = lVar4;
    lVar8 = lVar3;
    puVar6 = param_2;
    if (lVar4 == lVar3) {
      for (; param_1 != param_2; param_1 = param_1 + 1) {
        uVar5 = *param_1;
        *param_1 = *puVar6;
        *puVar6 = uVar5;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      do {
        lVar7 = lVar8;
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar11 / lVar7;
        }
        lVar8 = lVar11 - lVar8 * lVar7;
        lVar11 = lVar7;
      } while (lVar8 != 0);
      if (lVar7 != 0) {
        puVar6 = param_1 + lVar7;
        do {
          puVar6 = puVar6 + -1;
          uVar5 = *puVar6;
          puVar9 = puVar6;
          puVar1 = puVar6 + lVar4;
          do {
            puVar10 = puVar1;
            lVar11 = (long)param_3 - (long)puVar10 >> 3;
            puVar1 = puVar10 + lVar4;
            if (lVar11 <= lVar4) {
              puVar1 = param_1 + (lVar4 - lVar11);
            }
            *puVar9 = *puVar10;
            puVar9 = puVar10;
          } while (puVar1 != puVar6);
          *puVar10 = uVar5;
        } while (puVar6 != param_1);
      }
      param_2 = param_1 + lVar3;
    }
  }
  return param_2;
}

