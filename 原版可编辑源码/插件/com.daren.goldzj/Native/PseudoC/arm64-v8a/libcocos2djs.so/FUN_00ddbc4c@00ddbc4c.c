
undefined8 FUN_00ddbc4c(long param_1)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  code *pcVar4;
  int *piVar5;
  
  sVar2 = *(short *)(param_1 + 0x7a);
  piVar5 = *(int **)(param_1 + 0x350);
  *(code **)(param_1 + 1000) = _TIFFNoPostDecode;
  if (sVar2 == -0x7fb4) {
    uVar3 = FUN_00ddd330(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(code **)(param_1 + 0x2f8) = FUN_00ddd48c;
    if (*piVar5 == 0) {
      pcVar4 = FUN_00ddd708;
    }
    else {
      if (*piVar5 != 3) {
        return 1;
      }
      pcVar4 = FUN_00ddd7a8;
    }
  }
  else {
    if (sVar2 != -0x7fb3) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvSetupDecode",
                   "Inappropriate photometric interpretation %d for SGILog compression; %s",sVar2,
                   "must be either LogLUV or LogL");
      return 0;
    }
    uVar3 = FUN_00ddc3b4(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (*(short *)(param_1 + 0x78) == -0x788b) {
      *(code **)(param_1 + 0x2f8) = FUN_00ddc550;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        pcVar4 = FUN_00ddc7c0;
      }
      else if (iVar1 == 3) {
        pcVar4 = FUN_00ddc928;
      }
      else {
        if (iVar1 != 1) {
          return 1;
        }
        pcVar4 = FUN_00ddc810;
      }
    }
    else {
      *(code **)(param_1 + 0x2f8) = FUN_00ddcb18;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        pcVar4 = FUN_00ddcd94;
      }
      else if (iVar1 == 3) {
        pcVar4 = FUN_00ddd048;
      }
      else {
        if (iVar1 != 1) {
          return 1;
        }
        pcVar4 = FUN_00ddcee8;
      }
    }
  }
  *(code **)(piVar5 + 8) = pcVar4;
  return 1;
}

