
undefined8 * FUN_0011fc98(long *param_1)

{
  char *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  void *pvVar15;
  
  uVar3 = __strlen_chk(&DAT_0012efd2,3);
  pcVar1 = (char *)*param_1;
  pbVar7 = (byte *)param_1[1];
  if ((ulong)((long)pbVar7 - (long)pcVar1) < uVar3) {
LAB_0011fd68:
    uVar3 = __strlen_chk(&DAT_0012efd5,3);
    pcVar1 = (char *)*param_1;
    pbVar7 = (byte *)param_1[1];
    if ((ulong)((long)pbVar7 - (long)pcVar1) < uVar3) {
      return (undefined8 *)0x0;
    }
    if (uVar3 != 0) {
      pcVar8 = "fL";
      uVar9 = uVar3;
      pcVar11 = pcVar1;
      do {
        if (*pcVar8 != *pcVar11) {
          return (undefined8 *)0x0;
        }
        pcVar8 = pcVar8 + 1;
        uVar9 = uVar9 - 1;
        pcVar11 = pcVar11 + 1;
      } while (uVar9 != 0);
    }
    pbVar14 = (byte *)(pcVar1 + uVar3);
    *param_1 = (long)pbVar14;
    if ((pbVar7 == pbVar14) || (9 < *pbVar14 - 0x30)) {
      pbVar10 = (byte *)0x0;
      pbVar12 = pbVar14;
      pbVar13 = (byte *)0x0;
    }
    else {
      pbVar12 = (byte *)(pcVar1 + uVar3);
      do {
        pbVar12 = pbVar12 + 1;
        *param_1 = (long)pbVar12;
        pbVar10 = pbVar14;
        pbVar13 = pbVar7;
        if (pbVar7 == pbVar12) break;
        pbVar13 = pbVar12;
      } while (*pbVar12 - 0x30 < 10);
    }
    if (pbVar10 == pbVar13) {
      return (undefined8 *)0x0;
    }
    if (pbVar12 == pbVar7) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 != 0x70) {
      return (undefined8 *)0x0;
    }
    pbVar10 = pbVar12 + 1;
    *param_1 = (long)pbVar10;
    pbVar14 = pbVar7;
    if (pbVar10 != pbVar7) {
      if (*pbVar10 == 0x72) {
        pbVar10 = pbVar12 + 2;
        *param_1 = (long)pbVar10;
      }
      pbVar14 = pbVar10;
      if (pbVar10 != pbVar7) {
        if (*pbVar10 == 0x56) {
          pbVar10 = pbVar10 + 1;
          *param_1 = (long)pbVar10;
        }
        pbVar14 = pbVar10;
        if ((pbVar10 != pbVar7) && (*pbVar10 == 0x4b)) {
          *param_1 = (long)(pbVar10 + 1);
          pbVar14 = pbVar10 + 1;
        }
      }
    }
    pbVar12 = pbVar14;
    if ((pbVar7 != pbVar14) && (*pbVar14 - 0x30 < 10)) {
      pbVar10 = pbVar14 + 1;
      do {
        pbVar12 = pbVar10;
        *param_1 = (long)pbVar12;
        if (pbVar7 == pbVar12) goto LAB_0011ffdc;
        pbVar10 = pbVar12 + 1;
      } while (*pbVar12 - 0x30 < 10);
LAB_0011fe5c:
      bVar2 = pbVar12 == pbVar7;
      pbVar7 = pbVar10 + -1;
      if (bVar2) {
        return (undefined8 *)0x0;
      }
      goto LAB_0011ff6c;
    }
  }
  else {
    if (uVar3 != 0) {
      pcVar8 = "fp";
      uVar9 = uVar3;
      pcVar11 = pcVar1;
      do {
        if (*pcVar8 != *pcVar11) goto LAB_0011fd68;
        pcVar8 = pcVar8 + 1;
        uVar9 = uVar9 - 1;
        pcVar11 = pcVar11 + 1;
      } while (uVar9 != 0);
    }
    pbVar14 = (byte *)(pcVar1 + uVar3);
    *param_1 = (long)pbVar14;
    pbVar12 = pbVar7;
    if (pbVar14 != pbVar7) {
      if (*pbVar14 == 0x72) {
        pbVar14 = pbVar14 + 1;
        *param_1 = (long)pbVar14;
      }
      if (pbVar14 != pbVar7) {
        if (*pbVar14 == 0x56) {
          pbVar14 = pbVar14 + 1;
          *param_1 = (long)pbVar14;
        }
        if (pbVar14 != pbVar7) {
          if (*pbVar14 == 0x4b) {
            pbVar14 = pbVar14 + 1;
            *param_1 = (long)pbVar14;
          }
          pbVar12 = pbVar14;
          if ((pbVar7 != pbVar14) && (*pbVar14 - 0x30 < 10)) {
            pbVar10 = pbVar14 + 1;
            do {
              pbVar12 = pbVar10;
              *param_1 = (long)pbVar12;
              if (pbVar7 == pbVar12) goto LAB_0011ffdc;
              pbVar10 = pbVar12 + 1;
            } while (*pbVar12 - 0x30 < 10);
            goto LAB_0011fe5c;
          }
        }
      }
    }
  }
  pbVar14 = (byte *)0x0;
  bVar2 = pbVar12 == pbVar7;
  pbVar7 = (byte *)0x0;
  if (bVar2) {
    return (undefined8 *)0x0;
  }
LAB_0011ff6c:
  if (*pbVar12 != 0x5f) {
    return (undefined8 *)0x0;
  }
  pvVar15 = (void *)param_1[0x25c];
  *param_1 = (long)(pbVar12 + 1);
  lVar6 = *(long *)((long)pvVar15 + 8);
  puVar4 = pvVar15;
  if (0xfef < lVar6 + 0x20U) {
    puVar4 = malloc(0x1000);
    if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar4 = pvVar15;
    puVar4[1] = 0;
    param_1[0x25c] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
  puVar5 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
  *puVar5 = &PTR_FUN_001373a8;
  *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010136;
  *(byte **)((long)puVar4 + lVar6 + 0x20) = pbVar14;
  *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar7;
  return puVar5;
LAB_0011ffdc:
  if (pbVar12 == pbVar7) {
    return (undefined8 *)0x0;
  }
  goto LAB_0011ff6c;
}

