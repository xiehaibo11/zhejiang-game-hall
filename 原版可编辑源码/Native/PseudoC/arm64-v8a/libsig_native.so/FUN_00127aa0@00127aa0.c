
undefined8 * FUN_00127aa0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  
  uVar1 = __strlen_chk(&DAT_0012f5a4,3);
  pcVar10 = (char *)*param_1;
  if ((ulong)(param_1[1] - (long)pcVar10) < uVar1) {
LAB_00127b24:
    uVar1 = __strlen_chk(&DAT_0012f5ae,3);
    pcVar10 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar10) < uVar1) {
LAB_00127b90:
      uVar1 = __strlen_chk(&DAT_0012f5b7,3);
      pcVar10 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar10) < uVar1) {
LAB_00127c08:
        pcVar10 = (char *)0x0;
        pcVar9 = (char *)0x0;
        goto LAB_00127c10;
      }
      if (uVar1 != 0) {
        pcVar9 = "Te";
        uVar7 = uVar1;
        pcVar8 = pcVar10;
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00127c08;
          pcVar9 = pcVar9 + 1;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      pcVar9 = "enum";
      uVar5 = 5;
      *param_1 = (long)(pcVar10 + uVar1);
    }
    else {
      if (uVar1 != 0) {
        pcVar9 = "Tu";
        uVar7 = uVar1;
        pcVar8 = pcVar10;
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00127b90;
          pcVar9 = pcVar9 + 1;
          uVar7 = uVar7 - 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar7 != 0);
      }
      *param_1 = (long)(pcVar10 + uVar1);
      pcVar9 = "union";
      uVar5 = 6;
    }
  }
  else {
    if (uVar1 != 0) {
      pcVar9 = "Ts";
      uVar7 = uVar1;
      pcVar8 = pcVar10;
      do {
        if (*pcVar9 != *pcVar8) goto LAB_00127b24;
        pcVar9 = pcVar9 + 1;
        uVar7 = uVar7 - 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = (long)(pcVar10 + uVar1);
    pcVar9 = "struct";
    uVar5 = 7;
  }
  lVar2 = __strlen_chk(pcVar9,uVar5);
  pcVar10 = pcVar9 + lVar2;
LAB_00127c10:
  puVar3 = (undefined8 *)FUN_0011aac8(param_1,0);
  puVar6 = puVar3;
  if ((puVar3 != (undefined8 *)0x0) && (pcVar9 != pcVar10)) {
    pvVar11 = (void *)param_1[0x25c];
    lVar2 = *(long *)((long)pvVar11 + 8);
    puVar4 = pvVar11;
    if (0xfef < lVar2 + 0x30U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = 0;
      *puVar4 = pvVar11;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar2 + 0x30;
    puVar6 = (undefined8 *)((long)puVar4 + lVar2 + 0x10);
    *puVar6 = &PTR_FUN_00138ad8;
    *(undefined8 **)((long)puVar4 + lVar2 + 0x30) = puVar3;
    *(undefined4 *)((long)puVar4 + lVar2 + 0x18) = 0x1010106;
    *(char **)((long)puVar4 + lVar2 + 0x20) = pcVar9;
    *(char **)((long)puVar4 + lVar2 + 0x28) = pcVar10;
  }
  return puVar6;
}

