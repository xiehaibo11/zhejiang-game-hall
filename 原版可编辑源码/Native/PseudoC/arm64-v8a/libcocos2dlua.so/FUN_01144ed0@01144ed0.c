
uint FUN_01144ed0(ulong *param_1,long param_2,int param_3,long param_4,uint param_5,long param_6)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ushort uVar14;
  ushort uVar15;
  short sVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  
  if ((int)param_5 < 0x10) {
    uVar18 = (uint)param_1[1];
    uVar10 = *(uint *)((long)param_1 + 0xc);
    pbVar20 = (byte *)(*(long *)(param_2 + (long)(int)param_5 * 8) + (long)param_3 * 0xb);
    do {
      uVar6 = (ulong)uVar10;
      bVar2 = *pbVar20;
      if ((int)uVar10 < 0) {
        puVar7 = (ulong *)param_1[2];
        if (puVar7 < (ulong *)param_1[4]) {
          uVar9 = *puVar7;
          uVar6 = (ulong)(uVar10 + 0x38);
          *(uint *)((long)param_1 + 0xc) = uVar10 + 0x38;
          param_1[2] = (long)puVar7 + 7;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar9 >> 0x20 | uVar9 << 0x20) >> 8 | *param_1 << 0x38;
        }
        else {
          FUN_0115f010(param_1);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar9 = *param_1;
      uVar10 = uVar18 * bVar2 >> 8;
      bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar10;
      if (!bVar4) {
        uVar19 = uVar10 + 1;
        uVar10 = uVar18 - uVar19;
        uVar9 = uVar9 - ((ulong)uVar19 << (uVar6 & 0x3f));
        *param_1 = uVar9;
      }
      if (uVar10 < 0x7f) {
        uVar11 = (ulong)uVar10;
        uVar10 = (uint)(byte)(&DAT_014998c0)[uVar10];
        uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
        uVar6 = (ulong)uVar18;
        *(uint *)((long)param_1 + 0xc) = uVar18;
      }
      *(uint *)(param_1 + 1) = uVar10;
      if (bVar4) {
        return param_5;
      }
      lVar22 = (ulong)param_5 << 0x20;
      puVar13 = (undefined8 *)(param_2 + 8 + (long)(int)param_5 * 8);
      uVar19 = param_5;
      while( true ) {
        bVar2 = pbVar20[1];
        if ((int)uVar6 < 0) {
          puVar7 = (ulong *)param_1[2];
          if (puVar7 < (ulong *)param_1[4]) {
            uVar11 = *puVar7;
            uVar18 = (int)uVar6 + 0x38;
            uVar6 = (ulong)uVar18;
            *(uint *)((long)param_1 + 0xc) = uVar18;
            param_1[2] = (long)puVar7 + 7;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
            *param_1 = uVar9;
          }
          else {
            FUN_0115f010(param_1);
            uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar9 = *param_1;
          }
        }
        uVar18 = uVar10 * bVar2 >> 8;
        bVar4 = uVar18 < (uint)(uVar9 >> (uVar6 & 0x3f));
        if (bVar4) {
          uVar9 = uVar9 - ((ulong)(uVar18 + 1) << (uVar6 & 0x3f));
          *param_1 = uVar9;
          uVar18 = uVar10 - (uVar18 + 1);
        }
        uVar10 = uVar18;
        if (uVar10 < 0x7f) {
          uVar11 = (ulong)uVar10;
          uVar10 = (uint)(byte)(&DAT_014998c0)[uVar10];
          uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
          uVar6 = (ulong)uVar18;
          *(uint *)((long)param_1 + 0xc) = uVar18;
        }
        *(uint *)(param_1 + 1) = uVar10;
        pbVar21 = (byte *)*puVar13;
        if (bVar4) break;
        uVar19 = uVar19 + 1;
        lVar22 = lVar22 + 0x100000000;
        puVar13 = puVar13 + 1;
        pbVar20 = pbVar21;
        if (uVar19 == 0x10) {
          return 0x10;
        }
      }
      bVar2 = pbVar20[2];
      if ((int)uVar6 < 0) {
        puVar7 = (ulong *)param_1[2];
        if (puVar7 < (ulong *)param_1[4]) {
          uVar11 = *puVar7;
          uVar18 = (int)uVar6 + 0x38;
          uVar6 = (ulong)uVar18;
          *(uint *)((long)param_1 + 0xc) = uVar18;
          param_1[2] = (long)puVar7 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
          *param_1 = uVar9;
        }
        else {
          FUN_0115f010(param_1);
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar9 = *param_1;
        }
      }
      uVar12 = uVar10 * bVar2 >> 8;
      bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar12;
      if (!bVar4) {
        uVar18 = uVar12 + 1;
        uVar12 = uVar10 - uVar18;
        uVar9 = uVar9 - ((ulong)uVar18 << (uVar6 & 0x3f));
        *param_1 = uVar9;
      }
      if (uVar12 < 0x7f) {
        uVar11 = (ulong)uVar12;
        uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
        uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
        uVar6 = (ulong)uVar18;
        *(uint *)((long)param_1 + 0xc) = uVar18;
      }
      *(uint *)(param_1 + 1) = uVar12;
      if (bVar4) {
        lVar8 = 1;
        uVar14 = 1;
      }
      else {
        bVar2 = pbVar20[3];
        if ((int)uVar6 < 0) {
          puVar7 = (ulong *)param_1[2];
          if (puVar7 < (ulong *)param_1[4]) {
            uVar11 = *puVar7;
            uVar18 = (int)uVar6 + 0x38;
            uVar6 = (ulong)uVar18;
            *(uint *)((long)param_1 + 0xc) = uVar18;
            param_1[2] = (long)puVar7 + 7;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
            *param_1 = uVar9;
          }
          else {
            FUN_0115f010(param_1);
            uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar9 = *param_1;
          }
        }
        uVar18 = uVar12 * bVar2 >> 8;
        bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar18;
        if (!bVar4) {
          uVar10 = uVar18 + 1;
          uVar18 = uVar12 - uVar10;
          uVar9 = uVar9 - ((ulong)uVar10 << (uVar6 & 0x3f));
          *param_1 = uVar9;
        }
        if (uVar18 < 0x7f) {
          uVar11 = (ulong)uVar18;
          uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
          uVar10 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
          uVar6 = (ulong)uVar10;
          *(uint *)((long)param_1 + 0xc) = uVar10;
        }
        *(uint *)(param_1 + 1) = uVar18;
        iVar5 = (int)uVar6;
        if (bVar4) {
          bVar2 = pbVar20[4];
          if (iVar5 < 0) {
            puVar7 = (ulong *)param_1[2];
            if (puVar7 < (ulong *)param_1[4]) {
              uVar11 = *puVar7;
              uVar6 = (ulong)(iVar5 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
              param_1[2] = (long)puVar7 + 7;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
              *param_1 = uVar9;
            }
            else {
              FUN_0115f010(param_1);
              uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar9 = *param_1;
            }
          }
          uVar12 = uVar18 * bVar2 >> 8;
          bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar12;
          if (!bVar4) {
            uVar10 = uVar12 + 1;
            uVar12 = uVar18 - uVar10;
            uVar9 = uVar9 - ((ulong)uVar10 << (uVar6 & 0x3f));
            *param_1 = uVar9;
          }
          if (uVar12 < 0x7f) {
            uVar11 = (ulong)uVar12;
            uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
            uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
            uVar6 = (ulong)uVar18;
            *(uint *)((long)param_1 + 0xc) = uVar18;
          }
          *(uint *)(param_1 + 1) = uVar12;
          if (bVar4) {
            lVar8 = 2;
            uVar14 = 2;
            goto LAB_01145870;
          }
          bVar2 = pbVar20[5];
          if ((int)uVar6 < 0) {
            puVar7 = (ulong *)param_1[2];
            if (puVar7 < (ulong *)param_1[4]) {
              uVar11 = *puVar7;
              uVar18 = (int)uVar6 + 0x38;
              uVar6 = (ulong)uVar18;
              *(uint *)((long)param_1 + 0xc) = uVar18;
              param_1[2] = (long)puVar7 + 7;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
              *param_1 = uVar9;
            }
            else {
              FUN_0115f010(param_1);
              uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar9 = *param_1;
            }
          }
          iVar5 = (int)uVar6;
          uVar18 = uVar12 * bVar2 >> 8;
          if (uVar18 < (uint)(uVar9 >> (uVar6 & 0x3f))) {
            uVar9 = uVar9 - ((ulong)(uVar18 + 1) << (uVar6 & 0x3f));
            uVar15 = 4;
            uVar14 = 4;
            *param_1 = uVar9;
            uVar12 = uVar12 - (uVar18 + 1);
          }
          else {
            uVar15 = 3;
            uVar14 = 3;
            uVar12 = uVar18;
          }
joined_r0x01145718:
          if (uVar12 < 0x7f) {
            uVar11 = (ulong)uVar12;
            uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
            uVar6 = (ulong)(iVar5 - (uint)(byte)(&DAT_01499840)[uVar11]);
            *(uint *)((long)param_1 + 0xc) = iVar5 - (uint)(byte)(&DAT_01499840)[uVar11];
            uVar14 = uVar15;
          }
          *(uint *)(param_1 + 1) = uVar12;
        }
        else {
          bVar2 = pbVar20[6];
          if (iVar5 < 0) {
            puVar7 = (ulong *)param_1[2];
            if (puVar7 < (ulong *)param_1[4]) {
              uVar11 = *puVar7;
              uVar6 = (ulong)(iVar5 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
              param_1[2] = (long)puVar7 + 7;
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
              *param_1 = uVar9;
            }
            else {
              FUN_0115f010(param_1);
              uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar9 = *param_1;
            }
          }
          uVar10 = uVar18 * bVar2 >> 8;
          bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar10;
          if (!bVar4) {
            uVar12 = uVar10 + 1;
            uVar10 = uVar18 - uVar12;
            uVar9 = uVar9 - ((ulong)uVar12 << (uVar6 & 0x3f));
            *param_1 = uVar9;
          }
          if (uVar10 < 0x7f) {
            uVar11 = (ulong)uVar10;
            uVar10 = (uint)(byte)(&DAT_014998c0)[uVar10];
            uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
            uVar6 = (ulong)uVar18;
            *(uint *)((long)param_1 + 0xc) = uVar18;
          }
          *(uint *)(param_1 + 1) = uVar10;
          iVar5 = (int)uVar6;
          if (bVar4) {
            bVar2 = pbVar20[7];
            if (iVar5 < 0) {
              puVar7 = (ulong *)param_1[2];
              if (puVar7 < (ulong *)param_1[4]) {
                uVar11 = *puVar7;
                uVar6 = (ulong)(iVar5 + 0x38U);
                *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
                param_1[2] = (long)puVar7 + 7;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                *param_1 = uVar9;
              }
              else {
                FUN_0115f010(param_1);
                uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                uVar9 = *param_1;
              }
            }
            uVar18 = uVar10 * bVar2 >> 8;
            bVar4 = (uint)(uVar9 >> (uVar6 & 0x3f)) <= uVar18;
            if (!bVar4) {
              uVar12 = uVar18 + 1;
              uVar18 = uVar10 - uVar12;
              uVar9 = uVar9 - ((ulong)uVar12 << (uVar6 & 0x3f));
              *param_1 = uVar9;
            }
            if (uVar18 < 0x7f) {
              uVar11 = (ulong)uVar18;
              uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
              uVar10 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
              uVar6 = (ulong)uVar10;
              *(uint *)((long)param_1 + 0xc) = uVar10;
            }
            *(uint *)(param_1 + 1) = uVar18;
            iVar5 = (int)uVar6;
            if (bVar4) {
              if (iVar5 < 0) {
                puVar7 = (ulong *)param_1[2];
                if (puVar7 < (ulong *)param_1[4]) {
                  uVar11 = *puVar7;
                  uVar6 = (ulong)(iVar5 + 0x38U);
                  *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
                  param_1[2] = (long)puVar7 + 7;
                  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10
                  ;
                  uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                  *param_1 = uVar9;
                }
                else {
                  FUN_0115f010(param_1);
                  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                  uVar9 = *param_1;
                }
              }
              iVar5 = (int)uVar6;
              uVar12 = uVar18 * 0x9f >> 8;
              if (uVar12 < (uint)(uVar9 >> (uVar6 & 0x3f))) {
                uVar9 = uVar9 - ((ulong)(uVar12 + 1) << (uVar6 & 0x3f));
                uVar12 = uVar18 - (uVar12 + 1);
                *param_1 = uVar9;
                uVar15 = 6;
                uVar14 = 6;
              }
              else {
                uVar15 = 5;
                uVar14 = 5;
              }
              goto joined_r0x01145718;
            }
            if (iVar5 < 0) {
              puVar7 = (ulong *)param_1[2];
              if (puVar7 < (ulong *)param_1[4]) {
                uVar11 = *puVar7;
                uVar6 = (ulong)(iVar5 + 0x38U);
                *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
                param_1[2] = (long)puVar7 + 7;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                *param_1 = uVar9;
              }
              else {
                FUN_0115f010(param_1);
                uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                uVar9 = *param_1;
              }
            }
            uVar10 = uVar18 * 0xa5 >> 8;
            if (uVar10 < (uint)(uVar9 >> (uVar6 & 0x3f))) {
              uVar12 = uVar10 + 1;
              uVar10 = uVar18 - uVar12;
              uVar9 = uVar9 - ((ulong)uVar12 << (uVar6 & 0x3f));
              sVar17 = 9;
              sVar16 = 9;
              *param_1 = uVar9;
            }
            else {
              sVar17 = 7;
              sVar16 = 7;
            }
            if (uVar10 < 0x7f) {
              uVar11 = (ulong)uVar10;
              uVar10 = (uint)(byte)(&DAT_014998c0)[uVar10];
              uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
              uVar6 = (ulong)uVar18;
              *(uint *)((long)param_1 + 0xc) = uVar18;
              sVar16 = sVar17;
            }
            *(uint *)(param_1 + 1) = uVar10;
            if ((int)uVar6 < 0) {
              puVar7 = (ulong *)param_1[2];
              if (puVar7 < (ulong *)param_1[4]) {
                uVar11 = *puVar7;
                uVar18 = (int)uVar6 + 0x38;
                uVar6 = (ulong)uVar18;
                *(uint *)((long)param_1 + 0xc) = uVar18;
                param_1[2] = (long)puVar7 + 7;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                *param_1 = uVar9;
              }
              else {
                FUN_0115f010(param_1);
                uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                uVar9 = *param_1;
              }
            }
            uVar12 = uVar10 * 0x91 >> 8;
            bVar4 = uVar12 < (uint)(uVar9 >> (uVar6 & 0x3f));
            if (bVar4) {
              uVar18 = uVar12 + 1;
              uVar12 = uVar10 - uVar18;
              uVar9 = uVar9 - ((ulong)uVar18 << (uVar6 & 0x3f));
              *param_1 = uVar9;
            }
            if (uVar12 < 0x7f) {
              uVar11 = (ulong)uVar12;
              uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
              uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
              uVar6 = (ulong)uVar18;
              *(uint *)((long)param_1 + 0xc) = uVar18;
            }
            *(uint *)(param_1 + 1) = uVar12;
            uVar14 = (ushort)bVar4 + sVar16;
          }
          else {
            bVar2 = pbVar20[8];
            if (iVar5 < 0) {
              puVar7 = (ulong *)param_1[2];
              if (puVar7 < (ulong *)param_1[4]) {
                uVar11 = *puVar7;
                uVar6 = (ulong)(iVar5 + 0x38U);
                *(uint *)((long)param_1 + 0xc) = iVar5 + 0x38U;
                param_1[2] = (long)puVar7 + 7;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                *param_1 = uVar9;
              }
              else {
                FUN_0115f010(param_1);
                uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                uVar9 = *param_1;
              }
            }
            uVar18 = uVar10 * bVar2 >> 8;
            bVar4 = uVar18 < (uint)(uVar9 >> (uVar6 & 0x3f));
            if (bVar4) {
              uVar12 = uVar18 + 1;
              uVar18 = uVar10 - uVar12;
              uVar9 = uVar9 - ((ulong)uVar12 << (uVar6 & 0x3f));
              *param_1 = uVar9;
            }
            if (uVar18 < 0x7f) {
              uVar11 = (ulong)uVar18;
              uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
              uVar10 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
              uVar6 = (ulong)uVar10;
              *(uint *)((long)param_1 + 0xc) = uVar10;
            }
            *(uint *)(param_1 + 1) = uVar18;
            bVar2 = pbVar20[(ulong)bVar4 + 9];
            if ((int)uVar6 < 0) {
              puVar7 = (ulong *)param_1[2];
              if (puVar7 < (ulong *)param_1[4]) {
                uVar11 = *puVar7;
                uVar10 = (int)uVar6 + 0x38;
                uVar6 = (ulong)uVar10;
                *(uint *)((long)param_1 + 0xc) = uVar10;
                param_1[2] = (long)puVar7 + 7;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                *param_1 = uVar9;
              }
              else {
                FUN_0115f010(param_1);
                uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                uVar9 = *param_1;
              }
            }
            uVar12 = uVar18 * bVar2 >> 8;
            bVar3 = uVar12 < (uint)(uVar9 >> (uVar6 & 0x3f));
            if (bVar3) {
              uVar10 = uVar12 + 1;
              uVar12 = uVar18 - uVar10;
              uVar9 = uVar9 - ((ulong)uVar10 << (uVar6 & 0x3f));
              *param_1 = uVar9;
            }
            if (uVar12 < 0x7f) {
              uVar11 = (ulong)uVar12;
              uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
              uVar18 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
              uVar6 = (ulong)uVar18;
              *(uint *)((long)param_1 + 0xc) = uVar18;
            }
            uVar18 = (uint)bVar3 | (uint)bVar4 << 1;
            pbVar20 = (&PTR_DAT_0172d0e0)[uVar18];
            *(uint *)(param_1 + 1) = uVar12;
            uVar10 = (uint)*pbVar20;
            if (*pbVar20 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                pbVar20 = pbVar20 + 1;
                if ((int)uVar6 < 0) {
                  puVar7 = (ulong *)param_1[2];
                  if (puVar7 < (ulong *)param_1[4]) {
                    uVar11 = *puVar7;
                    uVar1 = (int)uVar6 + 0x38;
                    uVar6 = (ulong)uVar1;
                    *(uint *)((long)param_1 + 0xc) = uVar1;
                    param_1[2] = (long)puVar7 + 7;
                    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar11 & 0xffff0000ffff) << 0x10;
                    uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
                    *param_1 = uVar9;
                  }
                  else {
                    FUN_0115f010(param_1);
                    uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
                    uVar9 = *param_1;
                  }
                }
                uVar10 = uVar12 * uVar10 >> 8;
                bVar4 = uVar10 < (uint)(uVar9 >> (uVar6 & 0x3f));
                if (bVar4) {
                  uVar9 = uVar9 - ((ulong)(uVar10 + 1) << (uVar6 & 0x3f));
                  *param_1 = uVar9;
                  uVar10 = uVar12 - (uVar10 + 1);
                }
                uVar12 = uVar10;
                if (uVar12 < 0x7f) {
                  uVar11 = (ulong)uVar12;
                  uVar12 = (uint)(byte)(&DAT_014998c0)[uVar12];
                  uVar10 = (int)uVar6 - (uint)(byte)(&DAT_01499840)[uVar11];
                  uVar6 = (ulong)uVar10;
                  *(uint *)((long)param_1 + 0xc) = uVar10;
                }
                *(uint *)(param_1 + 1) = uVar12;
                uVar10 = (uint)*pbVar20;
                uVar14 = (ushort)bVar4 | uVar14 << 1;
              } while (uVar10 != 0);
            }
            uVar14 = uVar14 + ((ushort)(8 << (ulong)uVar18) | 3);
          }
        }
        lVar8 = 2;
      }
LAB_01145870:
      param_5 = uVar19 + 1;
      pbVar20 = pbVar21 + lVar8 * 0xb;
      if ((int)uVar6 < 0) {
        puVar7 = (ulong *)param_1[2];
        if (puVar7 < (ulong *)param_1[4]) {
          uVar11 = *puVar7;
          uVar18 = (int)uVar6 + 0x38;
          uVar6 = (ulong)uVar18;
          *(uint *)((long)param_1 + 0xc) = uVar18;
          param_1[2] = (long)puVar7 + 7;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar9 = (uVar11 >> 0x20 | uVar11 << 0x20) >> 8 | uVar9 << 0x38;
          *param_1 = uVar9;
        }
        else {
          FUN_0115f010(param_1);
          uVar12 = (uint)param_1[1];
          uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
          uVar9 = *param_1;
        }
      }
      iVar5 = (uVar12 >> 1) - (int)(uVar9 >> (uVar6 & 0x3f));
      uVar1 = iVar5 >> 0x1f;
      bVar2 = (&DAT_014986a0)[lVar22 >> 0x20];
      uVar10 = (int)uVar6 - 1;
      uVar18 = uVar1 + uVar12 | 1;
      *(uint *)(param_1 + 1) = uVar18;
      *(uint *)((long)param_1 + 0xc) = uVar10;
      *param_1 = uVar9 - ((ulong)(uVar1 & (uVar12 >> 1) + 1) << (uVar6 & 0x3f));
      uVar15 = (ushort)(iVar5 >> 0x1f);
      *(ushort *)(param_6 + (ulong)bVar2 * 2) =
           ((uVar15 ^ uVar14) - uVar15) *
           (short)*(undefined4 *)(param_4 + (ulong)(0 < (int)uVar19) * 4);
    } while ((int)uVar19 < 0xf);
  }
  return 0x10;
}

