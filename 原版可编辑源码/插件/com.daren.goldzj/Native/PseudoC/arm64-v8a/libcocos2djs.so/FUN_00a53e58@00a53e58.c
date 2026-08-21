
void FUN_00a53e58(byte *param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  undefined8 local_190;
  char acStack_188 [91];
  undefined1 local_12d;
  undefined1 local_12b;
  char local_88;
  char local_87 [15];
  undefined8 local_78;
  undefined2 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  memset(acStack_188,0,0x10f);
                    /* catch() { ... } // from try @ 00a53d7c with catch @ 00a53ea8 */
  bVar15 = *param_1;
LAB_00a53eec:
  if (0x3e < bVar15) {
    if (bVar15 == 0x3f) {
      bVar15 = *param_2;
      iVar6 = isprint((uint)bVar15);
      if (iVar6 != 0) goto LAB_00a54584;
      uVar5 = 1;
      if (bVar15 != 0) {
        uVar5 = 2;
      }
      uVar7 = (ulong)uVar5;
                    /* catch() { ... } // from try @ 00a54670 with catch @ 00a546f0 */
      goto LAB_00a5472c;
    }
    if (bVar15 == 0x5b) {
      uVar8 = 0;
      uVar5 = 0;
      bVar2 = false;
      param_1 = param_1 + 1;
      uVar7 = 0;
      local_190 = lVar10;
                    /* try { // try from 00a53f20 to 00b53f37 has its CatchHandler @ 00a54250 */
LAB_00a53f34:
      do {
        uVar3 = (ulong)*param_1;
LAB_00a53f38:
        uVar13 = uVar3;
        iVar6 = (int)uVar13;
                    /* try { // try from 00a53f40 to 00b53f4b has its CatchHandler @ 00a5424c */
                    /* try { // try from 00a53f4c to 00b53f57 has its CatchHandler @ 00a54248 */
        switch(uVar8) {
        case 0:
          iVar4 = isalnum(iVar6);
          if (iVar4 != 0) {
            uVar8 = 1;
            acStack_188[uVar13] = '\x01';
            bVar2 = true;
            param_1 = param_1 + 1;
            uVar7 = uVar13;
            break;
          }
          switch(iVar6) {
          case 0x21:
          case 0x5e:
            if ((bVar2) || (local_88 != '\0')) {
              bVar2 = true;
              pcVar9 = acStack_188 + uVar13;
            }
            else {
              bVar2 = false;
              pcVar9 = &local_88;
            }
            uVar8 = 0;
            *pcVar9 = '\x01';
            param_1 = param_1 + 1;
            break;
          case 0x5b:
            goto switchD_00a5414c_caseD_5b;
          case 0x5c:
            uVar7 = (ulong)param_1[1];
            iVar6 = isprint((uint)param_1[1]);
            lVar10 = local_190;
            if (iVar6 == 0) goto LAB_00a54728;
            uVar8 = 1;
            acStack_188[uVar7] = '\x01';
            bVar2 = true;
            param_1 = param_1 + 2;
            break;
          case 0x5d:
            if (bVar2) goto LAB_00a54594;
            bVar2 = true;
            local_12b = 1;
            uVar8 = 3;
            param_1 = param_1 + 1;
                    /* try { // try from 00a54310 to 00b54327 has its CatchHandler @ 00a545c4 */
            break;
          default:
            lVar10 = local_190;
            if (iVar6 == 0) goto LAB_00a54728;
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
            bVar2 = true;
            uVar8 = 0;
            acStack_188[uVar13] = '\x01';
            param_1 = param_1 + 1;
            break;
          }
        case 1:
                    /* try { // try from 00a53f58 to 00b541cb has its CatchHandler @ 00a54260 */
          uVar8 = 0;
          uVar3 = 0x5b;
          if (iVar6 != 0x5b) goto code_r0x00a53f68;
          goto LAB_00a53f38;
        case 2:
          if (iVar6 == 0x5c) {
            param_1 = param_1 + 1;
            uVar13 = (ulong)*param_1;
            iVar6 = isprint((uint)*param_1);
            lVar10 = local_190;
            if (iVar6 == 0) goto LAB_00a54728;
          }
          if ((int)uVar13 == 0x5c) {
            uVar13 = (ulong)param_1[1];
            iVar6 = isprint((uint)param_1[1]);
            lVar10 = local_190;
            if (iVar6 == 0) goto LAB_00a54728;
            uVar8 = 0;
            param_1 = param_1 + 2;
            acStack_188[uVar13] = '\x01';
          }
          else {
            if ((int)uVar13 == 0x5d) goto LAB_00a54594;
            uVar8 = 2;
          }
          uVar16 = (uint)uVar7;
          uVar1 = uVar16 & 0xff;
          uVar12 = (uint)uVar13;
          if (uVar12 < uVar1) break;
          iVar6 = islower(uVar12);
          if ((((iVar6 == 0) || (iVar6 = islower(uVar1), iVar6 == 0)) &&
              ((9 < uVar1 - 0x30 || (9 < uVar12 - 0x30)))) &&
             ((iVar6 = isupper(uVar12), lVar10 = local_190, iVar6 == 0 ||
              (iVar6 = isupper(uVar1), lVar10 = local_190, iVar6 == 0)))) goto LAB_00a54728;
          acStack_188[uVar5] = '\0';
          uVar1 = uVar16 + 1 & 0xff;
          uVar16 = uVar16 + 2;
          while (uVar7 = (ulong)uVar16, uVar1 <= uVar12) {
            uVar1 = uVar16 & 0xff;
            uVar16 = uVar16 + 1;
            acStack_188[(ulong)uVar1 - 1] = '\x01';
          }
          uVar8 = 0;
          param_1 = param_1 + 1;
          break;
        case 3:
          if (iVar6 == 0x5b) {
            local_12d = 1;
            param_1 = param_1 + 1;
            uVar8 = 4;
            break;
          }
          lVar10 = local_190;
          if (uVar13 == 0) goto LAB_00a54728;
          if (iVar6 == 0x5d) goto LAB_00a54594;
          iVar6 = isprint(iVar6);
          lVar10 = local_190;
          if (iVar6 == 0) goto LAB_00a54728;
          uVar8 = 0;
          acStack_188[uVar13] = '\x01';
          param_1 = param_1 + 1;
          break;
        case 4:
          if (iVar6 == 0x5d) goto LAB_00a54594;
          uVar8 = 0;
          acStack_188[uVar13] = '\x01';
          param_1 = param_1 + 1;
          break;
        default:
          goto switchD_00a53f50_default;
        }
      } while( true );
    }
    if (bVar15 != 0x5c) goto LAB_00a54574;
    bVar15 = param_1[1];
    iVar6 = isprint((uint)bVar15);
    if (iVar6 == 0) {
LAB_00a54728:
      uVar7 = 2;
      goto LAB_00a5472c;
    }
                    /* try { // try from 00a53ec4 to 00b53f1f has its CatchHandler @ 00a53ec4
                       catch() { ... } // from try @ 00a53ec4 with catch @ 00a53ec4
                       catch() { ... } // from try @ 00a541cc with catch @ 00a53ec4 */
    if ((uint)bVar15 == (uint)*param_2) goto code_r0x00a53ecc;
    goto LAB_00a546c4;
  }
                    /* try { // try from 00a5450c to 00b5462b has its CatchHandler @ 00a542b8 */
  pbVar14 = param_1;
  if (bVar15 == 0x2a) {
    do {
      param_1 = pbVar14;
      pbVar14 = param_1 + 1;
    } while (*pbVar14 == 0x2a);
    if (*param_2 == 0 && *pbVar14 == 0) {
      uVar7 = 0;
      goto LAB_00a5472c;
    }
    uVar7 = FUN_00a53e58(pbVar14,param_2);
    if ((int)uVar7 == 0) goto LAB_00a5472c;
    if (*param_2 != 0) goto LAB_00a53ee4;
    goto LAB_00a546c4;
  }
  if (bVar15 == 0) {
    uVar7 = (ulong)(*param_2 != 0);
    goto LAB_00a5472c;
  }
LAB_00a54574:
  if (bVar15 != *param_2) {
LAB_00a546c4:
    uVar7 = 1;
LAB_00a5472c:
    if (*(long *)(lVar10 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
                    /* try { // try from 00a54750 to 00b54763 has its CatchHandler @ 00a54820 */
    return;
  }
LAB_00a54584:
  param_1 = param_1 + 1;
LAB_00a53ee4:
  bVar15 = *param_1;
  param_2 = param_2 + 1;
  goto LAB_00a53eec;
switchD_00a53f50_default:
  do {
                    /* WARNING: Do nothing block with infinite loop */
                    /* try { // try from 00a546c0 to 00b54703 has its CatchHandler @ 00a5462c */
  } while( true );
code_r0x00a53f68:
  if (iVar6 == 0x2d) {
    acStack_188[0x2d] = 1;
    param_1 = param_1 + 1;
    uVar5 = 0x2d;
    uVar8 = 2;
    goto LAB_00a53f34;
  }
  iVar4 = isalnum(iVar6);
  if (iVar4 != 0) {
    uVar8 = 1;
    acStack_188[uVar13] = '\x01';
    param_1 = param_1 + 1;
    goto LAB_00a53f34;
  }
  if (iVar6 == 0x5c) {
    bVar15 = param_1[1];
    iVar6 = isprint((uint)bVar15);
    lVar10 = local_190;
    if (iVar6 == 0) goto LAB_00a54728;
    uVar8 = 1;
    acStack_188[bVar15] = '\x01';
    param_1 = param_1 + 2;
    goto LAB_00a53f34;
  }
  lVar10 = local_190;
                    /* catch() { ... } // from try @ 00a54434 with catch @ 00a54590 */
  if (iVar6 != 0x5d) goto LAB_00a54728;
LAB_00a54594:
  bVar15 = *param_2;
  if (acStack_188[bVar15] == '\0') {
                    /* catch() { ... } // from try @ 00a54350 with catch @ 00a545ac */
                    /* catch() { ... } // from try @ 00a544dc with catch @ 00a545b0 */
    if (local_87[0] == '\0') {
                    /* catch() { ... } // from try @ 00a5433c with catch @ 00a545c0 */
                    /* catch() { ... } // from try @ 00a54310 with catch @ 00a545c4 */
      uVar5 = (uint)bVar15;
      if (local_87[3] == '\0') {
                    /* catch() { ... } // from try @ 00a54360 with catch @ 00a545d4
                       catch() { ... } // from try @ 00a54448 with catch @ 00a545d4 */
        if (local_87[1] == '\0') {
          if (local_87[2] == '\0') {
            if (local_87[4] == '\0') {
              if (local_87[8] == '\0') {
                if (local_87[9] == '\0') {
                  if (local_87[6] == '\0') {
                    if (local_87[5] == '\0') {
                      if (local_87[7] == '\0') {
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = isgraph(uVar5);
                      }
                    }
                    else {
                    /* try { // try from 00a54670 to 00b546bf has its CatchHandler @ 00a546f0 */
                      uVar5 = (uint)(uVar5 == 0x20 || uVar5 == 9);
                    }
                  }
                  else {
                    uVar5 = islower(uVar5);
                  }
                }
                else {
                  uVar5 = isupper(uVar5);
                }
              }
              else {
                uVar5 = isspace(uVar5);
              }
            }
            else {
              uVar5 = isprint(uVar5);
            }
          }
          else {
            uVar5 = isxdigit(uVar5);
          }
        }
        else {
          uVar5 = (uint)(uVar5 - 0x30 < 10);
        }
      }
      else {
        uVar5 = isalpha(uVar5);
      }
    }
    else {
      uVar5 = isalnum((uint)bVar15);
    }
  }
  else {
    uVar5 = 1;
  }
  if (local_88 != '\0') {
    uVar5 = (uint)(uVar5 == 0);
  }
  if (uVar5 == 0) {
    uVar7 = 1;
    lVar10 = local_190;
    goto LAB_00a5472c;
  }
                    /* try { // try from 00a5462c to 00b5466f has its CatchHandler @ 00a5462c
                       catch() { ... } // from try @ 00a5462c with catch @ 00a5462c
                       catch() { ... } // from try @ 00a546c0 with catch @ 00a5462c */
  param_1 = param_1 + 1;
  memset(acStack_188,0,0x10f);
  lVar10 = local_190;
  goto LAB_00a53ee4;
switchD_00a5414c_caseD_5b:
  if (param_1[1] != 0x3a) {
    bVar2 = true;
    uVar8 = 0;
    local_12d = 1;
    param_1 = param_1 + 1;
    goto LAB_00a53f34;
  }
  local_70 = 0;
  local_78 = 0;
  bVar15 = param_1[2];
  iVar6 = isalpha((uint)bVar15);
  if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
                    /* try { // try from 00a5433c to 00b5434f has its CatchHandler @ 00a545c0 */
    lVar10 = local_190;
    if (bVar15 != 0x3a) goto LAB_00a54728;
    pbVar14 = param_1 + 3;
    lVar11 = 4;
  }
  else {
    local_78 = CONCAT71(local_78._1_7_,bVar15);
    bVar15 = param_1[3];
                    /* try { // try from 00a541cc to 00b542b7 has its CatchHandler @ 00a53ec4 */
    iVar6 = isalpha((uint)bVar15);
    if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
                    /* try { // try from 00a54350 to 00b5435f has its CatchHandler @ 00a545ac */
      lVar10 = local_190;
      if (bVar15 != 0x3a) goto LAB_00a54728;
      pbVar14 = param_1 + 4;
      lVar11 = 5;
                    /* try { // try from 00a54360 to 00b543f3 has its CatchHandler @ 00a545d4 */
    }
    else {
      local_78._0_2_ = CONCAT11(bVar15,(char)local_78);
      bVar15 = param_1[4];
      iVar6 = isalpha((uint)bVar15);
      if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
        lVar10 = local_190;
        if (bVar15 != 0x3a) goto LAB_00a54728;
        pbVar14 = param_1 + 5;
        lVar11 = 6;
      }
      else {
        local_78._0_3_ = CONCAT12(bVar15,(undefined2)local_78);
        bVar15 = param_1[5];
        iVar6 = isalpha((uint)bVar15);
        if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
          lVar10 = local_190;
          if (bVar15 != 0x3a) goto LAB_00a54728;
          pbVar14 = param_1 + 6;
          lVar11 = 7;
        }
        else {
          local_78._0_4_ = CONCAT13(bVar15,(undefined3)local_78);
          bVar15 = param_1[6];
          iVar6 = isalpha((uint)bVar15);
          if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
            lVar10 = local_190;
            if (bVar15 != 0x3a) goto LAB_00a54728;
            pbVar14 = param_1 + 7;
            lVar11 = 8;
          }
          else {
            local_78._0_5_ = CONCAT14(bVar15,(undefined4)local_78);
                    /* catch() { ... } // from try @ 00a53f4c with catch @ 00a54248 */
            bVar15 = param_1[7];
                    /* catch() { ... } // from try @ 00a53f40 with catch @ 00a5424c */
                    /* catch() { ... } // from try @ 00a53f20 with catch @ 00a54250 */
            iVar6 = isalpha((uint)bVar15);
                    /* catch() { ... } // from try @ 00a53f58 with catch @ 00a54260 */
            if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
              lVar10 = local_190;
              if (bVar15 != 0x3a) goto LAB_00a54728;
              pbVar14 = param_1 + 8;
              lVar11 = 9;
            }
            else {
              local_78._0_6_ = CONCAT15(bVar15,(undefined5)local_78);
              bVar15 = param_1[8];
              iVar6 = isalpha((uint)bVar15);
              if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
                lVar10 = local_190;
                if (bVar15 != 0x3a) goto LAB_00a54728;
                pbVar14 = param_1 + 9;
                lVar11 = 10;
              }
              else {
                local_78._0_7_ = CONCAT16(bVar15,(undefined6)local_78);
                bVar15 = param_1[9];
                iVar6 = isalpha((uint)bVar15);
                if ((iVar6 == 0) || (iVar6 = islower((uint)bVar15), iVar6 == 0)) {
                  lVar10 = local_190;
                  if (bVar15 != 0x3a) goto LAB_00a54728;
                  pbVar14 = param_1 + 10;
                  lVar11 = 0xb;
                }
                else {
                  local_78 = CONCAT17(bVar15,(undefined7)local_78);
                  bVar15 = param_1[10];
                  pbVar14 = param_1 + 0xb;
                  iVar6 = isalpha((uint)bVar15);
                    /* try { // try from 00a542b8 to 00b5430f has its CatchHandler @ 00a542b8
                       catch() { ... } // from try @ 00a542b8 with catch @ 00a542b8
                       catch() { ... } // from try @ 00a5450c with catch @ 00a542b8 */
                  if ((iVar6 != 0) && (iVar6 = islower((uint)bVar15), iVar6 != 0)) {
                    local_70 = CONCAT11(local_70._1_1_,bVar15);
                    /* catch() { ... } // from try @ 00a54764 with catch @ 00a54704 */
                    bVar15 = *pbVar14;
                    iVar6 = isalpha((uint)bVar15);
                    lVar10 = local_190;
                    if ((iVar6 != 0) &&
                       (iVar6 = islower((uint)bVar15), lVar10 = local_190, iVar6 != 0)) {
                      local_70 = CONCAT11(bVar15,(undefined1)local_70);
                    }
                    goto LAB_00a54728;
                  }
                  lVar10 = local_190;
                  if (bVar15 != 0x3a) goto LAB_00a54728;
                  lVar11 = 0xc;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar10 = local_190;
  if (*pbVar14 != 0x5d) goto LAB_00a54728;
  iVar6 = strcmp((char *)&local_78,"digit");
  if (iVar6 == 0) {
    lVar10 = 0x102;
  }
  else {
    iVar6 = strcmp((char *)&local_78,"alnum");
    if (iVar6 == 0) {
      lVar10 = 0x101;
    }
    else {
      iVar6 = strcmp((char *)&local_78,"alpha");
      if (iVar6 == 0) {
        lVar10 = 0x104;
      }
      else {
        iVar6 = strcmp((char *)&local_78,"xdigit");
        if (iVar6 == 0) {
          lVar10 = 0x103;
        }
        else {
                    /* try { // try from 00a54434 to 00b54447 has its CatchHandler @ 00a54590 */
          iVar6 = strcmp((char *)&local_78,"print");
          if (iVar6 == 0) {
                    /* try { // try from 00a544d4 to 00b544db has its CatchHandler @ 00a545a8 */
            lVar10 = 0x105;
          }
          else {
                    /* try { // try from 00a54448 to 00b544d3 has its CatchHandler @ 00a545d4 */
            iVar6 = strcmp((char *)&local_78,"graph");
            if (iVar6 == 0) {
                    /* try { // try from 00a544dc to 00b5450b has its CatchHandler @ 00a545b0 */
              lVar10 = 0x108;
            }
            else {
              iVar6 = strcmp((char *)&local_78,"space");
              if (iVar6 == 0) {
                lVar10 = 0x109;
              }
              else {
                iVar6 = strcmp((char *)&local_78,"blank");
                if (iVar6 == 0) {
                  lVar10 = 0x106;
                }
                else {
                  iVar6 = strcmp((char *)&local_78,"upper");
                  if (iVar6 == 0) {
                    lVar10 = 0x10a;
                  }
                  else {
                    iVar6 = strcmp((char *)&local_78,"lower");
                    lVar10 = local_190;
                    if (iVar6 != 0) goto LAB_00a54728;
                    lVar10 = 0x107;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
  uVar8 = 0;
  acStack_188[lVar10] = '\x01';
  param_1 = param_1 + lVar11;
  goto LAB_00a53f34;
code_r0x00a53ecc:
  param_2 = param_2 + 1;
  param_1 = param_1 + 2;
  bVar15 = *param_1;
  goto LAB_00a53eec;
}

