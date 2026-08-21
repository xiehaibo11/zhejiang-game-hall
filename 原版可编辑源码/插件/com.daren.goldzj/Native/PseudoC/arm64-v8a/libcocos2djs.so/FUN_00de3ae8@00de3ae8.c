
undefined4 FUN_00de3ae8(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_38;
  int local_34;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (param_1 == (int *)0x0) {
    param_2[0x1d] = 0;
  }
  else {
    iVar5 = param_1[2];
    param_2[0x1d] = (uint)(0 < iVar5);
    if (0 < iVar5) {
      iVar5 = param_1[6];
      uVar6 = param_1[3];
      uVar7 = param_1[4];
      if (10 < param_3) {
        uVar6 = param_1[3] & 0xfffffffe;
        uVar7 = param_1[4] & 0xfffffffe;
      }
      if (iVar2 < (int)(uVar7 + iVar5)) {
        return 0;
      }
      iVar3 = param_1[5];
      if (iVar1 < (int)(uVar6 + iVar3)) {
        return 0;
      }
      if (iVar5 < 1) {
        return 0;
      }
      if (iVar3 < 1) {
        return 0;
      }
      if ((int)(uVar7 | uVar6) < 0) {
        return 0;
      }
      goto LAB_00de3b9c;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  iVar3 = iVar1;
  iVar5 = iVar2;
LAB_00de3b9c:
  param_2[0x1e] = uVar6;
  param_2[0x1f] = iVar3 + uVar6;
  param_2[0x20] = uVar7;
  param_2[0x21] = iVar5 + uVar7;
  param_2[3] = iVar3;
  param_2[4] = iVar5;
  if (param_1 == (int *)0x0) {
    param_2[0x22] = 0;
    param_2[0x1c] = 0;
    param_2[0x16] = 1;
  }
  else {
    iVar4 = param_1[7];
    uVar6 = (uint)(0 < iVar4);
    param_2[0x22] = (uint)(0 < iVar4);
    if (0 < iVar4) {
      local_34 = param_1[8];
      local_38 = param_1[9];
      iVar5 = FUN_00de3d78(iVar3,iVar5,&local_34,&local_38);
      if (iVar5 == 0) {
        return 0;
      }
      param_2[0x23] = local_34;
      param_2[0x24] = local_38;
      uVar6 = param_2[0x22];
    }
    param_2[0x1c] = (uint)(*param_1 != 0);
    param_2[0x16] = (uint)(param_1[1] == 0);
    if (uVar6 != 0) {
      iVar1 = iVar1 * 3;
      iVar5 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      if (param_2[0x23] < iVar5 >> 2) {
        iVar2 = iVar2 * 3;
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        uVar6 = (uint)(param_2[0x24] < iVar1 >> 2);
      }
      else {
        uVar6 = 0;
      }
      param_2[0x1c] = uVar6;
      param_2[0x16] = 0;
    }
  }
  return 1;
}

