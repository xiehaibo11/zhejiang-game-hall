
undefined8
FUN_010bdc00(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  double dVar8;
  
  uVar5 = *param_3;
  uVar7 = *param_4;
  iVar6 = (int)uVar7;
  if ((*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0x1b) >> 2 & 1) != 0
     ) {
    if ((uVar7 & 1) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = iVar6 == *(int *)(param_2 + 0xa0);
    }
    uVar3 = 0x101;
    if (!(bool)(param_5 < param_6 & bVar4)) {
      uVar3 = 1;
    }
    return uVar3;
  }
  if ((((uVar7 & 1) != 0) && (iVar6 == *(int *)(param_2 + 0xa0))) &&
     (*(ulong *)(uVar5 + 0x1f) < param_6)) {
    return 0x101;
  }
  uVar2 = *(ulong *)(uVar5 + 0x1f);
  if (param_6 <= *(ulong *)(uVar5 + 0x1f)) {
    uVar2 = param_6;
  }
  if ((uVar7 & 1) == 0) {
    dVar8 = (double)(iVar6 >> 1);
  }
  else {
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
      return 1;
    }
    dVar8 = *(double *)(uVar7 + 3);
  }
  lVar1 = *(long *)(uVar5 + 0x27) + (ulong)*(uint *)(uVar5 + 0x2f);
  if ((ABS(dVar8) < INFINITY) || (ABS(dVar8) != INFINITY)) {
    if (uVar2 <= param_5) {
      return 1;
    }
    if (dVar8 < -1.7976931348623157e+308) {
      return 1;
    }
    if (1.7976931348623157e+308 < dVar8) {
      return 1;
    }
  }
  else {
    if (NAN(dVar8)) {
      while( true ) {
        if (uVar2 <= param_5) {
          return 1;
        }
        if (NAN(*(double *)(lVar1 + param_5 * 8))) break;
        param_5 = param_5 + 1;
      }
      return 0x101;
    }
    if (uVar2 <= param_5) {
      return 1;
    }
  }
  do {
    if (*(double *)(lVar1 + param_5 * 8) == dVar8) {
      return 0x101;
    }
    param_5 = param_5 + 1;
  } while (param_5 < uVar2);
  return 1;
}

