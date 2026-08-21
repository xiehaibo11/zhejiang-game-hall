
undefined8 * FUN_0183db08(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  
  while( true ) {
    pbVar2 = (byte *)*param_1;
    pbVar3 = (byte *)param_1[1];
    if (pbVar2 == pbVar3) {
      return param_2;
    }
    if (*pbVar2 != 0x42) {
      return param_2;
    }
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if ((pbVar3 == pbVar1) || (9 < *pbVar1 - 0x30)) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar2 + 2);
    uVar9 = (ulong)pbVar2[1];
    pbVar2 = pbVar2 + 2;
    while ((uVar9 = uVar9 - 0x30, pbVar3 != pbVar2 && (*pbVar2 - 0x30 < 10))) {
      *param_1 = (long)(pbVar2 + 1);
      uVar9 = (ulong)*pbVar2 + uVar9 * 10;
      pbVar2 = pbVar2 + 1;
    }
    if ((ulong)((long)pbVar3 - (long)pbVar2) < uVar9) break;
    pbVar3 = pbVar2 + uVar9;
    *param_1 = (long)pbVar3;
    if (pbVar2 == pbVar3) {
      return (undefined8 *)0x0;
    }
    pvVar11 = (void *)param_1[0x25c];
    plVar10 = (long *)((long)pvVar11 + 8);
    lVar7 = *plVar10;
    puVar6 = pvVar11;
    if (0xfef < lVar7 + 0x30U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar6 = pvVar11;
      plVar10 = puVar6 + 1;
      *plVar10 = 0;
      param_1[0x25c] = (long)puVar6;
    }
    *plVar10 = lVar7 + 0x30;
    uVar5 = *(undefined2 *)((long)param_2 + 9);
    uVar4 = *(undefined1 *)((long)param_2 + 0xb);
    puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
    *puVar8 = &PTR_FUN_01ce0b60;
    *(undefined8 **)((long)puVar6 + lVar7 + 0x20) = param_2;
    *(byte **)((long)puVar6 + lVar7 + 0x28) = pbVar2;
    *(undefined1 *)((long)puVar6 + lVar7 + 0x18) = 8;
    *(undefined2 *)((long)puVar6 + lVar7 + 0x19) = uVar5;
    *(undefined1 *)((long)puVar6 + lVar7 + 0x1b) = uVar4;
    *(byte **)((long)puVar6 + lVar7 + 0x30) = pbVar3;
    param_2 = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}

