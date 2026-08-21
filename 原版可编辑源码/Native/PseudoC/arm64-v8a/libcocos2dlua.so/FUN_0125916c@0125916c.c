
undefined8 FUN_0125916c(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined **ppuVar8;
  byte *pbVar9;
  undefined1 uVar10;
  char *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined1 auVar20 [16];
  long local_58;
  
  if ((byte *)param_1[1] == (byte *)*param_1) {
LAB_0125919c:
    uVar3 = __strlen_chk("DC",3);
    pcVar1 = (char *)*param_1;
    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar1)) {
      if (uVar3 != 0) {
        pcVar11 = "DC";
        uVar12 = uVar3;
        pcVar14 = pcVar1;
        do {
          if (*pcVar11 != *pcVar14) goto LAB_01259398;
          pcVar11 = pcVar11 + 1;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar14 + 1;
        } while (uVar12 != 0);
      }
      *param_1 = (long)(pcVar1 + uVar3);
      lVar15 = param_1[2];
      lVar16 = param_1[3];
      local_58 = FUN_0125f98c(param_1);
      if (local_58 == 0) {
        return 0;
      }
      while( true ) {
        FUN_01257c80(param_1 + 2,&local_58);
        pcVar1 = (char *)*param_1;
        if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 'E')) break;
        local_58 = FUN_0125f98c(param_1);
        if (local_58 == 0) {
          return 0;
        }
      }
      lVar15 = (lVar16 - lVar15 >> 3) * 8;
      *param_1 = (long)(pcVar1 + 1);
      auVar20 = FUN_0125f2dc(param_1,param_1[2] + lVar15,param_1[3]);
      pvVar17 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar15;
      lVar15 = *(long *)((long)pvVar17 + 8);
      puVar4 = pvVar17;
      if (0xfef < lVar15 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_01259830;
        lVar15 = 0;
        *puVar4 = pvVar17;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      ppuVar8 = &PTR_FUN_01736b48;
      *(long *)((long)puVar4 + 8) = lVar15 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar15 + 0x10);
      uVar10 = 0x29;
      goto LAB_01259634;
    }
