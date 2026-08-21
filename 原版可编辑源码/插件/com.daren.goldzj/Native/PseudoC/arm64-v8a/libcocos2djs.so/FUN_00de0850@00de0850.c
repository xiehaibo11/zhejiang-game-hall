
undefined8 FUN_00de0850(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x350);
  uVar2 = (**(code **)(piVar4 + 0x1e))();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_00de0960(param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*piVar4 == 3) {
    pcVar3 = FUN_00de20e8;
  }
  else {
    if (*piVar4 != 2) {
      return 1;
    }
    sVar1 = *(short *)(param_1 + 0x74);
    if (sVar1 == 8) {
      pcVar3 = FUN_00de16b8;
    }
    else if (sVar1 == 0x20) {
      pcVar3 = FUN_00de1dec;
    }
    else {
      if (sVar1 != 0x10) goto LAB_00de08dc;
      pcVar3 = FUN_00de1c0c;
    }
  }
  *(code **)(piVar4 + 0xc) = pcVar3;
LAB_00de08dc:
  if (*(code **)(param_1 + 0x300) != FUN_00de1fa8) {
    *(code **)(piVar4 + 6) = *(code **)(param_1 + 0x300);
    *(code **)(param_1 + 0x300) = FUN_00de1fa8;
    *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(param_1 + 0x310);
    *(code **)(param_1 + 0x310) = FUN_00de2000;
    *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(param_1 + 800);
    *(code **)(param_1 + 800) = FUN_00de2000;
  }
  return 1;
}

