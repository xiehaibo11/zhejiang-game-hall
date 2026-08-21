
undefined4 FUN_0011b998(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar5 == pbVar1) {
    return 1;
  }
  if (*pbVar5 != 0x68) {
    if (*pbVar5 != 0x76) {
      return 1;
    }
    pbVar3 = pbVar5 + 1;
    *param_1 = (long)pbVar3;
    if (pbVar3 == pbVar1) {
      pbVar4 = pbVar1;
      if (pbVar3 != pbVar1) goto LAB_0011bac8;
LAB_0011bb04:
      pbVar3 = (byte *)0x0;
      pbVar5 = pbVar4;
      pbVar6 = (byte *)0x0;
    }
    else {
      pbVar4 = pbVar3;
      if (*pbVar3 == 0x6e) {
        pbVar4 = pbVar5 + 2;
        *param_1 = (long)pbVar4;
      }
      if (pbVar4 == pbVar1) goto LAB_0011bb04;
LAB_0011bac8:
      if (9 < *pbVar4 - 0x30) goto LAB_0011bb04;
      do {
        pbVar4 = pbVar4 + 1;
        *param_1 = (long)pbVar4;
        pbVar5 = pbVar1;
        pbVar6 = pbVar1;
        if (pbVar1 == pbVar4) break;
        pbVar5 = pbVar4;
        pbVar6 = pbVar4;
      } while (*pbVar4 - 0x30 < 10);
    }
    if (pbVar3 == pbVar6) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    if (*pbVar5 != 0x5f) {
      return 1;
    }
    pbVar3 = pbVar5 + 1;
    *param_1 = (long)pbVar3;
    pbVar4 = pbVar1;
    if ((pbVar3 == pbVar1) || (pbVar4 = pbVar3, *pbVar3 != 0x6e)) {
      if (pbVar3 != pbVar1) goto LAB_0011bb90;
LAB_0011bbcc:
      pbVar3 = (byte *)0x0;
      pbVar6 = (byte *)0x0;
      pbVar5 = pbVar4;
    }
    else {
      pbVar4 = pbVar5 + 2;
      *param_1 = (long)pbVar4;
      if (pbVar4 == pbVar1) goto LAB_0011bbcc;
LAB_0011bb90:
      if (9 < *pbVar4 - 0x30) goto LAB_0011bbcc;
      do {
        pbVar4 = pbVar4 + 1;
        *param_1 = (long)pbVar4;
        pbVar6 = pbVar1;
        pbVar5 = pbVar1;
        if (pbVar1 == pbVar4) break;
        pbVar6 = pbVar4;
        pbVar5 = pbVar4;
      } while (*pbVar4 - 0x30 < 10);
    }
    if (pbVar3 == pbVar6) {
      return 1;
    }
    if (pbVar5 == pbVar1) {
      return 1;
    }
    bVar2 = *pbVar5;
    goto joined_r0x0011bbf0;
  }
  pbVar3 = pbVar5 + 1;
  *param_1 = (long)pbVar3;
  if (pbVar3 == pbVar1) {
    pbVar4 = pbVar1;
    if (pbVar3 != pbVar1) goto LAB_0011ba44;
LAB_0011ba80:
    pbVar3 = (byte *)0x0;
    pbVar5 = pbVar4;
    pbVar6 = (byte *)0x0;
  }
  else {
    pbVar4 = pbVar3;
    if (*pbVar3 == 0x6e) {
      pbVar4 = pbVar5 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar4 == pbVar1) goto LAB_0011ba80;
LAB_0011ba44:
    if (9 < *pbVar4 - 0x30) goto LAB_0011ba80;
    do {
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar5 = pbVar1;
      pbVar6 = pbVar1;
      if (pbVar1 == pbVar4) break;
      pbVar5 = pbVar4;
      pbVar6 = pbVar4;
    } while (*pbVar4 - 0x30 < 10);
  }
  if (pbVar3 == pbVar6) {
    return 1;
  }
  if (pbVar5 == pbVar1) {
    return 1;
  }
  bVar2 = *pbVar5;
joined_r0x0011bbf0:
  if (bVar2 == 0x5f) {
    *param_1 = (long)(pbVar5 + 1);
    return 0;
  }
  return 1;
}

