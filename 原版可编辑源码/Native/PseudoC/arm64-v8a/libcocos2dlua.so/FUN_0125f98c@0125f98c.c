
undefined8 * FUN_0125f98c(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  ulong uVar11;
  
  pbVar9 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  if ((pbVar5 != pbVar9) && (*pbVar9 - 0x30 < 10)) {
    if (pbVar9 == pbVar5) {
      uVar11 = 0xffffffffffffffd0;
    }
    else {
      lVar6 = 0;
      do {
        pbVar8 = pbVar9;
        pbVar9 = pbVar8 + 1;
        *param_1 = (long)pbVar9;
        uVar11 = (lVar6 + (ulong)*pbVar8) - 0x30;
        if ((pbVar5 == pbVar9) || (9 < *pbVar9 - 0x30)) goto LAB_0125fa20;
        lVar6 = uVar11 * 10;
      } while (pbVar5 != pbVar9);
      pbVar9 = pbVar8 + 1;
      uVar11 = lVar6 - 0x30;
    }
LAB_0125fa20:
    if (uVar11 - 1 < (ulong)((long)pbVar5 - (long)pbVar9)) {
      *param_1 = (long)(pbVar9 + uVar11);
      uVar1 = __strlen_chk("_GLOBAL__N",0xb);
      if (uVar11 < uVar1) {
LAB_0125fb0c:
        pvVar10 = (void *)param_1[0x25c];
        lVar6 = *(long *)((long)pvVar10 + 8);
        puVar2 = pvVar10;
        if (0xfef < lVar6 + 0x20U) {
          puVar2 = malloc(0x1000);
          if (puVar2 == (void *)0x0) goto LAB_0125fb68;
          lVar6 = 0;
          *puVar2 = pvVar10;
          puVar2[1] = 0;
          param_1[0x25c] = (long)puVar2;
        }
        *(long *)((long)puVar2 + 8) = lVar6 + 0x20;
        puVar7 = (undefined8 *)((long)puVar2 + lVar6 + 0x10);
        *puVar7 = &PTR_FUN_01735958;
        *(undefined4 *)((long)puVar2 + lVar6 + 0x18) = 0x1010107;
        *(byte **)((long)puVar2 + lVar6 + 0x20) = pbVar9;
        *(byte **)((long)puVar2 + lVar6 + 0x28) = pbVar9 + uVar11;
        return puVar7;
      }
      if (uVar1 != 0) {
        pcVar4 = "_GLOBAL__N";
        pbVar5 = pbVar9;
        do {
          if (*pcVar4 != *pbVar5) goto LAB_0125fb0c;
          pcVar4 = pcVar4 + 1;
          uVar1 = uVar1 - 1;
          pbVar5 = pbVar5 + 1;
        } while (uVar1 != 0);
      }
      pvVar10 = (void *)param_1[0x25c];
      lVar6 = *(long *)((long)pvVar10 + 8);
      puVar2 = pvVar10;
      if (0xfef < lVar6 + 0x20U) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) {
LAB_0125fb68:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar2 = pvVar10;
        puVar2[1] = 0;
        param_1[0x25c] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar6 + 0x20;
      lVar3 = __strlen_chk("(anonymous namespace)",0x16);
      puVar7 = (undefined8 *)((long)puVar2 + lVar6 + 0x10);
      *puVar7 = &PTR_FUN_01735958;
      *(undefined4 *)((long)puVar2 + lVar6 + 0x18) = 0x1010107;
      *(char **)((long)puVar2 + lVar6 + 0x20) = "(anonymous namespace)";
      *(char **)((long)puVar2 + lVar6 + 0x28) = "(anonymous namespace)" + lVar3;
      return puVar7;
    }
  }
  return (undefined8 *)0x0;
}

