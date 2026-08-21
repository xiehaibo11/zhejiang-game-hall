
undefined8 * FUN_0125d27c(long *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  void *pvVar14;
  
  uVar4 = __strlen_chk(&DAT_014a8039,4);
  pcVar2 = (char *)*param_1;
  if ((ulong)(param_1[1] - (long)pcVar2) < uVar4) {
LAB_0125d49c:
    uVar4 = __strlen_chk("gs",3);
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < uVar4) {
LAB_0125d500:
      bVar3 = false;
    }
    else {
      if (uVar4 != 0) {
        pcVar11 = "gs";
        uVar12 = uVar4;
        pcVar13 = pcVar2;
        do {
          if (*pcVar11 != *pcVar13) goto LAB_0125d500;
          pcVar11 = pcVar11 + 1;
          uVar12 = uVar12 - 1;
          pcVar13 = pcVar13 + 1;
        } while (uVar12 != 0);
      }
      bVar3 = true;
      *param_1 = (long)(pcVar2 + uVar4);
    }
    uVar4 = __strlen_chk(&DAT_014a803d,3);
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < uVar4) {
LAB_0125d70c:
      puVar5 = (undefined8 *)FUN_0125f6b4(param_1);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (!bVar3) {
        return puVar5;
      }
      pvVar14 = (void *)param_1[0x25c];
      lVar6 = *(long *)((long)pvVar14 + 8);
      puVar10 = pvVar14;
      if (0xfef < lVar6 + 0x20U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) {
LAB_0125d8a4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar10 = pvVar14;
        puVar10[1] = 0;
        param_1[0x25c] = (long)puVar10;
      }
      *(long *)((long)puVar10 + 8) = lVar6 + 0x20;
      puVar7 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
      *puVar7 = &PTR_FUN_017362f8;
      *(undefined4 *)((long)puVar10 + lVar6 + 0x18) = 0x1010121;
      *(undefined8 **)((long)puVar10 + lVar6 + 0x20) = puVar5;
      return puVar7;
    }
    if (uVar4 != 0) {
      pcVar11 = "sr";
      uVar12 = uVar4;
      pcVar13 = pcVar2;
      do {
        if (*pcVar11 != *pcVar13) goto LAB_0125d70c;
        pcVar11 = pcVar11 + 1;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar13 + 1;
      } while (uVar12 != 0);
    }
    pbVar1 = (byte *)(pcVar2 + uVar4);
    *param_1 = (long)pbVar1;
    if (((byte *)param_1[1] == pbVar1) || (9 < *pbVar1 - 0x30)) {
      puVar5 = (undefined8 *)FUN_0125f62c(param_1);
      if (puVar5 != (undefined8 *)0x0) {
        puVar10 = puVar5;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar6 = FUN_01258568(param_1,0);
          if (lVar6 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar14 = (void *)param_1[0x25c];
          lVar9 = *(long *)((long)pvVar14 + 8);
          puVar7 = pvVar14;
          if (0xfef < lVar9 + 0x20U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_0125d8a4;
            lVar9 = 0;
            *puVar7 = pvVar14;
            puVar7[1] = 0;
            param_1[0x25c] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
          puVar10 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
          *puVar10 = &PTR_FUN_01736d78;
          *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar5;
          *(long *)((long)puVar7 + lVar9 + 0x28) = lVar6;
          *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010120;
        }
LAB_0125d808:
        lVar6 = FUN_0125f6b4(param_1);
joined_r0x0125d810:
        if (lVar6 != 0) {
          pvVar14 = (void *)param_1[0x25c];
          lVar9 = *(long *)((long)pvVar14 + 8);
          puVar5 = pvVar14;
          if (0xfef < lVar9 + 0x20U) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (void *)0x0) goto LAB_0125d8a4;
            lVar9 = 0;
            *puVar5 = pvVar14;
            puVar5[1] = 0;
            param_1[0x25c] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
          puVar7 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
          *puVar7 = &PTR_FUN_01736138;
          *(undefined4 *)((long)puVar5 + lVar9 + 0x18) = 0x1010116;
          *(undefined8 **)((long)puVar5 + lVar9 + 0x20) = puVar10;
          *(long *)((long)puVar5 + lVar9 + 0x28) = lVar6;
          return puVar7;
        }
      }
    }
    else {
      puVar5 = (undefined8 *)FUN_0125f98c(param_1);
      if (puVar5 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
        do {
          puVar10 = puVar5;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar6 = FUN_01258568(param_1,0);
            if (lVar6 == 0) {
              return (undefined8 *)0x0;
            }
            pvVar14 = (void *)param_1[0x25c];
            lVar9 = *(long *)((long)pvVar14 + 8);
            puVar8 = pvVar14;
            if (0xfef < lVar9 + 0x20U) {
              puVar8 = malloc(0x1000);
              if (puVar8 == (void *)0x0) goto LAB_0125d8a4;
              lVar9 = 0;
              *puVar8 = pvVar14;
              puVar8[1] = 0;
              param_1[0x25c] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar9 + 0x20;
            puVar10 = (undefined8 *)((long)puVar8 + lVar9 + 0x10);
            *puVar10 = &PTR_FUN_01736d78;
            *(undefined8 **)((long)puVar8 + lVar9 + 0x20) = puVar5;
            *(long *)((long)puVar8 + lVar9 + 0x28) = lVar6;
            *(undefined4 *)((long)puVar8 + lVar9 + 0x18) = 0x1010120;
          }
          if (puVar7 == (undefined8 *)0x0) {
            if (bVar3) {
              pvVar14 = (void *)param_1[0x25c];
              lVar6 = *(long *)((long)pvVar14 + 8);
              puVar5 = pvVar14;
              if (0xfef < lVar6 + 0x20U) {
                puVar5 = malloc(0x1000);
                if (puVar5 == (void *)0x0) goto LAB_0125d8a4;
                lVar6 = 0;
                *puVar5 = pvVar14;
                puVar5[1] = 0;
                param_1[0x25c] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
              puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
              *puVar8 = &PTR_FUN_017362f8;
              *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010121;
              puVar5 = (undefined8 *)((long)puVar5 + lVar6 + 0x20);
              goto LAB_0125d6e0;
            }
          }
          else {
            pvVar14 = (void *)param_1[0x25c];
            lVar6 = *(long *)((long)pvVar14 + 8);
            puVar5 = pvVar14;
            if (0xfef < lVar6 + 0x20U) {
              puVar5 = malloc(0x1000);
              if (puVar5 == (void *)0x0) goto LAB_0125d8a4;
              lVar6 = 0;
              *puVar5 = pvVar14;
              puVar5[1] = 0;
              param_1[0x25c] = (long)puVar5;
            }
            *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
            puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar8 = &PTR_FUN_01736138;
            *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar7;
            puVar5 = (undefined8 *)((long)puVar5 + lVar6 + 0x28);
LAB_0125d6e0:
            *puVar5 = puVar10;
            puVar10 = puVar8;
          }
          pcVar2 = (char *)*param_1;
          if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
            *param_1 = (long)(pcVar2 + 1);
            goto LAB_0125d808;
          }
          puVar5 = (undefined8 *)FUN_0125f98c(param_1);
          puVar7 = puVar10;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
    }
  }
  else {
    if (uVar4 != 0) {
      pcVar11 = "srN";
      uVar12 = uVar4;
      pcVar13 = pcVar2;
      do {
        if (*pcVar11 != *pcVar13) goto LAB_0125d49c;
        pcVar11 = pcVar11 + 1;
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar13 + 1;
      } while (uVar12 != 0);
    }
    *param_1 = (long)(pcVar2 + uVar4);
    puVar5 = (undefined8 *)FUN_0125f62c(param_1);
    if (puVar5 != (undefined8 *)0x0) {
      puVar10 = puVar5;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar6 = FUN_01258568(param_1,0);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar14 = (void *)param_1[0x25c];
        lVar9 = *(long *)((long)pvVar14 + 8);
        puVar7 = pvVar14;
        if (0xfef < lVar9 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0125d8a4;
          lVar9 = 0;
          *puVar7 = pvVar14;
          puVar7[1] = 0;
          param_1[0x25c] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        puVar10 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar10 = &PTR_FUN_01736d78;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar5;
        *(long *)((long)puVar7 + lVar9 + 0x28) = lVar6;
        *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010120;
      }
      do {
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
          *param_1 = (long)(pcVar2 + 1);
          lVar6 = FUN_0125f6b4(param_1);
          goto joined_r0x0125d810;
        }
        puVar5 = (undefined8 *)FUN_0125f98c(param_1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar7 = puVar5;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar6 = FUN_01258568(param_1,0);
          if (lVar6 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar14 = (void *)param_1[0x25c];
          lVar9 = *(long *)((long)pvVar14 + 8);
          puVar8 = pvVar14;
          if (0xfef < lVar9 + 0x20U) {
            puVar8 = malloc(0x1000);
            if (puVar8 == (void *)0x0) goto LAB_0125d8a4;
            lVar9 = 0;
            *puVar8 = pvVar14;
            puVar8[1] = 0;
            param_1[0x25c] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar9 + 0x20;
          puVar7 = (undefined8 *)((long)puVar8 + lVar9 + 0x10);
          *puVar7 = &PTR_FUN_01736d78;
          *(undefined8 **)((long)puVar8 + lVar9 + 0x20) = puVar5;
          *(long *)((long)puVar8 + lVar9 + 0x28) = lVar6;
          *(undefined4 *)((long)puVar8 + lVar9 + 0x18) = 0x1010120;
        }
        pvVar14 = (void *)param_1[0x25c];
        lVar6 = *(long *)((long)pvVar14 + 8);
        puVar5 = pvVar14;
        if (0xfef < lVar6 + 0x20U) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0125d8a4;
          lVar6 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x25c] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
        puVar8 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
        *puVar8 = &PTR_FUN_01736138;
        *(undefined4 *)((long)puVar5 + lVar6 + 0x18) = 0x1010116;
        *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar10;
        *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar7;
        puVar10 = puVar8;
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}

