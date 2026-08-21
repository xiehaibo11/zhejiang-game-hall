
void FUN_00d876a0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar6 = *(int *)((long)param_1 + 0x174);
  if (iVar6 == 1) {
    lVar8 = param_1[0x2f];
    *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(lVar8 + 0x1c);
    uVar1 = *(uint *)(lVar8 + 0x20);
    *(uint *)((long)param_1 + 0x19c) = uVar1;
    *(undefined8 *)(lVar8 + 0x38) = 0x100000001;
    uVar2 = *(uint *)(lVar8 + 0xc);
    *(undefined4 *)(lVar8 + 0x40) = 1;
    *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(lVar8 + 0x24);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    uVar1 = uVar1 - uVar3 * uVar2;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    *(undefined4 *)(lVar8 + 0x48) = 1;
    *(uint *)(lVar8 + 0x4c) = uVar2;
    param_1[0x34] = 1;
  }
  else {
    if (3 < iVar6 - 1U) {
      puVar9 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar9 + 5) = 0x1b;
      *(int *)((long)puVar9 + 0x2c) = iVar6;
      *(undefined4 *)(puVar9 + 6) = 4;
      (*(code *)*puVar9)(param_1);
    }
    uVar5 = jdiv_round_up((int)param_1[10],
                          (long)*(int *)((long)param_1 + 0x1dc) * (long)(int)param_1[0x2c]);
    *(undefined4 *)(param_1 + 0x33) = uVar5;
    uVar5 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x54),
                          (long)*(int *)((long)param_1 + 0x1dc) *
                          (long)*(int *)((long)param_1 + 0x164));
    *(undefined4 *)((long)param_1 + 0x19c) = uVar5;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (0 < *(int *)((long)param_1 + 0x174)) {
      iVar6 = 0;
      lVar8 = 0;
      while( true ) {
        lVar10 = param_1[lVar8 + 0x2f];
        uVar2 = *(uint *)(lVar10 + 8);
        uVar1 = *(uint *)(lVar10 + 0xc);
        iVar7 = uVar1 * uVar2;
        *(int *)(lVar10 + 0x40) = iVar7;
        *(uint *)(lVar10 + 0x44) = *(int *)(lVar10 + 0x24) * uVar2;
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = *(uint *)(lVar10 + 0x1c) / uVar2;
        }
        uVar3 = *(uint *)(lVar10 + 0x1c) - uVar3 * uVar2;
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = *(uint *)(lVar10 + 0x20) / uVar1;
        }
        uVar4 = *(uint *)(lVar10 + 0x20) - uVar4 * uVar1;
        *(uint *)(lVar10 + 0x38) = uVar2;
        *(uint *)(lVar10 + 0x3c) = uVar1;
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
        if (uVar4 != 0) {
          uVar1 = uVar4;
        }
        *(uint *)(lVar10 + 0x48) = uVar2;
        *(uint *)(lVar10 + 0x4c) = uVar1;
        if (10 < iVar6 + iVar7) {
          puVar9 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar9 + 5) = 0xe;
          (*(code *)*puVar9)(param_1);
        }
        if (0 < iVar7) {
          iVar7 = iVar7 + 1;
          do {
            lVar10 = param_1[0x34];
            iVar7 = iVar7 + -1;
            *(int *)(param_1 + 0x34) = (int)lVar10 + 1;
            *(int *)((long)param_1 + (long)(int)lVar10 * 4 + 0x1a4) = (int)lVar8;
          } while (1 < iVar7);
        }
        lVar8 = lVar8 + 1;
        if (*(int *)((long)param_1 + 0x174) <= lVar8) break;
        iVar6 = (int)param_1[0x34];
      }
    }
  }
  if (0 < (int)param_1[0x28]) {
    lVar8 = (ulong)*(uint *)(param_1 + 0x33) * (long)(int)param_1[0x28];
    if (0xfffe < lVar8) {
      lVar8 = 0xffff;
    }
    *(int *)((long)param_1 + 0x13c) = (int)lVar8;
  }
  return;
}