LAB_01259398:
    puVar4 = (undefined8 *)FUN_0125fc44(param_1,param_2);
  }
  else {
    uVar7 = (uint)*(byte *)*param_1;
    if (uVar7 == 0x55) {
      uVar3 = __strlen_chk(&DAT_014a83ce,3);
      pcVar1 = (char *)*param_1;
      pbVar9 = (byte *)param_1[1];
      if ((ulong)((long)pbVar9 - (long)pcVar1) < uVar3) {
LAB_012593c8:
        uVar3 = __strlen_chk(&DAT_014a83d1,3);
        pcVar1 = (char *)*param_1;
        if (uVar3 <= (ulong)(param_1[1] - (long)pcVar1)) {
          if (uVar3 != 0) {
            pcVar11 = "Ul";
            uVar12 = uVar3;
            pcVar14 = pcVar1;
            do {
              if (*pcVar11 != *pcVar14) goto LAB_012594a0;
              pcVar11 = pcVar11 + 1;
              uVar12 = uVar12 - 1;
              pcVar14 = pcVar14 + 1;
            } while (uVar12 != 0);
          }
          uVar10 = *(undefined1 *)((long)param_1 + 0x2d2);
          *param_1 = (long)(pcVar1 + uVar3);
          *(undefined1 *)((long)param_1 + 0x2d2) = 1;
          uVar3 = __strlen_chk(&DAT_014a83d4,3);
          pcVar1 = (char *)*param_1;
          pbVar9 = (byte *)param_1[1];
          if ((ulong)((long)pbVar9 - (long)pcVar1) < uVar3) {
LAB_01259654:
            lVar15 = param_1[2];
            lVar16 = param_1[3];
            do {
              local_58 = FUN_012557ec(param_1);
              if (local_58 == 0) goto LAB_012597e0;
              FUN_01257c80(param_1 + 2,&local_58);
              pcVar1 = (char *)*param_1;
            } while ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != 'E'));
            lVar15 = (lVar16 - lVar15 >> 3) * 8;
            *param_1 = (long)(pcVar1 + 1);
            auVar20 = FUN_0125f2dc(param_1,param_1[2] + lVar15,param_1[3]);
            pbVar9 = (byte *)param_1[1];
            pbVar18 = (byte *)*param_1;
            param_1[3] = param_1[2] + lVar15;
            pbVar13 = pbVar18;
            if (pbVar9 == pbVar18) goto LAB_01259728;
LAB_012596d8:
            pbVar13 = pbVar18;
            if (9 < *pbVar18 - 0x30) goto LAB_01259728;
            do {
              pbVar13 = pbVar13 + 1;
              *param_1 = (long)pbVar13;
              pbVar19 = pbVar9;
              if (pbVar9 == pbVar13) break;
              pbVar19 = pbVar13;
            } while (*pbVar13 - 0x30 < 10);
            if (pbVar13 == pbVar9) goto LAB_012597e0;
          }
          else {
            if (uVar3 != 0) {
              pcVar11 = "vE";
              uVar12 = uVar3;
              pcVar14 = pcVar1;
              do {
                if (*pcVar11 != *pcVar14) goto LAB_01259654;
                pcVar11 = pcVar11 + 1;
                uVar12 = uVar12 - 1;
                pcVar14 = pcVar14 + 1;
              } while (uVar12 != 0);
            }
            pbVar18 = (byte *)(pcVar1 + uVar3);
            auVar20 = ZEXT816(0);
            *param_1 = (long)pbVar18;
            pbVar13 = pbVar18;
            if (pbVar9 != pbVar18) goto LAB_012596d8;
LAB_01259728:
            pbVar18 = (byte *)0x0;
            pbVar19 = (byte *)0x0;
            if (pbVar13 == pbVar9) goto LAB_012597e0;
          }
          if (*pbVar13 != 0x5f) {
LAB_012597e0:
            *(undefined1 *)((long)param_1 + 0x2d2) = uVar10;
            return 0;
          }
          pvVar17 = (void *)param_1[0x25c];
          *param_1 = (long)(pbVar13 + 1);
          lVar15 = *(long *)((long)pvVar17 + 8);
          puVar5 = pvVar17;
          if (0xfef < lVar15 + 0x30U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (void *)0x0) {
LAB_01259830:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar15 = 0;
            *puVar5 = pvVar17;
            puVar5[1] = 0;
            param_1[0x25c] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar15 + 0x30;
          puVar4 = (undefined8 *)((long)puVar5 + lVar15 + 0x10);
          *puVar4 = &PTR_FUN_01736ad8;
          *(undefined4 *)((long)puVar5 + lVar15 + 0x18) = 0x1010128;
          *(undefined1 (*) [16])((long)puVar5 + lVar15 + 0x20) = auVar20;
          *(byte **)((long)puVar5 + lVar15 + 0x30) = pbVar18;
          *(byte **)((long)puVar5 + lVar15 + 0x38) = pbVar19;
          *(undefined1 *)((long)param_1 + 0x2d2) = uVar10;
          goto joined_r0x012597ac;
        }
LAB_012594a0:
        uVar3 = __strlen_chk(&DAT_014a83d7,3);
        pcVar1 = (char *)*param_1;
        pbVar9 = (byte *)param_1[1];
        if ((ulong)((long)pbVar9 - (long)pcVar1) < uVar3) {
          return 0;
        }
        if (uVar3 != 0) {
          pcVar11 = "Ub";
          uVar12 = uVar3;
          pcVar14 = pcVar1;
          do {
            if (*pcVar11 != *pcVar14) {
              return 0;
            }
            pcVar11 = pcVar11 + 1;
            uVar12 = uVar12 - 1;
            pcVar14 = pcVar14 + 1;
          } while (uVar12 != 0);
        }
        pbVar18 = (byte *)(pcVar1 + uVar3);
        *param_1 = (long)pbVar18;
        if ((pbVar9 != pbVar18) && (*pbVar18 - 0x30 < 10)) {
          pbVar18 = (byte *)(pcVar1 + uVar3);
          do {
            pbVar18 = pbVar18 + 1;
            *param_1 = (long)pbVar18;
            if (pbVar9 == pbVar18) break;
          } while (*pbVar18 - 0x30 < 10);
        }
        if (pbVar18 == pbVar9) {
          return 0;
        }
        if (*pbVar18 != 0x5f) {
          return 0;
        }
        pvVar17 = (void *)param_1[0x25c];
        *param_1 = (long)(pbVar18 + 1);
        lVar15 = *(long *)((long)pvVar17 + 8);
        puVar4 = pvVar17;
        if (0xfef < lVar15 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_01259830;
          lVar15 = 0;
          *puVar4 = pvVar17;
          puVar4[1] = 0;
          param_1[0x25c] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar15 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar15 + 0x10);
        lVar15 = __strlen_chk("\'block-literal\'",0x10);
        auVar20._8_8_ = "\'block-literal\'" + lVar15;
        auVar20._0_8_ = "\'block-literal\'";
        ppuVar8 = &PTR_FUN_01735958;
        uVar10 = 7;
      }
      else {
        if (uVar3 != 0) {
          pcVar11 = "Ut";
          uVar12 = uVar3;
          pcVar14 = pcVar1;
          do {
            if (*pcVar11 != *pcVar14) goto LAB_012593c8;
            pcVar11 = pcVar11 + 1;
            uVar12 = uVar12 - 1;
            pcVar14 = pcVar14 + 1;
          } while (uVar12 != 0);
        }
        pbVar18 = (byte *)(pcVar1 + uVar3);
        *param_1 = (long)pbVar18;
        if ((pbVar9 == pbVar18) || (9 < *pbVar18 - 0x30)) {
          pbVar19 = (byte *)0x0;
          pbVar2 = (byte *)0x0;
          pbVar13 = pbVar18;
        }
        else {
          pbVar13 = (byte *)(pcVar1 + uVar3);
          do {
            pbVar13 = pbVar13 + 1;
            *param_1 = (long)pbVar13;
            pbVar19 = pbVar9;
            pbVar2 = pbVar18;
            if (pbVar9 == pbVar13) break;
            pbVar19 = pbVar13;
          } while (*pbVar13 - 0x30 < 10);
        }
        if (pbVar13 == pbVar9) {
          return 0;
        }
        auVar20._8_8_ = pbVar19;
        auVar20._0_8_ = pbVar2;
        if (*pbVar13 != 0x5f) {
          return 0;
        }
        pvVar17 = (void *)param_1[0x25c];
        *param_1 = (long)(pbVar13 + 1);
        lVar15 = *(long *)((long)pvVar17 + 8);
        puVar4 = pvVar17;
        if (0xfef < lVar15 + 0x20U) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_01259830;
          lVar15 = 0;
          *puVar4 = pvVar17;
          puVar4[1] = 0;
          param_1[0x25c] = (long)puVar4;
        }
        ppuVar8 = &PTR_FUN_01736a68;
        *(long *)((long)puVar4 + 8) = lVar15 + 0x20;
        puVar4 = (undefined8 *)((long)puVar4 + lVar15 + 0x10);
        uVar10 = 0x27;
      }
LAB_01259634:
      *(undefined1 *)(puVar4 + 1) = uVar10;
      *puVar4 = ppuVar8;
      *(undefined2 *)((long)puVar4 + 9) = 0x101;
      *(undefined1 *)((long)puVar4 + 0xb) = 1;
      *(undefined1 (*) [16])(puVar4 + 2) = auVar20;
      goto LAB_012597ec;
    }
    if (8 < uVar7 - 0x31) goto LAB_0125919c;
    puVar4 = (undefined8 *)FUN_0125f98c(param_1);
  }
joined_r0x012597ac:
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
LAB_012597ec:
  uVar6 = FUN_01258fe4(param_1,puVar4);
  return uVar6;
}

