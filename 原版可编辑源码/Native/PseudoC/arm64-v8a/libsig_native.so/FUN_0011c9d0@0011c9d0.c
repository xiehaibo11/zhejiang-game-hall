
undefined8 * FUN_0011c9d0(long *param_1,long *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  void *pvVar11;
  
  if ((*(char *)(*param_2 + 8) == '$') && (iVar4 = *(int *)(*param_2 + 0xc), iVar4 - 2U < 4)) {
    pvVar11 = (void *)param_1[0x25c];
    lVar7 = *(long *)((long)pvVar11 + 8);
    puVar6 = pvVar11;
    if (0xfef < lVar7 + 0x10U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) goto LAB_0011cc3c;
      lVar7 = 0;
      *puVar6 = pvVar11;
      puVar6[1] = 0;
      param_1[0x25c] = (long)puVar6;
    }
    *(long *)((long)puVar6 + 8) = lVar7 + 0x10;
    puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
    *puVar8 = &PTR_FUN_00137f78;
    *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010123;
    *(int *)((long)puVar6 + lVar7 + 0x1c) = iVar4;
    *param_2 = (long)puVar8;
  }
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((pbVar2 == pbVar3) || (*pbVar2 != 0x43)) {
    if (pbVar3 != pbVar2) {
      if ((long)pbVar3 - (long)pbVar2 == 1) {
        return (undefined8 *)0x0;
      }
      if (*pbVar2 != 0x44) {
        return (undefined8 *)0x0;
      }
      bVar5 = pbVar2[1];
      if (0x35 < bVar5) {
        return (undefined8 *)0x0;
      }
      if ((1L << ((ulong)bVar5 & 0x3f) & 0x37000000000000U) == 0) {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pbVar2 + 2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      pvVar11 = (void *)param_1[0x25c];
      lVar7 = *(long *)((long)pvVar11 + 8);
      puVar6 = pvVar11;
      if (0xfef < lVar7 + 0x20U) {
        puVar6 = malloc(0x1000);
        if (puVar6 == (void *)0x0) {
LAB_0011cc3c:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar6 = pvVar11;
        puVar6[1] = 0;
        param_1[0x25c] = (long)puVar6;
      }
      *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
      lVar9 = *param_2;
      uVar10 = (uint)bVar5;
      puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
      *puVar8 = &PTR_FUN_00137fe8;
      *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010125;
      *(undefined1 *)((long)puVar6 + lVar7 + 0x28) = 1;
LAB_0011cc18:
      puVar8[2] = lVar9;
      *(uint *)((long)puVar8 + 0x1c) = uVar10 - 0x30;
      return puVar8;
    }
  }
  else {
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar1 != pbVar3) {
      bVar5 = *pbVar1;
      if (bVar5 == 0x49) {
        pbVar1 = pbVar2 + 2;
        *param_1 = (long)pbVar1;
      }
      if ((pbVar3 != pbVar1) && (uVar10 = (uint)*pbVar1, uVar10 - 0x31 < 5)) {
        *param_1 = (long)(pbVar1 + 1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
        if ((bVar5 == 0x49) && (lVar7 = FUN_0011aac8(param_1,param_3), lVar7 == 0)) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x25c];
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar6 = pvVar11;
        if (0xfef < lVar7 + 0x20U) {
          puVar6 = malloc(0x1000);
          if (puVar6 == (void *)0x0) goto LAB_0011cc3c;
          lVar7 = 0;
          *puVar6 = pvVar11;
          puVar6[1] = 0;
          param_1[0x25c] = (long)puVar6;
        }
        *(long *)((long)puVar6 + 8) = lVar7 + 0x20;
        lVar9 = *param_2;
        puVar8 = (undefined8 *)((long)puVar6 + lVar7 + 0x10);
        *puVar8 = &PTR_FUN_00137fe8;
        *(undefined4 *)((long)puVar6 + lVar7 + 0x18) = 0x1010125;
        *(undefined1 *)((long)puVar6 + lVar7 + 0x28) = 0;
        goto LAB_0011cc18;
      }
    }
  }
  return (undefined8 *)0x0;
}

