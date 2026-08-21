
long nonZeroStereo16(ulong param_1,ulong param_2)

{
  long lVar1;
  short *psVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  short in_w17;
  
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
    uVar4 = param_1 + uVar6 * 4;
    psVar2 = (short *)(param_1 + 4);
    uVar7 = uVar6;
    do {
      if (psVar2[-2] == 0) {
        in_w17 = psVar2[-1];
      }
      if (*psVar2 == 0) {
        param_1 = (ulong)(ushort)psVar2[1];
      }
      if (in_w17 != 0 || psVar2[-2] != 0) {
        lVar5 = lVar5 + 1;
      }
      if ((param_1 & 0xffff) != 0 || *psVar2 != 0) {
        lVar1 = lVar1 + 1;
      }
      uVar7 = uVar7 - 2;
      psVar2 = psVar2 + 4;
    } while (uVar7 != 0);
    lVar1 = lVar1 + lVar5;
    if (uVar6 == param_2) {
      return lVar1;
    }
  }
  psVar2 = (short *)(uVar4 + 2);
  do {
    uVar3 = uVar3 - 1;
    if ((psVar2[-1] != 0) || (*psVar2 != 0)) {
      lVar1 = lVar1 + 1;
    }
    psVar2 = psVar2 + 2;
  } while (uVar3 != 0);
  return lVar1;
}

