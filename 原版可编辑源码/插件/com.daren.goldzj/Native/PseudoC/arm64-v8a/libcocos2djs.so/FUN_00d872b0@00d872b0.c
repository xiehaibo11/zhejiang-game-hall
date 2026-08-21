
void FUN_00d872b0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0x3e];
  iVar1 = *(int *)(lVar5 + 0x20);
  if (iVar1 == 2) {
LAB_00d8740c:
    if ((int)param_1[0x25] == 0) {
      FUN_00d8756c(param_1);
      FUN_00d876a0(param_1);
    }
    (**(code **)param_1[0x46])(param_1,0);
    (**(code **)param_1[0x41])(param_1,2);
    if (*(int *)(lVar5 + 0x2c) == 0) {
      (**(code **)(param_1[0x42] + 8))(param_1);
    }
    (**(code **)(param_1[0x42] + 0x10))(param_1);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        FUN_00d8756c(param_1);
        FUN_00d876a0(param_1);
        if ((int)param_1[0x24] == 0) {
          (**(code **)param_1[0x43])(param_1);
          (**(code **)param_1[0x44])(param_1);
          (**(code **)param_1[0x40])(param_1,0);
        }
        (**(code **)param_1[0x45])(param_1);
        (**(code **)param_1[0x46])(param_1,(int)param_1[0x25]);
        uVar3 = 3;
        if (*(int *)(lVar5 + 0x28) < 2) {
          uVar3 = 0;
        }
        (**(code **)param_1[0x41])(param_1,uVar3);
        (**(code **)param_1[0x3f])(param_1,0);
        *(uint *)(lVar5 + 0x18) = (uint)((int)param_1[0x25] == 0);
      }
      else {
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0x31;
        (*(code *)*puVar2)(param_1);
      }
      goto LAB_00d87478;
    }
    FUN_00d8756c(param_1);
    FUN_00d876a0(param_1);
    if ((*(int *)((long)param_1 + 0x1cc) == 0) && (*(int *)((long)param_1 + 0x1d4) != 0)) {
      *(undefined4 *)(lVar5 + 0x20) = 2;
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      goto LAB_00d8740c;
    }
    (**(code **)param_1[0x46])(param_1,1);
    (**(code **)param_1[0x41])(param_1,2);
  }
  *(undefined4 *)(lVar5 + 0x18) = 0;
LAB_00d87478:
  iVar1 = *(int *)(lVar5 + 0x28);
  *(uint *)(lVar5 + 0x1c) = (uint)(*(int *)(lVar5 + 0x24) == iVar1 + -1);
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x18) = *(int *)(lVar5 + 0x24);
    *(int *)(lVar4 + 0x1c) = iVar1;
  }
  return;
}

