
void FUN_001527cc(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 uVar12;
  void *pvVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar8 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (1 < (ulong)((long)pcVar1 - (long)pcVar8)) {
    cVar3 = *pcVar8;
    if (cVar3 == 'g') {
      if (pcVar8[1] == 's') {
        pcVar8 = pcVar8 + 2;
        *param_1 = (long)pcVar8;
        if (1 < (ulong)((long)pcVar1 - (long)pcVar8)) {
          cVar3 = *pcVar8;
          uVar12 = 1;
          goto LAB_0015284c;
        }
      }
    }
    else {
      uVar12 = 0;
LAB_0015284c:
      cVar4 = pcVar8[1];
      if ((cVar3 == 'n') && ((cVar4 == 'w' || (cVar4 == 'a')))) {
        plVar11 = param_1 + 2;
        lVar9 = *plVar11;
        lVar10 = param_1[3];
        pcVar8 = pcVar8 + 2;
        *param_1 = (long)pcVar8;
        if (pcVar8 == pcVar1) goto LAB_001528a0;
        while (*pcVar8 != '_') {
LAB_001528a0:
          do {
            local_70 = FUN_0014e504(param_1);
            puVar7 = (undefined8 *)0x0;
            if (local_70 == 0) goto LAB_00152a14;
            FUN_0014c270(plVar11,&local_70);
            pcVar8 = (char *)*param_1;
          } while (pcVar8 == (char *)param_1[1]);
        }
        lVar9 = (lVar10 - lVar9 >> 3) * 8;
        *param_1 = (long)(pcVar8 + 1);
        auVar14 = FUN_00156e64(param_1,param_1[2] + lVar9,param_1[3]);
        param_1[3] = param_1[2] + lVar9;
        lVar9 = FUN_0014a548(param_1);
        puVar7 = (undefined8 *)0x0;
        if (lVar9 == 0) goto LAB_00152a14;
        pcVar8 = (char *)*param_1;
        pcVar1 = (char *)param_1[1];
        if ((((ulong)((long)pcVar1 - (long)pcVar8) < 2) || (*pcVar8 != 'p')) || (pcVar8[1] != 'i'))
        {
          if ((pcVar8 == pcVar1) || (*pcVar8 != 'E')) goto LAB_00152a10;
          pvVar13 = (void *)param_1[0x266];
          *param_1 = (long)(pcVar8 + 1);
          lVar10 = *(long *)((long)pvVar13 + 8);
          puVar6 = pvVar13;
          if (0xfef < lVar10 + 0x40U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_00152adc;
            lVar10 = 0;
            *puVar6 = pvVar13;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar10 + 0x40;
          puVar7 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
          *puVar7 = &PTR_FUN_00168290;
          *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010138;
          *(undefined1 (*) [16])((long)puVar6 + lVar10 + 0x20) = auVar14;
          *(undefined8 *)((long)puVar6 + lVar10 + 0x38) = 0;
          *(undefined8 *)((long)puVar6 + lVar10 + 0x40) = 0;
          *(long *)((long)puVar6 + lVar10 + 0x30) = lVar9;
        }
        else {
          lVar10 = param_1[2];
          lVar2 = param_1[3];
          pcVar8 = pcVar8 + 2;
          *param_1 = (long)pcVar8;
          if (pcVar8 == pcVar1) goto LAB_0015295c;
          while (*pcVar8 != 'E') {
LAB_0015295c:
            do {
              local_70 = FUN_0014e504(param_1);
              puVar7 = (undefined8 *)0x0;
              if (local_70 == 0) goto LAB_00152a14;
              FUN_0014c270(plVar11,&local_70);
              pcVar8 = (char *)*param_1;
            } while (pcVar8 == (char *)param_1[1]);
          }
          lVar10 = (lVar2 - lVar10 >> 3) * 8;
          *param_1 = (long)(pcVar8 + 1);
          auVar15 = FUN_00156e64(param_1,param_1[2] + lVar10,param_1[3]);
          pvVar13 = (void *)param_1[0x266];
          param_1[3] = param_1[2] + lVar10;
          lVar10 = *(long *)((long)pvVar13 + 8);
          puVar6 = pvVar13;
          if (0xfef < lVar10 + 0x40U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) {
LAB_00152adc:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar10 = 0;
            *puVar6 = pvVar13;
            puVar6[1] = 0;
            param_1[0x266] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar10 + 0x40;
          puVar7 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
          *puVar7 = &PTR_FUN_00168290;
          *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010138;
          *(undefined1 (*) [16])((long)puVar6 + lVar10 + 0x20) = auVar14;
          *(long *)((long)puVar6 + lVar10 + 0x30) = lVar9;
          *(undefined1 (*) [16])((long)puVar6 + lVar10 + 0x38) = auVar15;
        }
        *(undefined1 *)(puVar7 + 7) = uVar12;
        *(bool *)((long)puVar7 + 0x39) = cVar4 == 'a';
        goto LAB_00152a14;
      }
    }
  }
LAB_00152a10:
  puVar7 = (undefined8 *)0x0;
LAB_00152a14:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar7);
  }
  return;
}

