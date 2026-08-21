
long nonZeroMono32(int *param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 4) {
    lVar2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar4 = param_2 & 0xfffffffffffffffc;
    piVar5 = param_1 + 2;
    lVar2 = 0;
    lVar7 = 0;
    uVar3 = param_2 - uVar4;
    param_1 = param_1 + uVar4;
    lVar8 = 0;
    lVar9 = 0;
    uVar6 = uVar4;
    do {
      piVar1 = piVar5 + -2;
      uVar10 = *(undefined8 *)piVar5;
      uVar6 = uVar6 - 4;
      piVar5 = piVar5 + 4;
      lVar2 = lVar2 + (ulong)(~-((int)*(undefined8 *)piVar1 == 0) & 1);
      lVar7 = lVar7 + (ulong)(~-((int)((ulong)*(undefined8 *)piVar1 >> 0x20) == 0) & 1);
      lVar8 = lVar8 + (ulong)(~-((int)uVar10 == 0) & 1);
      lVar9 = lVar9 + (ulong)(~-((int)((ulong)uVar10 >> 0x20) == 0) & 1);
    } while (uVar6 != 0);
    lVar2 = lVar8 + lVar2 + lVar9 + lVar7;
    if (uVar4 == param_2) {
      return lVar2;
    }
  }
  do {
    uVar3 = uVar3 - 1;
    if (*param_1 != 0) {
      lVar2 = lVar2 + 1;
    }
    param_1 = param_1 + 1;
  } while (uVar3 != 0);
  return lVar2;
}

