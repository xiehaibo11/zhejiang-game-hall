
long nonZeroStereo32(ulong param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int in_w17;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 3) {
    lVar1 = 0;
    uVar3 = param_2;
    uVar4 = param_1;
  }
  else {
    uVar6 = param_2 & 0xfffffffffffffffe;
    lVar5 = 0;
    lVar1 = 0;
    uVar3 = param_2 - uVar6;
    uVar4 = param_1 + uVar6 * 8;
    piVar2 = (int *)(param_1 + 8);
    uVar7 = uVar6;
    do {
      if (piVar2[-2] == 0) {
        in_w17 = piVar2[-1];
      }
      if (*piVar2 == 0) {
        param_1 = (ulong)(uint)piVar2[1];
      }
      if (in_w17 != 0 || piVar2[-2] != 0) {
        lVar5 = lVar5 + 1;
      }
      if ((int)param_1 != 0 || *piVar2 != 0) {
        lVar1 = lVar1 + 1;
      }
      uVar7 = uVar7 - 2;
      piVar2 = piVar2 + 4;
    } while (uVar7 != 0);
    lVar1 = lVar1 + lVar5;
    if (uVar6 == param_2) {
      return lVar1;
    }
  }
  piVar2 = (int *)(uVar4 + 4);
  do {
    uVar3 = uVar3 - 1;
    if ((piVar2[-1] != 0) || (*piVar2 != 0)) {
      lVar1 = lVar1 + 1;
    }
    piVar2 = piVar2 + 2;
  } while (uVar3 != 0);
  return lVar1;
}

