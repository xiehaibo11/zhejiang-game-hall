
undefined8 * FUN_001534c4(long *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  size_t __n;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint __c;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  long lVar19;
  long *plVar20;
  void *pvVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 **local_d8;
  long *local_d0;
  long lStack_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  pcVar8 = (char *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if ((1 < (ulong)((long)pbVar1 - (long)pcVar8)) && (*pcVar8 == 'U')) {
    cVar2 = pcVar8[1];
    if (cVar2 == 'b') {
      pbVar10 = (byte *)(pcVar8 + 2);
      *param_1 = (long)pbVar10;
      if (pbVar1 != pbVar10) {
        bVar3 = *pbVar10;
        if (bVar3 - 0x30 < 10) {
          pbVar16 = (byte *)(pcVar8 + 3);
          do {
            pbVar10 = pbVar16;
            *param_1 = (long)pbVar10;
            if (pbVar10 == pbVar1) goto LAB_00153934;
            bVar3 = *pbVar10;
            pbVar16 = pbVar10 + 1;
          } while (bVar3 - 0x30 < 10);
        }
        puVar23 = (undefined8 *)0x0;
        if ((pbVar10 != pbVar1) && (bVar3 == 0x5f)) {
          pvVar21 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar10 + 1);
          lVar11 = *(long *)((long)pvVar21 + 8);
          puVar7 = pvVar21;
          if (0xfef < lVar11 + 0x20U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_00153a3c;
            lVar11 = 0;
            *puVar7 = pvVar21;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
          puVar23 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar23 = &PTR_FUN_001671f0;
          *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x1010107;
          *(char **)((long)puVar7 + lVar11 + 0x20) = "\'block-literal\'";
          *(char **)((long)puVar7 + lVar11 + 0x28) = "";
        }
        goto LAB_00153938;
      }
    }
    else {
      if (cVar2 == 'l') {
        *param_1 = (long)(pcVar8 + 2);
        local_b0 = &local_68;
        lVar24 = param_1[0x62];
        local_d8 = &local_c0;
        lStack_c8 = param_1[0x54] - param_1[0x53] >> 3;
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_80 = 0;
        local_88 = 0;
        uStack_70 = 0;
        local_78 = 0;
        param_1[0x62] = lStack_c8;
        local_d0 = param_1;
        local_c0 = &local_a8;
        puStack_b8 = &local_a8;
        FUN_0014e13c(param_1 + 0x53,&local_d8);
        pcVar8 = (char *)*param_1;
        plVar20 = param_1 + 2;
        lVar19 = *plVar20;
        lVar22 = param_1[3];
        lVar11 = lVar22;
        lVar9 = lVar19;
        if ((char *)param_1[1] != pcVar8) {
          while (*pcVar8 == 'T') {
            __n = __strlen_chk(&DAT_00119314,5);
            if ((ulong)(param_1[1] - *param_1) < 2) {
              __c = 0;
            }
            else {
              __c = (uint)*(byte *)(*param_1 + 1);
            }
            if (((__n == 0) || (puVar5 = memchr(&DAT_00119314,__c,__n), puVar5 == (undefined *)0x0))
               || (puVar5 == &UNK_00119313)) break;
            local_d8 = (undefined8 **)FUN_0015476c(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_00153a10;
            FUN_0014c270(plVar20,&local_d8);
            pcVar8 = (char *)*param_1;
            if ((char *)param_1[1] == pcVar8) break;
          }
          lVar11 = param_1[3];
          lVar9 = param_1[2];
        }
        lVar19 = (lVar22 - lVar19 >> 3) * 8;
        auVar25 = FUN_00156e64(param_1,lVar9 + lVar19,lVar11);
        param_1[3] = param_1[2] + lVar19;
        if (auVar25._8_8_ == 0) {
          param_1[0x54] = param_1[0x54] + -8;
        }
        uVar6 = __strlen_chk(&DAT_001187e3,3);
        pcVar8 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar8) < uVar6) {
LAB_00153798:
          do {
            local_d8 = (undefined8 **)FUN_0014a548(param_1);
            if (local_d8 == (undefined8 **)0x0) goto LAB_00153a10;
            FUN_0014c270(plVar20,&local_d8);
            pcVar8 = (char *)*param_1;
          } while ((pcVar8 == (char *)param_1[1]) || (*pcVar8 != 'E'));
          pcVar8 = pcVar8 + 1;
        }
        else {
          if (uVar6 != 0) {
            pcVar13 = "vE";
            uVar14 = uVar6;
            pcVar17 = pcVar8;
            do {
              if (*pcVar13 != *pcVar17) goto LAB_00153798;
              pcVar13 = pcVar13 + 1;
              uVar14 = uVar14 - 1;
              pcVar17 = pcVar17 + 1;
            } while (uVar14 != 0);
          }
          pcVar8 = pcVar8 + uVar6;
        }
        *param_1 = (long)pcVar8;
        auVar26 = FUN_00156e64(param_1,param_1[2] + lVar19,param_1[3]);
        pbVar1 = (byte *)param_1[1];
        pbVar10 = (byte *)*param_1;
        param_1[3] = param_1[2] + lVar19;
        if ((pbVar1 == pbVar10) || (pbVar16 = pbVar10, 9 < *pbVar10 - 0x30)) {
          pbVar12 = pbVar10;
          pbVar10 = (byte *)0x0;
          pbVar18 = (byte *)0x0;
        }
        else {
          do {
            pbVar16 = pbVar16 + 1;
            *param_1 = (long)pbVar16;
            pbVar12 = pbVar1;
            pbVar18 = pbVar1;
            if (pbVar16 == pbVar1) break;
            pbVar12 = pbVar16;
            pbVar18 = pbVar16;
          } while (*pbVar16 - 0x30 < 10);
        }
        if ((pbVar12 == pbVar1) || (*pbVar12 != 0x5f)) {
LAB_00153a10:
          puVar23 = (undefined8 *)0x0;
        }
        else {
          pvVar21 = (void *)param_1[0x266];
          *param_1 = (long)(pbVar12 + 1);
          lVar11 = *(long *)((long)pvVar21 + 8);
          puVar7 = pvVar21;
          if (0xfef < lVar11 + 0x40U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) {
LAB_00153a3c:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar11 = 0;
            *puVar7 = pvVar21;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x40;
          puVar23 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar23 = &PTR_FUN_00167880;
          *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x101012d;
          *(undefined1 (*) [16])((long)puVar7 + lVar11 + 0x20) = auVar25;
          *(undefined1 (*) [16])((long)puVar7 + lVar11 + 0x30) = auVar26;
          *(byte **)((long)puVar7 + lVar11 + 0x40) = pbVar10;
          *(byte **)((long)puVar7 + lVar11 + 0x48) = pbVar18;
        }
        local_d0[0x54] = local_d0[0x53] + lStack_c8 * 8;
        if (local_c0 != &local_a8) {
          free(local_c0);
        }
        param_1[0x62] = lVar24;
        goto LAB_00153938;
      }
      if (cVar2 == 't') {
        pbVar10 = (byte *)(pcVar8 + 2);
        *param_1 = (long)pbVar10;
        if (pbVar1 != pbVar10) {
          if (*pbVar10 - 0x30 < 10) {
            pbVar16 = (byte *)(pcVar8 + 3);
            do {
              pbVar15 = pbVar16;
              *param_1 = (long)pbVar15;
              pbVar12 = pbVar1;
              pbVar18 = pbVar1;
              if (pbVar15 == pbVar1) break;
              pbVar12 = pbVar15;
              pbVar16 = pbVar15 + 1;
              pbVar18 = pbVar15;
            } while (*pbVar15 - 0x30 < 10);
          }
          else {
            pbVar12 = pbVar10;
            pbVar18 = (byte *)0x0;
            pbVar10 = (byte *)0x0;
          }
          if ((pbVar12 != pbVar1) && (*pbVar12 == 0x5f)) {
            pvVar21 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar12 + 1);
            lVar11 = *(long *)((long)pvVar21 + 8);
            puVar7 = pvVar21;
            if (0xfef < lVar11 + 0x20U) {
              puVar7 = malloc(0x1000);
              if (puVar7 == (void *)0x0) goto LAB_00153a3c;
              lVar11 = 0;
              *puVar7 = pvVar21;
              puVar7[1] = 0;
              param_1[0x266] = (long)puVar7;
            }
            *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
            puVar23 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
            *puVar23 = &PTR_FUN_001675e0;
            *(undefined4 *)((long)puVar7 + lVar11 + 0x18) = 0x101012c;
            *(byte **)((long)puVar7 + lVar11 + 0x20) = pbVar10;
            *(byte **)((long)puVar7 + lVar11 + 0x28) = pbVar18;
            goto LAB_00153938;
          }
        }
      }
    }
  }
LAB_00153934:
  puVar23 = (undefined8 *)0x0;
LAB_00153938:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar23;
}

