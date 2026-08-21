
undefined4 FUN_00eb71b4(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar6 = param_1[3];
  lVar5 = (long)param_2;
  if (lVar5 < lVar6) {
    puVar8 = (undefined8 *)*param_1;
    param_1[3] = 0;
    lVar6 = 0;
    param_1[1] = puVar8;
    lVar7 = puVar8[2];
    param_1[4] = lVar7;
    param_1[2] = *(long *)*puVar8 + puVar8[1];
  }
  else {
    lVar7 = param_1[4];
  }
  if (lVar5 < lVar7) {
    lVar9 = param_1[2];
  }
  else {
    puVar8 = (undefined8 *)param_1[1];
    lVar9 = puVar8[2];
    do {
      puVar8 = (undefined8 *)puVar8[3];
      lVar6 = lVar6 + lVar9;
      lVar9 = puVar8[2];
      lVar7 = lVar9 + lVar6;
    } while (lVar7 <= lVar5);
    lVar1 = puVar8[1];
    lVar9 = *(long *)*puVar8;
    param_1[3] = lVar6;
    param_1[4] = lVar7;
    lVar9 = lVar9 + lVar1;
    param_1[1] = puVar8;
    param_1[2] = lVar9;
  }
  uVar2 = *(undefined1 *)(lVar9 + (lVar5 - lVar6));
  lVar5 = (long)(param_2 + 1);
  if (lVar7 <= lVar5) {
    puVar8 = (undefined8 *)param_1[1];
    lVar9 = puVar8[2];
    do {
      puVar8 = (undefined8 *)puVar8[3];
      lVar6 = lVar6 + lVar9;
      lVar9 = puVar8[2];
      lVar7 = lVar9 + lVar6;
    } while (lVar7 <= lVar5);
    lVar1 = puVar8[1];
    lVar9 = *(long *)*puVar8;
    param_1[3] = lVar6;
    param_1[4] = lVar7;
    lVar9 = lVar9 + lVar1;
    param_1[1] = puVar8;
    param_1[2] = lVar9;
  }
  uVar3 = *(undefined1 *)(lVar9 + (lVar5 - lVar6));
  lVar5 = (long)(param_2 + 2);
  if (lVar7 <= lVar5) {
    puVar8 = (undefined8 *)param_1[1];
    lVar9 = puVar8[2];
    do {
      puVar8 = (undefined8 *)puVar8[3];
      lVar6 = lVar6 + lVar9;
      lVar9 = puVar8[2];
      lVar7 = lVar9 + lVar6;
    } while (lVar7 <= lVar5);
    lVar1 = puVar8[1];
    lVar9 = *(long *)*puVar8;
    param_1[3] = lVar6;
    param_1[4] = lVar7;
    lVar9 = lVar9 + lVar1;
    param_1[1] = puVar8;
    param_1[2] = lVar9;
  }
  uVar4 = *(undefined1 *)(lVar9 + (lVar5 - lVar6));
  lVar5 = (long)(param_2 + 3);
  if (lVar7 <= lVar5) {
    puVar8 = (undefined8 *)param_1[1];
    lVar7 = puVar8[2];
    do {
      puVar8 = (undefined8 *)puVar8[3];
      lVar6 = lVar6 + lVar7;
      lVar7 = puVar8[2];
    } while (lVar7 + lVar6 <= lVar5);
    lVar1 = puVar8[1];
    lVar9 = *(long *)*puVar8;
    param_1[3] = lVar6;
    param_1[4] = lVar7 + lVar6;
    lVar9 = lVar9 + lVar1;
    param_1[1] = puVar8;
    param_1[2] = lVar9;
  }
  return CONCAT13(*(undefined1 *)(lVar9 + (lVar5 - lVar6)),CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
}

