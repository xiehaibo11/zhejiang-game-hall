
undefined8 FUN_011380f4(long param_1)

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
    uVar3 = FUN_011397d8(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    *(code **)(param_1 + 0x2f8) = FUN_01139934;
    if (*piVar5 == 0) {
      pcVar4 = FUN_01139bb0;
    }
    else {
      if (*piVar5 != 3) {
        return 1;
      }
      pcVar4 = FUN_01139c50;
    }
  }
  else {
    if (sVar2 != -0x7fb3) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LogLuvSetupDecode",
                   "Inappropriate photometric interpretation %d for SGILog compression; %s",sVar2,
                   "must be either LogLUV or LogL");
      return 0;
    }
    uVar3 = FUN_0113885c(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
                    /* try { // try from 01138148 to 01238153 has its CatchHandler @ 0113816c */
    if (*(short *)(param_1 + 0x78) == -0x788b) {
                    /* try { // try from 01138154 to 0123817f has its CatchHandler @ 01137f18 */
      *(code **)(param_1 + 0x2f8) = FUN_011389f8;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        pcVar4 = FUN_01138c68;
      }
      else if (iVar1 == 3) {
        pcVar4 = FUN_01138dd0;
      }
      else {
                    /* catch() { ... } // from try @ 01138148 with catch @ 0113816c */
        if (iVar1 != 1) {
          return 1;
        }
        pcVar4 = FUN_01138cb8;
      }
    }
    else {
      *(code **)(param_1 + 0x2f8) = FUN_01138fc0;
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        pcVar4 = FUN_0113923c;
      }
      else if (iVar1 == 3) {
        pcVar4 = FUN_011394f0;
      }
      else {
        if (iVar1 != 1) {
          return 1;
        }
        pcVar4 = FUN_01139390;
      }
    }
  }
  *(code **)(piVar5 + 8) = pcVar4;
  return 1;
}

