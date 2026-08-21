
undefined8 FUN_0113ccf8(long param_1)

{
  short sVar1;
  undefined8 uVar2;
  code *pcVar3;
  int *piVar4;
  
                    /* catch() { ... } // from try @ 0113cce0 with catch @ 0113cd04 */
  piVar4 = *(int **)(param_1 + 0x350);
  uVar2 = (**(code **)(piVar4 + 0x1e))();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar2 = FUN_0113ce08(param_1);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*piVar4 == 3) {
    pcVar3 = FUN_0113e590;
  }
  else {
    if (*piVar4 != 2) {
      return 1;
    }
    sVar1 = *(short *)(param_1 + 0x74);
    if (sVar1 == 8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0113ce98 with catch @ 0113cd70
                       catch(type#1 @ 00000000) { ... } // from try @ 0113cf1c with catch @ 0113cd70
                       catch(type#1 @ 00000000) { ... } // from try @ 0113cf2c with catch @ 0113cd70
                        */
      pcVar3 = FUN_0113db60;
    }
    else if (sVar1 == 0x20) {
      pcVar3 = FUN_0113e294;
    }
    else {
      if (sVar1 != 0x10) goto LAB_0113cd84;
      pcVar3 = FUN_0113e0b4;
    }
  }
  *(code **)(piVar4 + 0xc) = pcVar3;
LAB_0113cd84:
  if (*(code **)(param_1 + 0x300) != FUN_0113e450) {
    *(code **)(piVar4 + 6) = *(code **)(param_1 + 0x300);
    *(code **)(param_1 + 0x300) = FUN_0113e450;
    *(undefined8 *)(piVar4 + 8) = *(undefined8 *)(param_1 + 0x310);
    *(code **)(param_1 + 0x310) = FUN_0113e4a8;
    *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(param_1 + 800);
    *(code **)(param_1 + 800) = FUN_0113e4a8;
  }
                    /* try { // try from 0113cdc4 to 0123cdc7 has its CatchHandler @ 0113ced8 */
  return 1;
}

