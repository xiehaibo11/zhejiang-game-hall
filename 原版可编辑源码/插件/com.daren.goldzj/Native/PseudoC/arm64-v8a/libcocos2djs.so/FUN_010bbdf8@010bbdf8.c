
undefined8
FUN_010bbdf8(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
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
      bVar3 = false;
    }
    else {
      bVar3 = iVar6 == *(int *)(param_2 + 0xa0);
    }
    uVar4 = 0x101;
    if (!(bool)(param_5 < param_6 & bVar3)) {
      uVar4 = 1;
    }
    return uVar4;
  }
  if ((((uVar7 & 1) == 0) || (iVar6 != *(int *)(param_2 + 0xa0))) ||
     (param_6 <= *(ulong *)(uVar5 + 0x1f))) {
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
      if (dVar8 < -3.4028234663852886e+38) {
        return 1;
      }
      if (3.4028234663852886e+38 < dVar8) {
        return 1;
      }
    }
    else if (NAN(dVar8)) {
      while( true ) {
        if (uVar2 <= param_5) {
          return 1;
        }
        if (NAN(*(float *)(lVar1 + param_5 * 4))) break;
        param_5 = param_5 + 1;
      }
      goto LAB_010bbf64;
    }
    uVar4 = 1;
    if ((param_5 < uVar2) && (dVar8 == (double)(float)dVar8)) {
      uVar4 = 1;
      do {
        if (*(float *)(lVar1 + param_5 * 4) == (float)dVar8) goto LAB_010bbf64;
        param_5 = param_5 + 1;
      } while (param_5 < uVar2);
    }
  }
  else {
LAB_010bbf64:
    uVar4 = 0x101;
  }
  return uVar4;
}

