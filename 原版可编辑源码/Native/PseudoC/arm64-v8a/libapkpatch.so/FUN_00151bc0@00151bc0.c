
undefined8 * FUN_00151bc0(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *unaff_x28;
  long local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar11 = (char *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if (2 < (ulong)((long)pbVar2 - (long)pcVar11)) {
    cVar3 = *pcVar11;
    if (cVar3 != 's') goto LAB_00151de4;
    if (pcVar11[1] != 'r') goto LAB_00151e20;
    if (pcVar11[2] != 'N') {
      bVar6 = false;
      goto LAB_00151ed0;
    }
    *param_1 = (long)(pcVar11 + 3);
    puVar7 = (undefined8 *)FUN_0015723c(param_1);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = puVar7;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar9 = FUN_0014d248(param_1,0);
        puVar10 = (undefined8 *)0x0;
        if (lVar9 == 0) goto LAB_00152220;
        pvVar14 = (void *)param_1[0x266];
        lVar13 = *(long *)((long)pvVar14 + 8);
        puVar10 = pvVar14;
        if (0xfef < lVar13 + 0x20U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_00152258;
          lVar13 = 0;
          *puVar10 = pvVar14;
          puVar10[1] = 0;
          param_1[0x266] = (long)puVar10;
        }
        *(long *)((long)puVar10 + 8) = lVar13 + 0x20;
        puVar8 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
        *puVar8 = &PTR_FUN_00168920;
        *(undefined8 **)((long)puVar10 + lVar13 + 0x20) = puVar7;
        *(long *)((long)puVar10 + lVar13 + 0x28) = lVar9;
        *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x1010125;
      }
      while ((pcVar11 = (char *)*param_1, pcVar11 == (char *)param_1[1] || (*pcVar11 != 'E'))) {
        puVar7 = (undefined8 *)FUN_00157570(param_1);
        if (puVar7 == (undefined8 *)0x0) {
LAB_00152130:
          puVar10 = (undefined8 *)0x0;
          local_70 = unaff_x28;
          goto LAB_00152220;
        }
        puVar10 = puVar7;
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          lVar9 = FUN_0014d248(param_1,0);
          if (lVar9 == 0) goto LAB_00152130;
          pvVar14 = (void *)param_1[0x266];
          lVar13 = *(long *)((long)pvVar14 + 8);
          puVar12 = pvVar14;
          if (0xfef < lVar13 + 0x20U) {
            puVar12 = malloc(0x1000);
            if (puVar12 == (void *)0x0) goto LAB_00152258;
            lVar13 = 0;
            *puVar12 = pvVar14;
            puVar12[1] = 0;
            param_1[0x266] = (long)puVar12;
          }
          *(long *)((long)puVar12 + 8) = lVar13 + 0x20;
          puVar10 = (undefined8 *)((long)puVar12 + lVar13 + 0x10);
          *puVar10 = &PTR_FUN_00168920;
          *(undefined8 **)((long)puVar12 + lVar13 + 0x20) = puVar7;
          *(long *)((long)puVar12 + lVar13 + 0x28) = lVar9;
          *(undefined4 *)((long)puVar12 + lVar13 + 0x18) = 0x1010125;
        }
        pvVar14 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar14 + 8);
        puVar7 = pvVar14;
        if (0xfef < lVar9 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_00152258;
          lVar9 = 0;
          *puVar7 = pvVar14;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        unaff_x28 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *unaff_x28 = &PTR_FUN_00167dc0;
        *(undefined4 *)((long)puVar7 + lVar9 + 0x18) = 0x1010116;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar8;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x28) = puVar10;
        puVar8 = unaff_x28;
      }
      *param_1 = (long)(pcVar11 + 1);
      local_70 = unaff_x28;
      lVar9 = FUN_001572fc(param_1);
      if (lVar9 == 0) goto LAB_0015221c;
      pvVar14 = (void *)param_1[0x266];
      lVar13 = *(long *)((long)pvVar14 + 8);
      puVar7 = pvVar14;
      if (lVar13 + 0x20U < 0xff0) {
LAB_00152188:
        *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
        puVar10 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
        *puVar10 = &PTR_FUN_00167dc0;
        *(undefined4 *)((long)puVar7 + lVar13 + 0x18) = 0x1010116;
        goto LAB_00152214;
      }
      puVar7 = malloc(0x1000);
      if (puVar7 != (void *)0x0) {
        lVar13 = 0;
        *puVar7 = pvVar14;
        puVar7[1] = 0;
        param_1[0x266] = (long)puVar7;
        goto LAB_00152188;
      }
      goto LAB_00152258;
    }
    goto LAB_0015221c;
  }
  if ((long)pbVar2 - (long)pcVar11 != 2) {
LAB_00151e20:
    puVar7 = (undefined8 *)FUN_001572fc(param_1);
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return puVar7;
    }
    goto LAB_0015225c;
  }
  cVar3 = *pcVar11;
