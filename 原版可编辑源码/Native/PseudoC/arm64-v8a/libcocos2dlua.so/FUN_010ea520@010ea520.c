
undefined4 FUN_010ea520(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  puVar8 = (undefined8 *)param_1[5];
  lVar4 = puVar8[1];
  if (lVar4 == 0) {
    iVar3 = (*(code *)puVar8[3])(param_1);
    if (iVar3 != 0) {
      lVar4 = puVar8[1];
      goto LAB_010ea55c;
    }
LAB_010ea5e4:
    uVar7 = 0;
  }
  else {
LAB_010ea55c:
    lVar4 = lVar4 + -1;
    puVar9 = (undefined1 *)*puVar8 + 1;
    uVar1 = *(undefined1 *)*puVar8;
    if (lVar4 == 0) {
      iVar3 = (*(code *)puVar8[3])(param_1);
      if (iVar3 == 0) goto LAB_010ea5e4;
      puVar9 = (undefined1 *)*puVar8;
      lVar4 = puVar8[1];
    }
    uVar2 = *puVar9;
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x5d;
    uVar10 = (ulong)CONCAT11(uVar1,uVar2);
    lVar6 = uVar10 - 2;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
    *(int *)(lVar5 + 0x30) = (int)lVar6;
    uVar7 = 1;
    (**(code **)(lVar5 + 8))(param_1,1);
    *puVar8 = puVar9 + 1;
    puVar8[1] = lVar4 + -1;
    if (2 < uVar10) {
      (**(code **)(param_1[5] + 0x20))(param_1,lVar6);
      uVar7 = 1;
    }
  }
  return uVar7;
}

