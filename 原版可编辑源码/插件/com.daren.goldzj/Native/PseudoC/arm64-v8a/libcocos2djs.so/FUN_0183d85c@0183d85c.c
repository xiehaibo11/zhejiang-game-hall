
undefined8 * FUN_0183d85c(long *param_1,long *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  
  if ((*(char *)(*param_2 + 8) == '$') && (iVar4 = *(int *)(*param_2 + 0xc), iVar4 - 2U < 4)) {
    pvVar12 = (void *)param_1[0x25c];
    plVar8 = (long *)((long)pvVar12 + 8);
    lVar10 = *plVar8;
    puVar7 = pvVar12;
    if (0xfef < lVar10 + 0x10U) {
      puVar7 = malloc(0x1000);
      if (puVar7 == (void *)0x0) goto LAB_0183db04;
      lVar10 = 0;
      *puVar7 = pvVar12;
      plVar8 = puVar7 + 1;
      *plVar8 = 0;
      param_1[0x25c] = (long)puVar7;
    }
    *plVar8 = lVar10 + 0x10;
    puVar11 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
    *puVar11 = &PTR_FUN_01ce0a80;
    *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010123;
    *(int *)((long)puVar7 + lVar10 + 0x1c) = iVar4;
    *param_2 = (long)puVar11;
    if (puVar11 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((pbVar2 == pbVar3) || (*pbVar2 != 0x43)) {
    if (pbVar3 != pbVar2) {
      if ((long)pbVar3 - (long)pbVar2 == 1) {
        return (undefined8 *)0x0;
      }
      if (*pbVar2 != 0x44) {
        return (undefined8 *)0x0;
      }
      bVar6 = pbVar2[1];
      if (0x35 < bVar6) {
        return (undefined8 *)0x0;
      }
      if ((1L << ((ulong)bVar6 & 0x3f) & 0x27000000000000U) == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar2 + 2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      pvVar12 = (void *)param_1[0x25c];
      plVar8 = (long *)((long)pvVar12 + 8);
      lVar10 = *plVar8;
      puVar7 = pvVar12;
      if (0xfef < lVar10 + 0x20U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) {
LAB_0183db04:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar10 = 0;
        *puVar7 = pvVar12;
        plVar8 = puVar7 + 1;
        *plVar8 = 0;
        param_1[0x25c] = (long)puVar7;
      }
      *plVar8 = lVar10 + 0x20;
      lVar9 = *param_2;
      puVar11 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
      *puVar11 = &PTR_FUN_01ce0af0;
      *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010125;
      *(undefined1 *)((long)puVar7 + lVar10 + 0x28) = 1;
LAB_0183dae0:
      puVar11[2] = lVar9;
      *(uint *)((long)puVar11 + 0x1c) = bVar6 - 0x30;
      return puVar11;
    }
  }
  else {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar1 != pbVar3) {
      bVar5 = *pbVar1;
      if (bVar5 == 0x49) {
        pbVar1 = pbVar2 + 2;
        *param_1 = (long)pbVar1;
      }
      if (pbVar3 != pbVar1) {
        bVar6 = *pbVar1;
        if (0x35 < bVar6) {
          return (undefined8 *)0x0;
        }
        if ((1L << ((ulong)bVar6 & 0x3f) & 0x2e000000000000U) == 0) {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)(pbVar1 + 1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if ((bVar5 == 0x49) && (lVar10 = FUN_0183b554(param_1,param_3), lVar10 == 0)) {
          return (undefined8 *)0x0;
        }
        pvVar12 = (void *)param_1[0x25c];
        plVar8 = (long *)((long)pvVar12 + 8);
        lVar10 = *plVar8;
        puVar7 = pvVar12;
        if (0xfef < lVar10 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0183db04;
          lVar10 = 0;
          *puVar7 = pvVar12;
          plVar8 = puVar7 + 1;
          *plVar8 = 0;
          param_1[0x25c] = (long)puVar7;
        }
        *plVar8 = lVar10 + 0x20;
        lVar9 = *param_2;
        puVar11 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
        *puVar11 = &PTR_FUN_01ce0af0;
        *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010125;
        *(undefined1 *)((long)puVar7 + lVar10 + 0x28) = 0;
        goto LAB_0183dae0;
      }
    }
  }
  return (undefined8 *)0x0;
}

