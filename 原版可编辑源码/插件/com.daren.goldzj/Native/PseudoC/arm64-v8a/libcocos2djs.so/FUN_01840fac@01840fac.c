
undefined8 * FUN_01840fac(long *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *pvVar14;
  
  pcVar1 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar1) < 2) {
    return (undefined8 *)0x0;
  }
  if (*pcVar1 != 'f') {
    return (undefined8 *)0x0;
  }
  pbVar13 = pbVar2;
  pbVar3 = pbVar2;
  if (pcVar1[1] == 'p') {
    pbVar11 = (byte *)(pcVar1 + 2);
    *param_1 = (long)pbVar11;
    if (pbVar11 == pbVar2) {
joined_r0x018410d8:
      pbVar8 = pbVar13;
      if ((pbVar2 != pbVar13) && (*pbVar13 - 0x30 < 10)) {
        pbVar11 = pbVar13 + 1;
        do {
          pbVar8 = pbVar11;
          *param_1 = (long)pbVar8;
          if (pbVar2 == pbVar8) goto joined_r0x018412b0;
          pbVar11 = pbVar8 + 1;
        } while (*pbVar8 - 0x30 < 10);
        goto LAB_01841114;
      }
    }
    else {
      if (*pbVar11 == 0x72) {
        pbVar11 = (byte *)(pcVar1 + 3);
        *param_1 = (long)pbVar11;
      }
      pbVar8 = pbVar2;
      if (pbVar11 != pbVar2) {
        if (*pbVar11 == 0x56) {
          pbVar11 = pbVar11 + 1;
          *param_1 = (long)pbVar11;
        }
        if (pbVar11 != pbVar2) {
          pbVar13 = pbVar11;
          if (*pbVar11 == 0x4b) {
            *param_1 = (long)(pbVar11 + 1);
            pbVar13 = pbVar11 + 1;
          }
          goto joined_r0x018410d8;
        }
      }
    }
LAB_01841214:
    pbVar13 = (byte *)0x0;
    pbVar3 = (byte *)0x0;
  }
  else {
    if (*pcVar1 != 'f') {
      return (undefined8 *)0x0;
    }
    if (pcVar1[1] != 'L') {
      return (undefined8 *)0x0;
    }
    pbVar11 = (byte *)(pcVar1 + 2);
    *param_1 = (long)pbVar11;
    if ((pbVar2 == pbVar11) || (9 < *pbVar11 - 0x30)) {
      pbVar8 = (byte *)0x0;
      pbVar10 = pbVar11;
      pbVar12 = (byte *)0x0;
    }
    else {
      pbVar4 = (byte *)(pcVar1 + 3);
      do {
        pbVar10 = pbVar4;
        *param_1 = (long)pbVar10;
        pbVar8 = pbVar11;
        pbVar12 = pbVar2;
        if (pbVar2 == pbVar10) break;
        pbVar12 = pbVar10;
        pbVar4 = pbVar10 + 1;
      } while (*pbVar10 - 0x30 < 10);
    }
    if (pbVar8 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (pbVar10 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x70) {
      return (undefined8 *)0x0;
    }
    pbVar11 = pbVar10 + 1;
    *param_1 = (long)pbVar11;
    if (pbVar11 != pbVar2) {
      if (*pbVar11 == 0x72) {
        pbVar11 = pbVar10 + 2;
        *param_1 = (long)pbVar11;
      }
      pbVar13 = pbVar11;
      if (pbVar11 != pbVar2) {
        if (*pbVar11 == 0x56) {
          pbVar11 = pbVar11 + 1;
          *param_1 = (long)pbVar11;
        }
        pbVar13 = pbVar11;
        if ((pbVar11 != pbVar2) && (*pbVar11 == 0x4b)) {
          *param_1 = (long)(pbVar11 + 1);
          pbVar13 = pbVar11 + 1;
        }
      }
    }
    pbVar8 = pbVar13;
    if ((pbVar2 == pbVar13) || (9 < *pbVar13 - 0x30)) goto LAB_01841214;
    pbVar11 = pbVar13 + 1;
    do {
      pbVar8 = pbVar11;
      *param_1 = (long)pbVar8;
      if (pbVar2 == pbVar8) goto joined_r0x018412b0;
      pbVar11 = pbVar8 + 1;
    } while (*pbVar8 - 0x30 < 10);
LAB_01841114:
    pbVar3 = pbVar11 + -1;
  }
joined_r0x018412b0:
  if ((pbVar8 != pbVar2) && (*pbVar8 == 0x5f)) {
    pvVar14 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar7 = (long *)((long)pvVar14 + 8);
    lVar9 = *plVar7;
    puVar5 = pvVar14;
    if (0xfef < lVar9 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar9 = 0;
      *puVar5 = pvVar14;
      plVar7 = puVar5 + 1;
      *plVar7 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    *plVar7 = lVar9 + 0x20;
    puVar6 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
    *puVar6 = &PTR_FUN_01cdff20;
    *(undefined4 *)((long)puVar5 + lVar9 + 0x18) = 0x1010136;
    *(byte **)((long)puVar5 + lVar9 + 0x20) = pbVar13;
    *(byte **)((long)puVar5 + lVar9 + 0x28) = pbVar3;
    return puVar6;
  }
  return (undefined8 *)0x0;
}

