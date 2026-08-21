
undefined8 * FUN_001572fc(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
    if (1 < (ulong)((long)pbVar2 - (long)pbVar1)) {
      if (*pbVar1 == 0x6f) {
        if (pbVar1[1] == 0x6e) {
          *param_1 = (long)(pbVar1 + 2);
        }
      }
      else if ((*pbVar1 == 100) && (pbVar1[1] == 0x6e)) {
        pbVar1 = pbVar1 + 2;
        *param_1 = (long)pbVar1;
        if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
          puVar3 = (undefined8 *)FUN_0015723c(param_1);
          if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          puVar4 = (undefined8 *)FUN_00157570(param_1);
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar3 = puVar4;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar6 = FUN_0014d248(param_1,0);
            if (lVar6 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar9 = (void *)param_1[0x266];
            lVar7 = *(long *)((long)pvVar9 + 8);
            puVar8 = pvVar9;
            if (0xfef < lVar7 + 0x20U) {
              puVar8 = malloc(0x1000);
              if (puVar8 == (void *)0x0) goto LAB_0015756c;
              lVar7 = 0;
              *puVar8 = pvVar9;
              puVar8[1] = 0;
              param_1[0x266] = (long)puVar8;
            }
            puVar3 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00168920;
            *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar4;
            *(long *)((long)puVar8 + lVar7 + 0x28) = lVar6;
            *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
            *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010125;
          }
        }
        pvVar9 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar9 + 8);
        puVar4 = pvVar9;
        if (0xfef < lVar6 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_0015756c;
          lVar6 = 0;
          *puVar4 = pvVar9;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        puVar8 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
        *puVar8 = &PTR_FUN_00167e30;
        *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
        *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x101012b;
        puVar4 = (undefined8 *)((long)puVar4 + lVar6 + 0x20);
        goto LAB_001574ac;
      }
    }
    puVar4 = (undefined8 *)FUN_001578fc(param_1,0);
  }
  else {
    puVar4 = (undefined8 *)FUN_00157570(param_1);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((char *)param_1[1] == (char *)*param_1) {
    return puVar4;
  }
  if (*(char *)*param_1 != 'I') {
    return puVar4;
  }
  puVar3 = (undefined8 *)FUN_0014d248(param_1,0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  pvVar9 = (void *)param_1[0x266];
  lVar6 = *(long *)((long)pvVar9 + 8);
  puVar5 = pvVar9;
  if (0xfef < lVar6 + 0x20U) {
    puVar5 = malloc(0x1000);
    if (puVar5 == (void *)0x0) {
LAB_0015756c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar5 = pvVar9;
    puVar5[1] = 0;
    param_1[0x266] = (long)puVar5;
  }
  puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
  *puVar8 = &PTR_FUN_00168920;
  *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
  puVar4 = (undefined8 *)((long)puVar5 + lVar6 + 0x28);
  *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
  *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010125;
LAB_001574ac:
  *puVar4 = puVar3;
  return puVar8;
}

