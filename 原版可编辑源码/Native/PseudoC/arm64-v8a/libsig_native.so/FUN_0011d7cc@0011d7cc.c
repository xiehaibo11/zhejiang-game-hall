
undefined8 * FUN_0011d7cc(long *param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  char *pcVar20;
  long *plVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  void *pvVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = __strlen_chk(&DAT_0012eee9,3);
  puVar13 = (undefined1 *)*param_1;
  pcVar20 = (char *)param_1[1];
  if (uVar4 <= (ulong)((long)pcVar20 - (long)puVar13)) {
    if (uVar4 != 0) {
      uVar16 = 0;
      do {
        if ((&DAT_0012eee9)[uVar16] != puVar13[uVar16]) goto LAB_0011d860;
        uVar16 = uVar16 + 1;
      } while (uVar4 != uVar16);
    }
    puVar13 = puVar13 + uVar4;
    uVar22 = 1;
    *param_1 = (long)puVar13;
    if (1 < (ulong)((long)pcVar20 - (long)puVar13)) goto LAB_0011d888;
    goto LAB_0011d86c;
  }
LAB_0011d860:
  uVar22 = 0;
  if ((ulong)((long)pcVar20 - (long)puVar13) < 2) goto LAB_0011d86c;
LAB_0011d888:
  switch(*puVar13) {
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
switchD_0011d8ac_caseD_31:
    puVar19 = (undefined8 *)FUN_00120ed8(param_1);
    goto LAB_0011e8d8;
  default:
    uVar4 = __strlen_chk(&DAT_0012ef5d,0xc);
    pcVar20 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar20) < uVar4) {
LAB_0011deac:
      uVar4 = __strlen_chk(&DAT_0012ef69,0xc);
      pcVar20 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar20) < uVar4) break;
      if (uVar4 != 0) {
        pcVar11 = "u8__uuidofz";
        uVar16 = uVar4;
        pcVar15 = pcVar20;
        do {
          if (*pcVar11 != *pcVar15) goto LAB_0011d86c;
          pcVar11 = pcVar11 + 1;
          uVar16 = uVar16 - 1;
          pcVar15 = pcVar15 + 1;
        } while (uVar16 != 0);
      }
      *param_1 = (long)(pcVar20 + uVar4);
      lVar6 = FUN_0011d7cc(param_1);
    }
    else {
      if (uVar4 != 0) {
        pcVar11 = "u8__uuidoft";
        uVar16 = uVar4;
        pcVar15 = pcVar20;
        do {
          if (*pcVar11 != *pcVar15) goto LAB_0011deac;
          pcVar11 = pcVar11 + 1;
          uVar16 = uVar16 - 1;
          pcVar15 = pcVar15 + 1;
        } while (uVar16 != 0);
      }
      *param_1 = (long)(pcVar20 + uVar4);
      lVar6 = FUN_00119448(param_1);
    }
    if (lVar6 != 0) {
      puVar23 = (undefined8 *)param_1[0x25c];
      lVar10 = puVar23[1];
      puVar19 = puVar23;
      if (0xfef < lVar10 + 0x20U) {
        puVar19 = malloc(0x1000);
        if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
        lVar10 = 0;
        *puVar19 = puVar23;
        puVar19[1] = 0;
        param_1[0x25c] = (long)puVar19;
      }
      lVar5 = lVar10 + 0x20;
      lVar10 = (long)puVar19 + lVar10;
      uVar14 = 0x13b;
      ppuVar12 = &PTR_FUN_00137f08;
LAB_0011ea78:
      puVar19[1] = lVar5;
      puVar19 = (undefined8 *)(lVar10 + 0x10);
      *puVar19 = ppuVar12;
      *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
      *(long *)(lVar10 + 0x20) = lVar6;
      goto switchD_0011d924_caseD_66;
    }
    break;
  case 0x4c:
    puVar19 = (undefined8 *)FUN_0011f4a4(param_1);
    goto LAB_0011e8d8;
  case 0x54:
    puVar19 = (undefined8 *)FUN_0011c690(param_1);
    goto LAB_0011e8d8;
  case 0x61:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x4e:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "&=";
      goto LAB_0011e8bc;
    case 0x53:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "=";
      uVar9 = 2;
      goto LAB_0011e8c0;
    case 0x61:
      pcVar20 = "&&";
      *param_1 = (long)(puVar13 + 2);
      goto LAB_0011e8bc;
    case 100:
      pcVar20 = "&";
      goto LAB_0011eda0;
    case 0x6e:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "&";
      uVar9 = 2;
      goto LAB_0011e8c0;
    case 0x74:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_00119448(param_1);
      if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
LAB_0011e85c:
      puVar19 = (undefined8 *)FUN_0011f3e0(param_1,"alignof (",&local_70);
      break;
    case 0x7a:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_0011d7cc(param_1);
      if (local_70 != (undefined8 *)0x0) goto LAB_0011e85c;
      goto LAB_0011d86c;
    }
    goto switchD_0011d924_caseD_66;
  case 99:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 99:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_00119448(param_1);
      if ((lVar6 == 0) || (lVar10 = FUN_0011d7cc(param_1), lVar10 == 0)) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar5 = *(long *)((long)pvVar24 + 8);
      puVar19 = pvVar24;
      if (0xfef < lVar5 + 0x30U) {
        puVar19 = malloc(0x1000);
        if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
        lVar5 = 0;
        *puVar19 = pvVar24;
        puVar19[1] = 0;
        param_1[0x25c] = (long)puVar19;
      }
      *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
      lVar5 = (long)puVar19 + lVar5;
      pcVar20 = "const_cast";
      uVar9 = 0xb;
