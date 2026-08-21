
undefined8 FUN_0113cb7c(long param_1)

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
  uVar2 = FUN_0113ce08(param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*piVar4 == 3) {
    *(code **)(piVar4 + 0x14) = FUN_0113d920;
    if (*(code **)(param_1 + 0x2f8) != FUN_0113d468) {
      *(code **)(piVar4 + 0xe) = *(code **)(param_1 + 0x2f8);
      *(code **)(param_1 + 0x2f8) = FUN_0113d468;
      *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_1 + 0x308);
                    /* try { // try from 0113cc1c to 0123ccdf has its CatchHandler @ 0113cc1c
                       catch() { ... } // from try @ 0113cc1c with catch @ 0113cc1c
                       catch() { ... } // from try @ 0113cce8 with catch @ 0113cc1c */
      *(code **)(param_1 + 0x308) = FUN_0113d4bc;
      *(undefined8 *)(piVar4 + 0x12) = *(undefined8 *)(param_1 + 0x318);
      *(code **)(param_1 + 0x318) = FUN_0113d4bc;
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
    pcVar3 = FUN_0113cf08;
  }
  else if (sVar1 == 0x20) {
    pcVar3 = FUN_0113d2ac;
  }
  else {
    if (sVar1 != 0x10) goto LAB_0113cc5c;
    pcVar3 = FUN_0113d0d4;
  }
  *(code **)(piVar4 + 0x14) = pcVar3;
LAB_0113cc5c:
  if (*(code **)(param_1 + 0x2f8) != FUN_0113d468) {
    *(code **)(piVar4 + 0xe) = *(code **)(param_1 + 0x2f8);
    *(code **)(param_1 + 0x2f8) = FUN_0113d468;
    *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_1 + 0x308);
    *(code **)(param_1 + 0x308) = FUN_0113d4bc;
    *(undefined8 *)(piVar4 + 0x12) = *(undefined8 *)(param_1 + 0x318);
    *(code **)(param_1 + 0x318) = FUN_0113d4bc;
  }
  if (*(char *)(param_1 + 0x10) < '\0') {
    if (*(code **)(piVar4 + 0x14) == FUN_0113d0d4) {
      pcVar3 = FUN_0113d534;
    }
    else {
      if (*(code **)(piVar4 + 0x14) != FUN_0113d2ac) {
        return 1;
      }
      pcVar3 = FUN_0113d738;
    }
                    /* try { // try from 0113cce0 to 0123cce7 has its CatchHandler @ 0113cd04 */
    *(code **)(piVar4 + 0x14) = pcVar3;
    *(code **)(param_1 + 1000) = _TIFFNoPostDecode;
  }
                    /* try { // try from 0113cce8 to 0123cd0b has its CatchHandler @ 0113cc1c */
  return 1;
}

