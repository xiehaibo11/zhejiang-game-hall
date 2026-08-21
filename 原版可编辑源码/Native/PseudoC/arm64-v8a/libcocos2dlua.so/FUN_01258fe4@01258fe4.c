
undefined8 * FUN_01258fe4(long *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  pbVar7 = (byte *)*param_1;
  pbVar5 = (byte *)param_1[1];
  puVar9 = param_2;
  if (pbVar7 != pbVar5) {
    do {
      if (*pbVar7 != 0x42) {
        return puVar9;
      }
      pbVar1 = pbVar7 + 1;
      *param_1 = (long)pbVar1;
      if ((pbVar5 == pbVar1) || (9 < *pbVar1 - 0x30)) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar7 + 2);
      uVar8 = (ulong)pbVar7[1];
      pbVar7 = pbVar7 + 2;
      while ((uVar8 = uVar8 - 0x30, pbVar5 != pbVar7 && (*pbVar7 - 0x30 < 10))) {
        *param_1 = (long)(pbVar7 + 1);
        uVar8 = (ulong)*pbVar7 + uVar8 * 10;
        pbVar7 = pbVar7 + 1;
      }
      if ((ulong)((long)pbVar5 - (long)pbVar7) < uVar8) {
        return (undefined8 *)0x0;
      }
      pbVar5 = pbVar7 + uVar8;
      *param_1 = (long)pbVar5;
      if (pbVar7 == pbVar5) {
        return (undefined8 *)0x0;
      }
      pvVar10 = (void *)param_1[0x25c];
      lVar6 = *(long *)((long)pvVar10 + 8);
      puVar4 = pvVar10;
      if (0xfef < lVar6 + 0x30U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar4 = pvVar10;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
      uVar3 = *(undefined2 *)((long)puVar9 + 9);
      uVar2 = *(undefined1 *)((long)puVar9 + 0xb);
      param_2 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
      *param_2 = &PTR_FUN_017369f8;
      *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 8;
      *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar9;
      *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar7;
      *(byte **)((long)puVar4 + lVar6 + 0x30) = pbVar5;
      *(undefined2 *)((long)puVar4 + lVar6 + 0x19) = uVar3;
      *(undefined1 *)((long)puVar4 + lVar6 + 0x1b) = uVar2;
      pbVar7 = (byte *)*param_1;
      pbVar5 = (byte *)param_1[1];
      puVar9 = param_2;
    } while (pbVar7 != pbVar5);
  }
  return param_2;
}

