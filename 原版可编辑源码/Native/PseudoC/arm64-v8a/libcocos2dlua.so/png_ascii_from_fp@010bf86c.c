
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_ascii_from_fp(double param_1,undefined8 param_2,byte *param_3,ulong param_4,uint param_5)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined8 local_a8;
  double local_a0;
  undefined4 local_98;
  byte local_94 [12];
  long local_88;
  
  lVar17 = tpidr_el0;
  uVar13 = 0xf;
  if (param_5 != 0) {
    uVar13 = param_5;
  }
  local_88 = *(long *)(lVar17 + 0x28);
  if (0xf < uVar13) {
    uVar13 = 0x10;
  }
  if (param_4 < uVar13 + 5) goto LAB_010bfe20;
  pbVar20 = param_3;
  if (param_1 < 0.0) {
    param_1 = -param_1;
    pbVar20 = param_3 + 1;
    *param_3 = 0x2d;
    param_4 = param_4 - 1;
  }
  if ((param_1 < 2.2250738585072014e-308) || (1.7976931348623157e+308 < param_1)) {
    if (param_1 < 2.2250738585072014e-308) {
      pbVar9 = pbVar20 + 1;
      *pbVar20 = 0x30;
    }
    else {
      pbVar9 = pbVar20 + 3;
      pbVar20[0] = 0x69;
      pbVar20[1] = 0x6e;
      pbVar20[2] = 0x66;
    }
    *pbVar9 = 0;
    goto LAB_010bfe3c;
  }
  local_a8 = lVar17;
  frexp(param_1,&local_98);
  local_98 = (int)(local_98 * 0x4d) >> 8;
  if ((int)local_98 < 0) {
    dVar25 = 0.0;
    if ((int)local_98 < -0x133) goto LAB_010bfa00;
    bVar8 = true;
    uVar10 = -local_98;
  }
  else {
    bVar8 = false;
    uVar10 = local_98;
  }
  if ((int)uVar10 < 1) {
    dVar25 = 1.0;
    goto joined_r0x010bf9e4;
  }
  dVar25 = 10.0;
  dVar24 = 1.0;
  do {
    uVar14 = uVar10 & 1;
    uVar10 = (int)uVar10 >> 1;
    if (uVar14 != 0) {
      dVar24 = dVar24 * dVar25;
    }
    dVar25 = dVar25 * dVar25;
  } while (0 < (int)uVar10);
  uVar10 = local_98;
  if (bVar8) {
    dVar24 = 1.0 / dVar24;
  }
  do {
    do {
      dVar25 = dVar24;
      local_98 = uVar10;
      if (2.2250738585072014e-308 <= dVar25) {
joined_r0x010bf9e4:
        if (param_1 <= dVar25) goto LAB_010bfa90;
      }
LAB_010bfa00:
      while (uVar10 = local_98 + 1, (int)local_98 < -1) {
        if (-0x135 < (int)local_98) {
          bVar8 = true;
          uVar14 = ~local_98;
          goto LAB_010bfa28;
        }
        dVar25 = 0.0;
        local_98 = uVar10;
      }
      bVar8 = false;
      uVar14 = uVar10;
LAB_010bfa28:
      dVar24 = 1.0;
    } while ((int)uVar14 < 1);
    dVar24 = 1.0;
    dVar28 = 10.0;
    do {
      uVar6 = uVar14 & 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bfaa0 with catch @ 010bfa44
                       catch(type#1 @ 00000000) { ... } // from try @ 010bfc74 with catch @ 010bfa44
                        */
      uVar14 = (int)uVar14 >> 1;
      if (uVar6 != 0) {
        dVar24 = dVar24 * dVar28;
      }
      dVar28 = dVar28 * dVar28;
    } while (0 < (int)uVar14);
    if (bVar8) {
      dVar24 = 1.0 / dVar24;
    }
  } while (dVar24 <= 1.7976931348623157e+308);
LAB_010bfa90:
                    /* try { // try from 010bfa98 to 011bfa9f has its CatchHandler @ 010bfd98 */
  for (param_1 = param_1 / dVar25; 1.0 <= param_1; param_1 = param_1 / 10.0) {
    local_98 = local_98 + 1;
  }
  if (local_98 < 0xfffffffe) {
    iVar11 = 0;
  }
  else {
    iVar11 = -local_98;
    local_98 = 0;
  }
  iVar21 = 0;
  iVar23 = iVar11;
  do {
    iVar3 = iVar11 + 1;
    pbVar9 = pbVar20;
    if ((iVar3 - iVar23) + iVar21 < (int)uVar13) {
      param_1 = modf(param_1 * 10.0,&local_a0);
LAB_010bfbe0:
      iVar22 = (int)param_4;
      if (local_a0 != 0.0) goto LAB_010bfc1c;
      pbVar20 = pbVar9;
      iVar11 = iVar3;
      lVar17 = local_a8;
      if (iVar21 == 0) {
        iVar23 = iVar23 + 1;
      }
    }
    else {
      local_a0 = (double)(long)(param_1 * 10.0 + 0.5);
      param_1 = 0.0;
      if (local_a0 <= 9.0) goto LAB_010bfbe0;
      if (iVar11 < 1) {
        uVar10 = local_98;
        iVar22 = iVar21;
        if (0 < iVar21) {
          do {
            pbVar9 = pbVar20 + -1;
            bVar5 = *pbVar9;
            if (uVar10 == 0xffffffff) {
              if (bVar5 == 0x2e) {
                pbVar9 = pbVar20 + -2;
                bVar5 = *pbVar9;
                param_4 = param_4 + 1;
                uVar10 = 1;
                local_98 = 1;
              }
              else {
                uVar10 = 0xffffffff;
              }
            }
            else {
              uVar10 = uVar10 + 1;
              local_98 = uVar10;
            }
            uVar14 = (uint)bVar5;
            iVar21 = iVar22 + -1;
            local_a0 = (double)(int)(uVar14 - 0x2f);
          } while ((0x38 < uVar14) && (bVar8 = 1 < iVar22, pbVar20 = pbVar9, iVar22 = iVar21, bVar8)
                  );
          if (uVar14 < 0x39) goto LAB_010bfbe0;
        }
        if (local_98 == 0xffffffff) {
                    /* try { // try from 010bfbfc to 011bfc07 has its CatchHandler @ 010bfd84 */
          pbVar9 = pbVar9 + -1;
          if (*pbVar9 == 0x2e) {
            param_4 = param_4 + 1;
                    /* try { // try from 010bfc0c to 011bfc17 has its CatchHandler @ 010bfd6c */
            local_98 = 1;
          }
        }
        else {
          local_98 = local_98 + 1;
        }
      }
      else {
        iVar11 = iVar11 + -1;
        iVar23 = iVar23 - (uint)(iVar21 == 0);
      }
      local_a0 = 1.0;
      param_1 = 0.0;
LAB_010bfc1c:
      bVar8 = local_98 != 0xffffffff;
      iVar22 = iVar11;
      iVar3 = iVar11;
      if (0 < iVar11) {
        do {
          pbVar20 = pbVar9;
          if (bVar8) {
            if (local_98 == 0) {
              pbVar20 = pbVar9 + 1;
              *pbVar9 = 0x2e;
              param_4 = param_4 - 1;
            }
            local_98 = local_98 - 1;
          }
          pbVar9 = pbVar20 + 1;
          *pbVar20 = 0x30;
          bVar8 = local_98 != 0xffffffff;
          iVar3 = iVar22 + -1;
          bVar1 = 0 < iVar22;
          iVar22 = iVar3;
        } while (iVar3 != 0 && bVar1);
      }
      pbVar20 = pbVar9;
      if (bVar8) {
                    /* try { // try from 010bfc6c to 011bfc73 has its CatchHandler @ 010bfd54 */
        if (local_98 == 0) {
          pbVar20 = pbVar9 + 1;
          *pbVar9 = 0x2e;
                    /* try { // try from 010bfc74 to 011bfd9b has its CatchHandler @ 010bfa44 */
          param_4 = param_4 - 1;
        }
        local_98 = local_98 - 1;
      }
      iVar22 = (int)param_4;
      iVar21 = ((iVar21 + 1) - iVar23) + iVar11;
      *pbVar20 = (char)(int)local_a0 + 0x30;
      iVar23 = 0;
      pbVar20 = pbVar20 + 1;
      iVar11 = iVar3;
      lVar17 = local_a8;
    }
    local_a8 = lVar17;
  } while ((2.2250738585072014e-308 < param_1) &&
          (iVar22 = (int)param_4, (iVar11 - iVar23) + iVar21 < (int)uVar13));
  if (local_98 + 1 < 4) {
    while (bVar8 = 0 < (int)local_98, local_98 = local_98 - 1, bVar8) {
      *pbVar20 = 0x30;
      pbVar20 = pbVar20 + 1;
    }
  }
  else {
    pbVar9 = pbVar20 + 1;
    *pbVar20 = 0x45;
    if ((int)local_98 < 0) {
      pbVar20[1] = 0x2d;
      pbVar9 = pbVar20 + 2;
      iVar11 = (iVar22 - iVar21) + -2;
      uVar13 = -local_98;
      if (uVar13 != 0) goto LAB_010bfd1c;
LAB_010bfe10:
      lVar15 = 0;
      if (iVar11 < 1) {
LAB_010bfe20:
                    /* WARNING: Subroutine does not return */
        png_error(param_2,"ASCII conversion buffer too small");
      }
    }
    else {
      iVar11 = (iVar22 - iVar21) + -1;
      uVar13 = local_98;
      if (local_98 == 0) goto LAB_010bfe10;
LAB_010bfd1c:
      lVar15 = 0;
      do {
        local_94[lVar15] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
        lVar15 = lVar15 + 1;
        bVar8 = 9 < uVar13;
        uVar13 = uVar13 / 10;
      } while (bVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bfc6c with catch @ 010bfd54
                        */
      if (iVar11 <= (int)lVar15) goto LAB_010bfe20;
    }
    auVar7 = _DAT_013d8ee0;
    pbVar20 = pbVar9;
    if (0 < (int)lVar15) {
      uVar12 = (ulong)(int)lVar15;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bfc0c with catch @ 010bfd6c
                        */
      uVar4 = 0xfffffffffffffffe;
      if (-2 < (long)~uVar12) {
        uVar4 = ~uVar12;
      }
      uVar4 = uVar4 + uVar12 + 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bfbfc with catch @ 010bfd84
                        */
      if ((0x1f < uVar4) && (uVar16 = uVar4 & 0xffffffffffffffe0, uVar16 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010bfa98 with catch @ 010bfd98
                        */
        uVar19 = 0xfffffffffffffffe;
        if (-2 < (long)~uVar12) {
          uVar19 = ~uVar12;
        }
        if ((local_94 + uVar12 <= pbVar9) ||
           (pbVar9 + uVar19 + uVar12 + 2 <= local_94 + (-2 - uVar19))) {
          pbVar20 = pbVar9 + uVar16;
          pbVar9 = pbVar9 + 0x10;
          pauVar18 = (undefined1 (*) [16])((long)&local_a8 + uVar12 + 4);
          uVar19 = uVar16;
          do {
            pauVar2 = pauVar18 + -1;
            auVar26 = *pauVar18;
            uVar19 = uVar19 - 0x20;
            pauVar18 = pauVar18 + -2;
            auVar26 = a64_TBL(ZEXT816(0),auVar26,auVar7);
            auVar27 = a64_TBL(ZEXT816(0),*pauVar2,auVar7);
            *(long *)(pbVar9 + -8) = auVar26._8_8_;
            *(long *)(pbVar9 + -0x10) = auVar26._0_8_;
            *(long *)(pbVar9 + 8) = auVar27._8_8_;
            *(long *)pbVar9 = auVar27._0_8_;
            pbVar9 = pbVar9 + 0x20;
          } while (uVar19 != 0);
          pbVar9 = pbVar20;
          uVar12 = uVar12 - uVar16;
          if (uVar4 == uVar16) goto LAB_010bfe34;
        }
      }
      do {
        pbVar20 = pbVar9 + 1;
        *pbVar9 = local_94[uVar12 - 1];
        bVar8 = 1 < (long)uVar12;
        pbVar9 = pbVar20;
        uVar12 = uVar12 - 1;
      } while (bVar8);
    }
  }
LAB_010bfe34:
  *pbVar20 = 0;
LAB_010bfe3c:
  if (*(long *)(lVar17 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

