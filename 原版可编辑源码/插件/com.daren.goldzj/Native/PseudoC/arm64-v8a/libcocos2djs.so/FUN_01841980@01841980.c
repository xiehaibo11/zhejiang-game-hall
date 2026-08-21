
undefined8 * FUN_01841980(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  
  pcVar7 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)pcVar7) < 3) {
    if ((long)pbVar2 - (long)pcVar7 == 2) {
LAB_01841bcc:
      cVar3 = *pcVar7;
      goto LAB_01841bd0;
    }
    bVar4 = false;
  }
  else {
    cVar3 = *pcVar7;
    if (cVar3 == 's') {
      if ((pcVar7[1] == 'r') && (pcVar7[2] == 'N')) {
        *param_1 = (long)(pcVar7 + 3);
        puVar12 = (undefined8 *)FUN_01844674(param_1);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = puVar12;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar11 = FUN_0183cea8(param_1,0);
          if (lVar11 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar13 = (void *)param_1[0x25c];
          plVar10 = (long *)((long)pvVar13 + 8);
          lVar8 = *plVar10;
          puVar6 = pvVar13;
          if (0xfef < lVar8 + 0x20U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_01842050;
            lVar8 = 0;
            *puVar6 = pvVar13;
            plVar10 = puVar6 + 1;
            *plVar10 = 0;
            param_1[0x25c] = (long)puVar6;
          }
          *plVar10 = lVar8 + 0x20;
          puVar5 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
          *puVar5 = &PTR_FUN_01ce0ee0;
          *(undefined4 *)((long)puVar6 + lVar8 + 0x18) = 0x1010120;
          *(undefined8 **)((long)puVar6 + lVar8 + 0x20) = puVar12;
          *(long *)((long)puVar6 + lVar8 + 0x28) = lVar11;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        while ((pcVar7 = (char *)*param_1, pcVar7 == (char *)param_1[1] || (*pcVar7 != 'E'))) {
          puVar12 = (undefined8 *)FUN_01844a14(param_1);
          if (puVar12 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar6 = puVar12;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar11 = FUN_0183cea8(param_1,0);
            if (lVar11 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar13 = (void *)param_1[0x25c];
            plVar10 = (long *)((long)pvVar13 + 8);
            lVar8 = *plVar10;
            puVar9 = pvVar13;
            if (0xfef < lVar8 + 0x20U) {
              puVar9 = malloc(0x1000);
              if (puVar9 == (void *)0x0) goto LAB_01842050;
              lVar8 = 0;
              *puVar9 = pvVar13;
              plVar10 = puVar9 + 1;
              *plVar10 = 0;
              param_1[0x25c] = (long)puVar9;
            }
            *plVar10 = lVar8 + 0x20;
            puVar6 = (undefined8 *)((long)puVar9 + lVar8 + 0x10);
            *puVar6 = &PTR_FUN_01ce0ee0;
            *(undefined4 *)((long)puVar9 + lVar8 + 0x18) = 0x1010120;
            *(undefined8 **)((long)puVar9 + lVar8 + 0x20) = puVar12;
            *(long *)((long)puVar9 + lVar8 + 0x28) = lVar11;
            if (puVar6 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          }
          pvVar13 = (void *)param_1[0x25c];
          plVar10 = (long *)((long)pvVar13 + 8);
          lVar11 = *plVar10;
          puVar12 = pvVar13;
          if (0xfef < lVar11 + 0x20U) {
            puVar12 = malloc(0x1000);
            if (puVar12 == (void *)0x0) goto LAB_01842050;
            lVar11 = 0;
            *puVar12 = pvVar13;
            plVar10 = puVar12 + 1;
            *plVar10 = 0;
            param_1[0x25c] = (long)puVar12;
          }
          *plVar10 = lVar11 + 0x20;
          puVar9 = (undefined8 *)((long)puVar12 + lVar11 + 0x10);
          *puVar9 = &PTR_FUN_01ce0310;
          *(undefined8 **)((long)puVar12 + lVar11 + 0x20) = puVar5;
          *(undefined8 **)((long)puVar12 + lVar11 + 0x28) = puVar6;
          *(undefined4 *)((long)puVar12 + lVar11 + 0x18) = 0x1010116;
          puVar5 = puVar9;
          if (puVar9 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        *param_1 = (long)(pcVar7 + 1);
        lVar11 = FUN_01844788(param_1);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar13 = (void *)param_1[0x25c];
        plVar10 = (long *)((long)pvVar13 + 8);
        lVar8 = *plVar10;
        puVar12 = pvVar13;
        if (0xfef < lVar8 + 0x20U) {
          puVar12 = malloc(0x1000);
          if (puVar12 == (void *)0x0) goto LAB_01842050;
          lVar8 = 0;
          *puVar12 = pvVar13;
          plVar10 = puVar12 + 1;
          *plVar10 = 0;
          param_1[0x25c] = (long)puVar12;
        }
        *plVar10 = lVar8 + 0x20;
        puVar6 = (undefined8 *)((long)puVar12 + lVar8 + 0x10);
        *puVar6 = &PTR_FUN_01ce0310;
        *(undefined4 *)((long)puVar12 + lVar8 + 0x18) = 0x1010116;
        *(undefined8 **)((long)puVar12 + lVar8 + 0x20) = puVar5;
        goto LAB_01842024;
      }
      goto LAB_01841bcc;
    }
LAB_01841bd0:
    if ((cVar3 == 'g') && (pcVar7[1] == 's')) {
      pcVar7 = pcVar7 + 2;
      bVar4 = true;
      *param_1 = (long)pcVar7;
      if ((ulong)((long)pbVar2 - (long)pcVar7) < 2) goto LAB_01841e00;
    }
    else {
      bVar4 = false;
    }
    if ((*pcVar7 == 's') && (pcVar7[1] == 'r')) {
      pbVar1 = (byte *)(pcVar7 + 2);
      *param_1 = (long)pbVar1;
      if ((pbVar2 != pbVar1) && (*pbVar1 - 0x30 < 10)) {
        puVar12 = (undefined8 *)FUN_01844a14(param_1);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = (undefined8 *)0x0;
        do {
          puVar9 = puVar12;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar11 = FUN_0183cea8(param_1,0);
            if (lVar11 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar13 = (void *)param_1[0x25c];
            plVar10 = (long *)((long)pvVar13 + 8);
            lVar8 = *plVar10;
            puVar6 = pvVar13;
            if (0xfef < lVar8 + 0x20U) {
              puVar6 = malloc(0x1000);
              if (puVar6 == (void *)0x0) goto LAB_01842050;
              lVar8 = 0;
              *puVar6 = pvVar13;
              plVar10 = puVar6 + 1;
              *plVar10 = 0;
              param_1[0x25c] = (long)puVar6;
            }
            *plVar10 = lVar8 + 0x20;
            puVar9 = (undefined8 *)((long)puVar6 + lVar8 + 0x10);
            *puVar9 = &PTR_FUN_01ce0ee0;
            *(undefined8 **)((long)puVar6 + lVar8 + 0x20) = puVar12;
            *(long *)((long)puVar6 + lVar8 + 0x28) = lVar11;
            *(undefined4 *)((long)puVar6 + lVar8 + 0x18) = 0x1010120;
            if (puVar9 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          }
          if (puVar5 == (undefined8 *)0x0) {
            if (bVar4) {
              pvVar13 = (void *)param_1[0x25c];
              plVar10 = (long *)((long)pvVar13 + 8);
              lVar11 = *plVar10;
              puVar12 = pvVar13;
              if (0xfef < lVar11 + 0x20U) {
                puVar12 = malloc(0x1000);
                if (puVar12 == (void *)0x0) goto LAB_01842050;
                lVar11 = 0;
                *puVar12 = pvVar13;
                plVar10 = puVar12 + 1;
                *plVar10 = 0;
                param_1[0x25c] = (long)puVar12;
              }
              *plVar10 = lVar11 + 0x20;
              puVar6 = (undefined8 *)((long)puVar12 + lVar11 + 0x10);
              *puVar6 = &PTR_FUN_01ce04d0;
              *(undefined4 *)((long)puVar12 + lVar11 + 0x18) = 0x1010121;
              puVar12 = (undefined8 *)((long)puVar12 + lVar11 + 0x20);
              goto LAB_01841dc4;
            }
          }
          else {
            pvVar13 = (void *)param_1[0x25c];
            plVar10 = (long *)((long)pvVar13 + 8);
            lVar11 = *plVar10;
            puVar12 = pvVar13;
            if (0xfef < lVar11 + 0x20U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01842050;
              lVar11 = 0;
              *puVar12 = pvVar13;
              plVar10 = puVar12 + 1;
              *plVar10 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            *plVar10 = lVar11 + 0x20;
            puVar6 = (undefined8 *)((long)puVar12 + lVar11 + 0x10);
            *puVar6 = &PTR_FUN_01ce0310;
            *(undefined4 *)((long)puVar12 + lVar11 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar12 + lVar11 + 0x20) = puVar5;
            puVar12 = (undefined8 *)((long)puVar12 + lVar11 + 0x28);
LAB_01841dc4:
            *puVar12 = puVar9;
            puVar9 = puVar6;
          }
          if (puVar9 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          pcVar7 = (char *)*param_1;
          if ((pcVar7 != (char *)param_1[1]) && (*pcVar7 == 'E')) {
            *param_1 = (long)(pcVar7 + 1);
            goto LAB_01841fb0;
          }
          puVar12 = (undefined8 *)FUN_01844a14(param_1);
          puVar5 = puVar9;
          if (puVar12 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar12 = (undefined8 *)FUN_01844674(param_1);
      if (puVar12 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar9 = puVar12;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar11 = FUN_0183cea8(param_1,0);
        if (lVar11 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar13 = (void *)param_1[0x25c];
        plVar10 = (long *)((long)pvVar13 + 8);
        lVar8 = *plVar10;
        puVar5 = pvVar13;
        if (0xfef < lVar8 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_01842050;
          lVar8 = 0;
          *puVar5 = pvVar13;
          plVar10 = puVar5 + 1;
          *plVar10 = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *plVar10 = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_01ce0ee0;
        *(undefined4 *)((long)puVar5 + lVar8 + 0x18) = 0x1010120;
        *(undefined8 **)((long)puVar5 + lVar8 + 0x20) = puVar12;
        *(long *)((long)puVar5 + lVar8 + 0x28) = lVar11;
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      }
LAB_01841fb0:
      lVar11 = FUN_01844788(param_1);
      if (lVar11 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar13 = (void *)param_1[0x25c];
      plVar10 = (long *)((long)pvVar13 + 8);
      lVar8 = *plVar10;
      puVar12 = pvVar13;
      if (0xfef < lVar8 + 0x20U) {
        puVar12 = malloc(0x1000);
        if (puVar12 == (void *)0x0) goto LAB_01842050;
        lVar8 = 0;
        *puVar12 = pvVar13;
        plVar10 = puVar12 + 1;
        *plVar10 = 0;
        param_1[0x25c] = (long)puVar12;
      }
      *plVar10 = lVar8 + 0x20;
      puVar6 = (undefined8 *)((long)puVar12 + lVar8 + 0x10);
      *puVar6 = &PTR_FUN_01ce0310;
      *(undefined4 *)((long)puVar12 + lVar8 + 0x18) = 0x1010116;
      *(undefined8 **)((long)puVar12 + lVar8 + 0x20) = puVar9;
LAB_01842024:
      puVar6[3] = lVar11;
      return puVar6;
    }
  }
LAB_01841e00:
  puVar5 = (undefined8 *)FUN_01844788(param_1);
  puVar12 = puVar5;
  if ((puVar5 != (undefined8 *)0x0) && (bVar4)) {
    pvVar13 = (void *)param_1[0x25c];
    plVar10 = (long *)((long)pvVar13 + 8);
    lVar11 = *plVar10;
    puVar6 = pvVar13;
    if (0xfef < lVar11 + 0x20U) {
      puVar6 = malloc(0x1000);
      if (puVar6 == (void *)0x0) {
LAB_01842050:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar6 = pvVar13;
      plVar10 = puVar6 + 1;
      *plVar10 = 0;
      param_1[0x25c] = (long)puVar6;
    }
    *plVar10 = lVar11 + 0x20;
    puVar12 = (undefined8 *)((long)puVar6 + lVar11 + 0x10);
    *puVar12 = &PTR_FUN_01ce04d0;
    *(undefined4 *)((long)puVar6 + lVar11 + 0x18) = 0x1010121;
    *(undefined8 **)((long)puVar6 + lVar11 + 0x20) = puVar5;
  }
  return puVar12;
}

