
void FUN_00d8f770(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = param_1[0x48];
  if (*(int *)(lVar7 + 0x10) == 0) {
    if ((*(int *)((long)param_1 + 0x6c) != 0) && (param_1[0x14] == 0)) {
      if ((*(int *)((long)param_1 + 0x74) == 0) || (*(int *)((long)param_1 + 0x84) == 0)) {
        if (*(int *)((long)param_1 + 0x7c) == 0) {
          puVar2 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar2 + 5) = 0x2f;
          (*(code *)*puVar2)(param_1);
        }
        else {
          param_1[0x52] = *(long *)(lVar7 + 0x20);
        }
      }
      else {
        param_1[0x52] = *(long *)(lVar7 + 0x28);
        *(undefined4 *)(lVar7 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4f])(param_1);
    (**(code **)(param_1[0x4a] + 0x10))(param_1);
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      lVar3 = param_1[2];
      goto joined_r0x00d8f814;
    }
    if (*(int *)(lVar7 + 0x1c) == 0) {
      (**(code **)param_1[0x51])(param_1);
    }
    (**(code **)param_1[0x50])(param_1);
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      (**(code **)param_1[0x52])(param_1,*(undefined4 *)(lVar7 + 0x10));
    }
    uVar4 = 3;
    if (*(int *)(lVar7 + 0x10) == 0) {
      uVar4 = 0;
    }
    (**(code **)param_1[0x4b])(param_1,uVar4);
    puVar2 = (undefined8 *)param_1[0x49];
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(lVar7 + 0x10) = 0;
    (**(code **)param_1[0x52])(param_1,0);
    (**(code **)param_1[0x4b])(param_1,2);
    puVar2 = (undefined8 *)param_1[0x49];
    uVar1 = 2;
  }
  (*(code *)*puVar2)(param_1,uVar1);
  lVar3 = param_1[2];
joined_r0x00d8f814:
  if (lVar3 != 0) {
    iVar6 = *(int *)(lVar7 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar6;
    iVar5 = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      iVar5 = 2;
    }
    iVar5 = iVar5 + iVar6;
    *(int *)(lVar3 + 0x1c) = iVar5;
    if (((int)param_1[0xb] != 0) && (*(int *)(param_1[0x4c] + 0x24) == 0)) {
      iVar6 = 1;
      if (*(int *)((long)param_1 + 0x84) != 0) {
        iVar6 = 2;
      }
      *(int *)(lVar3 + 0x1c) = iVar5 + iVar6;
    }
  }
  return;
}

