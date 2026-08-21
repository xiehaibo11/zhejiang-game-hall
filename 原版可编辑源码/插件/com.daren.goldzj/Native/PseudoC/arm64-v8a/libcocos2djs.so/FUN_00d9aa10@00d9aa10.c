
undefined8 FUN_00d9aa10(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar9 = param_1[0x46];
  uVar13 = *(undefined8 *)param_1[5];
  *(undefined8 *)(lVar9 + 0xd0) = ((undefined8 *)param_1[5])[1];
  *(undefined8 *)(lVar9 + 200) = uVar13;
  if ((*(int *)((long)param_1 + 0x13c) != 0) && (*(int *)(lVar9 + 0x38) == 0)) {
    FUN_00d9d640(lVar9,*(undefined4 *)(lVar9 + 0x3c));
  }
  if (0 < (int)param_1[0x34]) {
    lVar12 = 0;
    do {
      lVar3 = (long)*(int *)((long)param_1 + lVar12 * 4 + 0x1a4);
      lVar5 = lVar9 + lVar3 * 4;
      iVar10 = (int)**(short **)(param_2 + lVar12 * 8) >> (*(uint *)(param_1 + 0x3b) & 0x1f);
      iVar7 = *(int *)(param_1[lVar3 + 0x2f] + 0x14);
      iVar6 = iVar10 - *(int *)(lVar5 + 0x24);
      uVar2 = iVar6 >> 0x1f;
      uVar1 = uVar2 + iVar6;
      uVar2 = uVar1 ^ uVar2;
      *(int *)(lVar5 + 0x24) = iVar10;
      if (uVar2 == 0) {
        uVar11 = 0;
        if (*(int *)(lVar9 + 0xc0) == 0) goto LAB_00d9aa80;
LAB_00d9ab20:
        lVar5 = *(long *)(lVar9 + (long)iVar7 * 8 + 0x80);
        uVar8 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
        *(long *)(lVar5 + uVar8) = *(long *)(lVar5 + uVar8) + 1;
        iVar10 = (int)uVar11;
      }
      else {
        iVar10 = -1;
        do {
          iVar6 = iVar10;
          uVar2 = (int)uVar2 >> 1;
          iVar10 = iVar6 + 1;
        } while (uVar2 != 0);
        uVar11 = (ulong)(iVar6 + 2);
        if (10 < iVar10) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 6;
          (*(code *)*puVar4)(param_1);
        }
        if (*(int *)(lVar9 + 0xc0) != 0) goto LAB_00d9ab20;
LAB_00d9aa80:
        lVar5 = *(long *)(lVar9 + (long)iVar7 * 8 + 0x40);
        iVar10 = (int)uVar11;
        FUN_00d9d2fc(lVar9,*(undefined4 *)(lVar5 + (long)iVar10 * 4),
                     *(undefined1 *)(lVar5 + iVar10 + 0x400));
      }
      if (iVar10 != 0) {
        FUN_00d9d2fc(lVar9,uVar1,uVar11);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x34]);
  }
  puVar4 = (undefined8 *)param_1[5];
  uVar13 = *(undefined8 *)(lVar9 + 200);
  puVar4[1] = *(undefined8 *)(lVar9 + 0xd0);
  *puVar4 = uVar13;
  iVar10 = *(int *)((long)param_1 + 0x13c);
  if (iVar10 != 0) {
    iVar7 = *(int *)(lVar9 + 0x38);
    if (*(int *)(lVar9 + 0x38) == 0) {
      *(int *)(lVar9 + 0x38) = iVar10;
      *(uint *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1U & 7;
      iVar7 = iVar10;
    }
    *(int *)(lVar9 + 0x38) = iVar7 + -1;
  }
  return 1;
}

