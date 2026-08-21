
undefined8 jpeg_start_decompress(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 == 0xca) {
    jinit_master_decompress(param_1);
    if ((int)param_1[0xb] != 0) {
      uVar6 = 0xcf;
      goto LAB_00d8aed8;
    }
    *(undefined4 *)((long)param_1 + 0x24) = 0xcb;
LAB_00d8ad78:
    if (*(int *)(param_1[0x4c] + 0x20) != 0) {
      puVar7 = (undefined8 *)param_1[2];
      while( true ) {
        if (puVar7 != (undefined8 *)0x0) {
          (*(code *)*puVar7)(param_1);
        }
        uVar5 = (**(code **)param_1[0x4c])(param_1);
        uVar4 = (uint)uVar5;
        if (uVar4 == 0) {
          return uVar5;
        }
        if (uVar4 == 2) break;
        puVar7 = (undefined8 *)param_1[2];
        if (((uVar4 | 2) == 3) && (puVar7 != (undefined8 *)0x0)) {
          lVar1 = puVar7[1];
          puVar7[1] = lVar1 + 1;
          if ((long)puVar7[2] <= lVar1 + 1) {
            puVar7[2] = puVar7[2] + (ulong)*(uint *)(param_1 + 0x36);
          }
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_1 + 0xac);
LAB_00d8adf8:
    if (*(int *)((long)param_1 + 0x24) != 0xcc) {
      (**(code **)param_1[0x48])(param_1);
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(undefined4 *)((long)param_1 + 0x24) = 0xcc;
    }
  }
  else {
    if (iVar2 == 0xcb) goto LAB_00d8ad78;
    if (iVar2 != 0xcc) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x15;
      *(int *)((long)puVar7 + 0x2c) = iVar2;
      (*(code *)*puVar7)(param_1);
      goto LAB_00d8adf8;
    }
  }
  plVar8 = param_1 + 0x48;
  if (*(int *)(*plVar8 + 0x10) != 0) {
    uVar4 = *(uint *)(param_1 + 0x15);
    do {
      while (uVar3 = *(uint *)((long)param_1 + 0x8c), uVar4 < uVar3) {
        puVar7 = (undefined8 *)param_1[2];
        uVar9 = uVar4;
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = (ulong)uVar4;
          puVar7[2] = (ulong)uVar3;
          (*(code *)*puVar7)(param_1);
          uVar9 = *(uint *)(param_1 + 0x15);
        }
        (**(code **)(param_1[0x49] + 8))(param_1,0,param_1 + 0x15,0);
        uVar4 = *(uint *)(param_1 + 0x15);
        if (uVar4 == uVar9) {
          return 0;
        }
      }
      (**(code **)(*plVar8 + 8))(param_1);
      (**(code **)*plVar8)(param_1);
      *(undefined4 *)(param_1 + 0x15) = 0;
      uVar4 = 0;
    } while (*(int *)(*plVar8 + 0x10) != 0);
  }
  uVar6 = 0xcd;
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    uVar6 = 0xce;
  }
LAB_00d8aed8:
  *(undefined4 *)((long)param_1 + 0x24) = uVar6;
  return 1;
}

