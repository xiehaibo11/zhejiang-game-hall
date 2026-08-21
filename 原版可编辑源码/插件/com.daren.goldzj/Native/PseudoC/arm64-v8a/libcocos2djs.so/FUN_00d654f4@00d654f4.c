
undefined4 FUN_00d654f4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  iVar6 = *param_2;
  iVar9 = param_2[1] + iVar6 + param_2[2];
  if (iVar9 == 0) {
    return 1;
  }
  iVar5 = 0;
  if (iVar6 != 0) {
    dVar10 = (double)(long)(((double)iVar6 * 100000.0) / (double)iVar9 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar5 = (int)dVar10;
  }
  *param_1 = iVar5;
  iVar6 = 0;
  if (param_2[1] != 0) {
    dVar10 = (double)(long)(((double)param_2[1] * 100000.0) / (double)iVar9 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar6 = (int)dVar10;
  }
  param_1[1] = iVar6;
  iVar5 = param_2[3];
  iVar6 = param_2[4] + iVar5 + param_2[5];
  if (iVar6 == 0) {
    return 1;
  }
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar7 = 0;
  if (iVar5 != 0) {
    dVar10 = (double)(long)(((double)iVar5 * 100000.0) / (double)iVar6 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar7 = (int)dVar10;
  }
  param_1[2] = iVar7;
  iVar5 = 0;
  if (param_2[4] != 0) {
    dVar10 = (double)(long)(((double)param_2[4] * 100000.0) / (double)iVar6 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar5 = (int)dVar10;
  }
  param_1[3] = iVar5;
  iVar7 = param_2[6];
  iVar5 = param_2[7] + iVar7 + param_2[8];
  if (iVar5 == 0) {
    return 1;
  }
  iVar2 = param_2[3];
  iVar4 = param_2[4];
  iVar8 = 0;
  if (iVar7 != 0) {
    dVar10 = (double)(long)(((double)iVar7 * 100000.0) / (double)iVar5 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar8 = (int)dVar10;
  }
  param_1[4] = iVar8;
  iVar7 = 0;
  if (param_2[7] != 0) {
    dVar10 = (double)(long)(((double)param_2[7] * 100000.0) / (double)iVar5 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar7 = (int)dVar10;
  }
  iVar5 = iVar6 + iVar9 + iVar5;
  param_1[5] = iVar7;
  if (iVar5 == 0) {
    return 1;
  }
  iVar9 = iVar2 + iVar1 + param_2[6];
  iVar6 = 0;
  if (iVar9 != 0) {
    dVar10 = (double)(long)(((double)iVar9 * 100000.0) / (double)iVar5 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar6 = (int)dVar10;
  }
  iVar9 = iVar4 + iVar3 + param_2[7];
  param_1[6] = iVar6;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    dVar10 = (double)(long)(((double)iVar9 * 100000.0) / (double)iVar5 + 0.5);
    if (2147483647.0 < dVar10) {
      return 1;
    }
    if (dVar10 < -2147483648.0) {
      return 1;
    }
    iVar9 = (int)dVar10;
  }
  param_1[7] = iVar9;
  return 0;
}

