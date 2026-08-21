
void FUN_010f651c(long *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar10 = param_1[0x46];
  pcVar7 = FUN_010f67c0;
  if (param_2 == 0) {
    pcVar7 = FUN_010f6afc;
  }
  *(code **)(lVar10 + 0x10) = pcVar7;
  if (*(int *)((long)param_1 + 0x15c) == 0) {
    pcVar7 = FUN_010f8600;
    if (param_2 == 0) {
      pcVar7 = FUN_010f883c;
    }
    *(code **)(lVar10 + 8) = pcVar7;
    goto LAB_010f6608;
  }
  *(long **)(lVar10 + 0xd8) = param_1;
  *(int *)(lVar10 + 0xc0) = param_2;
  if (*(int *)((long)param_1 + 0x1d4) == 0) {
    pcVar7 = FUN_010f6eb8;
    if (*(int *)((long)param_1 + 0x1cc) != 0) {
      pcVar7 = FUN_010f7058;
    }
LAB_010f65f4:
    *(code **)(lVar10 + 8) = pcVar7;
  }
  else {
    if (*(int *)((long)param_1 + 0x1cc) == 0) {
      pcVar7 = FUN_010f7670;
      goto LAB_010f65f4;
    }
    *(code **)(lVar10 + 8) = FUN_010f7894;
    if (*(long *)(lVar10 + 0xf0) == 0) {
      uVar4 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined8 *)(lVar10 + 0xf0) = uVar4;
    }
  }
  uVar1 = *(undefined4 *)(param_1[0x2f] + 0x18);
  *(undefined8 *)(lVar10 + 0xe4) = 0;
  *(undefined4 *)(lVar10 + 0xe0) = uVar1;
LAB_010f6608:
  if (0 < *(int *)((long)param_1 + 0x174)) {
    if (param_2 == 0) {
      lVar9 = 0;
      do {
        lVar11 = param_1[lVar9 + 0x2f];
        if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) == 0)) {
          lVar6 = (long)*(int *)(lVar11 + 0x14);
          FUN_010f926c(param_1,1,lVar6,lVar10 + lVar6 * 8 + 0x40);
          *(undefined4 *)(lVar10 + 0x24 + lVar9 * 4) = 0;
          iVar2 = (int)param_1[0x3a];
        }
        else {
          iVar2 = (int)param_1[0x3a];
        }
        if (iVar2 != 0) {
          lVar11 = (long)*(int *)(lVar11 + 0x18);
          FUN_010f926c(param_1,0,lVar11,lVar10 + lVar11 * 8 + 0x60);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)param_1 + 0x174));
    }
    else {
      lVar9 = 0;
      do {
        lVar11 = param_1[lVar9 + 0x2f];
        if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) == 0)) {
          uVar3 = *(uint *)(lVar11 + 0x14);
          if (3 < uVar3) {
            puVar8 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar8 + 5) = 0x34;
            *(uint *)((long)puVar8 + 0x2c) = uVar3;
            (*(code *)*puVar8)(param_1);
          }
          plVar12 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x80);
          pvVar5 = (void *)*plVar12;
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *plVar12 = (long)pvVar5;
          }
          memset(pvVar5,0,0x808);
          *(undefined4 *)(lVar10 + 0x24 + lVar9 * 4) = 0;
          iVar2 = (int)param_1[0x3a];
        }
        else {
          iVar2 = (int)param_1[0x3a];
        }
        if (iVar2 != 0) {
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (3 < uVar3) {
            puVar8 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar8 + 5) = 0x34;
            *(uint *)((long)puVar8 + 0x2c) = uVar3;
            (*(code *)*puVar8)(param_1);
          }
          plVar12 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0xa0);
          pvVar5 = (void *)*plVar12;
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *plVar12 = (long)pvVar5;
          }
          memset(pvVar5,0,0x808);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((long)param_1 + 0x174));
    }
  }
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)((long)param_1 + 0x13c);
  *(undefined4 *)(lVar10 + 0x3c) = 0;
  return;
}

