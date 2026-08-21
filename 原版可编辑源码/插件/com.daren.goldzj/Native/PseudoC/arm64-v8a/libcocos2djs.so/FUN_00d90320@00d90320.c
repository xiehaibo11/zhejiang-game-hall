
void FUN_00d90320(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[0x4b];
  if (param_2 == 3) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_00d9049c;
  }
  else if (param_2 == 2) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_00d905b4;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
      goto LAB_00d903f8;
    }
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      *(code **)(lVar4 + 8) = FUN_00d90408;
      if (*(long *)(lVar4 + 0x18) == 0) {
        uVar1 = (**(code **)(param_1[1] + 0x38))
                          (param_1,*(undefined8 *)(lVar4 + 0x10),0,*(undefined4 *)(lVar4 + 0x20),1);
        *(undefined8 *)(lVar4 + 0x18) = uVar1;
      }
      goto LAB_00d903f8;
    }
    pcVar3 = *(code **)(param_1[0x50] + 8);
  }
  *(code **)(lVar4 + 8) = pcVar3;
LAB_00d903f8:
  *(undefined8 *)(lVar4 + 0x24) = 0;
  return;
}

