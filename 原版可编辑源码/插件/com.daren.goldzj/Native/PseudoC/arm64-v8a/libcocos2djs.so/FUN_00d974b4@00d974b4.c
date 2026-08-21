
void FUN_00d974b4(long *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = param_1[0x41];
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (*(int *)((long)param_1 + 0x174) < 2) {
    puVar1 = (undefined4 *)(param_1[0x2f] + 0xc);
    if ((int)param_1[0x2e] == 1) {
      puVar1 = (undefined4 *)(param_1[0x2f] + 0x4c);
    }
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(lVar5 + 0x1c) = uVar2;
  *(undefined8 *)(lVar5 + 0x14) = 0;
  if (param_2 == 3) {
    if (*(long *)(lVar5 + 0x70) == 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 3;
      (*(code *)*puVar3)();
    }
    pcVar4 = FUN_00d978c0;
  }
  else if (param_2 == 2) {
    if (*(long *)(lVar5 + 0x70) == 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 3;
      (*(code *)*puVar3)();
    }
    pcVar4 = FUN_00d97c44;
  }
  else {
    if (param_2 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d975b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)();
      return;
    }
    if (*(long *)(lVar5 + 0x70) != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 3;
      (*(code *)*puVar3)();
    }
    pcVar4 = FUN_00d975b4;
  }
  *(code **)(lVar5 + 8) = pcVar4;
  return;
}

