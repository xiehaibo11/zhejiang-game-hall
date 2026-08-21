
undefined4 FUN_0183c534(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar4 == pbVar1) {
    return 1;
  }
  if (*pbVar4 != 0x68) {
    if (*pbVar4 != 0x76) {
      return 1;
    }
    pbVar2 = pbVar4 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      pbVar3 = pbVar1;
      if (pbVar2 != pbVar1) goto LAB_0183c688;
LAB_0183c6c4:
      pbVar2 = (byte *)0x0;
      pbVar4 = pbVar3;
      pbVar5 = (byte *)0x0;
    }
    else {
      pbVar3 = pbVar2;
      if (*pbVar2 == 0x6e) {
        pbVar3 = pbVar4 + 2;
        *param_1 = (long)pbVar3;
      }
      if (pbVar3 == pbVar1) goto LAB_0183c6c4;
LAB_0183c688:
      if (9 < *pbVar3 - 0x30) goto LAB_0183c6c4;
      do {
        pbVar3 = pbVar3 + 1;
        *param_1 = (long)pbVar3;
        pbVar4 = pbVar1;
        pbVar5 = pbVar1;
        if (pbVar1 == pbVar3) break;
        pbVar4 = pbVar3;
        pbVar5 = pbVar3;
      } while (*pbVar3 - 0x30 < 10);
    }
    if (pbVar2 == pbVar5) {
      return 1;
    }
    if (pbVar4 == pbVar1) {
      return 1;
    }
    if (*pbVar4 != 0x5f) {
      return 1;
    }
    pbVar2 = pbVar4 + 1;
    *param_1 = (long)pbVar2;
    pbVar3 = pbVar1;
    if ((pbVar2 == pbVar1) || (pbVar3 = pbVar2, *pbVar2 != 0x6e)) {
      if (pbVar2 != pbVar1) goto LAB_0183c75c;
LAB_0183c798:
      pbVar2 = (byte *)0x0;
      pbVar5 = (byte *)0x0;
      pbVar4 = pbVar3;
    }
    else {
      pbVar3 = pbVar4 + 2;
      *param_1 = (long)pbVar3;
      if (pbVar3 == pbVar1) goto LAB_0183c798;
LAB_0183c75c:
      if (9 < *pbVar3 - 0x30) goto LAB_0183c798;
      do {
        pbVar3 = pbVar3 + 1;
        *param_1 = (long)pbVar3;
        pbVar5 = pbVar1;
        pbVar4 = pbVar1;
        if (pbVar1 == pbVar3) break;
        pbVar5 = pbVar3;
        pbVar4 = pbVar3;
      } while (*pbVar3 - 0x30 < 10);
    }
    if (pbVar2 == pbVar5) {
      return 1;
    }
    if (pbVar4 == pbVar1) {
      return 1;
    }
    if (*pbVar4 != 0x5f) {
      return 1;
    }
    goto LAB_0183c664;
  }
  pbVar2 = pbVar4 + 1;
  *param_1 = (long)pbVar2;
  if (pbVar2 == pbVar1) {
    pbVar3 = pbVar1;
    if (pbVar2 != pbVar1) goto LAB_0183c5f8;
LAB_0183c634:
    pbVar2 = (byte *)0x0;
    pbVar4 = pbVar3;
    pbVar5 = (byte *)0x0;
  }
  else {
    pbVar3 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar3 = pbVar4 + 2;
      *param_1 = (long)pbVar3;
    }
    if (pbVar3 == pbVar1) goto LAB_0183c634;
LAB_0183c5f8:
    if (9 < *pbVar3 - 0x30) goto LAB_0183c634;
    do {
      pbVar3 = pbVar3 + 1;
      *param_1 = (long)pbVar3;
      pbVar4 = pbVar1;
      pbVar5 = pbVar1;
      if (pbVar1 == pbVar3) break;
      pbVar4 = pbVar3;
      pbVar5 = pbVar3;
    } while (*pbVar3 - 0x30 < 10);
  }
  if (pbVar2 == pbVar5) {
    return 1;
  }
  if (pbVar4 == pbVar1) {
    return 1;
  }
  if (*pbVar4 != 0x5f) {
    return 1;
  }
LAB_0183c664:
  *param_1 = (long)(pbVar4 + 1);
  return 0;
}

