
void FUN_010e24a0(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = (long)param_2 + 0x14;
  if (param_3 != 0) {
    lVar10 = (long)param_2 + 0x18;
  }
  lVar10 = param_1[lVar10];
  if (param_3 != 0) {
    param_2 = param_2 + 0x10;
  }
  if (lVar10 == 0) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x34;
    *(int *)((long)puVar4 + 0x2c) = param_2;
    (*(code *)*puVar4)(param_1);
    iVar3 = iRam0000000000000114;
  }
  else {
    iVar3 = *(int *)(lVar10 + 0x114);
  }
  if (iVar3 == 0) {
    puVar4 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar4;
    *puVar4 = puVar6 + 1;
    *puVar6 = 0xff;
    lVar7 = puVar4[1];
    puVar4[1] = lVar7 + -1;
    if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)puVar4[3])(param_1), iVar3 == 0)) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    puVar4 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar4;
    *puVar4 = puVar6 + 1;
    *puVar6 = 0xc4;
    lVar7 = puVar4[1];
    puVar4[1] = lVar7 + -1;
    if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)puVar4[3])(param_1), iVar3 == 0)) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    plVar5 = (long *)param_1[5];
    puVar6 = (undefined1 *)*plVar5;
    uVar1 = (uint)*(byte *)(lVar10 + 1) + (uint)*(byte *)(lVar10 + 2) + (uint)*(byte *)(lVar10 + 3)
            + (uint)*(byte *)(lVar10 + 4) + (uint)*(byte *)(lVar10 + 5) +
            (uint)*(byte *)(lVar10 + 6) + (uint)*(byte *)(lVar10 + 7) + (uint)*(byte *)(lVar10 + 8)
            + (uint)*(byte *)(lVar10 + 9) + (uint)*(byte *)(lVar10 + 10) +
            (uint)*(byte *)(lVar10 + 0xb) + (uint)*(byte *)(lVar10 + 0xc) +
            (uint)*(byte *)(lVar10 + 0xd) + (uint)*(byte *)(lVar10 + 0xe) +
            (uint)*(byte *)(lVar10 + 0xf) + (uint)*(byte *)(lVar10 + 0x10);
    *plVar5 = (long)(puVar6 + 1);
    *puVar6 = (char)(uVar1 + 0x13 >> 8);
    lVar7 = plVar5[1];
    plVar5[1] = lVar7 + -1;
    if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)plVar5[3])(param_1), iVar3 == 0)) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    plVar5 = (long *)param_1[5];
    puVar6 = (undefined1 *)*plVar5;
    *plVar5 = (long)(puVar6 + 1);
    *puVar6 = (char)(uVar1 + 0x13);
    lVar7 = plVar5[1];
    plVar5[1] = lVar7 + -1;
    if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)plVar5[3])(param_1), iVar3 == 0)) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    plVar5 = (long *)param_1[5];
    puVar6 = (undefined1 *)*plVar5;
    *plVar5 = (long)(puVar6 + 1);
    *puVar6 = (char)param_2;
    lVar7 = plVar5[1];
    plVar5[1] = lVar7 + -1;
    if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)plVar5[3])(param_1), iVar3 == 0)) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x19;
      (*(code *)*puVar4)(param_1);
    }
    lVar7 = 0;
    do {
      plVar5 = (long *)param_1[5];
      uVar2 = *(undefined1 *)(lVar10 + 1 + lVar7);
      puVar6 = (undefined1 *)*plVar5;
      *plVar5 = (long)(puVar6 + 1);
      *puVar6 = uVar2;
      lVar8 = plVar5[1];
      plVar5[1] = lVar8 + -1;
      if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar5[3])(param_1), iVar3 == 0)) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x19;
        (*(code *)*puVar4)(param_1);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x10);
    if (uVar1 != 0) {
      uVar11 = (ulong)uVar1;
      puVar6 = (undefined1 *)(lVar10 + 0x11);
      do {
        plVar5 = (long *)param_1[5];
        uVar2 = *puVar6;
        puVar9 = (undefined1 *)*plVar5;
        *plVar5 = (long)(puVar9 + 1);
        *puVar9 = uVar2;
        lVar7 = plVar5[1];
        plVar5[1] = lVar7 + -1;
        if ((lVar7 + -1 == 0) && (iVar3 = (*(code *)plVar5[3])(param_1), iVar3 == 0)) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 0x19;
          (*(code *)*puVar4)(param_1);
        }
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar11 != 0);
    }
    *(undefined4 *)(lVar10 + 0x114) = 1;
  }
  return;
}

