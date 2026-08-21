
void FUN_011422d0(int *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  
  pbVar4 = (byte *)(param_2 + 3);
  iVar5 = 8;
  bVar6 = 0xff;
  do {
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[-3] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[-3] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[-2] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[-2] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[-1] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[-1] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)*pbVar4 + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    *pbVar4 = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[1] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[1] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[2] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[2] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[3] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[3] = bVar7;
    iVar2 = param_1[(long)param_1[1] + 2];
    iVar3 = param_1[(long)*param_1 + 2];
    param_1[(long)*param_1 + 2] = iVar3 - iVar2 & 0x7fffffff;
    iVar1 = 0;
    if (*param_1 != 0x36) {
      iVar1 = *param_1 + 1;
    }
    *param_1 = iVar1;
    iVar1 = 0;
    if (param_1[1] != 0x36) {
      iVar1 = param_1[1] + 1;
    }
    param_1[1] = iVar1;
    iVar1 = (uint)pbVar4[4] + ((((iVar3 - iVar2) * 2 >> 0x17) * param_4 >> 8) + 8 >> 4);
    if (iVar1 < 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = bVar6;
      if (iVar1 < 0x100) {
        bVar7 = (byte)iVar1;
      }
    }
    pbVar4[4] = bVar7;
    iVar5 = iVar5 + -1;
    pbVar4 = pbVar4 + param_3;
  } while (iVar5 != 0);
  return;
}

