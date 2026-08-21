
long nonZeroMono16(short *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  short *psVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 4) {
    lVar1 = 0;
    uVar2 = param_2;
  }
  else {
    uVar3 = param_2 & 0xfffffffffffffffc;
    psVar4 = param_1 + 2;
    lVar1 = 0;
    lVar6 = 0;
    uVar2 = param_2 - uVar3;
    param_1 = param_1 + uVar3;
    lVar7 = 0;
    lVar8 = 0;
    uVar5 = uVar3;
    do {
      uVar5 = uVar5 - 4;
      lVar1 = lVar1 + (ulong)(~-(psVar4[-2] == 0) & 1);
      lVar6 = lVar6 + (ulong)(~-(psVar4[-1] == 0) & 1);
      lVar7 = lVar7 + (ulong)(~-(*psVar4 == 0) & 1);
      lVar8 = lVar8 + (ulong)(~-(psVar4[1] == 0) & 1);
      psVar4 = psVar4 + 4;
    } while (uVar5 != 0);
    lVar1 = lVar7 + lVar1 + lVar8 + lVar6;
    if (uVar3 == param_2) {
      return lVar1;
    }
  }
  do {
    uVar2 = uVar2 - 1;
    if (*param_1 != 0) {
      lVar1 = lVar1 + 1;
    }
    param_1 = param_1 + 1;
  } while (uVar2 != 0);
  return lVar1;
}

