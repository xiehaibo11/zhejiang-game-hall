
undefined4 FUN_01257d3c(long *param_1)

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
      if (pbVar3 != pbVar1) goto LAB_01257e6c;
LAB_01257ea8:
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
      if (pbVar4 == pbVar1) goto LAB_01257ea8;
LAB_01257e6c:
      if (9 < *pbVar4 - 0x30) goto LAB_01257ea8;
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
      if (pbVar3 != pbVar1) goto LAB_01257f34;
LAB_01257f70:
      pbVar3 = (byte *)0x0;
      pbVar6 = (byte *)0x0;
      pbVar5 = pbVar4;
    }
    else {
      pbVar4 = pbVar5 + 2;
      *param_1 = (long)pbVar4;
      if (pbVar4 == pbVar1) goto LAB_01257f70;
LAB_01257f34:
      if (9 < *pbVar4 - 0x30) goto LAB_01257f70;
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
    goto joined_r0x01257f94;
  }
  pbVar3 = pbVar5 + 1;
  *param_1 = (long)pbVar3;
  if (pbVar3 == pbVar1) {
    pbVar4 = pbVar1;
    if (pbVar3 != pbVar1) goto LAB_01257de8;
LAB_01257e24:
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
    if (pbVar4 == pbVar1) goto LAB_01257e24;
LAB_01257de8:
    if (9 < *pbVar4 - 0x30) goto LAB_01257e24;
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
joined_r0x01257f94:
  if (bVar2 == 0x5f) {
    *param_1 = (long)(pbVar5 + 1);
    return 0;
  }
  return 1;
}

