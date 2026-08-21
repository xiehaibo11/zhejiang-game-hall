
undefined8 FUN_00ddbe94(long param_1)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  
  sVar2 = *(short *)(param_1 + 0x7a);
  piVar5 = *(int **)(param_1 + 0x350);
  if (sVar2 == -0x7fb4) {
    iVar3 = FUN_00ddd330(param_1);
    if (iVar3 == 0) {
      return 1;
    }
    *(code **)(param_1 + 0x300) = FUN_00dddfdc;
    if (*piVar5 == 1) {
      return 1;
    }
    if (*piVar5 != 0) {
LAB_00ddbf98:
      pcVar1 = "Y, L";
      if (*(short *)(param_1 + 0x7a) != -0x7fb4) {
        pcVar1 = "XYZ, Luv";
      }
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvSetupEncode",
                   "SGILog compression supported only for %s, or raw data",pcVar1);
      return 0;
    }
    pcVar4 = FUN_00dde48c;
  }
  else {
    if (sVar2 != -0x7fb3) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvSetupEncode",
                   "Inappropriate photometric interpretation %d for SGILog compression; %s",sVar2,
                   "must be either LogLUV or LogL");
      return 1;
    }
    iVar3 = FUN_00ddc3b4(param_1);
    if (iVar3 == 0) {
      return 1;
    }
    if (*(short *)(param_1 + 0x78) == -0x788b) {
      *(code **)(param_1 + 0x300) = FUN_00ddd878;
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        pcVar4 = FUN_00ddd960;
      }
      else {
        if (iVar3 == 2) {
          return 1;
        }
        if (iVar3 != 1) goto LAB_00ddbf98;
        pcVar4 = FUN_00ddd9b8;
      }
    }
    else {
      *(code **)(param_1 + 0x300) = FUN_00dddaf0;
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        pcVar4 = FUN_00ddddb4;
      }
      else {
        if (iVar3 == 2) {
          return 1;
        }
        if (iVar3 != 1) goto LAB_00ddbf98;
        pcVar4 = FUN_00ddde0c;
      }
    }
  }
  *(code **)(piVar5 + 8) = pcVar4;
  return 1;
}

