
undefined8 FUN_0183dc88(long *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined1 uVar3;
  byte *pbVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  void *pvVar17;
  byte *pbVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  if (pbVar13 != pbVar11) {
    if (*pbVar11 == 0x55) {
      if ((ulong)((long)pbVar13 - (long)pbVar11) < 2) {
        return 0;
      }
      if (pbVar11[1] == 0x74) {
        pbVar15 = pbVar11 + 2;
        *param_1 = (long)pbVar15;
        if ((pbVar13 == pbVar15) || (9 < *pbVar15 - 0x30)) {
          pbVar11 = (byte *)0x0;
          pbVar18 = (byte *)0x0;
          pbVar14 = pbVar15;
        }
        else {
          pbVar4 = pbVar11 + 3;
          do {
            pbVar14 = pbVar4;
            *param_1 = (long)pbVar14;
            pbVar11 = pbVar13;
            pbVar18 = pbVar15;
            if (pbVar13 == pbVar14) break;
            pbVar4 = pbVar14 + 1;
            pbVar11 = pbVar14;
          } while (*pbVar14 - 0x30 < 10);
        }
        if (pbVar14 == pbVar13) {
          return 0;
        }
        if (*pbVar14 != 0x5f) {
          return 0;
        }
        pvVar17 = (void *)param_1[0x25c];
        *param_1 = (long)(pbVar14 + 1);
        plVar12 = (long *)((long)pvVar17 + 8);
        lVar9 = *plVar12;
        puVar7 = pvVar17;
        if (0xfef < lVar9 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0183e22c;
          lVar9 = 0;
          *puVar7 = pvVar17;
          plVar12 = puVar7 + 1;
          *plVar12 = 0;
          param_1[0x25c] = (long)puVar7;
        }
        *plVar12 = lVar9 + 0x20;
        puVar10 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar10 = &PTR_FUN_01ce0bd0;
        *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010127;
        *(byte **)((long)puVar7 + lVar9 + 0x20) = pbVar18;
        *(byte **)((long)puVar7 + lVar9 + 0x28) = pbVar11;
        goto joined_r0x0183df60;
      }
      if (pbVar11[1] != 0x6c) {
        return 0;
      }
      uVar3 = *(undefined1 *)((long)param_1 + 0x2d2);
      pbVar15 = pbVar11 + 2;
      *param_1 = (long)pbVar15;
      *(undefined1 *)((long)param_1 + 0x2d2) = 1;
      if ((((ulong)((long)pbVar13 - (long)pbVar15) < 2) || (*pbVar15 != 0x76)) ||
         (pbVar11[3] != 0x45)) {
        lVar9 = param_1[2];
        lVar2 = param_1[3];
        do {
          lVar8 = FUN_01839ba0(param_1);
          if (lVar8 == 0) goto LAB_0183e204;
          plVar12 = (long *)param_1[3];
          if (plVar12 == (long *)param_1[4]) {
            plVar19 = (long *)param_1[2];
            sVar16 = (long)plVar12 - (long)plVar19;
            if (param_1 + 5 == plVar19) {
              pvVar17 = malloc(sVar16 * 2);
              if (pvVar17 == (void *)0x0) goto LAB_0183e22c;
              if (sVar16 != 0) {
                memmove(pvVar17,plVar19,sVar16);
              }
              param_1[2] = (long)pvVar17;
            }
            else {
              pvVar17 = realloc(plVar19,sVar16 * 2);
              param_1[2] = (long)pvVar17;
              if (pvVar17 == (void *)0x0) goto LAB_0183e22c;
            }
            plVar12 = (long *)((long)pvVar17 + ((long)sVar16 >> 3) * 8);
            param_1[3] = (long)plVar12;
            param_1[4] = (long)((long)pvVar17 + ((long)sVar16 >> 2) * 8);
          }
          param_1[3] = (long)(plVar12 + 1);
          *plVar12 = lVar8;
          pcVar1 = (char *)*param_1;
        } while ((pcVar1 == (char *)param_1[1]) || (*pcVar1 != 'E'));
        lVar9 = (lVar2 - lVar9 >> 3) * 8;
        *param_1 = (long)(pcVar1 + 1);
        auVar20 = FUN_01844294(param_1,param_1[2] + lVar9,param_1[3]);
        pbVar13 = (byte *)param_1[1];
        pbVar11 = (byte *)*param_1;
        param_1[3] = param_1[2] + lVar9;
        if (pbVar13 != pbVar11) goto LAB_0183e060;
LAB_0183e0a4:
        pbVar18 = (byte *)0x0;
        bVar5 = pbVar11 == pbVar13;
        pbVar15 = pbVar11;
        pbVar11 = (byte *)0x0;
        if (bVar5) goto LAB_0183e204;
      }
      else {
        pbVar11 = pbVar11 + 4;
        auVar20 = ZEXT816(0);
        *param_1 = (long)pbVar11;
        if (pbVar13 == pbVar11) goto LAB_0183e0a4;
LAB_0183e060:
        pbVar15 = pbVar11;
        if (9 < *pbVar11 - 0x30) goto LAB_0183e0a4;
        do {
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar15;
          pbVar18 = pbVar13;
          if (pbVar13 == pbVar15) break;
          pbVar18 = pbVar15;
        } while (*pbVar15 - 0x30 < 10);
        if (pbVar15 == pbVar13) goto LAB_0183e204;
      }
      if (*pbVar15 != 0x5f) {
LAB_0183e204:
        *(undefined1 *)((long)param_1 + 0x2d2) = uVar3;
        return 0;
      }
      pvVar17 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar15 + 1);
      plVar12 = (long *)((long)pvVar17 + 8);
      lVar9 = *plVar12;
      puVar7 = pvVar17;
      if (0xfef < lVar9 + 0x30U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) {
LAB_0183e22c:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar7 = pvVar17;
        plVar12 = puVar7 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar7;
      }
      *plVar12 = lVar9 + 0x30;
      puVar10 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
      *puVar10 = &PTR_FUN_01ce0c40;
      *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010128;
      *(undefined1 (*) [16])((long)puVar7 + lVar9 + 0x20) = auVar20;
      *(byte **)((long)puVar7 + lVar9 + 0x30) = pbVar11;
      *(byte **)((long)puVar7 + lVar9 + 0x38) = pbVar18;
      *(undefined1 *)((long)param_1 + 0x2d2) = uVar3;
      goto joined_r0x0183df60;
    }
    if (*pbVar11 - 0x31 < 9) {
      puVar10 = (undefined8 *)FUN_01844a14(param_1);
      goto joined_r0x0183df60;
    }
    if (((1 < (ulong)((long)pbVar13 - (long)pbVar11)) && (*pbVar11 == 0x44)) && (pbVar11[1] == 0x43)
       ) {
      lVar9 = param_1[2];
      lVar2 = param_1[3];
      *param_1 = (long)(pbVar11 + 2);
      lVar8 = FUN_01844a14(param_1);
      if (lVar8 == 0) {
        return 0;
      }
      while( true ) {
        plVar12 = (long *)param_1[3];
        if (plVar12 == (long *)param_1[4]) {
          plVar19 = (long *)param_1[2];
          sVar16 = (long)plVar12 - (long)plVar19;
          if (param_1 + 5 == plVar19) {
            pvVar17 = malloc(sVar16 * 2);
            if (pvVar17 == (void *)0x0) goto LAB_0183e22c;
            if (sVar16 != 0) {
              memmove(pvVar17,plVar19,sVar16);
            }
            param_1[2] = (long)pvVar17;
          }
          else {
            pvVar17 = realloc(plVar19,sVar16 * 2);
            param_1[2] = (long)pvVar17;
            if (pvVar17 == (void *)0x0) goto LAB_0183e22c;
          }
          plVar12 = (long *)((long)pvVar17 + ((long)sVar16 >> 3) * 8);
          param_1[3] = (long)plVar12;
          param_1[4] = (long)((long)pvVar17 + ((long)sVar16 >> 2) * 8);
        }
        param_1[3] = (long)(plVar12 + 1);
        *plVar12 = lVar8;
        pcVar1 = (char *)*param_1;
        if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 'E')) break;
        lVar8 = FUN_01844a14(param_1);
        if (lVar8 == 0) {
          return 0;
        }
      }
      lVar9 = (lVar2 - lVar9 >> 3) * 8;
      *param_1 = (long)(pcVar1 + 1);
      auVar20 = FUN_01844294(param_1,param_1[2] + lVar9,param_1[3]);
      pvVar17 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar9;
      plVar12 = (long *)((long)pvVar17 + 8);
      lVar9 = *plVar12;
      puVar7 = pvVar17;
      if (0xfef < lVar9 + 0x20U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) goto LAB_0183e22c;
        lVar9 = 0;
        *puVar7 = pvVar17;
        plVar12 = puVar7 + 1;
        *plVar12 = 0;
        param_1[0x25c] = (long)puVar7;
      }
      *plVar12 = lVar9 + 0x20;
      puVar10 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
      *puVar10 = &PTR_FUN_01ce0cb0;
      *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010129;
      *(undefined1 (*) [16])((long)puVar7 + lVar9 + 0x20) = auVar20;
      goto joined_r0x0183df60;
    }
  }
  puVar10 = (undefined8 *)FUN_01844d44(param_1);
joined_r0x0183df60:
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  uVar6 = FUN_0183db08(param_1,puVar10);
  return uVar6;
}

