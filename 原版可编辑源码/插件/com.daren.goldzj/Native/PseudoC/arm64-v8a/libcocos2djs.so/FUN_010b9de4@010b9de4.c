
undefined8
FUN_010b9de4(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  double dVar7;
  
  uVar4 = *param_3;
  uVar6 = *param_4;
  iVar5 = (int)uVar6;
  if ((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 2 & 1) != 0
     ) {
    if ((uVar6 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = iVar5 == *(int *)(param_2 + 0xa0);
    }
    uVar2 = 0x101;
    if (!(bool)(param_5 < param_6 & bVar3)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  if ((((uVar6 & 1) != 0) && (iVar5 == *(int *)(param_2 + 0xa0))) &&
     (*(ulong *)(uVar4 + 0x1f) < param_6)) {
    return 0x101;
  }
  uVar1 = *(ulong *)(uVar4 + 0x1f);
  if (param_6 <= *(ulong *)(uVar4 + 0x1f)) {
    uVar1 = param_6;
  }
  if ((uVar6 & 1) == 0) {
    dVar7 = (double)(iVar5 >> 1);
  }
  else {
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
      return 1;
    }
    dVar7 = *(double *)(uVar6 + 3);
  }
  if ((((dVar7 <= 2147483647.0) && (-2147483648.0 <= dVar7)) &&
      ((ABS(dVar7) != INFINITY && ((!NAN(ABS(dVar7)) && (param_5 < uVar1)))))) &&
     (dVar7 == (double)(int)dVar7)) {
    do {
      if (*(int *)(*(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f) + param_5 * 4) ==
          (int)dVar7) {
        return 0x101;
      }
      param_5 = param_5 + 1;
    } while (param_5 < uVar1);
  }
  return 1;
}