LAB_00151de4:
  bVar6 = cVar3 == 'g';
  cVar4 = cVar3;
  if (bVar6) {
    if (pcVar11[1] != 's') goto LAB_00151e20;
    pcVar11 = pcVar11 + 2;
    *param_1 = (long)pcVar11;
    if (1 < (ulong)((long)pbVar2 - (long)pcVar11)) {
      cVar4 = *pcVar11;
      goto joined_r0x00151e44;
    }
LAB_00151e54:
    puVar7 = (undefined8 *)FUN_001572fc(param_1);
    puVar10 = puVar7;
    if ((cVar3 == 'g') && (puVar7 != (undefined8 *)0x0)) {
      pvVar14 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar14 + 8);
      puVar8 = pvVar14;
      if (0xfef < lVar9 + 0x20U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) {
LAB_00152258:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar9 = 0;
        *puVar8 = pvVar14;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar9 + 0x20;
      puVar10 = (undefined8 *)((long)puVar8 + lVar9 + 0x10);
      *puVar10 = &PTR_FUN_00167f80;
      *(undefined4 *)((long)puVar8 + lVar9 + 0x18) = 0x1010126;
      *(undefined8 **)((long)puVar8 + lVar9 + 0x20) = puVar7;
    }
  }
  else {
joined_r0x00151e44:
    if ((cVar4 != 's') || (pcVar11[1] != 'r')) goto LAB_00151e54;
LAB_00151ed0:
    pbVar1 = (byte *)(pcVar11 + 2);
    *param_1 = (long)pbVar1;
    if ((pbVar2 == pbVar1) || (9 < *pbVar1 - 0x30)) {
      local_70 = (undefined8 *)FUN_0015723c(param_1);
      if (local_70 != (undefined8 *)0x0) {
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          local_78 = FUN_0014d248(param_1,0);
          if (local_78 == 0) goto LAB_0015221c;
          local_70 = (undefined8 *)FUN_0014d6d0(param_1,&local_70,&local_78);
        }
LAB_001521b0:
        puVar8 = local_70;
        lVar9 = FUN_001572fc(param_1);
        if (lVar9 != 0) {
          pvVar14 = (void *)param_1[0x266];
          lVar13 = *(long *)((long)pvVar14 + 8);
          puVar7 = pvVar14;
          if (0xfef < lVar13 + 0x20U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_00152258;
            lVar13 = 0;
            *puVar7 = pvVar14;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar13 + 0x20;
          puVar10 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
          *puVar10 = &PTR_FUN_00167dc0;
          *(undefined4 *)((long)puVar7 + lVar13 + 0x18) = 0x1010116;
LAB_00152214:
          puVar10[2] = puVar8;
          puVar10[3] = lVar9;
          goto LAB_00152220;
        }
      }
LAB_0015221c:
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_00157570(param_1);
      puVar10 = (undefined8 *)0x0;
      local_70 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
          local_78 = FUN_0014d248(param_1,0);
          if (local_78 == 0) goto LAB_0015221c;
          puVar7 = (undefined8 *)FUN_0014d6d0(param_1,&local_70,&local_78);
        }
        puVar8 = (undefined8 *)0x0;
        while( true ) {
          if (puVar8 == (undefined8 *)0x0) {
            if (bVar6) {
              pvVar14 = (void *)param_1[0x266];
              lVar9 = *(long *)((long)pvVar14 + 8);
              puVar8 = pvVar14;
              if (0xfef < lVar9 + 0x20U) {
                puVar8 = malloc(0x1000);
                if (puVar8 == (void *)0x0) goto LAB_00152258;
                lVar9 = 0;
                *puVar8 = pvVar14;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar9 + 0x20;
              puVar10 = (undefined8 *)((long)puVar8 + lVar9 + 0x10);
              *puVar10 = &PTR_FUN_00167f80;
              *(undefined4 *)((long)puVar8 + lVar9 + 0x18) = 0x1010126;
              *(undefined8 **)((long)puVar8 + lVar9 + 0x20) = puVar7;
              puVar7 = puVar10;
            }
          }
          else {
            pvVar14 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar14 + 8);
            puVar10 = pvVar14;
            if (0xfef < lVar9 + 0x20U) {
              puVar10 = malloc(0x1000);
              if (puVar10 == (void *)0x0) goto LAB_00152258;
              lVar9 = 0;
              *puVar10 = pvVar14;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            *(long *)((long)puVar10 + 8) = lVar9 + 0x20;
            puVar12 = (undefined8 *)((long)puVar10 + lVar9 + 0x10);
            *puVar12 = &PTR_FUN_00167dc0;
            *(undefined4 *)((long)puVar10 + lVar9 + 0x18) = 0x1010116;
            *(undefined8 **)((long)puVar10 + lVar9 + 0x20) = puVar8;
            *(undefined8 **)((long)puVar10 + lVar9 + 0x28) = puVar7;
            puVar7 = puVar12;
          }
          local_70 = puVar7;
          puVar8 = local_70;
          pcVar11 = (char *)*param_1;
          if ((pcVar11 != (char *)param_1[1]) && (*pcVar11 == 'E')) {
            *param_1 = (long)(pcVar11 + 1);
            goto LAB_001521b0;
          }
          puVar12 = (undefined8 *)FUN_00157570(param_1);
          puVar10 = (undefined8 *)0x0;
          if (puVar12 == (undefined8 *)0x0) break;
          puVar7 = puVar12;
          if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
            lVar9 = FUN_0014d248(param_1,0);
            if (lVar9 == 0) goto LAB_0015221c;
            pvVar14 = (void *)param_1[0x266];
            lVar13 = *(long *)((long)pvVar14 + 8);
            puVar10 = pvVar14;
            if (0xfef < lVar13 + 0x20U) {
              puVar10 = malloc(0x1000);
              if (puVar10 == (void *)0x0) goto LAB_00152258;
              lVar13 = 0;
              *puVar10 = pvVar14;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            *(long *)((long)puVar10 + 8) = lVar13 + 0x20;
            puVar7 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar7 = &PTR_FUN_00168920;
            *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x1010125;
            *(undefined8 **)((long)puVar10 + lVar13 + 0x20) = puVar12;
            *(long *)((long)puVar10 + lVar13 + 0x28) = lVar9;
          }
        }
      }
    }
  }
LAB_00152220:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return puVar10;
  }
LAB_0015225c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

