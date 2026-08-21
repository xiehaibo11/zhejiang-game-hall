
void FUN_00d959f0(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  void *__s;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  lVar7 = param_1[0x46];
  if (param_2 != 0) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x31;
    (*(code *)*puVar4)(param_1);
  }
  if (*(int *)((long)param_1 + 0x15c) == 0) {
    pcVar5 = FUN_00d9694c;
  }
  else {
    if (*(int *)((long)param_1 + 0x1d4) == 0) {
      pcVar6 = FUN_00d96344;
      pcVar5 = FUN_00d96114;
    }
    else {
      pcVar6 = FUN_00d966d0;
      pcVar5 = FUN_00d9661c;
    }
    if (*(int *)((long)param_1 + 0x1cc) != 0) {
      pcVar5 = pcVar6;
    }
  }
  *(code **)(lVar7 + 8) = pcVar5;
  if (0 < *(int *)((long)param_1 + 0x174)) {
    lVar8 = 0;
    do {
      lVar9 = param_1[lVar8 + 0x2f];
      if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) == 0)) {
        uVar3 = *(uint *)(lVar9 + 0x14);
        if (0xf < uVar3) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 0x32;
          *(uint *)((long)puVar4 + 0x2c) = uVar3;
          (*(code *)*puVar4)(param_1);
        }
        puVar11 = (undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x68);
        puVar4 = (undefined8 *)*puVar11;
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *puVar11 = puVar4;
        }
        lVar1 = lVar7 + lVar8 * 4;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[7] = 0;
        puVar4[6] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        *(undefined4 *)(lVar1 + 0x40) = 0;
        *(undefined4 *)(lVar1 + 0x50) = 0;
        iVar2 = (int)param_1[0x3a];
      }
      else {
        iVar2 = (int)param_1[0x3a];
      }
      if (iVar2 != 0) {
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (0xf < uVar3) {
          puVar4 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar4 + 5) = 0x32;
          *(uint *)((long)puVar4 + 0x2c) = uVar3;
          (*(code *)*puVar4)(param_1);
        }
        plVar10 = (long *)(lVar7 + (long)(int)uVar3 * 8 + 0xe8);
        __s = (void *)*plVar10;
        if (__s == (void *)0x0) {
          __s = (void *)(**(code **)param_1[1])(param_1,1,0x100);
          *plVar10 = (long)__s;
        }
        memset(__s,0,0x100);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((long)param_1 + 0x174));
  }
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0xffffffff0000000b;
  *(undefined8 *)(lVar7 + 0x20) = 0x10000;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)((long)param_1 + 0x13c);
  *(undefined4 *)(lVar7 + 100) = 0;
  return;
}

