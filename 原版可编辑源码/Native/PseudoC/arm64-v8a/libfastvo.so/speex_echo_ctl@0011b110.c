
undefined8 speex_echo_ctl(uint *param_1,uint param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined2 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  undefined8 uVar27;
  
  switch(param_2) {
  case 3:
    uVar13 = *param_1;
    goto LAB_0011b190;
  default:
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown speex_echo_ctl request: ",(ulong)param_2);
    uVar10 = 0xffffffff;
    break;
  case 0x18:
    uVar13 = *param_3;
    uVar2 = *param_1;
    iVar8 = (int)(short)uVar13;
    uVar12 = 0;
    if (iVar8 != 0) {
      uVar12 = (undefined2)((int)(uVar2 << 0xf) / iVar8);
    }
    uVar6 = 0;
    if (iVar8 != 0) {
      uVar6 = (undefined2)((int)(uVar2 << 0x10) / iVar8);
    }
    uVar7 = 0;
    if (iVar8 != 0) {
      uVar7 = (undefined2)((int)(uVar2 << 0xe) / iVar8);
    }
    param_1[9] = uVar13;
    *(undefined2 *)(param_1 + 10) = uVar12;
    *(undefined2 *)((long)param_1 + 0x2a) = uVar6;
    *(undefined2 *)(param_1 + 0xb) = uVar7;
    if ((int)uVar13 < 12000) {
      uVar12 = 0x7333;
    }
    else if ((int)uVar13 < 24000) {
      uVar12 = 0x7db2;
    }
    else {
      uVar12 = 0x7efa;
    }
    uVar10 = 0;
    *(undefined2 *)((long)param_1 + 0x122) = uVar12;
    break;
  case 0x19:
    uVar13 = param_1[9];
LAB_0011b190:
    uVar10 = 0;
    *param_3 = uVar13;
    break;
  case 0x1b:
    uVar10 = 0;
    *param_3 = *param_1 * param_1[2];
    break;
  case 0x1d:
    uVar13 = param_1[2];
    if (0 < (int)uVar13) {
      uVar2 = *param_1;
      uVar3 = (ulong)(int)uVar2;
      uVar4 = param_1[1];
      uVar5 = (ulong)(int)uVar4;
      lVar22 = 0;
      lVar23 = 0;
      uVar24 = 0;
      uVar14 = uVar5 & 0xfffffff8;
      puVar25 = param_3 + 4;
      lVar26 = 4;
      uVar15 = uVar3 & 0xfffffff8;
      do {
        if ((int)uVar4 < 1) {
          lVar11 = *(long *)(param_1 + 0x2e);
        }
        else {
          lVar16 = *(long *)(param_1 + 0x20);
          lVar11 = *(long *)(param_1 + 0x2e);
          if (uVar4 < 8) {
            uVar19 = 0;
          }
          else {
            puVar18 = (undefined8 *)(lVar16 + lVar26 * 4);
            puVar20 = (undefined8 *)(lVar11 + 8);
            uVar19 = uVar14;
            do {
              puVar1 = puVar18 + -2;
              puVar9 = puVar18 + -1;
              uVar27 = puVar18[1];
              uVar10 = *puVar18;
              puVar18 = puVar18 + 4;
              uVar19 = uVar19 - 8;
              puVar20[-1] = CONCAT26((short)((int)((ulong)*puVar9 >> 0x20) + 0x100000 >> 0x15),
                                     CONCAT24((short)((int)*puVar9 + 0x100000 >> 0x15),
                                              CONCAT22((short)((int)((ulong)*puVar1 >> 0x20) +
                                                               0x100000 >> 0x15),
                                                       (short)((int)*puVar1 + 0x100000 >> 0x15))));
              *puVar20 = CONCAT26((short)((int)((ulong)uVar27 >> 0x20) + 0x100000 >> 0x15),
                                  CONCAT24((short)((int)uVar27 + 0x100000 >> 0x15),
                                           CONCAT22((short)((int)((ulong)uVar10 >> 0x20) + 0x100000
                                                           >> 0x15),
                                                    (short)((int)uVar10 + 0x100000 >> 0x15))));
              puVar20 = puVar20 + 2;
            } while (uVar19 != 0);
            uVar19 = uVar14;
            if (uVar14 == uVar4) goto LAB_0011b2dc;
          }
          do {
            *(short *)(lVar11 + uVar19 * 2) =
                 (short)(*(int *)(lVar16 + lVar23 * 4 + uVar19 * 4) + 0x100000 >> 0x15);
            uVar19 = uVar19 + 1;
          } while (uVar4 != uVar19);
        }
LAB_0011b2dc:
        spx_ifft(*(undefined8 *)(param_1 + 0x40),lVar11,*(undefined8 *)(param_1 + 0x2c));
        if (0 < (int)uVar2) {
          lVar11 = *(long *)(param_1 + 0x2c);
          if (uVar2 < 8) {
            uVar19 = 0;
          }
          else {
            puVar20 = (undefined8 *)(lVar11 + 8);
            uVar19 = uVar15;
            puVar21 = puVar25;
            do {
              uVar10 = puVar20[-1];
              uVar27 = *puVar20;
              puVar20 = puVar20 + 2;
              uVar19 = uVar19 - 8;
              *(ulong *)(puVar21 + -2) =
                   CONCAT44((short)((ulong)uVar10 >> 0x30) * 0x7fff + 0x20 >> 6,
                            (short)((ulong)uVar10 >> 0x20) * 0x7fff + 0x20 >> 6);
              *(ulong *)(puVar21 + -4) =
                   CONCAT44((short)((ulong)uVar10 >> 0x10) * 0x7fff + 0x20 >> 6,
                            (short)uVar10 * 0x7fff + 0x20 >> 6);
              *(ulong *)(puVar21 + 2) =
                   CONCAT44((short)((ulong)uVar27 >> 0x30) * 0x7fff + 0x20 >> 6,
                            (short)((ulong)uVar27 >> 0x20) * 0x7fff + 0x20 >> 6);
              *(ulong *)puVar21 =
                   CONCAT44((short)((ulong)uVar27 >> 0x10) * 0x7fff + 0x20 >> 6,
                            (short)uVar27 * 0x7fff + 0x20 >> 6);
              puVar21 = puVar21 + 8;
            } while (uVar19 != 0);
            uVar19 = uVar15;
            if (uVar15 == uVar2) goto LAB_0011b384;
          }
          lVar16 = uVar2 - uVar19;
          psVar17 = (short *)(lVar11 + uVar19 * 2);
          puVar21 = param_3 + uVar19 + lVar22;
          do {
            lVar16 = lVar16 + -1;
            *puVar21 = *psVar17 * 0x7fff + 0x20 >> 6;
            psVar17 = psVar17 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar16 != 0);
        }
LAB_0011b384:
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + uVar5;
        lVar23 = lVar23 + uVar5;
        puVar25 = puVar25 + uVar3;
        lVar22 = lVar22 + uVar3;
      } while (uVar24 != uVar13);
    }
    uVar10 = 0;
  }
  return uVar10;
}

