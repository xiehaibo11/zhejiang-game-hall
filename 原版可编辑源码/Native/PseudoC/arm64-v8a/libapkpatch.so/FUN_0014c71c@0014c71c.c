
undefined4 FUN_0014c71c(long *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar4 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar4 == pbVar1) {
    return 1;
  }
  pbVar7 = pbVar1;
  if (*pbVar4 == 0x68) {
    pbVar3 = pbVar4 + 1;
    *param_1 = (long)pbVar3;
    if (pbVar3 == pbVar1) {
      return 1;
    }
    pbVar5 = pbVar4 + 1;
    if (*pbVar3 == 0x6e) {
      pbVar5 = pbVar4 + 2;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 == pbVar5) {
      return 1;
    }
    if (9 < *pbVar5 - 0x30) {
      return 1;
    }
    pbVar4 = pbVar5 + 1;
    do {
      pbVar5 = pbVar4;
      *param_1 = (long)pbVar5;
      if (pbVar5 == pbVar1) goto LAB_0014c8b8;
      pbVar4 = pbVar5 + 1;
    } while (*pbVar5 - 0x30 < 10);
  }
  else {
    if (*pbVar4 != 0x76) {
      return 1;
    }
    pbVar3 = pbVar4 + 1;
    *param_1 = (long)pbVar3;
    if (pbVar3 == pbVar1) {
      return 1;
    }
    pbVar5 = pbVar4 + 1;
    if (*pbVar3 == 0x6e) {
      pbVar5 = pbVar4 + 2;
      *param_1 = (long)pbVar5;
    }
    if (pbVar1 == pbVar5) {
      return 1;
    }
    if (9 < *pbVar5 - 0x30) {
      return 1;
    }
    do {
      pbVar6 = pbVar5;
      pbVar5 = pbVar6 + 1;
      *param_1 = (long)pbVar5;
      pbVar4 = pbVar1;
      if (pbVar5 == pbVar1) break;
      pbVar4 = pbVar5;
    } while (*pbVar5 - 0x30 < 10);
    if (pbVar3 == pbVar4) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    if (*pbVar5 != 0x5f) {
      return 1;
    }
    pbVar3 = pbVar6 + 2;
    *param_1 = (long)pbVar3;
    if (pbVar3 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar6 + 2;
    if (*pbVar3 == 0x6e) {
      pbVar4 = pbVar6 + 3;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (9 < *pbVar4 - 0x30) {
      return 1;
    }
    pbVar4 = pbVar4 + 1;
    do {
      pbVar5 = pbVar4;
      *param_1 = (long)pbVar5;
      if (pbVar5 == pbVar1) goto LAB_0014c8b8;
      pbVar4 = pbVar5 + 1;
    } while (*pbVar5 - 0x30 < 10);
  }
  pbVar7 = pbVar4 + -1;
LAB_0014c8b8:
  uVar2 = 1;
  if ((pbVar3 != pbVar7) && (pbVar5 != pbVar1)) {
    if (*pbVar5 != 0x5f) {
      return 1;
    }
    uVar2 = 0;
    *param_1 = (long)(pbVar5 + 1);
  }
  return uVar2;
}

