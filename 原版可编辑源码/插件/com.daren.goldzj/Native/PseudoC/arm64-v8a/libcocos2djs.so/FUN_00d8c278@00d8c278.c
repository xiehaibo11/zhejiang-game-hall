
void FUN_00d8c278(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *__dest;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar6 = (int)param_1[0x38];
  if (iVar6 == 1) {
    lVar9 = param_1[0x39];
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar9 + 0x1c);
    uVar1 = *(uint *)(lVar9 + 0x20);
    *(uint *)((long)param_1 + 0x1ec) = uVar1;
    uVar2 = *(uint *)(lVar9 + 0xc);
    *(undefined8 *)(lVar9 + 0x38) = 0x100000001;
    uVar8 = 1;
    *(undefined4 *)(lVar9 + 0x40) = 1;
    *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(lVar9 + 0x24);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    uVar1 = uVar1 - uVar3 * uVar2;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    *(undefined4 *)(lVar9 + 0x48) = 1;
    *(uint *)(lVar9 + 0x4c) = uVar2;
    param_1[0x3e] = 1;
  }
  else {
    if (3 < iVar6 - 1U) {
      puVar10 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar10 + 5) = 0x1b;
      *(int *)((long)puVar10 + 0x2c) = iVar6;
      *(undefined4 *)(puVar10 + 6) = 4;
      (*(code *)*puVar10)(param_1);
    }
    uVar5 = jdiv_round_up((int)param_1[6],
                          (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
    *(undefined4 *)(param_1 + 0x3d) = uVar5;
    uVar5 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x34),
                          (long)*(int *)((long)param_1 + 0x22c) *
                          (long)*(int *)((long)param_1 + 0x1a4));
    *(undefined4 *)((long)param_1 + 0x1ec) = uVar5;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    if ((int)param_1[0x38] < 1) goto LAB_00d8c494;
    iVar6 = 0;
    lVar9 = 0;
    while( true ) {
      lVar11 = param_1[lVar9 + 0x39];
      uVar2 = *(uint *)(lVar11 + 8);
      uVar1 = *(uint *)(lVar11 + 0xc);
      iVar7 = uVar1 * uVar2;
      *(int *)(lVar11 + 0x40) = iVar7;
      *(uint *)(lVar11 + 0x44) = *(int *)(lVar11 + 0x24) * uVar2;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = *(uint *)(lVar11 + 0x1c) / uVar2;
      }
      uVar3 = *(uint *)(lVar11 + 0x1c) - uVar3 * uVar2;
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = *(uint *)(lVar11 + 0x20) / uVar1;
      }
      uVar4 = *(uint *)(lVar11 + 0x20) - uVar4 * uVar1;
      *(uint *)(lVar11 + 0x38) = uVar2;
      *(uint *)(lVar11 + 0x3c) = uVar1;
      if (uVar3 != 0) {
        uVar2 = uVar3;
      }
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      *(uint *)(lVar11 + 0x48) = uVar2;
      *(uint *)(lVar11 + 0x4c) = uVar1;
      if (10 < iVar7 + iVar6) {
        puVar10 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar10 + 5) = 0xe;
        (*(code *)*puVar10)(param_1);
      }
      if (0 < iVar7) {
        iVar7 = iVar7 + 1;
        do {
          lVar11 = param_1[0x3e];
          iVar7 = iVar7 + -1;
          *(int *)(param_1 + 0x3e) = (int)lVar11 + 1;
          *(int *)((long)param_1 + (long)(int)lVar11 * 4 + 500) = (int)lVar9;
        } while (1 < iVar7);
      }
      uVar8 = (ulong)(int)param_1[0x38];
      lVar9 = lVar9 + 1;
      if ((long)uVar8 <= lVar9) break;
      iVar6 = (int)param_1[0x3e];
    }
    if ((int)param_1[0x38] < 1) goto LAB_00d8c494;
  }
  lVar9 = 0;
  do {
    lVar11 = param_1[lVar9 + 0x39];
    if (*(long *)(lVar11 + 0x50) == 0) {
      uVar2 = *(uint *)(lVar11 + 0x10);
      if ((3 < uVar2) || (param_1[(long)(int)uVar2 + 0x19] == 0)) {
        puVar10 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar10 + 5) = 0x36;
        *(uint *)((long)puVar10 + 0x2c) = uVar2;
        (*(code *)*puVar10)(param_1);
      }
      __dest = (void *)(**(code **)param_1[1])(param_1,1,0x84);
      memcpy(__dest,(void *)param_1[(long)(int)uVar2 + 0x19],0x84);
      *(void **)(lVar11 + 0x50) = __dest;
      uVar8 = (ulong)*(uint *)(param_1 + 0x38);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 < (int)uVar8);
LAB_00d8c494:
  (**(code **)param_1[0x4e])(param_1);
  (**(code **)param_1[0x4a])(param_1);
  *(undefined8 *)param_1[0x4c] = *(undefined8 *)(param_1[0x4a] + 8);
  return;
}

