
ulong FUN_00e6b2c8(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  byte *pbVar9;
  int *piVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18 + -8) =
         param_2;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (0 < (int)(uVar4 - 1)) {
    uVar17 = (ulong)(uVar4 - 2);
    uVar18 = (ulong)(uVar4 - 1);
    do {
      lVar21 = *(long *)(param_1 + 0x28);
      puVar7 = (uint *)(lVar21 + uVar18 * 0x18);
      uVar2 = *puVar7;
      uVar8 = uVar17;
      do {
        puVar11 = (uint *)(lVar21 + uVar8 * 0x18);
        uVar6 = *puVar11;
        pbVar13 = *(byte **)(puVar11 + 2);
        uVar19 = uVar2;
        if (uVar6 <= uVar2) {
          uVar19 = uVar6;
        }
        uVar6 = (uint)uVar8;
        pbVar9 = *(byte **)(puVar7 + 2);
        for (; 7 < uVar19; uVar19 = uVar19 - 8) {
          if ((*pbVar13 & *pbVar9) != 0) goto LAB_00e6b3b8;
          pbVar9 = pbVar9 + 1;
          pbVar13 = pbVar13 + 1;
        }
        if ((uVar19 != 0) && ((-0x100 >> (uVar19 & 0x1f) & (uint)(*pbVar13 & *pbVar9)) != 0)) {
LAB_00e6b3b8:
          uVar2 = (uint)uVar18;
          if ((uVar8 & 0xffffffff) <= uVar18) {
            uVar2 = uVar6;
            uVar6 = (uint)uVar18;
          }
          if ((uVar2 < uVar6) && (uVar6 < uVar4)) {
            puVar15 = (ulong *)(lVar21 + (ulong)uVar6 * 0x18);
            uVar4 = (uint)*puVar15;
            if (uVar4 != 0) {
              puVar7 = (uint *)(lVar21 + (ulong)uVar2 * 0x18);
              uVar19 = *puVar7;
              uVar8 = (ulong)uVar2;
              if (uVar19 < uVar4) {
                piVar10 = (int *)(lVar21 + uVar8 * 0x18 + 4);
                uVar20 = uVar4 + 7 >> 3;
                local_80 = local_80 & 0xffffffff00000000;
                uVar2 = *piVar10 + 7U >> 3;
                if (uVar20 <= uVar2) {
                  plVar16 = (long *)(lVar21 + uVar8 * 0x18 + 8);
                  goto LAB_00e6b4a0;
                }
                plVar16 = (long *)(lVar21 + uVar8 * 0x18 + 8);
                uVar1 = uVar20 + 7 & 0x3ffffff8;
                lVar3 = FUN_00e13bcc(param_3,1,uVar2,uVar1,*plVar16,&local_80);
                *plVar16 = lVar3;
                if ((int)local_80 != 0) {
                  return local_80 & 0xffffffff;
                }
                *piVar10 = uVar1 << 3;
                if (*puVar7 <= uVar19) goto LAB_00e6b4cc;
                do {
                  *(byte *)(*plVar16 + (ulong)(uVar19 >> 3)) =
                       *(byte *)(*plVar16 + (ulong)(uVar19 >> 3)) & (byte)(-0x81 >> (uVar19 & 7));
LAB_00e6b4cc:
                  do {
                    uVar19 = uVar19 + 1;
                    if (uVar4 == uVar19) goto joined_r0x00e6b4e0;
LAB_00e6b4a0:
                  } while (*puVar7 <= uVar19);
                } while( true );
              }
              uVar20 = uVar4 + 7 >> 3;
joined_r0x00e6b4e0:
              if (uVar20 != 0) {
                pbVar13 = *(byte **)(lVar21 + uVar8 * 0x18 + 8);
                pbVar9 = *(byte **)(lVar21 + (ulong)uVar6 * 0x18 + 8);
                uVar8 = (ulong)(uVar20 - 1);
                if (uVar8 + 1 < 0x20) goto LAB_00e6b570;
                if ((pbVar13 < pbVar9 + uVar8 + 1) && (pbVar9 < pbVar13 + uVar8 + 1))
                goto LAB_00e6b570;
                uVar4 = uVar20 & 0x1f;
                lVar3 = (uVar8 + 1) - (ulong)uVar4;
                pbVar12 = pbVar9 + 0x10;
                pbVar14 = pbVar13 + 0x10;
                pbVar13 = pbVar13 + lVar3;
                pbVar9 = pbVar9 + lVar3;
                uVar20 = uVar20 - (int)lVar3;
                lVar3 = (uVar8 + 1) - (ulong)uVar4;
                do {
                  uVar23 = *(undefined8 *)(pbVar14 + -8);
                  uVar22 = *(undefined8 *)(pbVar14 + -0x10);
                  uVar25 = *(undefined8 *)(pbVar14 + 8);
                  uVar24 = *(undefined8 *)pbVar14;
                  uVar27 = *(undefined8 *)(pbVar12 + -8);
                  uVar26 = *(undefined8 *)(pbVar12 + -0x10);
                  uVar29 = *(undefined8 *)(pbVar12 + 8);
                  uVar28 = *(undefined8 *)pbVar12;
                  pbVar12 = pbVar12 + 0x20;
                  lVar3 = lVar3 + -0x20;
                  *(ulong *)(pbVar14 + -8) =
                       CONCAT17((byte)((ulong)uVar27 >> 0x38) | (byte)((ulong)uVar23 >> 0x38),
                                CONCAT16((byte)((ulong)uVar27 >> 0x30) |
                                         (byte)((ulong)uVar23 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar27 >> 0x28) |
                                                  (byte)((ulong)uVar23 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar27 >> 0x20) |
                                                           (byte)((ulong)uVar23 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar27 >> 0x18) |
                                                                    (byte)((ulong)uVar23 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar27 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar27 >> 8) | (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 | (byte)uVar23)))))));
                  *(ulong *)(pbVar14 + -0x10) =
                       CONCAT17((byte)((ulong)uVar26 >> 0x38) | (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar26 >> 0x30) |
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar26 >> 0x28) |
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar26 >> 0x20) |
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar26 >> 0x18) |
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar26 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar26 >> 8) | (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 | (byte)uVar22)))))));
                  *(ulong *)(pbVar14 + 8) =
                       CONCAT17((byte)((ulong)uVar29 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                                CONCAT16((byte)((ulong)uVar29 >> 0x30) |
                                         (byte)((ulong)uVar25 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar29 >> 0x28) |
                                                  (byte)((ulong)uVar25 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar29 >> 0x20) |
                                                           (byte)((ulong)uVar25 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar29 >> 0x18) |
                                                                    (byte)((ulong)uVar25 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar29 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar25 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) | (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 | (byte)uVar25)))))));
                  *(ulong *)pbVar14 =
                       CONCAT17((byte)((ulong)uVar28 >> 0x38) | (byte)((ulong)uVar24 >> 0x38),
                                CONCAT16((byte)((ulong)uVar28 >> 0x30) |
                                         (byte)((ulong)uVar24 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar28 >> 0x28) |
                                                  (byte)((ulong)uVar24 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar28 >> 0x20) |
                                                           (byte)((ulong)uVar24 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar28 >> 0x18) |
                                                                    (byte)((ulong)uVar24 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar28 >>
                                                                                   0x10) |
                                                                             (byte)((ulong)uVar24 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) | (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 | (byte)uVar24)))))));
                  pbVar14 = pbVar14 + 0x20;
                } while (lVar3 != 0);
                while (uVar4 != 0) {
LAB_00e6b570:
                  *pbVar13 = *pbVar9 | *pbVar13;
                  uVar20 = uVar20 - 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar9 = pbVar9 + 1;
                  uVar4 = uVar20;
                }
              }
            }
            *(uint *)puVar15 = 0;
            *(undefined4 *)(lVar21 + (ulong)uVar6 * 0x18 + 0x10) = 0;
            iVar5 = *(int *)(param_1 + 0x20);
            uVar4 = iVar5 + ~uVar6;
            if (0 < (int)uVar4) {
              local_70 = puVar15[2];
              uStack_78 = puVar15[1];
              local_80 = *puVar15;
              memmove(puVar15,puVar15 + 3,(ulong)uVar4 * 0x18);
              puVar15 = puVar15 + (long)(int)uVar4 * 3;
              puVar15[2] = local_70;
              puVar15[1] = uStack_78;
              *puVar15 = local_80;
              iVar5 = *(int *)(param_1 + 0x20);
            }
            uVar4 = iVar5 - 1;
            *(uint *)(param_1 + 0x20) = uVar4;
          }
          break;
        }
        uVar8 = uVar8 - 1;
      } while (0 < (int)uVar6);
      uVar18 = uVar18 - 1;
      uVar17 = uVar17 - 1;
    } while (0 < (int)uVar18);
  }
  return 0;
}

