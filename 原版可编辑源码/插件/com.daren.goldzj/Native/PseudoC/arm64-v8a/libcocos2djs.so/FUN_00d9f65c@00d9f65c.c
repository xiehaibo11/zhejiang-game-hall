
ulong FUN_00d9f65c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  short *psVar24;
  short *psVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  short *psVar30;
  int iVar31;
  uint uVar32;
  long lVar33;
  long local_1b8;
  long local_100;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined1 auStack_e0 [2];
  short local_de;
  short local_dc;
  short local_d0;
  short local_ce;
  short local_c0;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  lVar14 = *(long *)(param_1 + 0x250);
  while( true ) {
    if ((*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xac)) ||
       (*(int *)((long)*(undefined8 **)(param_1 + 0x260) + 0x24) != 0)) break;
    if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4)) {
      uVar32 = *(uint *)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0x21c) == 0) {
        uVar32 = uVar32 + 1;
      }
      if (uVar32 < *(uint *)(param_1 + 0xb0)) break;
    }
    uVar7 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    local_1b8 = 0;
    lVar28 = *(long *)(param_1 + 0x130);
    do {
      if (*(int *)(lVar28 + 0x34) != 0) {
        uVar32 = *(uint *)(param_1 + 0xb8);
        if (uVar32 < iVar1 - 1U) {
          bVar4 = false;
          uVar11 = *(uint *)(lVar28 + 0xc);
          uVar9 = uVar11 << 1;
          uVar23 = uVar11;
          if (uVar32 != 0) goto LAB_00d9f730;
LAB_00d9f794:
          lVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                            (param_1,*(undefined8 *)(lVar14 + local_1b8 * 8 + 0x88),0,uVar9,0);
          bVar3 = true;
        }
        else {
          uVar11 = *(uint *)(lVar28 + 0xc);
          uVar9 = 0;
          if (uVar11 != 0) {
            uVar9 = *(uint *)(lVar28 + 0x20) / uVar11;
          }
          uVar23 = *(uint *)(lVar28 + 0x20) - uVar9 * uVar11;
          uVar9 = uVar11;
          if (uVar23 != 0) {
            uVar9 = uVar23;
          }
          bVar4 = true;
          uVar23 = uVar9;
          if (uVar32 == 0) goto LAB_00d9f794;
LAB_00d9f730:
          lVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                            (param_1,*(undefined8 *)(lVar14 + local_1b8 * 8 + 0x88),
                             uVar11 * (uVar32 - 1),uVar11 + uVar9,0);
          bVar3 = false;
          lVar8 = lVar8 + (long)*(int *)(lVar28 + 0xc) * 8;
        }
        if (0 < (int)uVar23) {
          puVar15 = *(ushort **)(lVar28 + 0x50);
          local_100 = *(long *)(param_2 + local_1b8 * 8);
          uVar7 = 0;
          lVar33 = *(long *)(lVar14 + 0xd8) + local_1b8 * 0x18;
          uVar10 = (ulong)*puVar15;
          pcVar18 = *(code **)(*(long *)(param_1 + 0x278) + local_1b8 * 8 + 8);
          uVar22 = (ulong)puVar15[9];
          uVar21 = (ulong)puVar15[0x10];
          uVar19 = (ulong)puVar15[1];
          uVar20 = (ulong)puVar15[8];
          uVar16 = (ulong)puVar15[2];
          do {
            psVar30 = *(short **)(lVar8 + uVar7 * 8);
            if ((!bVar3) || (psVar25 = psVar30, uVar7 != 0)) {
              psVar25 = *(short **)(lVar8 + uVar7 * 8 + -8);
            }
            if ((!bVar4) || (psVar24 = psVar30, uVar7 != uVar23 - 1)) {
              psVar24 = *(short **)(lVar8 + uVar7 * 8 + 8);
            }
            uVar32 = 0;
            iVar31 = 0;
            uVar11 = *(int *)(lVar28 + 0x1c) - 1;
            local_f0 = (int)*psVar24;
            local_ec = (int)*psVar25;
            iVar27 = (int)*psVar30;
            iVar29 = (int)*psVar25;
            local_e8 = local_f0;
            local_e4 = (int)*psVar30;
            do {
              iVar26 = iVar27;
              iVar6 = local_e8;
              iVar5 = local_ec;
              iVar13 = local_f0;
              psVar25 = psVar25 + 0x40;
              psVar24 = psVar24 + 0x40;
              local_e8 = local_f0;
              jcopy_block_row(psVar30,auStack_e0,1);
              iVar27 = iVar26;
              if (uVar32 < uVar11) {
                local_ec = (int)*psVar25;
                iVar27 = (int)psVar30[0x40];
                local_f0 = (int)*psVar24;
              }
              uVar9 = *(uint *)(lVar33 + 4);
              if ((uVar9 != 0) && (local_de == 0)) {
                lVar17 = uVar10 * 0x24 * (long)(local_e4 - iVar27);
                if (lVar17 < 0) {
                  iVar12 = 0;
                  if (uVar19 != 0) {
                    iVar12 = (int)((long)(uVar19 * 0x80 - lVar17) / (long)(uVar19 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar2 = 1 << (ulong)(uVar9 & 0x1f), iVar2 <= iVar12)) {
                    iVar12 = iVar2 + -1;
                  }
                  iVar12 = -iVar12;
                }
                else {
                  iVar12 = 0;
                  if (uVar19 != 0) {
                    iVar12 = (int)((long)(lVar17 + uVar19 * 0x80) / (long)(uVar19 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar2 = 1 << (ulong)(uVar9 & 0x1f), iVar2 <= iVar12)) {
                    iVar12 = iVar2 + -1;
                  }
                }
                local_de = (short)iVar12;
              }
              uVar9 = *(uint *)(lVar33 + 8);
              if ((uVar9 != 0) && (local_d0 == 0)) {
                lVar17 = uVar10 * 0x24 * (long)(iVar5 - iVar13);
                if (lVar17 < 0) {
                  iVar12 = 0;
                  if (uVar20 != 0) {
                    iVar12 = (int)((long)(uVar20 * 0x80 - lVar17) / (long)(uVar20 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar2 = 1 << (ulong)(uVar9 & 0x1f), iVar2 <= iVar12)) {
                    iVar12 = iVar2 + -1;
                  }
                  iVar12 = -iVar12;
                }
                else {
                  iVar12 = 0;
                  if (uVar20 != 0) {
                    iVar12 = (int)((long)(lVar17 + uVar20 * 0x80) / (long)(uVar20 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar2 = 1 << (ulong)(uVar9 & 0x1f), iVar2 <= iVar12)) {
                    iVar12 = iVar2 + -1;
                  }
                }
                local_d0 = (short)iVar12;
              }
              uVar9 = *(uint *)(lVar33 + 0xc);
              if ((uVar9 != 0) && (local_c0 == 0)) {
                lVar17 = uVar10 * 9 * (long)(iVar5 + iVar26 * -2 + iVar13);
                if (lVar17 < 0) {
                  iVar13 = 0;
                  if (uVar21 != 0) {
                    iVar13 = (int)((long)(uVar21 * 0x80 - lVar17) / (long)(uVar21 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar12 = 1 << (ulong)(uVar9 & 0x1f), iVar12 <= iVar13)) {
                    iVar13 = iVar12 + -1;
                  }
                  iVar13 = -iVar13;
                }
                else {
                  iVar13 = 0;
                  if (uVar21 != 0) {
                    iVar13 = (int)((long)(lVar17 + uVar21 * 0x80) / (long)(uVar21 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar12 = 1 << (ulong)(uVar9 & 0x1f), iVar12 <= iVar13)) {
                    iVar13 = iVar12 + -1;
                  }
                }
                local_c0 = (short)iVar13;
              }
              uVar9 = *(uint *)(lVar33 + 0x10);
              if ((uVar9 != 0) && (local_ce == 0)) {
                lVar17 = uVar10 * 5 * (long)(((iVar29 - iVar6) - local_ec) + local_f0);
                if (lVar17 < 0) {
                  iVar29 = 0;
                  if (uVar22 != 0) {
                    iVar29 = (int)((long)(uVar22 * 0x80 - lVar17) / (long)(uVar22 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar13 = 1 << (ulong)(uVar9 & 0x1f), iVar13 <= iVar29)) {
                    iVar29 = iVar13 + -1;
                  }
                  iVar29 = -iVar29;
                }
                else {
                  iVar29 = 0;
                  if (uVar22 != 0) {
                    iVar29 = (int)((long)(lVar17 + uVar22 * 0x80) / (long)(uVar22 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar13 = 1 << (ulong)(uVar9 & 0x1f), iVar13 <= iVar29)) {
                    iVar29 = iVar13 + -1;
                  }
                }
                local_ce = (short)iVar29;
              }
              uVar9 = *(uint *)(lVar33 + 0x14);
              if ((uVar9 != 0) && (local_dc == 0)) {
                lVar17 = uVar10 * 9 * (long)(local_e4 + iVar26 * -2 + iVar27);
                if (lVar17 < 0) {
                  iVar29 = 0;
                  if (uVar16 != 0) {
                    iVar29 = (int)((long)(uVar16 * 0x80 - lVar17) / (long)(uVar16 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar13 = 1 << (ulong)(uVar9 & 0x1f), iVar13 <= iVar29)) {
                    iVar29 = iVar13 + -1;
                  }
                  iVar29 = -iVar29;
                }
                else {
                  iVar29 = 0;
                  if (uVar16 != 0) {
                    iVar29 = (int)((long)(lVar17 + uVar16 * 0x80) / (long)(uVar16 << 8));
                  }
                  if ((0 < (int)uVar9) && (iVar13 = 1 << (ulong)(uVar9 & 0x1f), iVar13 <= iVar29)) {
                    iVar29 = iVar13 + -1;
                  }
                }
                local_dc = (short)iVar29;
              }
              (*pcVar18)(param_1,lVar28,auStack_e0,local_100,iVar31);
              uVar32 = uVar32 + 1;
              psVar30 = psVar30 + 0x40;
              iVar31 = *(int *)(lVar28 + 0x24) + iVar31;
              iVar29 = iVar5;
              local_e4 = iVar26;
            } while (uVar32 <= uVar11);
            uVar7 = uVar7 + 1;
            local_100 = local_100 + (long)*(int *)(lVar28 + 0x28) * 8;
          } while (uVar7 != uVar23);
        }
      }
      lVar28 = lVar28 + 0x60;
      local_1b8 = local_1b8 + 1;
    } while (local_1b8 < *(int *)(param_1 + 0x38));
  }
  uVar32 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar32;
  uVar11 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar32) {
    uVar11 = 4;
  }
  return (ulong)uVar11;
}

