
undefined8 * FUN_018422a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  
  pbVar8 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar5 = pbVar8;
  if ((pbVar8 != pbVar1) && (*pbVar8 == 0x6e)) {
    pbVar5 = pbVar8 + 1;
    *param_1 = (long)pbVar5;
  }
  if ((pbVar5 == pbVar1) || (9 < *pbVar5 - 0x30)) {
    pbVar8 = (byte *)0x0;
    pbVar6 = pbVar5;
    pbVar9 = (byte *)0x0;
  }
  else {
    do {
      pbVar5 = pbVar5 + 1;
      *param_1 = (long)pbVar5;
      pbVar6 = pbVar1;
      pbVar9 = pbVar1;
      if (pbVar1 == pbVar5) break;
      pbVar6 = pbVar5;
      pbVar9 = pbVar5;
    } while (*pbVar5 - 0x30 < 10);
  }
  puVar2 = (undefined8 *)0x0;
  if ((pbVar8 != pbVar9) && (pbVar6 != pbVar1)) {
    if (*pbVar6 == 0x45) {
      pvVar10 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar6 + 1);
      plVar4 = (long *)((long)pvVar10 + 8);
      lVar7 = *plVar4;
      puVar3 = pvVar10;
      if (0xfef < lVar7 + 0x30U) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar3 = pvVar10;
        plVar4 = puVar3 + 1;
        *plVar4 = 0;
        param_1[0x25c] = (long)puVar3;
      }
      *plVar4 = lVar7 + 0x30;
      puVar2 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
      *puVar2 = &PTR_FUN_01cdfc80;
      *(undefined4 *)((long)puVar3 + lVar7 + 0x18) = 0x101013d;
      *(undefined8 *)((long)puVar3 + lVar7 + 0x20) = param_2;
      *(undefined8 *)((long)puVar3 + lVar7 + 0x28) = param_3;
      *(byte **)((long)puVar3 + lVar7 + 0x30) = pbVar8;
      *(byte **)((long)puVar3 + lVar7 + 0x38) = pbVar9;
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