LAB_0011ec54:
      lVar7 = __strlen_chk(pcVar20,uVar9);
      puVar19 = (undefined8 *)(lVar5 + 0x10);
      *puVar19 = &PTR_FUN_001375d8;
      *(undefined4 *)(lVar5 + 0x18) = 0x1010130;
      *(char **)(lVar5 + 0x20) = pcVar20;
      *(char **)(lVar5 + 0x28) = pcVar20 + lVar7;
      *(long *)(lVar5 + 0x30) = lVar6;
      *(long *)(lVar5 + 0x38) = lVar10;
      break;
    case 0x6c:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 != 0) {
        lVar10 = param_1[2];
        lVar5 = param_1[3];
        while( true ) {
          pcVar20 = (char *)*param_1;
          if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == 'E')) {
            lVar10 = (lVar5 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar20 + 1);
            auVar25 = FUN_00122f38(param_1,param_1[2] + lVar10,param_1[3]);
            puVar23 = (undefined8 *)param_1[0x25c];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar23[1];
            puVar19 = puVar23;
            if (0xfef < lVar10 + 0x30U) {
              puVar19 = malloc(0x1000);
              if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
              lVar10 = 0;
              *puVar19 = puVar23;
              puVar19[1] = 0;
              param_1[0x25c] = (long)puVar19;
            }
            lVar5 = lVar10 + 0x30;
            lVar10 = (long)puVar19 + lVar10;
            uVar14 = 0x132;
            ppuVar12 = &PTR_FUN_00137648;
            goto LAB_0011f130;
          }
          local_70 = (undefined8 *)FUN_0011d7cc(param_1);
          if (local_70 == (undefined8 *)0x0) break;
          FUN_0011b8dc(param_1 + 2,&local_70);
        }
      }
      goto LAB_0011d86c;
    case 0x6d:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = ",";
      uVar9 = 2;
      goto LAB_0011e8c0;
    case 0x6f:
      pcVar20 = "~";
      goto LAB_0011eda0;
    case 0x76:
      uVar4 = __strlen_chk(&DAT_0012f03a,3);
      pcVar20 = (char *)*param_1;
      if (uVar4 <= (ulong)(param_1[1] - (long)pcVar20)) {
        if (uVar4 != 0) {
          pcVar11 = "cv";
          uVar16 = uVar4;
          pcVar15 = pcVar20;
          do {
            if (*pcVar11 != *pcVar15) goto LAB_0011d86c;
            pcVar11 = pcVar11 + 1;
            uVar16 = uVar16 - 1;
            pcVar15 = pcVar15 + 1;
          } while (uVar16 != 0);
        }
        lVar10 = param_1[0x5a];
        *param_1 = (long)(pcVar20 + uVar4);
        *(undefined1 *)(param_1 + 0x5a) = 0;
        lVar6 = FUN_00119448(param_1);
        *(char *)(param_1 + 0x5a) = (char)lVar10;
        if (lVar6 != 0) {
          pcVar20 = (char *)*param_1;
          if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == '_')) {
            pcVar20 = pcVar20 + 1;
            *param_1 = (long)pcVar20;
            lVar10 = param_1[2];
            lVar5 = param_1[3];
            if (pcVar20 == (char *)param_1[1]) goto LAB_0011e460;
            while (*pcVar20 != 'E') {
LAB_0011e460:
              do {
                local_70 = (undefined8 *)FUN_0011d7cc(param_1);
                if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
                FUN_0011b8dc(param_1 + 2,&local_70);
                pcVar20 = (char *)*param_1;
              } while (pcVar20 == (char *)param_1[1]);
            }
            lVar10 = (lVar5 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar20 + 1);
            auVar25 = FUN_00122f38(param_1,param_1[2] + lVar10,param_1[3]);
            puVar23 = (undefined8 *)param_1[0x25c];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar23[1];
            puVar19 = puVar23;
            if (0xfef < lVar10 + 0x30U) {
              puVar19 = malloc(0x1000);
              if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
              lVar10 = 0;
              *puVar19 = puVar23;
              puVar19[1] = 0;
              param_1[0x25c] = (long)puVar19;
            }
            lVar5 = lVar10 + 0x30;
            lVar10 = (long)puVar19 + lVar10;
            uVar14 = 0x137;
            ppuVar12 = &PTR_FUN_001376b8;
            goto LAB_0011f130;
          }
          puVar23 = (undefined8 *)FUN_0011d7cc(param_1);
          puVar19 = (undefined8 *)0x0;
          local_70 = puVar23;
          if (puVar23 != (undefined8 *)0x0) {
            pvVar24 = (void *)param_1[0x25c];
            lVar10 = *(long *)((long)pvVar24 + 8);
            puVar8 = pvVar24;
            if (0xfef < lVar10 + 0x10U) {
              puVar8 = malloc(0x1000);
              if (puVar8 == (void *)0x0) goto LAB_0011f3d4;
              lVar10 = 0;
              *puVar8 = pvVar24;
              puVar8[1] = 0;
              param_1[0x25c] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar10 + 0x10;
            puVar8 = (undefined8 *)((long)puVar8 + lVar10 + 0x10);
            *puVar8 = puVar23;
            pvVar24 = (void *)param_1[0x25c];
            lVar10 = *(long *)((long)pvVar24 + 8);
            puVar23 = pvVar24;
            if (0xfef < lVar10 + 0x30U) {
              puVar23 = malloc(0x1000);
              if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
              lVar10 = 0;
              *puVar23 = pvVar24;
              puVar23[1] = 0;
              param_1[0x25c] = (long)puVar23;
            }
            *(long *)((long)puVar23 + 8) = lVar10 + 0x30;
            puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
            *puVar19 = &PTR_FUN_001376b8;
            *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x1010137;
            *(long *)((long)puVar23 + lVar10 + 0x20) = lVar6;
            *(undefined8 **)((long)puVar23 + lVar10 + 0x28) = puVar8;
            *(undefined8 *)((long)puVar23 + lVar10 + 0x30) = 1;
          }
          break;
        }
      }
      goto LAB_0011d86c;
    }
    goto switchD_0011d924_caseD_66;
  case 100:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x56:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "/=";
      goto LAB_0011e8bc;
    case 0x61:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 == 0) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar10 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar10 + 0x20U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
        lVar10 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar10 + 0x20;
      puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
      *puVar19 = &PTR_FUN_00137728;
      *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x1010134;
      *(long *)((long)puVar23 + lVar10 + 0x20) = lVar6;
      *(undefined1 *)((long)puVar23 + lVar10 + 0x28) = uVar22;
      *(undefined1 *)((long)puVar23 + lVar10 + 0x29) = 1;
      break;
    case 99:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_00119448(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar5 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
        lVar5 = (long)puVar19 + lVar5;
        pcVar20 = "dynamic_cast";
        uVar9 = 0xd;
        goto LAB_0011ec54;
      }
      goto LAB_0011d86c;
    case 0x65:
      pcVar20 = "*";
      goto LAB_0011eda0;
    case 0x6c:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 == 0) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar10 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar10 + 0x20U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
        lVar10 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar10 + 0x20;
      puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
      *puVar19 = &PTR_FUN_00137728;
      *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x1010134;
      *(long *)((long)puVar23 + lVar10 + 0x20) = lVar6;
      *(undefined1 *)((long)puVar23 + lVar10 + 0x28) = uVar22;
      *(undefined1 *)((long)puVar23 + lVar10 + 0x29) = 0;
      break;
    case 0x6e:
      goto switchD_0011d8ac_caseD_31;
    case 0x73:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if ((lVar6 == 0) || (lVar10 = FUN_0011d7cc(param_1), lVar10 == 0)) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar5 = *(long *)((long)pvVar24 + 8);
      puVar19 = pvVar24;
      if (0xfef < lVar5 + 0x30U) {
        puVar19 = malloc(0x1000);
        if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
        lVar5 = 0;
        *puVar19 = pvVar24;
        puVar19[1] = 0;
        param_1[0x25c] = (long)puVar19;
      }
      *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
      lVar5 = (long)puVar19 + lVar5;
      pcVar20 = ".*";
