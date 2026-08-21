
undefined8 * FUN_01844a14(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  
  pbVar8 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((pbVar1 != pbVar8) && (*pbVar8 - 0x30 < 10)) {
    if (pbVar8 == pbVar1) {
      uVar6 = 0xffffffffffffffd0;
    }
    else {
      lVar5 = 0;
      do {
        pbVar7 = pbVar8;
        pbVar8 = pbVar7 + 1;
        *param_1 = (long)pbVar8;
        uVar6 = (lVar5 + (ulong)*pbVar7) - 0x30;
        if ((pbVar1 == pbVar8) || (9 < *pbVar8 - 0x30)) goto LAB_01844aa8;
        lVar5 = uVar6 * 10;
      } while (pbVar1 != pbVar8);
      pbVar8 = pbVar7 + 1;
      uVar6 = lVar5 - 0x30;
    }
LAB_01844aa8:
    if (uVar6 - 1 < (ulong)((long)pbVar1 - (long)pbVar8)) {
      *param_1 = (long)(pbVar8 + uVar6);
      if ((((((9 < uVar6) && (*pbVar8 == 0x5f)) && (pbVar8[1] == 0x47)) &&
           ((pbVar8[2] == 0x4c && (pbVar8[3] == 0x4f)))) &&
          ((pbVar8[4] == 0x42 && ((pbVar8[5] == 0x41 && (pbVar8[6] == 0x4c)))))) &&
         ((pbVar8[7] == 0x5f && ((pbVar8[8] == 0x5f && (pbVar8[9] == 0x4e)))))) {
        pvVar9 = (void *)param_1[0x25c];
        plVar4 = (long *)((long)pvVar9 + 8);
        lVar5 = *plVar4;
        puVar2 = pvVar9;
        if (0xfef < lVar5 + 0x20U) {
          puVar2 = malloc(0x1000);
          if (puVar2 == (void *)0x0) {
LAB_01844c38:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar5 = 0;
          *puVar2 = pvVar9;
          plVar4 = puVar2 + 1;
          *plVar4 = 0;
          param_1[0x25c] = (long)puVar2;
        }
        *plVar4 = lVar5 + 0x20;
        puVar3 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
        *puVar3 = &PTR_FUN_01cdfb30;
        *(undefined4 *)((long)puVar2 + lVar5 + 0x18) = 0x1010107;
        *(char **)((long)puVar2 + lVar5 + 0x28) = "";
        *(char **)((long)puVar2 + lVar5 + 0x20) = "(anonymous namespace)";
        return puVar3;
      }
      pvVar9 = (void *)param_1[0x25c];
      plVar4 = (long *)((long)pvVar9 + 8);
      lVar5 = *plVar4;
      puVar2 = pvVar9;
      if (0xfef < lVar5 + 0x20U) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) goto LAB_01844c38;
        lVar5 = 0;
        *puVar2 = pvVar9;
        plVar4 = puVar2 + 1;
        *plVar4 = 0;
        param_1[0x25c] = (long)puVar2;
      }
      *plVar4 = lVar5 + 0x20;
      puVar3 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
      *puVar3 = &PTR_FUN_01cdfb30;
      *(undefined4 *)((long)puVar2 + lVar5 + 0x18) = 0x1010107;
      *(byte **)((long)puVar2 + lVar5 + 0x20) = pbVar8;
      *(byte **)((long)puVar2 + lVar5 + 0x28) = pbVar8 + uVar6;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}

