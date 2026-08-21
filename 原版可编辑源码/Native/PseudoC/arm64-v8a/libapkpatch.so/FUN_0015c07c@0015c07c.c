
void FUN_0015c07c(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  void *pvVar15;
  long local_58;
  undefined8 *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  pcVar3 = (char *)*param_1;
  pbVar4 = (byte *)param_1[1];
  if (((1 < (ulong)((long)pbVar4 - (long)pcVar3)) && (*pcVar3 == 'D')) && (pcVar3[1] == 'v')) {
    pbVar1 = (byte *)(pcVar3 + 2);
    *param_1 = (long)pbVar1;
    if ((pbVar4 != pbVar1) && (bVar5 = *pbVar1, 0x30 < bVar5)) {
      if (bVar5 < 0x3a) {
        pbVar12 = (byte *)(pcVar3 + 3);
        pbVar13 = (byte *)(pcVar3 + 2);
        do {
          *param_1 = (long)pbVar12;
          pbVar14 = pbVar4;
          if (pbVar12 == pbVar4) break;
          bVar5 = *pbVar12;
          pbVar14 = pbVar13 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar14;
        } while (bVar5 - 0x30 < 10);
        pvVar15 = (void *)param_1[0x266];
        lVar11 = *(long *)((long)pvVar15 + 8);
        puVar8 = pvVar15;
        if (0xfef < lVar11 + 0x20U) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) goto LAB_0015c338;
          lVar11 = 0;
          *puVar8 = pvVar15;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar11 + 0x20;
        local_50 = (undefined8 *)((long)puVar8 + lVar11 + 0x10);
        *local_50 = &PTR_FUN_001671f0;
        *(undefined4 *)((long)puVar8 + lVar11 + 0x18) = 0x1010107;
        *(byte **)((long)puVar8 + lVar11 + 0x20) = pbVar1;
        *(byte **)((long)puVar8 + lVar11 + 0x28) = pbVar14;
        pcVar3 = (char *)*param_1;
        if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
          pcVar2 = pcVar3 + 1;
          *param_1 = (long)pcVar2;
          if ((pcVar2 == (char *)param_1[1]) || (*pcVar2 != 'p')) {
            local_58 = FUN_0014a548(param_1);
            puVar8 = (undefined8 *)0x0;
            if (local_58 != 0) {
              puVar8 = (undefined8 *)FUN_0015d304(param_1,&local_58,&local_50);
            }
          }
          else {
            *param_1 = (long)(pcVar3 + 2);
            puVar8 = (undefined8 *)FUN_0015d274(param_1,&local_50);
          }
          goto LAB_0015c2e8;
        }
        goto LAB_0015c2e4;
      }
      if (bVar5 == 0x5f) {
        *param_1 = (long)(pcVar3 + 3);
        lVar11 = FUN_0014a548(param_1);
        puVar8 = (undefined8 *)0x0;
        if (lVar11 != 0) {
          pvVar15 = (void *)param_1[0x266];
          lVar9 = *(long *)((long)pvVar15 + 8);
          puVar7 = pvVar15;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_0015c338;
            lVar9 = 0;
            *puVar7 = pvVar15;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          puVar8 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
          *puVar8 = &PTR_FUN_00168ed0;
          *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010119;
          *(long *)((long)puVar7 + lVar9 + 0x20) = lVar11;
          *(undefined8 *)((long)puVar7 + lVar9 + 0x28) = 0;
        }
        goto LAB_0015c2e8;
      }
    }
    lVar11 = FUN_0014e504(param_1);
    puVar8 = (undefined8 *)0x0;
    if (lVar11 == 0) goto LAB_0015c2e8;
    pcVar3 = (char *)*param_1;
    if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
      *param_1 = (long)(pcVar3 + 1);
      lVar9 = FUN_0014a548(param_1);
      puVar8 = (undefined8 *)0x0;
      if (lVar9 != 0) {
        pvVar15 = (void *)param_1[0x266];
        lVar10 = *(long *)((long)pvVar15 + 8);
        puVar7 = pvVar15;
        if (0xfef < lVar10 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) {
LAB_0015c338:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar10 = 0;
          *puVar7 = pvVar15;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar10 + 0x20;
        puVar8 = (undefined8 *)((long)puVar7 + lVar10 + 0x10);
        *puVar8 = &PTR_FUN_00168ed0;
        *(undefined4 *)((long)puVar7 + lVar10 + 0x18) = 0x1010119;
        *(long *)((long)puVar7 + lVar10 + 0x20) = lVar9;
        *(long *)((long)puVar7 + lVar10 + 0x28) = lVar11;
      }
      goto LAB_0015c2e8;
    }
  }
LAB_0015c2e4:
  puVar8 = (undefined8 *)0x0;
LAB_0015c2e8:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar8);
  }
  return;
}