LAB_0011ecf0:
      uVar9 = 3;
LAB_0011ed68:
      lVar7 = __strlen_chk(pcVar20,uVar9);
      puVar19 = (undefined8 *)(lVar5 + 0x10);
      *puVar19 = &PTR_FUN_001379c8;
      *(undefined4 *)(lVar5 + 0x18) = 0x101012e;
      *(long *)(lVar5 + 0x20) = lVar6;
      *(char **)(lVar5 + 0x28) = pcVar20;
      *(char **)(lVar5 + 0x30) = pcVar20 + lVar7;
      *(long *)(lVar5 + 0x38) = lVar10;
      break;
    case 0x74:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar5 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
        lVar5 = (long)puVar19 + lVar5;
        pcVar20 = ".";
        uVar9 = 2;
        goto LAB_0011ed68;
      }
      goto LAB_0011d86c;
    case 0x76:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "/";
      uVar9 = 2;
      goto LAB_0011e8c0;
    }
    goto switchD_0011d924_caseD_66;
  case 0x65:
    cVar1 = puVar13[1];
    if (cVar1 == 'O') {
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "^=";
    }
    else {
      if (cVar1 != 'q') {
        if (cVar1 == 'o') {
          *param_1 = (long)(puVar13 + 2);
          pcVar20 = "^";
          uVar9 = 2;
          goto LAB_0011e8c0;
        }
        break;
      }
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "==";
    }
    goto LAB_0011e8bc;
  case 0x66:
    if (((ulong)((long)pcVar20 - (long)puVar13) < 2) ||
       ((puVar13[1] != 'p' &&
        ((((ulong)((long)pcVar20 - (long)puVar13) < 3 || (puVar13[1] != 'L')) ||
         (9 < (byte)puVar13[2] - 0x30)))))) {
      puVar19 = (undefined8 *)FUN_00120008(param_1);
    }
    else {
      puVar19 = (undefined8 *)FUN_0011fc98(param_1);
    }
    goto LAB_0011e8d8;
  case 0x67:
    if (puVar13[1] == 't') {
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = ">";
      uVar9 = 2;
      goto LAB_0011e8c0;
    }
    if (puVar13[1] == 'e') {
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = ">=";
      goto LAB_0011e8bc;
    }
    break;
  case 0x69:
    if (puVar13[1] == 'l') {
      pcVar11 = puVar13 + 2;
      *param_1 = (long)pcVar11;
      lVar6 = param_1[2];
      lVar10 = param_1[3];
      if (pcVar11 == pcVar20) goto LAB_0011df90;
      while (*pcVar11 != 'E') {
LAB_0011df90:
        do {
          local_70 = (undefined8 *)FUN_00121504(param_1);
          if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
          FUN_0011b8dc(param_1 + 2,&local_70);
          pcVar11 = (char *)*param_1;
        } while (pcVar11 == (char *)param_1[1]);
      }
      lVar6 = (lVar10 - lVar6 >> 3) * 8;
      *param_1 = (long)(pcVar11 + 1);
      auVar25 = FUN_00122f38(param_1,param_1[2] + lVar6,param_1[3]);
      pvVar24 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar6;
      lVar6 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar6 + 0x30U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
        lVar6 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar6 + 0x30;
      puVar19 = (undefined8 *)((long)puVar23 + lVar6 + 0x10);
      *puVar19 = &PTR_FUN_00137b88;
      *(undefined4 *)((long)puVar23 + lVar6 + 0x18) = 0x1010138;
      *(undefined8 *)((long)puVar23 + lVar6 + 0x20) = 0;
      *(undefined1 (*) [16])((long)puVar23 + lVar6 + 0x28) = auVar25;
      goto switchD_0011d924_caseD_66;
    }
    if (puVar13[1] == 'x') {
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar23 = pvVar24;
        if (0xfef < lVar5 + 0x20U) {
          puVar23 = malloc(0x1000);
          if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar23 = pvVar24;
          puVar23[1] = 0;
          param_1[0x25c] = (long)puVar23;
        }
        *(long *)((long)puVar23 + 8) = lVar5 + 0x20;
        puVar19 = (undefined8 *)((long)puVar23 + lVar5 + 0x10);
        *puVar19 = &PTR_FUN_00137a38;
        *(undefined4 *)((long)puVar23 + lVar5 + 0x18) = 0x101012b;
        *(long *)((long)puVar23 + lVar5 + 0x20) = lVar6;
        *(long *)((long)puVar23 + lVar5 + 0x28) = lVar10;
        goto switchD_0011d924_caseD_66;
      }
    }
    break;
  case 0x6c:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x53:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "<<=";
      uVar9 = 4;
      break;
    default:
      goto switchD_0011d924_caseD_66;
    case 0x65:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "<=";
      goto LAB_0011e8bc;
    case 0x73:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "<<";
      goto LAB_0011e8bc;
    case 0x74:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "<";
      uVar9 = 2;
    }
    goto LAB_0011e8c0;
  case 0x6d:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x49:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "-=";
      goto LAB_0011e8bc;
    default:
      goto switchD_0011d924_caseD_66;
    case 0x4c:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "*=";
      goto LAB_0011e8bc;
    case 0x69:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "-";
      uVar9 = 2;
      break;
    case 0x6c:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "*";
      uVar9 = 2;
      break;
    case 0x6d:
      pcVar11 = puVar13 + 2;
      *param_1 = (long)pcVar11;
      if ((pcVar11 == pcVar20) || (*pcVar11 != '_')) {
        lVar6 = FUN_0011d7cc(param_1);
        if (lVar6 == 0) goto LAB_0011d86c;
        pvVar24 = (void *)param_1[0x25c];
        lVar10 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar10 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar10 + 0x30;
        lVar10 = (long)puVar19 + lVar10;
        pcVar20 = "operator--";
LAB_0011ee98:
        pcVar20 = pcVar20 + 8;
        lVar5 = __strlen_chk(pcVar20,3);
        puVar19 = (undefined8 *)(lVar10 + 0x10);
        *puVar19 = &PTR_FUN_00137bf8;
        *(undefined4 *)(lVar10 + 0x18) = 0x101012c;
        *(long *)(lVar10 + 0x20) = lVar6;
        *(char **)(lVar10 + 0x28) = pcVar20;
        *(char **)(lVar10 + 0x30) = pcVar20 + lVar5;
        goto switchD_0011d924_caseD_66;
      }
      pcVar20 = "operator--";
