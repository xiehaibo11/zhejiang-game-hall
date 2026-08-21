
undefined8 * FUN_001218c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *pvVar9;
  
  pbVar7 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar5 = pbVar7;
  if ((pbVar7 != pbVar1) && (*pbVar7 == 0x6e)) {
    pbVar5 = pbVar7 + 1;
    *param_1 = (long)pbVar5;
  }
  if ((pbVar5 == pbVar1) || (9 < *pbVar5 - 0x30)) {
    pbVar7 = (byte *)0x0;
    pbVar6 = pbVar5;
    pbVar8 = (byte *)0x0;
  }
  else {
    do {
      pbVar5 = pbVar5 + 1;
      *param_1 = (long)pbVar5;
      pbVar6 = pbVar1;
      pbVar8 = pbVar1;
      if (pbVar1 == pbVar5) break;
      pbVar6 = pbVar5;
      pbVar8 = pbVar5;
    } while (*pbVar5 - 0x30 < 10);
  }
  puVar2 = (undefined8 *)0x0;
  if ((pbVar7 != pbVar8) && (pbVar6 != pbVar1)) {
    if (*pbVar6 == 0x45) {
      pvVar9 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar6 + 1);
      lVar4 = *(long *)((long)pvVar9 + 8);
      puVar3 = pvVar9;
      if (0xfef < lVar4 + 0x30U) {
        puVar3 = malloc(0x1000);
        if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar3 = pvVar9;
        puVar3[1] = 0;
        param_1[0x25c] = (long)puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
      puVar2 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar2 = &PTR_FUN_00137108;
      *(undefined4 *)((long)puVar3 + lVar4 + 0x18) = 0x101013e;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = param_2;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_3;
      *(byte **)((long)puVar3 + lVar4 + 0x30) = pbVar7;
      *(byte **)((long)puVar3 + lVar4 + 0x38) = pbVar8;
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

