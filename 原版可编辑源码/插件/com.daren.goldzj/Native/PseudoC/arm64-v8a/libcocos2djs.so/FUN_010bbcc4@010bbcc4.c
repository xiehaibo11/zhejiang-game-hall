
long FUN_010bbcc4(undefined8 param_1,long *param_2,ulong *param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  
  uVar4 = *param_3;
  if ((uVar4 & 1) == 0) {
    fVar9 = (float)((int)uVar4 >> 1);
  }
  else {
    dVar10 = *(double *)(uVar4 + 3);
    if (dVar10 <= 3.4028234663852886e+38) {
      if (-3.4028234663852886e+38 <= dVar10) {
        fVar9 = (float)dVar10;
      }
      else if (-3.4028235677973362e+38 <= dVar10) {
        fVar9 = -3.4028235e+38;
      }
      else {
        fVar9 = -INFINITY;
      }
    }
    else if (dVar10 <= 3.4028235677973362e+38) {
      fVar9 = 3.4028235e+38;
    }
    else {
      fVar9 = INFINITY;
    }
  }
  lVar3 = *param_2;
  lVar1 = *(long *)(lVar3 + 0x27) + (ulong)*(uint *)(lVar3 + 0x2f);
  pfVar5 = (float *)(lVar1 + param_4 * 4);
  uVar4 = (lVar1 + param_5 * 4) - (long)pfVar5;
  if ((long)uVar4 < 1) {
    return lVar3;
  }
  uVar4 = uVar4 >> 2;
  uVar2 = uVar4;
  if (uVar4 == 0) {
    uVar2 = 1;
  }
  if (7 < uVar2) {
    uVar6 = uVar2 & 0x7ffffffffffffff8;
    uVar4 = uVar4 - uVar6;
    puVar7 = (undefined8 *)(lVar1 + param_4 * 4 + 0x10);
    uVar8 = uVar6;
    do {
      puVar7[-1] = CONCAT44(fVar9,fVar9);
      puVar7[-2] = CONCAT44(fVar9,fVar9);
      puVar7[1] = CONCAT44(fVar9,fVar9);
      *puVar7 = CONCAT44(fVar9,fVar9);
      uVar8 = uVar8 - 8;
      puVar7 = puVar7 + 4;
    } while (uVar8 != 0);
    pfVar5 = pfVar5 + uVar6;
    if (uVar2 == uVar6) goto LAB_010bbd50;
  }
  do {
    uVar4 = uVar4 - 1;
    *pfVar5 = fVar9;
    pfVar5 = pfVar5 + 1;
  } while (0 < (long)uVar4);
LAB_010bbd50:
  return *param_2;
}