LAB_0011e74c:
      pcVar20 = pcVar20 + 8;
      puVar13 = puVar13 + 3;
      uVar9 = 3;
      goto LAB_0011eda8;
    }
    goto LAB_0011e8c0;
  case 0x6e:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x61:
    case 0x77:
      uVar4 = __strlen_chk(&DAT_0012eee9,3);
      lVar6 = *param_1;
      uVar16 = param_1[1] - lVar6;
      if (uVar16 < uVar4) {
LAB_0011e094:
        uVar22 = 0;
        if (uVar16 < 2) goto LAB_0011da68;
LAB_0011e0a0:
        bVar3 = *(char *)(lVar6 + 1) == 'a';
      }
      else {
        if (uVar4 != 0) {
          uVar17 = 0;
          do {
            if ((&DAT_0012eee9)[uVar17] != *(char *)(lVar6 + uVar17)) goto LAB_0011e094;
            uVar17 = uVar17 + 1;
          } while (uVar4 != uVar17);
        }
        lVar6 = lVar6 + uVar4;
        uVar22 = 1;
        *param_1 = lVar6;
        if (1 < (ulong)(param_1[1] - lVar6)) goto LAB_0011e0a0;
LAB_0011da68:
        bVar3 = false;
      }
      uVar4 = __strlen_chk(&DAT_0012f273,3);
      pcVar20 = (char *)*param_1;
      pcVar11 = (char *)param_1[1];
      if ((ulong)((long)pcVar11 - (long)pcVar20) < uVar4) {
LAB_0011e104:
        uVar4 = __strlen_chk(&DAT_0012f276,3);
        pcVar20 = (char *)*param_1;
        pcVar11 = (char *)param_1[1];
        if ((ulong)((long)pcVar11 - (long)pcVar20) < uVar4) goto LAB_0011d86c;
        if (uVar4 != 0) {
          pcVar15 = "na";
          uVar16 = uVar4;
          pcVar18 = pcVar20;
          do {
            if (*pcVar15 != *pcVar18) goto LAB_0011d86c;
            pcVar15 = pcVar15 + 1;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar18 + 1;
          } while (uVar16 != 0);
        }
      }
      else if (uVar4 != 0) {
        pcVar15 = "nw";
        uVar16 = uVar4;
        pcVar18 = pcVar20;
        do {
          if (*pcVar15 != *pcVar18) goto LAB_0011e104;
          pcVar15 = pcVar15 + 1;
          uVar16 = uVar16 - 1;
          pcVar18 = pcVar18 + 1;
        } while (uVar16 != 0);
      }
      pcVar20 = pcVar20 + uVar4;
      *param_1 = (long)pcVar20;
      plVar21 = param_1 + 2;
      lVar6 = *plVar21;
      lVar10 = param_1[3];
      if (pcVar20 == pcVar11) goto LAB_0011e188;
      while (*pcVar20 != '_') {
LAB_0011e188:
        do {
          local_70 = (undefined8 *)FUN_0011d7cc(param_1);
          if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
          FUN_0011b8dc(plVar21,&local_70);
          pcVar20 = (char *)*param_1;
        } while (pcVar20 == (char *)param_1[1]);
      }
      lVar6 = (lVar10 - lVar6 >> 3) * 8;
      *param_1 = (long)(pcVar20 + 1);
      auVar25 = FUN_00122f38(param_1,param_1[2] + lVar6,param_1[3]);
      param_1[3] = param_1[2] + lVar6;
      lVar6 = FUN_00119448(param_1);
      if (lVar6 == 0) goto LAB_0011d86c;
      uVar4 = __strlen_chk(&DAT_0012f279,3);
      pcVar20 = (char *)*param_1;
      pcVar11 = (char *)param_1[1];
      if ((ulong)((long)pcVar11 - (long)pcVar20) < uVar4) {
LAB_0011f14c:
        if ((pcVar20 == pcVar11) || (*pcVar20 != 'E')) goto LAB_0011d86c;
        pvVar24 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar20 + 1);
        lVar10 = *(long *)((long)pvVar24 + 8);
        puVar23 = pvVar24;
        if (0xfef < lVar10 + 0x40U) {
          puVar23 = malloc(0x1000);
          if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar23 = pvVar24;
          puVar23[1] = 0;
          param_1[0x25c] = (long)puVar23;
        }
        *(long *)((long)puVar23 + 8) = lVar10 + 0x40;
        puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
        *puVar19 = &PTR_FUN_00137c68;
        *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x1010133;
        *(undefined1 (*) [16])((long)puVar23 + lVar10 + 0x20) = auVar25;
        *(undefined8 *)((long)puVar23 + lVar10 + 0x38) = 0;
        *(undefined8 *)((long)puVar23 + lVar10 + 0x40) = 0;
        *(long *)((long)puVar23 + lVar10 + 0x30) = lVar6;
        *(undefined1 *)((long)puVar23 + lVar10 + 0x48) = uVar22;
        *(bool *)((long)puVar23 + lVar10 + 0x49) = bVar3;
      }
      else {
        if (uVar4 != 0) {
          pcVar15 = "pi";
          uVar16 = uVar4;
          pcVar18 = pcVar20;
          do {
            if (*pcVar15 != *pcVar18) goto LAB_0011f14c;
            pcVar15 = pcVar15 + 1;
            uVar16 = uVar16 - 1;
            pcVar18 = pcVar18 + 1;
          } while (uVar16 != 0);
        }
        lVar10 = param_1[2];
        lVar5 = param_1[3];
        pcVar20 = pcVar20 + uVar4;
        *param_1 = (long)pcVar20;
        if (pcVar20 == pcVar11) goto LAB_0011ef88;
        while (*pcVar20 != 'E') {
LAB_0011ef88:
          do {
            local_70 = (undefined8 *)FUN_0011d7cc(param_1);
            if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
            FUN_0011b8dc(plVar21,&local_70);
            pcVar20 = (char *)*param_1;
          } while (pcVar20 == (char *)param_1[1]);
        }
        lVar10 = (lVar5 - lVar10 >> 3) * 8;
        *param_1 = (long)(pcVar20 + 1);
        auVar26 = FUN_00122f38(param_1,param_1[2] + lVar10,param_1[3]);
        pvVar24 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar10;
        lVar10 = *(long *)((long)pvVar24 + 8);
        puVar23 = pvVar24;
        if (0xfef < lVar10 + 0x40U) {
          puVar23 = malloc(0x1000);
          if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar23 = pvVar24;
          puVar23[1] = 0;
          param_1[0x25c] = (long)puVar23;
        }
        *(long *)((long)puVar23 + 8) = lVar10 + 0x40;
        puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
        *puVar19 = &PTR_FUN_00137c68;
        *(undefined1 (*) [16])((long)puVar23 + lVar10 + 0x20) = auVar25;
        *(long *)((long)puVar23 + lVar10 + 0x30) = lVar6;
        *(long *)((long)puVar23 + lVar10 + 0x38) = auVar26._0_8_;
        *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x1010133;
        *(undefined1 *)((long)puVar23 + lVar10 + 0x48) = uVar22;
        *(long *)((long)puVar23 + lVar10 + 0x40) = auVar26._8_8_;
        *(bool *)((long)puVar23 + lVar10 + 0x49) = bVar3;
      }
      break;
    case 0x65:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "!=";
      goto LAB_0011e8bc;
    case 0x67:
      pcVar20 = "-";
      goto LAB_0011eda0;
    case 0x74:
      pcVar20 = "!";
