
int FUN_00a22dfc(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong __n;
  char cVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  double dVar14;
  double *pdVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  double *pdVar23;
  long *plVar24;
  long lVar25;
  double *pdVar26;
  double *pdVar27;
  byte *pbVar28;
  double dVar29;
  char *pcVar30;
  char *pcVar31;
  int iVar32;
  long lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  long lVar37;
  long lVar38;
  uint local_1638;
  double local_1630;
  double local_1608;
  long *local_15f8;
  long alStack_15e0 [128];
  uint local_11e0;
  undefined1 local_11dc [4];
  undefined1 local_11d8 [8];
  undefined8 local_11d0;
  double local_11c8 [509];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  char local_1c0 [323];
  char local_7d [13];
  
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00a22dd4 with catch @ 00a22e34 */
  pdVar15 = (double *)*param_4;
  lVar33 = param_4[1];
  lVar9 = param_4[2];
  iVar32 = *(int *)(param_4 + 3);
  iVar6 = *(int *)((long)param_4 + 0x1c);
  local_1e0 = param_3;
  bVar10 = *param_3;
  if (bVar10 != 0) {
    dVar36 = 0.0;
    iVar5 = 0;
    pbVar28 = param_3;
    plVar24 = alStack_15e0;
LAB_00a22e80:
    do {
      while( true ) {
        local_1e0 = pbVar28 + 1;
        if (bVar10 != 0x25) goto LAB_00a22eac;
        if (*local_1e0 == 0x25) break;
        uVar22 = *local_1e0 - 0x30;
        iVar5 = iVar5 + 1;
                    /* try { // try from 00a22ed0 to 00b22f03 has its CatchHandler @ 00a22f28 */
        if (uVar22 < 10) {
          iVar17 = 0;
          pbVar28 = pbVar28 + 2;
          do {
            pbVar12 = pbVar28 + 1;
            bVar10 = *pbVar28;
            iVar17 = uVar22 + iVar17 * 10;
            uVar22 = bVar10 - 0x30;
            pbVar28 = pbVar12;
          } while (uVar22 < 10);
          dVar14 = 0.0;
          if ((iVar17 != 0) && (bVar10 == 0x24)) {
            dVar14 = (double)(long)iVar17;
            local_1e0 = pbVar12;
          }
        }
        else {
          dVar14 = 0.0;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a22ed0 with catch @ 00a22f28
                        */
        dVar29 = 0.0;
        uVar22 = 0;
        dVar35 = (double)(long)iVar5;
        if (dVar14 != 0.0) {
          dVar35 = dVar14;
        }
        dVar14 = dVar35;
        if ((long)dVar35 <= (long)dVar36) {
          dVar14 = dVar36;
        }
        local_1608 = 0.0;
LAB_00a22f64:
        dVar36 = dVar14;
        pbVar28 = local_1e0;
                    /* catch() { ... } // from try @ 00a230f8 with catch @ 00a22f68 */
        switch(*local_1e0) {
        case 0x20:
        case 0x23:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2e:
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
        case 0x4c:
        case 0x4f:
        case 0x68:
        case 0x6c:
        case 0x71:
        case 0x7a:
          local_1e0 = local_1e0 + 1;
          dVar14 = dVar36;
          switch(*pbVar28) {
          case 0x20:
            uVar22 = uVar22 | 1;
            break;
          case 0x23:
            uVar22 = uVar22 | 8;
            break;
          case 0x2a:
                    /* try { // try from 00a22fd0 to 00b22fdb has its CatchHandler @ 00a23144 */
            uVar22 = uVar22 | 0x4000;
            uVar19 = *local_1e0 - 0x30;
                    /* try { // try from 00a22fdc to 00b230f7 has its CatchHandler @ 00a23148 */
            iVar5 = iVar5 + 1;
            if (uVar19 < 10) {
              iVar17 = 0;
              pbVar28 = pbVar28 + 2;
              do {
                pbVar12 = pbVar28 + 1;
                bVar10 = *pbVar28;
                iVar17 = uVar19 + iVar17 * 10;
                uVar19 = bVar10 - 0x30;
                pbVar28 = pbVar12;
              } while (uVar19 < 10);
              dVar14 = 0.0;
              if ((iVar17 != 0) && (bVar10 == 0x24)) {
                dVar14 = (double)(long)iVar17;
                local_1e0 = pbVar12;
              }
            }
            else {
              dVar14 = 0.0;
            }
            dVar29 = (double)(long)iVar5;
                    /* try { // try from 00a230f8 to 00b2317b has its CatchHandler @ 00a22f68 */
            if (dVar14 != 0.0) {
              dVar29 = dVar14;
            }
            dVar14 = dVar29;
            if ((long)dVar29 <= (long)dVar36) {
              dVar14 = dVar36;
            }
          default:
            break;
          case 0x2b:
            uVar22 = uVar22 | 2;
            break;
          case 0x2d:
            uVar22 = uVar22 & 0xfffffefb | 4;
            break;
          case 0x2e:
            if (*local_1e0 == 0x2a) {
              local_1e0 = pbVar28 + 2;
              uVar22 = uVar22 | 0x10000;
              uVar19 = pbVar28[2] - 0x30;
              iVar5 = iVar5 + 1;
              if (uVar19 < 10) {
                iVar17 = 0;
                pbVar28 = pbVar28 + 3;
                do {
                  pbVar12 = pbVar28 + 1;
                  bVar10 = *pbVar28;
                  iVar17 = uVar19 + iVar17 * 10;
                  uVar19 = bVar10 - 0x30;
                  pbVar28 = pbVar12;
                } while (uVar19 < 10);
                dVar14 = 0.0;
                if ((iVar17 != 0) && (bVar10 == 0x24)) {
                  dVar14 = (double)(long)iVar17;
                  local_1e0 = pbVar12;
                }
              }
              else {
                dVar14 = 0.0;
              }
                    /* catch() { ... } // from try @ 00a22fd0 with catch @ 00a23144 */
                    /* catch() { ... } // from try @ 00a22fdc with catch @ 00a23148 */
              local_1608 = (double)(long)iVar5;
              if (dVar14 != 0.0) {
                local_1608 = dVar14;
              }
              dVar14 = local_1608;
              if ((long)local_1608 <= (long)dVar36) {
                dVar14 = dVar36;
              }
            }
            else {
              uVar22 = uVar22 | 0x8000;
              local_1608 = (double)strtol((char *)local_1e0,(char **)&local_1e0,10);
            }
            break;
          case 0x30:
            uVar22 = (uVar22 << 6 ^ 0xffffffff) & 0x100 | uVar22;
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            uVar22 = uVar22 | 0x2000;
            dVar29 = (double)strtol((char *)pbVar28,(char **)&local_1e0,10);
            break;
          case 0x4c:
            uVar22 = uVar22 | 0x80;
            break;
          case 0x4f:
          case 0x7a:
            uVar22 = uVar22 | 0x20;
            break;
          case 0x68:
            uVar22 = uVar22 | 0x10;
            break;
          case 0x6c:
            if ((uVar22 >> 5 & 1) == 0) {
              uVar22 = uVar22 | 0x20;
            }
            else {
              uVar22 = uVar22 | 0x40;
            }
            break;
          case 0x71:
            uVar22 = uVar22 | 0x40;
          }
          goto LAB_00a22f64;
        }
        uVar13 = (long)dVar35 - 1;
        if (0x7f < uVar13) {
          iVar32 = -1;
          goto LAB_00a24114;
        }
        switch(*local_1e0) {
        case 0x45:
          (&local_11e0)[uVar13 * 8] = 7;
          uVar22 = uVar22 | 0x41000;
          break;
        default:
          (&local_11e0)[uVar13 * 8] = 0;
          break;
        case 0x47:
          uVar19 = 0x81000;
          (&local_11e0)[uVar13 * 8] = 7;
          goto LAB_00a232fc;
        case 0x53:
          uVar22 = uVar22 | 8;
        case 0x73:
          uVar19 = 1;
LAB_00a232c0:
          (&local_11e0)[uVar13 * 8] = uVar19;
          break;
        case 0x58:
          (&local_11e0)[uVar13 * 8] = 3;
          uVar19 = 0x1a00;
          goto LAB_00a232fc;
        case 99:
          (&local_11e0)[uVar13 * 8] = 3;
          uVar22 = uVar22 | 0x20000;
          break;
        case 100:
        case 0x69:
          uVar19 = 3;
          goto LAB_00a232c0;
        case 0x65:
          (&local_11e0)[uVar13 * 8] = 7;
          uVar22 = uVar22 | 0x40000;
          break;
        case 0x66:
          uVar19 = 7;
          goto LAB_00a232c0;
        case 0x67:
          (&local_11e0)[uVar13 * 8] = 7;
          uVar22 = uVar22 | 0x80000;
          break;
        case 0x6e:
          uVar19 = 4;
          goto LAB_00a232c0;
        case 0x6f:
          (&local_11e0)[uVar13 * 8] = 3;
          uVar22 = uVar22 | 0x400;
          break;
        case 0x70:
          uVar19 = 2;
          goto LAB_00a232c0;
        case 0x75:
          (&local_11e0)[uVar13 * 8] = 3;
          uVar22 = uVar22 | 0x200;
          break;
        case 0x78:
          (&local_11e0)[uVar13 * 8] = 3;
          uVar19 = 0xa00;
LAB_00a232fc:
          uVar22 = uVar22 | uVar19;
        }
        *(uint *)(local_11dc + uVar13 * 0x20) = uVar22;
        *(double *)(local_11d8 + uVar13 * 0x20) = dVar29;
        local_11c8[uVar13 * 4 + -1] = local_1608;
        if ((uVar22 >> 0xe & 1) != 0) {
          dVar29 = (double)((long)dVar29 + -1);
          *(double *)(local_11d8 + uVar13 * 0x20) = dVar29;
          lVar25 = (long)dVar29 * 0x20;
          (&local_11e0)[(long)dVar29 * 8] = 9;
          *(undefined4 *)((long)local_11c8 + lVar25 + -4) = 0;
          *(undefined8 *)(local_11d8 + lVar25 + 4) = 0;
          *(undefined8 *)(local_11dc + lVar25) = 0;
        }
        if ((uVar22 >> 0x10 & 1) != 0) {
          local_1608 = (double)((long)local_1608 + -1);
          local_11c8[uVar13 * 4 + -1] = local_1608;
          lVar25 = (long)local_1608 * 0x20;
          (&local_11e0)[(long)local_1608 * 8] = 9;
          *(undefined4 *)((long)local_11c8 + lVar25 + -4) = 0;
          *(undefined8 *)(local_11d8 + lVar25 + 4) = 0;
          *(undefined8 *)(local_11dc + lVar25) = 0;
        }
        *plVar24 = (long)(pbVar28 + 1);
        bVar10 = *pbVar28;
        plVar24 = plVar24 + 1;
        if (bVar10 == 0) goto LAB_00a23394;
      }
      local_1e0 = pbVar28 + 2;
      bVar10 = *local_1e0;
      pbVar28 = local_1e0;
    } while (bVar10 != 0);
    goto LAB_00a23390;
  }
  goto LAB_00a23584;
LAB_00a22eac:
  bVar10 = *local_1e0;
  pbVar28 = local_1e0;
  if (bVar10 == 0) goto LAB_00a23390;
  goto LAB_00a22e80;
LAB_00a23390:
LAB_00a23394:
  if (0 < (long)dVar36) {
    pdVar23 = local_11c8;
    do {
      uVar22 = *(uint *)((long)pdVar23 + -0x14);
      pdVar27 = pdVar15;
      if ((uVar22 >> 0xe & 1) != 0) {
        iVar5 = iVar32;
        if ((iVar32 < 0) && (iVar5 = iVar32 + 8, iVar5 < 1)) {
          pdVar15 = (double *)(lVar33 + iVar32);
          iVar32 = iVar5;
        }
        else {
          pdVar27 = pdVar15 + 1;
          iVar32 = iVar5;
        }
        local_11c8[(long)pdVar23[-2] * 4] = (double)(long)(int)*(uint *)pdVar15;
      }
      pdVar15 = pdVar27;
      if ((uVar22 >> 0x10 & 1) != 0) {
        iVar5 = iVar32;
        if ((iVar32 < 0) && (iVar5 = iVar32 + 8, iVar5 < 1)) {
          pdVar27 = (double *)(lVar33 + iVar32);
          iVar32 = iVar5;
        }
        else {
          pdVar15 = pdVar27 + 1;
          iVar32 = iVar5;
        }
        local_11c8[(long)pdVar23[-1] * 4] = (double)(long)(int)*(uint *)pdVar27;
      }
      switch(*(undefined4 *)(pdVar23 + -3)) {
      case 0:
      case 1:
      case 2:
      case 4:
switchD_00a23548_caseD_0:
        iVar5 = iVar32;
        if ((iVar32 < 0) && (iVar5 = iVar32 + 8, iVar5 < 1)) {
          pdVar27 = (double *)(lVar33 + iVar32);
          pdVar26 = pdVar15;
        }
        else {
          pdVar26 = pdVar15 + 1;
          pdVar27 = pdVar15;
        }
        pdVar15 = pdVar26;
        dVar14 = *pdVar27;
        iVar32 = iVar5;
        goto LAB_00a2356c;
      case 3:
        if ((((((uVar22 ^ 0xffffffff) & 0x240) == 0) || ((uVar22 >> 6 & 1) != 0)) ||
            (((uVar22 ^ 0xffffffff) & 0x220) == 0)) || ((uVar22 >> 5 & 1) != 0))
        goto switchD_00a23548_caseD_0;
        if ((uVar22 >> 9 & 1) == 0) {
          iVar5 = iVar32;
          if ((iVar32 < 0) && (iVar5 = iVar32 + 8, iVar5 < 1)) {
            dVar14 = (double)(long)*(int *)(lVar33 + iVar32);
            iVar32 = iVar5;
          }
          else {
            dVar14 = (double)(long)(int)*(uint *)pdVar15;
            pdVar15 = pdVar15 + 1;
            iVar32 = iVar5;
          }
        }
        else {
          iVar5 = iVar32;
          if ((iVar32 < 0) && (iVar5 = iVar32 + 8, iVar5 < 1)) {
            dVar14 = (double)(ulong)*(uint *)(lVar33 + iVar32);
            iVar32 = iVar5;
          }
          else {
            dVar14 = (double)(ulong)*(uint *)pdVar15;
            pdVar15 = pdVar15 + 1;
            iVar32 = iVar5;
          }
        }
LAB_00a2356c:
        *pdVar23 = dVar14;
        break;
      case 7:
        iVar5 = iVar6;
        if ((iVar6 < 0) && (iVar5 = iVar6 + 0x10, iVar5 < 1)) {
          pdVar27 = (double *)(lVar9 + iVar6);
          pdVar26 = pdVar15;
          iVar6 = iVar5;
        }
        else {
          pdVar26 = pdVar15 + 1;
          pdVar27 = pdVar15;
          iVar6 = iVar5;
        }
        *pdVar23 = *pdVar27;
        pdVar15 = pdVar26;
        break;
      case 9:
        *(undefined4 *)(pdVar23 + -3) = 3;
      }
      dVar36 = (double)((long)dVar36 + -1);
      pdVar23 = pdVar23 + 4;
    } while (dVar36 != 0.0);
  }
LAB_00a23584:
  lVar33 = 0;
  iVar32 = 0;
  pcVar30 = "0123456789abcdefghijklmnopqrstuvwxyz";
  pcVar2 = local_7d + 1;
  local_15f8 = alStack_15e0;
LAB_00a23b1c:
  do {
    bVar10 = *param_3;
    if (bVar10 == 0) {
LAB_00a24114:
      if (*(long *)(lVar4 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar32;
    }
    if (bVar10 != 0x25) {
      do {
        iVar6 = (*param_2)(bVar10,param_1);
        if (iVar6 == -1) goto LAB_00a24114;
        param_3 = param_3 + 1;
        bVar10 = *param_3;
        iVar32 = iVar32 + 1;
      } while ((bVar10 != 0) && (bVar10 != 0x25));
      goto LAB_00a23b1c;
    }
    if (param_3[1] == 0x25) {
      param_3 = param_3 + 2;
      iVar6 = (*param_2)(0x25,param_1);
      if (iVar6 == -1) goto LAB_00a24114;
      iVar32 = iVar32 + 1;
    }
    else {
      uVar22 = param_3[1] - 0x30;
      if (uVar22 < 10) {
        iVar6 = 0;
        pbVar28 = param_3 + 2;
        do {
          bVar10 = *pbVar28;
          iVar6 = uVar22 + iVar6 * 10;
          uVar22 = bVar10 - 0x30;
          pbVar28 = pbVar28 + 1;
        } while (uVar22 < 10);
        lVar9 = (long)iVar6;
        if (bVar10 != 0x24 || iVar6 == 0) {
          lVar9 = 0;
        }
      }
      else {
        lVar9 = 0;
      }
      lVar25 = lVar33;
      if (lVar9 != 0) {
        lVar25 = lVar9 + -1;
      }
      uVar22 = *(uint *)(local_11dc + lVar25 * 0x20);
      local_1630 = *(double *)(local_11d8 + lVar25 * 0x20);
      puVar21 = (uint *)((ulong)(&local_11e0 + lVar25 * 8) | 4);
      if ((uVar22 >> 0xe & 1) == 0) {
        lVar33 = lVar33 + 1;
        dVar36 = local_1630;
        if ((uVar22 >> 0x10 & 1) == 0) goto LAB_00a23c1c;
LAB_00a23bd0:
        lVar33 = lVar33 + 1;
        dVar14 = local_11c8[(long)local_11c8[lVar25 * 4 + -1] * 4];
        if ((long)dVar14 < 0) {
          dVar14 = -NAN;
        }
      }
      else {
        dVar36 = local_11c8[(long)local_1630 * 4];
        lVar33 = lVar33 + 2;
        if ((long)dVar36 < 0) {
          uVar22 = uVar22 & 0xfffffefb | 4;
          dVar36 = (double)-(long)dVar36;
          *puVar21 = uVar22;
        }
        if ((uVar22 >> 0x10 & 1) != 0) goto LAB_00a23bd0;
LAB_00a23c1c:
        if ((uVar22 >> 0xf & 1) == 0) {
          dVar14 = -NAN;
        }
        else {
          dVar14 = local_11c8[lVar25 * 4 + -1];
        }
      }
      switch((&local_11e0)[lVar25 * 8]) {
      case 1:
        pcVar31 = (char *)local_11c8[lVar25 * 4];
        if (pcVar31 == (char *)0x0) {
          if ((dVar14 == -NAN) || (4 < (long)dVar14)) {
            uVar22 = uVar22 & 0xfffffff7;
            pcVar31 = "(nil)";
            *puVar21 = uVar22;
            dVar14 = 2.47032822920623e-323;
          }
          else {
            dVar14 = 0.0;
            pcVar31 = "";
          }
        }
        else if (dVar14 == -NAN) {
          dVar14 = (double)strlen(pcVar31);
        }
        dVar35 = dVar14;
        if (0x7ffffffffffffffe < (ulong)dVar14) {
          dVar35 = NAN;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          iVar6 = (*param_2)(0x22,param_1);
          if (iVar6 == -1) goto LAB_00a24114;
          iVar32 = iVar32 + 1;
          uVar22 = *puVar21;
        }
        lVar9 = (long)dVar36 - (long)dVar35;
        if ((uVar22 >> 2 & 1) == 0) {
          while (bVar1 = 0 < lVar9, lVar9 = lVar9 + -1, bVar1) {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) goto LAB_00a24114;
            iVar32 = iVar32 + 1;
          }
        }
        for (; (dVar14 != 0.0 && (*pcVar31 != '\0')); pcVar31 = pcVar31 + 1) {
          iVar6 = (*param_2)(*pcVar31,param_1);
          if (iVar6 == -1) goto LAB_00a24114;
          dVar14 = (double)((long)dVar14 + -1);
          iVar32 = iVar32 + 1;
        }
        uVar22 = *puVar21;
        if (((uVar22 >> 2 & 1) != 0) && (0 < lVar9)) {
          lVar9 = lVar9 + 1;
          do {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) goto LAB_00a24114;
            lVar9 = lVar9 + -1;
            iVar32 = iVar32 + 1;
          } while (1 < lVar9);
          uVar22 = *puVar21;
        }
        if ((uVar22 >> 3 & 1) != 0) {
          iVar6 = (*param_2)(0x22,param_1);
          if (iVar6 == -1) goto LAB_00a24114;
          iVar32 = iVar32 + 1;
        }
        break;
      case 2:
        dVar35 = local_11c8[lVar25 * 4];
        if (dVar35 == 0.0) {
          if ((uVar22 >> 2 & 1) == 0) {
            lVar9 = (long)dVar36 + -5;
          }
          else {
            lVar9 = (long)dVar36 + -6;
            lVar25 = lVar9;
            if (5 < (long)dVar36) {
              do {
                iVar6 = (*param_2)(0x20,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a23694 with catch @ 00a23624
                       catch(type#1 @ 00000000) { ... } // from try @ 00a236c4 with catch @ 00a23624
                       catch(type#1 @ 00000000) { ... } // from try @ 00a236f4 with catch @ 00a23624
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2371c with catch @ 00a23624
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23748 with catch @ 00a23624
                        */
                if (iVar6 == -1) goto LAB_00a24114;
                lVar9 = lVar25 + -1;
                iVar32 = iVar32 + 1;
                bVar1 = 0 < lVar25;
                lVar25 = lVar9;
              } while (bVar1);
            }
          }
          iVar6 = (*param_2)(0x28,param_1);
          if (iVar6 == -1) goto LAB_00a24114;
                    /* try { // try from 00a236ec to 00b236f3 has its CatchHandler @ 00a23784 */
          iVar6 = (*param_2)(0x6e,param_1);
                    /* try { // try from 00a236f4 to 00b23713 has its CatchHandler @ 00a23624 */
          if (iVar6 == -1) {
            iVar32 = iVar32 + 1;
            goto LAB_00a24114;
          }
          iVar6 = (*param_2)(0x69,param_1);
          if (iVar6 == -1) {
            iVar32 = iVar32 + 2;
            goto LAB_00a24114;
          }
                    /* try { // try from 00a23714 to 00b2371b has its CatchHandler @ 00a23784 */
                    /* try { // try from 00a2371c to 00b2373b has its CatchHandler @ 00a23624 */
          iVar6 = (*param_2)(0x6c,param_1);
          if (iVar6 == -1) {
            iVar32 = iVar32 + 3;
            goto LAB_00a24114;
          }
          iVar6 = (*param_2)(0x29,param_1);
                    /* try { // try from 00a2373c to 00b23747 has its CatchHandler @ 00a23784 */
          if (iVar6 == -1) {
            iVar32 = iVar32 + 4;
            goto LAB_00a24114;
          }
                    /* try { // try from 00a23748 to 00b2378b has its CatchHandler @ 00a23624 */
          iVar32 = iVar32 + 5;
          if (((*puVar21 >> 2 & 1) == 0) && (0 < lVar9)) {
            lVar9 = lVar9 + 1;
            do {
              iVar6 = (*param_2)(0x20,param_1);
              if (iVar6 == -1) goto LAB_00a24114;
              lVar9 = lVar9 + -1;
              iVar32 = iVar32 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a236ec with catch @ 00a23784
                       catch(type#1 @ 00000000) { ... } // from try @ 00a23714 with catch @ 00a23784
                       catch(type#1 @ 00000000) { ... } // from try @ 00a2373c with catch @ 00a23784
                        */
            } while (1 < lVar9);
          }
        }
        else {
          local_1638 = 1;
LAB_00a23cbc:
          local_1630._0_4_ = 0;
          pcVar30 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          if ((uVar22 & 0x1000) == 0) {
            pcVar30 = "0123456789abcdefghijklmnopqrstuvwxyz";
          }
          dVar29 = 7.90505033345994e-323;
LAB_00a23794:
          if (dVar14 == -NAN) {
            dVar14 = 4.94065645841247e-324;
          }
          lVar9 = 0;
          pcVar31 = pcVar2;
          if (dVar35 != 0.0) {
            do {
              dVar34 = 0.0;
              if (dVar29 != 0.0) {
                dVar34 = (double)((ulong)dVar35 / (ulong)dVar29);
              }
              pcVar2[lVar9] = pcVar30[(long)dVar35 - (long)dVar34 * (long)dVar29];
              lVar9 = lVar9 + -1;
              bVar1 = (ulong)dVar29 <= (ulong)dVar35;
              dVar35 = dVar34;
            } while (bVar1);
            pcVar31 = pcVar2 + lVar9;
          }
          lVar25 = lVar9 + (long)dVar36;
          uVar13 = lVar9 + (long)dVar14;
                    /* try { // try from 00a237ec to 00b237ef has its CatchHandler @ 00a23868 */
          if (((local_1638 == 0) || (dVar29 != 3.95252516672997e-323)) || (0 < (long)uVar13)) {
            if (0 < (long)uVar13) {
              uVar20 = 0xfffffffffffffffe;
              if (-2 < (long)~uVar13) {
                uVar20 = ~uVar13;
              }
              __n = (long)dVar14 + lVar9 + uVar20 + 2;
              memset(local_7d + -((long)dVar14 + uVar20),0x30,__n);
              uVar20 = uVar13;
              if ((__n < 4) || (uVar18 = __n & 0xfffffffffffffffc, uVar18 == 0)) {
LAB_00a238ac:
                lVar16 = uVar20 + 1;
                do {
                  lVar16 = lVar16 + -1;
                  lVar9 = lVar9 + -1;
                } while (1 < lVar16);
              }
              else {
                lVar16 = 0;
                    /* catch() { ... } // from try @ 00a237ec with catch @ 00a23868 */
                lVar37 = 0;
                lVar38 = 0;
                uVar20 = uVar18;
                do {
                  lVar9 = lVar9 + -1;
                  lVar16 = lVar16 + -1;
                  uVar20 = uVar20 - 4;
                  lVar37 = lVar37 + -1;
                  lVar38 = lVar38 + -1;
                } while (uVar20 != 0);
                lVar9 = lVar37 + lVar9 + lVar38 + lVar16;
                uVar20 = uVar13 - uVar18;
                if (__n != uVar18) goto LAB_00a238ac;
              }
              lVar25 = lVar25 - uVar13;
            }
          }
          else {
                    /* try { // try from 00a237f0 to 00b2387b has its CatchHandler @ 00a2378c */
            lVar9 = lVar9 + -1;
            *pcVar31 = '0';
            lVar25 = lVar25 + -1;
          }
          lVar16 = lVar25 + -2;
          if (local_1638 == 0 || dVar29 != 7.90505033345994e-323) {
            lVar16 = lVar25;
          }
          lVar16 = lVar16 - (ulong)(local_1630._0_4_ != 0 || (uVar22 & 3) != 0);
          if ((uVar22 & 0x104) == 0) {
            lVar25 = lVar16 + -1;
            if (0 < lVar16) {
              do {
                iVar6 = (*param_2)(0x20,param_1);
                if (iVar6 == -1) goto LAB_00a24114;
                lVar16 = lVar25 + -1;
                iVar32 = iVar32 + 1;
                bVar1 = 0 < lVar25;
                lVar25 = lVar16;
              } while (bVar1);
              goto LAB_00a2391c;
            }
            if (local_1630._0_4_ != 0) goto LAB_00a23924;
LAB_00a23970:
            if ((*puVar21 >> 1 & 1) != 0) {
              uVar7 = 0x2b;
              goto LAB_00a23994;
            }
            iVar6 = iVar32;
            if ((*puVar21 & 1) != 0) {
              uVar7 = 0x20;
              goto LAB_00a23994;
            }
          }
          else {
LAB_00a2391c:
            lVar25 = lVar16;
            if (local_1630._0_4_ == 0) goto LAB_00a23970;
LAB_00a23924:
            uVar7 = 0x2d;
LAB_00a23994:
                    /* try { // try from 00a2399c to 00b239fb has its CatchHandler @ 00a2399c
                       catch() { ... } // from try @ 00a2399c with catch @ 00a2399c
                       catch() { ... } // from try @ 00a23a00 with catch @ 00a2399c */
            iVar6 = (*param_2)(uVar7,param_1);
            if (iVar6 == -1) goto LAB_00a24114;
            iVar6 = iVar32 + 1;
          }
          if (local_1638 != 0 && dVar29 == 7.90505033345994e-323) {
            iVar5 = (*param_2)(0x30,param_1);
            iVar32 = iVar6;
            if (iVar5 == -1) goto LAB_00a24114;
            if ((*(byte *)((long)puVar21 + 1) >> 4 & 1) == 0) {
              uVar7 = 0x78;
            }
            else {
              uVar7 = 0x58;
            }
            iVar5 = (*param_2)(uVar7,param_1);
            iVar32 = iVar6 + 1;
                    /* try { // try from 00a239fc to 00b239ff has its CatchHandler @ 00a23a78 */
            if (iVar5 == -1) goto LAB_00a24114;
                    /* try { // try from 00a23a00 to 00b23a8b has its CatchHandler @ 00a2399c */
            iVar6 = iVar6 + 2;
          }
          lVar16 = lVar25;
          iVar32 = iVar6;
          if (((*puVar21 & 0x104) == 0x100) && (lVar16 = lVar25 + -1, 0 < lVar25)) {
            do {
              lVar16 = lVar25;
              iVar6 = (*param_2)(0x30,param_1);
              if (iVar6 == -1) goto LAB_00a24114;
              lVar25 = lVar16 + -1;
              iVar32 = iVar32 + 1;
            } while (0 < lVar25);
            lVar16 = lVar16 + -2;
          }
          if (lVar9 < 0) {
            lVar9 = lVar9 + 0x145;
            do {
              iVar6 = (*param_2)(local_1c0[lVar9],param_1);
                    /* catch() { ... } // from try @ 00a239fc with catch @ 00a23a78 */
              if (iVar6 == -1) goto LAB_00a24114;
              lVar25 = lVar9 + -0x145;
              lVar9 = lVar9 + 1;
              iVar32 = iVar32 + 1;
            } while (lVar25 < -1);
          }
          if (((*puVar21 >> 2 & 1) != 0) && (0 < lVar16)) {
            lVar16 = lVar16 + 1;
            do {
              iVar6 = (*param_2)(0x20,param_1);
              if (iVar6 == -1) goto LAB_00a24114;
              lVar16 = lVar16 + -1;
              iVar32 = iVar32 + 1;
            } while (1 < lVar16);
          }
        }
        break;
      case 3:
        dVar35 = local_11c8[lVar25 * 4];
        if ((uVar22 >> 0x11 & 1) == 0) {
          local_1638 = uVar22 >> 3 & 1;
          if ((uVar22 >> 10 & 1) == 0) {
            if ((uVar22 >> 0xb & 1) != 0) goto LAB_00a23cbc;
            if ((uVar22 >> 9 & 1) == 0) {
              local_1630._0_4_ = (uint)((ulong)dVar35 >> 0x3f);
              dVar34 = (double)-(long)dVar35;
              if (-1 < (long)dVar35) {
                dVar34 = dVar35;
              }
            }
            else {
                    /* try { // try from 00a2378c to 00b237eb has its CatchHandler @ 00a2378c
                       catch() { ... } // from try @ 00a2378c with catch @ 00a2378c
                       catch() { ... } // from try @ 00a237f0 with catch @ 00a2378c */
              local_1630._0_4_ = 0;
              dVar34 = dVar35;
            }
            dVar29 = 4.94065645841247e-323;
            dVar35 = dVar34;
          }
          else {
            local_1630._0_4_ = 0;
            dVar29 = 3.95252516672997e-323;
          }
          goto LAB_00a23794;
        }
        if ((uVar22 >> 2 & 1) == 0) {
          dVar14 = dVar36;
          if ((long)dVar36 < 2) {
            dVar36 = (double)((long)dVar36 + -1);
          }
          else {
            do {
              iVar6 = (*param_2)(0x20,param_1);
              if (iVar6 == -1) goto LAB_00a24114;
              dVar29 = (double)((long)dVar14 + -1);
              dVar36 = (double)((long)dVar14 + -2);
              iVar32 = iVar32 + 1;
              dVar14 = dVar29;
            } while (dVar36 != 0.0 && 0 < (long)dVar29);
          }
        }
        iVar6 = (*param_2)(SUB84(dVar35,0) & 0xff,param_1);
        if (iVar6 == -1) goto LAB_00a24114;
        iVar32 = iVar32 + 1;
                    /* try { // try from 00a2368c to 00b23693 has its CatchHandler @ 00a23788 */
                    /* try { // try from 00a23694 to 00b236b7 has its CatchHandler @ 00a23624 */
        if (((*puVar21 >> 2 & 1) != 0) && (1 < (long)dVar36)) {
          lVar9 = (long)dVar36 + 1;
          do {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) goto LAB_00a24114;
            lVar9 = lVar9 + -1;
                    /* try { // try from 00a236b8 to 00b236c3 has its CatchHandler @ 00a23788 */
            iVar32 = iVar32 + 1;
          } while (2 < lVar9);
        }
        break;
      case 4:
        if (((uVar22 >> 6 & 1) == 0) && ((uVar22 >> 5 & 1) == 0)) {
          if ((uVar22 >> 4 & 1) == 0) {
            *(int *)local_11c8[lVar25 * 4] = iVar32;
          }
          else {
            *(short *)local_11c8[lVar25 * 4] = (short)iVar32;
          }
        }
        else {
          *(long *)local_11c8[lVar25 * 4] = (long)iVar32;
        }
        break;
      case 7:
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (byte *)0x25;
        sVar8 = strlen((char *)&local_1e0);
        if ((uVar22 >> 0xd & 1) == 0) {
          if ((uVar22 >> 0xe & 1) == 0) {
            local_1630 = -NAN;
          }
          else {
            local_1630 = local_11c8[(long)local_1630 * 4];
          }
        }
        if ((uVar22 >> 0xf & 1) == 0) {
          if ((uVar22 >> 0x10 & 1) != 0) {
            pdVar15 = local_11c8 + (long)local_11c8[lVar25 * 4 + -1] * 4;
            goto LAB_00a23e74;
          }
          dVar36 = -NAN;
        }
        else {
          pdVar15 = local_11c8 + lVar25 * 4 + -1;
LAB_00a23e74:
          dVar36 = *pdVar15;
        }
        pbVar28 = (byte *)((ulong)&local_1e0 | 1);
        if ((uVar22 >> 2 & 1) != 0) {
          local_1e0._0_2_ = CONCAT11(0x2d,(char)local_1e0);
          pbVar28 = (byte *)((ulong)&local_1e0 | 2);
        }
        if ((uVar22 >> 1 & 1) != 0) {
          *pbVar28 = 0x2b;
          pbVar28 = pbVar28 + 1;
        }
        pbVar12 = pbVar28;
        if ((uVar22 & 1) != 0) {
          uVar22 = *puVar21;
          pbVar12 = pbVar28 + 1;
          *pbVar28 = 0x20;
        }
        lVar9 = 0x20 - sVar8;
        pbVar28 = pbVar12;
        if ((uVar22 >> 3 & 1) != 0) {
          pbVar28 = pbVar12 + 1;
          *pbVar12 = 0x23;
        }
        *pbVar28 = 0;
        if (-1 < (long)local_1630) {
          if (0x144 < (long)local_1630) {
            local_1630 = 1.60571334898405e-321;
          }
          iVar6 = FUN_00a241ac(pbVar28,lVar9,"%ld",local_1630);
          pbVar28 = pbVar28 + iVar6;
          lVar9 = lVar9 - iVar6;
        }
        if (-1 < (long)dVar36) {
          lVar16 = 0x144;
          for (dVar14 = local_11c8[lVar25 * 4]; 10.0 <= dVar14; dVar14 = dVar14 / 10.0) {
            lVar16 = lVar16 + -1;
          }
          dVar14 = (double)(lVar16 + -1);
          if ((long)dVar36 <= lVar16) {
            dVar14 = dVar36;
          }
          iVar6 = FUN_00a241ac(pbVar28,lVar9,&DAT_013c1a50,dVar14);
          pbVar28 = pbVar28 + iVar6;
        }
        uVar22 = *puVar21;
        pbVar12 = pbVar28;
        if ((uVar22 >> 5 & 1) != 0) {
          uVar22 = *puVar21;
          pbVar12 = pbVar28 + 1;
          *pbVar28 = 0x6c;
        }
        if ((uVar22 >> 0x12 & 1) == 0) {
          if ((uVar22 >> 0x13 & 1) != 0) {
            bVar10 = 0x67;
            goto LAB_00a23fa4;
          }
          bVar10 = 0x66;
        }
        else {
          bVar10 = 0x65;
LAB_00a23fa4:
          bVar10 = (byte)(uVar22 >> 7) & 0x20 ^ bVar10;
        }
        dVar36 = local_11c8[lVar25 * 4];
        *pbVar12 = bVar10;
        pbVar12[1] = 0;
        sprintf(local_1c0,(char *)&local_1e0,dVar36);
        pcVar31 = (char *)((ulong)local_1c0 | 1);
        cVar3 = local_1c0[0];
        while (cVar3 != '\0') {
          iVar6 = (*param_2)(cVar3,param_1);
          if (iVar6 == -1) goto LAB_00a24114;
          iVar32 = iVar32 + 1;
          cVar3 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        }
      }
      param_3 = (byte *)*local_15f8;
      local_15f8 = local_15f8 + 1;
    }
  } while( true );
}

