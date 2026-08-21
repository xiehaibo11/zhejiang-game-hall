
void FUN_0015b748(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pcVar7 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar7 == pcVar1) || (*pcVar7 != 'r')) {
    uVar12 = 0;
  }
  else {
    pcVar7 = pcVar7 + 1;
    uVar12 = 4;
    *param_1 = (long)pcVar7;
  }
  pcVar8 = pcVar1;
  if (pcVar7 != pcVar1) {
    if (*pcVar7 == 'V') {
      pcVar7 = pcVar7 + 1;
      uVar12 = uVar12 | 2;
      *param_1 = (long)pcVar7;
    }
    if ((pcVar7 != pcVar1) && (pcVar8 = pcVar7, *pcVar7 == 'K')) {
      uVar12 = uVar12 | 1;
      *param_1 = (long)(pcVar7 + 1);
      pcVar8 = pcVar7 + 1;
    }
  }
  if (((ulong)((long)pcVar1 - (long)pcVar8) < 2) || (*pcVar8 != 'D')) {
LAB_0015b888:
    puVar13 = (undefined8 *)0x0;
LAB_0015b88c:
    pcVar7 = (char *)*param_1;
    pcVar1 = (char *)param_1[1];
    if (((1 < (ulong)((long)pcVar1 - (long)pcVar7)) && (*pcVar7 == 'D')) && (pcVar7[1] == 'x')) {
      pcVar7 = pcVar7 + 2;
      *param_1 = (long)pcVar7;
    }
    if ((pcVar7 != pcVar1) && (*pcVar7 == 'F')) {
      pcVar8 = pcVar7 + 1;
      *param_1 = (long)pcVar8;
      if ((pcVar8 != pcVar1) && (*pcVar8 == 'Y')) {
        *param_1 = (long)(pcVar7 + 2);
      }
      lVar9 = FUN_0014a548(param_1);
      puVar5 = (undefined8 *)0x0;
      if (lVar9 != 0) {
        lVar10 = param_1[2];
        lVar2 = param_1[3];
        lVar15 = 1;
        do {
          while( true ) {
            pcVar7 = (char *)*param_1;
            if (pcVar7 == (char *)param_1[1]) break;
            if (*pcVar7 != 'v') {
              if (*pcVar7 != 'E') break;
              uVar14 = 0;
              goto LAB_0015bb84;
            }
            *param_1 = (long)(pcVar7 + 1);
          }
          if (1 < (ulong)(param_1[1] - (long)pcVar7)) {
            if (*pcVar7 == 'O') {
              if (pcVar7[1] != 'E') goto LAB_0015b980;
              lVar15 = 2;
              uVar14 = 2;
            }
            else {
              if ((*pcVar7 != 'R') || (pcVar7[1] != 'E')) goto LAB_0015b980;
              uVar14 = 1;
              lVar15 = 2;
            }
LAB_0015bb84:
            lVar10 = (lVar2 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar7 + lVar15);
            auVar16 = FUN_00156e64(param_1,param_1[2] + lVar10,param_1[3]);
            pvVar11 = (void *)param_1[0x266];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = *(long *)((long)pvVar11 + 8);
            puVar6 = pvVar11;
            if (0xfef < lVar10 + 0x40U) {
              puVar6 = malloc(0x1000);
              if (puVar6 == (void *)0x0) goto LAB_0015bc20;
              lVar10 = 0;
              *puVar6 = pvVar11;
              puVar6[1] = 0;
              param_1[0x266] = (long)puVar6;
            }
            *(long *)((long)puVar6 + 8) = lVar10 + 0x40;
            puVar5 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
            *puVar5 = &PTR_FUN_00168ca0;
            *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1000f;
            *(long *)((long)puVar6 + lVar10 + 0x20) = lVar9;
            *(undefined1 (*) [16])((long)puVar6 + lVar10 + 0x28) = auVar16;
            *(uint *)((long)puVar6 + lVar10 + 0x38) = uVar12;
            *(undefined1 *)((long)puVar6 + lVar10 + 0x3c) = uVar14;
            *(undefined8 **)((long)puVar6 + lVar10 + 0x40) = puVar13;
            break;
          }
LAB_0015b980:
          local_70 = FUN_0014a548(param_1);
          puVar5 = (undefined8 *)0x0;
          if (local_70 == 0) break;
          FUN_0014c270(param_1 + 2,&local_70);
        } while( true );
      }
      goto LAB_0015ba38;
    }
  }
  else {
    cVar3 = pcVar8[1];
    if (cVar3 != 'O') {
      if (cVar3 == 'o') {
        pvVar11 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar8 + 2);
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar5 = pvVar11;
        if (0xfef < lVar9 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) {
LAB_0015bc20:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar9 = 0;
          *puVar5 = pvVar11;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
        puVar13 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
        *puVar13 = &PTR_FUN_001671f0;
        *(undefined4 *)((long)puVar5 + lVar9 + 0x18) = 0x1010107;
        *(char **)((long)puVar5 + lVar9 + 0x20) = "noexcept";
        *(char **)((long)puVar5 + lVar9 + 0x28) = "";
      }
      else {
        if (cVar3 != 'w') goto LAB_0015b888;
        lVar9 = param_1[2];
        lVar10 = param_1[3];
        pcVar8 = pcVar8 + 2;
        *param_1 = (long)pcVar8;
        if (pcVar8 == pcVar1) goto LAB_0015b85c;
        while (*pcVar8 != 'E') {
LAB_0015b85c:
          do {
            local_70 = FUN_0014a548(param_1);
            puVar5 = (undefined8 *)0x0;
            if (local_70 == 0) goto LAB_0015ba38;
            FUN_0014c270(param_1 + 2,&local_70);
            pcVar8 = (char *)*param_1;
          } while (pcVar8 == (char *)param_1[1]);
        }
        lVar9 = (lVar10 - lVar9 >> 3) * 8;
        *param_1 = (long)(pcVar8 + 1);
        auVar16 = FUN_00156e64(param_1,param_1[2] + lVar9,param_1[3]);
        pvVar11 = (void *)param_1[0x266];
        param_1[3] = param_1[2] + lVar9;
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar5 = pvVar11;
        if (0xfef < lVar9 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0015bc20;
          lVar9 = 0;
          *puVar5 = pvVar11;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
        puVar13 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
        *puVar13 = &PTR_FUN_00168c30;
        *(undefined4 *)((long)puVar5 + lVar9 + 0x18) = 0x1010111;
        *(undefined1 (*) [16])((long)puVar5 + lVar9 + 0x20) = auVar16;
      }
      goto LAB_0015b88c;
    }
    *param_1 = (long)(pcVar8 + 2);
    lVar9 = FUN_0014e504(param_1);
    puVar5 = (undefined8 *)0x0;
    if (lVar9 == 0) goto LAB_0015ba38;
    pcVar7 = (char *)*param_1;
    if ((pcVar7 != (char *)param_1[1]) && (*pcVar7 == 'E')) {
      pvVar11 = (void *)param_1[0x266];
      *param_1 = (long)(pcVar7 + 1);
      lVar10 = *(long *)((long)pvVar11 + 8);
      puVar5 = pvVar11;
      if (0xfef < lVar10 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0015bc20;
        lVar10 = 0;
        *puVar5 = pvVar11;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar10 + 0x20;
      puVar13 = (undefined8 *)((long)puVar5 + lVar10 + 0x10);
      *puVar13 = &PTR_FUN_00168bc0;
      *(undefined4 *)((long)puVar5 + lVar10 + 0x18) = 0x1010110;
      *(long *)((long)puVar5 + lVar10 + 0x20) = lVar9;
      goto LAB_0015b88c;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0015ba38:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