LAB_0011eda0:
      puVar13 = puVar13 + 2;
      uVar9 = 2;
LAB_0011eda8:
      *param_1 = (long)puVar13;
      lVar6 = __strlen_chk(pcVar20,uVar9);
      lVar10 = FUN_0011d7cc(param_1);
      if (lVar10 == 0) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar5 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar5 + 0x30U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) {
LAB_0011f3d4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar5 + 0x30;
      puVar19 = (undefined8 *)((long)puVar23 + lVar5 + 0x10);
      *puVar19 = &PTR_FUN_00137568;
      *(undefined4 *)((long)puVar23 + lVar5 + 0x18) = 0x1010135;
      *(char **)((long)puVar23 + lVar5 + 0x20) = pcVar20;
      *(char **)((long)puVar23 + lVar5 + 0x28) = pcVar20 + lVar6;
      *(long *)((long)puVar23 + lVar5 + 0x30) = lVar10;
      break;
    case 0x78:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 == 0) goto LAB_0011d86c;
      pvVar24 = (void *)param_1[0x25c];
      lVar10 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar10 + 0x40U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
        lVar10 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar10 + 0x40;
      lVar5 = __strlen_chk("noexcept (",0xb);
      lVar7 = __strlen_chk(")",2);
      puVar19 = (undefined8 *)((long)puVar23 + lVar10 + 0x10);
      *puVar19 = &PTR_FUN_00137cd8;
      *(undefined4 *)((long)puVar23 + lVar10 + 0x18) = 0x101012f;
      *(char **)((long)puVar23 + lVar10 + 0x20) = "noexcept (";
      *(char **)((long)puVar23 + lVar10 + 0x28) = "noexcept (" + lVar5;
      *(long *)((long)puVar23 + lVar10 + 0x30) = lVar6;
      *(char **)((long)puVar23 + lVar10 + 0x38) = ")";
      *(char **)((long)puVar23 + lVar10 + 0x40) = "operator()" + lVar7 + 9;
    }
    goto switchD_0011d924_caseD_66;
  case 0x6f:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x52:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "|=";
      break;
    default:
      goto switchD_0011d924_caseD_66;
    case 0x6e:
      goto switchD_0011d8ac_caseD_31;
    case 0x6f:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "||";
      break;
    case 0x72:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "|";
      uVar9 = 2;
      goto LAB_0011e8c0;
    }
