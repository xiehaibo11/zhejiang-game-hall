
undefined8 * FUN_0014dad8(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  void *pvVar8;
  
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 != (byte *)param_1[1]) && (*pbVar2 == 0x44)) {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if ((pbVar1 != (byte *)param_1[1]) && ((*pbVar1 | 0x20) == 0x74)) {
      *param_1 = (long)(pbVar2 + 2);
      lVar4 = FUN_0014e504(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar3 = (char *)*param_1;
      if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == 'E')) {
        pvVar8 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar3 + 1);
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (0xfef < lVar7 + 0x40U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x40;
        puVar6 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
        *puVar6 = &PTR_FUN_00168300;
        *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010134;
        *(char **)((long)puVar5 + lVar7 + 0x20) = "decltype(";
        *(char **)((long)puVar5 + lVar7 + 0x28) = "";
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar4;
        *(undefined **)((long)puVar5 + lVar7 + 0x38) = &DAT_0011aa2a;
        *(undefined **)((long)puVar5 + lVar7 + 0x40) = &DAT_0011aa2b;
        return puVar6;
      }
    }
  }
  return (undefined8 *)0x0;
}

