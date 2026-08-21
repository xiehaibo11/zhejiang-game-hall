
undefined8 * FUN_00150d88(long *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  
  pcVar1 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*pcVar1 != 'f') {
    return (undefined8 *)0x0;
  }
  if (pcVar1[1] == 'p') {
    pbVar9 = (byte *)(pcVar1 + 2);
    *param_1 = (long)pbVar9;
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x72) {
      pbVar9 = (byte *)(pcVar1 + 3);
      *param_1 = (long)pbVar9;
    }
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x56) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
    }
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x4b) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
    }
    if (pbVar2 == pbVar9) {
      return (undefined8 *)0x0;
    }
    pbVar6 = pbVar9;
    if (*pbVar9 - 0x30 < 10) {
      do {
        pbVar6 = pbVar6 + 1;
        *param_1 = (long)pbVar6;
        pbVar7 = pbVar2;
        if (pbVar6 == pbVar2) break;
        pbVar7 = pbVar6;
      } while (*pbVar6 - 0x30 < 10);
    }
    else {
      pbVar9 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
    }
  }
  else {
    if (*pcVar1 != 'f') {
      return (undefined8 *)0x0;
    }
    if (pcVar1[1] != 'L') {
      return (undefined8 *)0x0;
    }
    pbVar9 = (byte *)(pcVar1 + 2);
    *param_1 = (long)pbVar9;
    if (pbVar2 == pbVar9) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar9 - 0x30) {
      return (undefined8 *)0x0;
    }
    pbVar6 = (byte *)(pcVar1 + 5);
    do {
      pbVar8 = pbVar6;
      pbVar7 = pbVar8 + -2;
      *param_1 = (long)pbVar7;
      pbVar6 = pbVar2;
      if (pbVar7 == pbVar2) goto LAB_00150eec;
      pbVar6 = pbVar8 + 1;
    } while (pbVar8[-2] - 0x30 < 10);
    pbVar6 = pbVar8 + -2;
LAB_00150eec:
    if (pbVar9 == pbVar6) {
      return (undefined8 *)0x0;
    }
    if (pbVar7 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (pbVar8[-2] != 0x70) {
      return (undefined8 *)0x0;
    }
    pbVar9 = pbVar8 + -1;
    *param_1 = (long)pbVar9;
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x72) {
      *param_1 = (long)pbVar8;
      pbVar9 = pbVar8;
    }
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x56) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
    }
    if (pbVar9 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar9 == 0x4b) {
      pbVar9 = pbVar9 + 1;
      *param_1 = (long)pbVar9;
    }
    if (pbVar2 == pbVar9) {
      return (undefined8 *)0x0;
    }
    pbVar6 = pbVar9;
    if (*pbVar9 - 0x30 < 10) {
      do {
        pbVar6 = pbVar6 + 1;
        *param_1 = (long)pbVar6;
        pbVar7 = pbVar2;
        if (pbVar6 == pbVar2) break;
        pbVar7 = pbVar6;
      } while (*pbVar6 - 0x30 < 10);
    }
    else {
      pbVar9 = (byte *)0x0;
      pbVar7 = (byte *)0x0;
    }
  }
  if ((pbVar6 != pbVar2) && (*pbVar6 == 0x5f)) {
    pvVar10 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar6 + 1);
    lVar5 = *(long *)((long)pvVar10 + 8);
    puVar3 = pvVar10;
    if (0xfef < lVar5 + 0x20U) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = 0;
      *puVar3 = pvVar10;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    puVar4 = (undefined8 *)((long)puVar3 + lVar5 + 0x10);
    *puVar4 = &PTR_FUN_001679d0;
    *(long *)((long)puVar3 + 8) = lVar5 + 0x20;
    *(undefined4 *)((long)puVar3 + lVar5 + 0x18) = 0x101013b;
    *(byte **)((long)puVar3 + lVar5 + 0x20) = pbVar9;
    *(byte **)((long)puVar3 + lVar5 + 0x28) = pbVar7;
    return puVar4;
  }
  return (undefined8 *)0x0;
}