LAB_0011e8bc:
    uVar9 = 3;
LAB_0011e8c0:
    lVar6 = __strlen_chk(pcVar20,uVar9);
    puVar19 = (undefined8 *)FUN_00120e28(param_1,pcVar20,pcVar20 + lVar6);
LAB_0011e8d8:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return puVar19;
    }
    goto LAB_0011f3d0;
  case 0x70:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x4c:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "+=";
      goto LAB_0011e8bc;
    default:
      goto switchD_0011d924_caseD_66;
    case 0x6c:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "+";
      uVar9 = 2;
      goto LAB_0011e8c0;
    case 0x6d:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "->*";
      uVar9 = 4;
      goto LAB_0011e8c0;
    case 0x70:
      pcVar11 = puVar13 + 2;
      *param_1 = (long)pcVar11;
      if ((pcVar11 != pcVar20) && (*pcVar11 == '_')) {
        pcVar20 = "operator++";
        goto LAB_0011e74c;
      }
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 != 0) {
        pvVar24 = (void *)param_1[0x25c];
        lVar10 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar10 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar10 + 0x30;
        lVar10 = (long)puVar19 + lVar10;
        pcVar20 = "operator++";
        goto LAB_0011ee98;
      }
      break;
    case 0x73:
      pcVar20 = "+";
      goto LAB_0011eda0;
    case 0x74:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar5 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
        lVar5 = (long)puVar19 + lVar5;
        pcVar20 = "->";
        goto LAB_0011ecf0;
      }
    }
    break;
  case 0x71:
    if (puVar13[1] == 'u') {
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        lVar5 = FUN_0011d7cc(param_1);
        auVar25._8_8_ = lVar5;
        auVar25._0_8_ = lVar10;
        if (lVar5 != 0) {
          puVar23 = (undefined8 *)param_1[0x25c];
          lVar10 = puVar23[1];
          puVar19 = puVar23;
          if (0xfef < lVar10 + 0x30U) {
            puVar19 = malloc(0x1000);
            if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
            lVar10 = 0;
            *puVar19 = puVar23;
            puVar19[1] = 0;
            param_1[0x25c] = (long)puVar19;
          }
          lVar5 = lVar10 + 0x30;
          lVar10 = (long)puVar19 + lVar10;
          uVar14 = 0x12d;
          ppuVar12 = &PTR_FUN_00137d48;
LAB_0011f130:
          puVar19[1] = lVar5;
          puVar19 = (undefined8 *)(lVar10 + 0x10);
          *puVar19 = ppuVar12;
          *(uint *)(lVar10 + 0x18) = uVar14 | 0x1010000;
          *(long *)(lVar10 + 0x20) = lVar6;
          *(undefined1 (*) [16])(lVar10 + 0x28) = auVar25;
          goto switchD_0011d924_caseD_66;
        }
      }
    }
    break;
  case 0x72:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x4d:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "%=";
      goto LAB_0011e8bc;
    default:
      goto switchD_0011d924_caseD_66;
    case 0x53:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = ">>=";
      uVar9 = 4;
      break;
    case 99:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_00119448(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar5 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
        lVar5 = (long)puVar19 + lVar5;
        pcVar20 = "reinterpret_cast";
        uVar9 = 0x11;
        goto LAB_0011ec54;
      }
      goto LAB_0011d86c;
    case 0x6d:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = "%";
      uVar9 = 2;
      break;
    case 0x73:
      *param_1 = (long)(puVar13 + 2);
      pcVar20 = ">>";
      goto LAB_0011e8bc;
    }
    goto LAB_0011e8c0;
  case 0x73:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x50:
      pcVar11 = puVar13 + 2;
      *param_1 = (long)pcVar11;
      lVar6 = param_1[2];
      lVar10 = param_1[3];
      if (pcVar11 == pcVar20) goto LAB_0011dcc8;
      while (*pcVar11 != 'E') {
LAB_0011dcc8:
        do {
          local_70 = (undefined8 *)FUN_0011b704(param_1);
          if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
          FUN_0011b8dc(param_1 + 2,&local_70);
          pcVar11 = (char *)*param_1;
        } while (pcVar11 == (char *)param_1[1]);
      }
      lVar6 = (lVar10 - lVar6 >> 3) * 8;
      *param_1 = (long)(pcVar11 + 1);
      auVar25 = FUN_00122f38(param_1,param_1[2] + lVar6,param_1[3]);
      pvVar24 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar6;
      lVar6 = *(long *)((long)pvVar24 + 8);
      puVar19 = pvVar24;
      if (0xfef < lVar6 + 0x20U) {
        puVar19 = malloc(0x1000);
        if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
        lVar6 = 0;
        *puVar19 = pvVar24;
        puVar19[1] = 0;
        param_1[0x25c] = (long)puVar19;
      }
      *(long *)((long)puVar19 + 8) = lVar6 + 0x20;
      local_70 = (undefined8 *)((long)puVar19 + lVar6 + 0x10);
      *local_70 = &PTR_FUN_00137e28;
      *(undefined4 *)((long)puVar19 + lVar6 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar19 + lVar6 + 0x20) = auVar25;
