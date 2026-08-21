
undefined8 * FUN_01844788(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (pbVar2 == pbVar1) {
LAB_018448d4:
    puVar4 = (undefined8 *)FUN_01844d44(param_1,0);
  }
  else {
    if (9 < *pbVar1 - 0x30) {
      if ((ulong)((long)pbVar2 - (long)pbVar1) < 2) goto LAB_018448d4;
      bVar3 = *pbVar1;
      if (bVar3 == 100) {
        if (pbVar1[1] == 0x6e) {
          pbVar1 = pbVar1 + 2;
          *param_1 = (long)pbVar1;
          if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
            puVar4 = (undefined8 *)FUN_01844674(param_1);
joined_r0x01844988:
            if (puVar4 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          }
          else {
            puVar4 = (undefined8 *)FUN_01844a14(param_1);
            if (puVar4 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
              lVar5 = FUN_0183cea8(param_1,0);
              if (lVar5 == 0) {
                return (undefined8 *)0x0;
              }
              pvVar10 = (void *)param_1[0x25c];
              plVar7 = (long *)((long)pvVar10 + 8);
              lVar8 = *plVar7;
              puVar6 = pvVar10;
              if (0xfef < lVar8 + 0x20U) {
                puVar6 = malloc(0x1000);
                if (puVar6 == (void *)0x0) goto LAB_01844a10;
                lVar8 = 0;
                *puVar6 = pvVar10;
                plVar7 = puVar6 + 1;
                *plVar7 = 0;
                param_1[0x25c] = (long)puVar6;
              }
              *plVar7 = lVar8 + 0x20;
              puVar9 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
              *puVar9 = &PTR_FUN_01ce0ee0;
              *(undefined4 *)((long)puVar6 + lVar8 + 0x18) = 0x1010120;
              *(undefined8 **)((long)puVar6 + lVar8 + 0x20) = puVar4;
              *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
              puVar4 = puVar9;
              goto joined_r0x01844988;
            }
          }
          pvVar10 = (void *)param_1[0x25c];
          plVar7 = (long *)((long)pvVar10 + 8);
          lVar5 = *plVar7;
          puVar6 = pvVar10;
          if (lVar5 + 0x20U < 0xff0) {
LAB_018449cc:
            *plVar7 = lVar5 + 0x20;
            puVar9 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
            *puVar9 = &PTR_FUN_01ce0380;
            *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010126;
            *(undefined8 **)((long)puVar6 + lVar5 + 0x20) = puVar4;
            return puVar9;
          }
          puVar6 = malloc(0x1000);
          if (puVar6 != (void *)0x0) {
            lVar5 = 0;
            *puVar6 = pvVar10;
            plVar7 = puVar6 + 1;
            *plVar7 = 0;
            param_1[0x25c] = (long)puVar6;
            goto LAB_018449cc;
          }
          goto LAB_01844a10;
        }
        bVar3 = *pbVar1;
      }
      if ((bVar3 == 0x6f) && (pbVar1[1] == 0x6e)) {
        *param_1 = (long)(pbVar1 + 2);
      }
      goto LAB_018448d4;
    }
    puVar4 = (undefined8 *)FUN_01844a14(param_1);
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
  lVar5 = FUN_0183cea8(param_1,0);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar10 = (void *)param_1[0x25c];
  plVar7 = (long *)((long)pvVar10 + 8);
  lVar8 = *plVar7;
  puVar6 = pvVar10;
  if (0xfef < lVar8 + 0x20U) {
    puVar6 = malloc(0x1000);
    if (puVar6 == (void *)0x0) {
LAB_01844a10:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar8 = 0;
    *puVar6 = pvVar10;
    plVar7 = puVar6 + 1;
    *plVar7 = 0;
    param_1[0x25c] = (long)puVar6;
  }
  *plVar7 = lVar8 + 0x20;
  puVar9 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
  *puVar9 = &PTR_FUN_01ce0ee0;
  *(undefined8 **)((long)puVar6 + lVar8 + 0x20) = puVar4;
  *(long *)((long)puVar6 + lVar8 + 0x28) = lVar5;
  *(undefined4 *)((long)puVar6 + lVar8 + 0x18) = 0x1010120;
  return puVar9;
}

