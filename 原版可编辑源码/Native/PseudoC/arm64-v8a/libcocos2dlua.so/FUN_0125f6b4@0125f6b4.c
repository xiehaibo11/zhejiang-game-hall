
undefined8 * FUN_0125f6b4(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  
  if (((byte *)param_1[1] == (byte *)*param_1) || (9 < *(byte *)*param_1 - 0x30)) {
    uVar4 = __strlen_chk(&DAT_014a8061,3);
    pcVar2 = (char *)*param_1;
    if (uVar4 <= (ulong)(param_1[1] - (long)pcVar2)) {
      if (uVar4 != 0) {
        pcVar9 = "dn";
        uVar10 = uVar4;
        pcVar11 = pcVar2;
        do {
          if (*pcVar9 != *pcVar11) goto LAB_0125f808;
          pcVar9 = pcVar9 + 1;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar11 + 1;
        } while (uVar10 != 0);
      }
      pbVar1 = (byte *)(pcVar2 + uVar4);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] == pbVar1) || (9 < *pbVar1 - 0x30)) {
        puVar3 = (undefined8 *)FUN_0125f62c(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        puVar6 = (undefined8 *)FUN_0125f98c(param_1);
        if (puVar6 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar3 = puVar6;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar5 = FUN_01258568(param_1,0);
          if (lVar5 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar12 = (void *)param_1[0x25c];
          lVar7 = *(long *)((long)pvVar12 + 8);
          puVar8 = pvVar12;
          if (0xfef < lVar7 + 0x20U) {
            puVar8 = malloc(0x1000);
            if (puVar8 == (void *)0x0) goto LAB_0125f988;
            lVar7 = 0;
            *puVar8 = pvVar12;
            puVar8[1] = 0;
            param_1[0x25c] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
          puVar3 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
          *puVar3 = &PTR_FUN_01736d78;
          *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar6;
          *(long *)((long)puVar8 + lVar7 + 0x28) = lVar5;
          *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010120;
        }
      }
      pvVar12 = (void *)param_1[0x25c];
      lVar5 = *(long *)((long)pvVar12 + 8);
      puVar6 = pvVar12;
      if (lVar5 + 0x20U < 0xff0) {
LAB_0125f944:
        *(long *)((long)puVar6 + 8) = lVar5 + 0x20;
        puVar8 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
        *puVar8 = &PTR_FUN_017361a8;
        *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010126;
        *(undefined8 **)((long)puVar6 + lVar5 + 0x20) = puVar3;
        return puVar8;
      }
      puVar6 = malloc(0x1000);
      if (puVar6 != (void *)0x0) {
        lVar5 = 0;
        *puVar6 = pvVar12;
        puVar6[1] = 0;
        param_1[0x25c] = (long)puVar6;
        goto LAB_0125f944;
      }
      goto LAB_0125f988;
    }
LAB_0125f808:
    uVar4 = __strlen_chk("on",3);
    pcVar2 = (char *)*param_1;
    if (uVar4 <= (ulong)(param_1[1] - (long)pcVar2)) {
      if (uVar4 != 0) {
        pcVar9 = "on";
        uVar10 = uVar4;
        pcVar11 = pcVar2;
        do {
          if (*pcVar9 != *pcVar11) goto LAB_0125f864;
          pcVar9 = pcVar9 + 1;
          uVar10 = uVar10 - 1;
          pcVar11 = pcVar11 + 1;
        } while (uVar10 != 0);
      }
      *param_1 = (long)(pcVar2 + uVar4);
    }
LAB_0125f864:
    puVar3 = (undefined8 *)FUN_0125fc44(param_1,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_0125f98c(param_1);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)param_1[1] == (char *)*param_1) {
    return puVar3;
  }
  if (*(char *)*param_1 != 'I') {
    return puVar3;
  }
  lVar5 = FUN_01258568(param_1,0);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar12 = (void *)param_1[0x25c];
  lVar7 = *(long *)((long)pvVar12 + 8);
  puVar6 = pvVar12;
  if (0xfef < lVar7 + 0x20U) {
    puVar6 = malloc(0x1000);
    if (puVar6 == (void *)0x0) {
LAB_0125f988:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = 0;
    *puVar6 = pvVar12;
    puVar6[1] = 0;
    param_1[0x25c] = (long)puVar6;
  }
  *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
  puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
  *puVar8 = &PTR_FUN_01736d78;
  *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = puVar3;
  *(long *)((long)puVar6 + lVar7 + 0x28) = lVar5;
  *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010120;
  return puVar8;
}