LAB_0011f29c:
      puVar19 = (undefined8 *)FUN_001217f4(param_1,&local_70);
    default:
      goto switchD_0011d924_caseD_66;
    case 0x5a:
      pcVar11 = puVar13 + 2;
      *param_1 = (long)pcVar11;
      if (pcVar20 != pcVar11) {
        if (*pcVar11 == 'f') {
          local_70 = (undefined8 *)FUN_0011fc98(param_1);
          if (local_70 != (undefined8 *)0x0) goto LAB_0011f29c;
        }
        else if ((*pcVar11 == 'T') && (lVar6 = FUN_0011c690(param_1), lVar6 != 0)) {
          puVar23 = (undefined8 *)param_1[0x25c];
          lVar10 = puVar23[1];
          puVar19 = puVar23;
          if (0xfef < lVar10 + 0x20U) {
            puVar19 = malloc(0x1000);
            if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
            lVar10 = 0;
            *puVar19 = puVar23;
            puVar19[1] = 0;
            param_1[0x25c] = (long)puVar19;
          }
          lVar5 = lVar10 + 0x20;
          lVar10 = (long)puVar19 + lVar10;
          uVar14 = 0x131;
          ppuVar12 = &PTR_FUN_00137db8;
          goto LAB_0011ea78;
        }
      }
      break;
    case 99:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_00119448(param_1);
      if ((lVar6 != 0) && (lVar10 = FUN_0011d7cc(param_1), lVar10 != 0)) {
        pvVar24 = (void *)param_1[0x25c];
        lVar5 = *(long *)((long)pvVar24 + 8);
        puVar19 = pvVar24;
        if (0xfef < lVar5 + 0x30U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (void *)0x0) goto LAB_0011f3d4;
          lVar5 = 0;
          *puVar19 = pvVar24;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        *(long *)((long)puVar19 + 8) = lVar5 + 0x30;
        lVar5 = (long)puVar19 + lVar5;
        pcVar20 = "static_cast";
        uVar9 = 0xc;
        goto LAB_0011ec54;
      }
      break;
    case 0x70:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 != 0) {
        puVar23 = (undefined8 *)param_1[0x25c];
        lVar10 = puVar23[1];
        puVar19 = puVar23;
        if (0xfef < lVar10 + 0x20U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar19 = puVar23;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        lVar5 = lVar10 + 0x20;
        lVar10 = (long)puVar19 + lVar10;
        uVar14 = 0x11d;
        ppuVar12 = &PTR_FUN_00137488;
        goto LAB_0011ea78;
      }
      break;
    case 0x72:
      goto switchD_0011d8ac_caseD_31;
    case 0x74:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_00119448(param_1);
      if (local_70 == (undefined8 *)0x0) break;
LAB_0011e890:
      pcVar20 = "sizeof (";
      goto LAB_0011e898;
    case 0x7a:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_0011d7cc(param_1);
      if (local_70 != (undefined8 *)0x0) goto LAB_0011e890;
    }
    break;
  case 0x74:
    puVar19 = (undefined8 *)0x0;
    switch(puVar13[1]) {
    case 0x65:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_0011d7cc(param_1);
      goto joined_r0x0011e22c;
    case 0x69:
      *param_1 = (long)(puVar13 + 2);
      local_70 = (undefined8 *)FUN_00119448(param_1);
joined_r0x0011e22c:
      if (local_70 == (undefined8 *)0x0) goto LAB_0011d86c;
      pcVar20 = "typeid (";
LAB_0011e898:
      puVar19 = (undefined8 *)FUN_00121730(param_1,pcVar20,&local_70);
      break;
    case 0x6c:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_00119448(param_1);
      if (lVar6 != 0) {
        lVar10 = param_1[2];
        lVar5 = param_1[3];
        while( true ) {
          pcVar20 = (char *)*param_1;
          if ((pcVar20 != (char *)param_1[1]) && (*pcVar20 == 'E')) {
            lVar10 = (lVar5 - lVar10 >> 3) * 8;
            *param_1 = (long)(pcVar20 + 1);
            auVar25 = FUN_00122f38(param_1,param_1[2] + lVar10,param_1[3]);
            puVar23 = (undefined8 *)param_1[0x25c];
            param_1[3] = param_1[2] + lVar10;
            lVar10 = puVar23[1];
            puVar19 = puVar23;
            if (0xfef < lVar10 + 0x30U) {
              puVar19 = malloc(0x1000);
              if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
              lVar10 = 0;
              *puVar19 = puVar23;
              puVar19[1] = 0;
              param_1[0x25c] = (long)puVar19;
            }
            lVar5 = lVar10 + 0x30;
            lVar10 = (long)puVar19 + lVar10;
            uVar14 = 0x138;
            ppuVar12 = &PTR_FUN_00137b88;
            goto LAB_0011f130;
          }
          local_70 = (undefined8 *)FUN_00121504(param_1);
          if (local_70 == (undefined8 *)0x0) break;
          FUN_0011b8dc(param_1 + 2,&local_70);
        }
      }
      goto LAB_0011d86c;
    case 0x72:
      pvVar24 = (void *)param_1[0x25c];
      *param_1 = (long)(puVar13 + 2);
      lVar6 = *(long *)((long)pvVar24 + 8);
      puVar23 = pvVar24;
      if (0xfef < lVar6 + 0x20U) {
        puVar23 = malloc(0x1000);
        if (puVar23 == (void *)0x0) goto LAB_0011f3d4;
        lVar6 = 0;
        *puVar23 = pvVar24;
        puVar23[1] = 0;
        param_1[0x25c] = (long)puVar23;
      }
      *(long *)((long)puVar23 + 8) = lVar6 + 0x20;
      lVar10 = __strlen_chk("throw",6);
      puVar19 = (undefined8 *)((long)puVar23 + lVar6 + 0x10);
      *puVar19 = &PTR_FUN_00136fb8;
      *(undefined4 *)((long)puVar23 + lVar6 + 0x18) = 0x1010107;
      *(char **)((long)puVar23 + lVar6 + 0x20) = "throw";
      *(char **)((long)puVar23 + lVar6 + 0x28) = "throw" + lVar10;
      break;
    case 0x77:
      *param_1 = (long)(puVar13 + 2);
      lVar6 = FUN_0011d7cc(param_1);
      if (lVar6 != 0) {
        puVar23 = (undefined8 *)param_1[0x25c];
        lVar10 = puVar23[1];
        puVar19 = puVar23;
        if (0xfef < lVar10 + 0x20U) {
          puVar19 = malloc(0x1000);
          if (puVar19 == (undefined8 *)0x0) goto LAB_0011f3d4;
          lVar10 = 0;
          *puVar19 = puVar23;
          puVar19[1] = 0;
          param_1[0x25c] = (long)puVar19;
        }
        lVar5 = lVar10 + 0x20;
        lVar10 = (long)puVar19 + lVar10;
        uVar14 = 0x13a;
        ppuVar12 = &PTR_FUN_00137e98;
        goto LAB_0011ea78;
      }
      goto LAB_0011d86c;
    }
    goto switchD_0011d924_caseD_66;
  }
LAB_0011d86c:
  puVar19 = (undefined8 *)0x0;
switchD_0011d924_caseD_66:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar19;
  }
LAB_0011f3d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

