
undefined8 FUN_00de06d4(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x350);
  uVar2 = (**(code **)(piVar4 + 0x1c))();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_00de0960(param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*piVar4 == 3) {
    *(code **)(piVar4 + 0x14) = FUN_00de1478;
    if (*(code **)(param_1 + 0x2f8) != FUN_00de0fc0) {
      *(code **)(piVar4 + 0xe) = *(code **)(param_1 + 0x2f8);
      *(code **)(param_1 + 0x2f8) = FUN_00de0fc0;
      *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_1 + 0x308);
      *(code **)(param_1 + 0x308) = FUN_00de1014;
      *(undefined8 *)(piVar4 + 0x12) = *(undefined8 *)(param_1 + 0x318);
      *(code **)(param_1 + 0x318) = FUN_00de1014;
    }
    if (-1 < *(char *)(param_1 + 0x10)) {
      return 1;
    }
    *(code **)(param_1 + 1000) = _TIFFNoPostDecode;
    return 1;
  }
  if (*piVar4 != 2) {
    return 1;
  }
  sVar1 = *(short *)(param_1 + 0x74);
  if (sVar1 == 8) {
    pcVar3 = FUN_00de0a60;
  }
  else if (sVar1 == 0x20) {
    pcVar3 = FUN_00de0e04;
  }
  else {
    if (sVar1 != 0x10) goto LAB_00de07b4;
    pcVar3 = FUN_00de0c2c;
  }
  *(code **)(piVar4 + 0x14) = pcVar3;
LAB_00de07b4:
  if (*(code **)(param_1 + 0x2f8) != FUN_00de0fc0) {
    *(code **)(piVar4 + 0xe) = *(code **)(param_1 + 0x2f8);
    *(code **)(param_1 + 0x2f8) = FUN_00de0fc0;
    *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_1 + 0x308);
    *(code **)(param_1 + 0x308) = FUN_00de1014;
    *(undefined8 *)(piVar4 + 0x12) = *(undefined8 *)(param_1 + 0x318);
    *(code **)(param_1 + 0x318) = FUN_00de1014;
  }
  if (*(char *)(param_1 + 0x10) < '\0') {
    if (*(code **)(piVar4 + 0x14) == FUN_00de0c2c) {
      pcVar3 = FUN_00de108c;
    }
    else {
      if (*(code **)(piVar4 + 0x14) != FUN_00de0e04) {
        return 1;
      }
      pcVar3 = FUN_00de1290;
    }
    *(code **)(piVar4 + 0x14) = pcVar3;
    *(code **)(param_1 + 1000) = _TIFFNoPostDecode;
  }
  return 1;
}

