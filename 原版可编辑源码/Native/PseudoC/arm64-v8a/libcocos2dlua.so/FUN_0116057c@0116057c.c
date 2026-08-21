
bool FUN_0116057c(ulong *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  
  if (0 < *(int *)(param_2 + 0x198)) {
    lVar22 = 0;
    do {
      lVar20 = *(long *)(param_2 + 0xaf8);
      lVar16 = *(long *)(param_2 + 0xb60);
      if (*(int *)(param_2 + 0x84) == 0) {
        uVar11 = 0;
      }
      else {
        uVar14 = param_1[1];
        uVar18 = *(uint *)((long)param_1 + 0xc);
        uVar10 = (ulong)uVar18;
        bVar4 = *(byte *)(param_2 + 0x4a8);
        if ((int)uVar18 < 0) {
          puVar12 = (ulong *)param_1[2];
          if (puVar12 < (ulong *)param_1[4]) {
            uVar13 = *puVar12;
            uVar10 = (ulong)(uVar18 + 0x38);
            *(uint *)((long)param_1 + 0xc) = uVar18 + 0x38;
            param_1[2] = (long)puVar12 + 7;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | *param_1 << 0x38;
          }
          else {
            FUN_0115f010(param_1);
            uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar13 = *param_1;
        uVar18 = (int)uVar14 * (uint)bVar4 >> 8;
        bVar7 = (uint)(uVar13 >> (uVar10 & 0x3f)) <= uVar18;
        if (!bVar7) {
          uVar9 = uVar18 + 1;
          uVar18 = (int)uVar14 - uVar9;
          uVar13 = uVar13 - ((ulong)uVar9 << (uVar10 & 0x3f));
          *param_1 = uVar13;
        }
        if (uVar18 < 0x7f) {
          uVar14 = (ulong)uVar18;
          uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
          uVar9 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          uVar10 = (ulong)uVar9;
          *(uint *)((long)param_1 + 0xc) = uVar9;
        }
        *(uint *)(param_1 + 1) = uVar18;
        iVar8 = (int)uVar10;
        if (bVar7) {
          bVar4 = *(byte *)(param_2 + 0x4a9);
          if (iVar8 < 0) {
            puVar12 = (ulong *)param_1[2];
            if (puVar12 < (ulong *)param_1[4]) {
              uVar14 = *puVar12;
              uVar10 = (ulong)(iVar8 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar8 + 0x38U;
              param_1[2] = (long)puVar12 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar13 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar13 << 0x38;
              *param_1 = uVar13;
            }
            else {
              FUN_0115f010(param_1);
              uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          iVar8 = (int)uVar10;
          uVar9 = uVar18 * bVar4 >> 8;
          if (uVar9 < (uint)(uVar13 >> (uVar10 & 0x3f))) {
            uVar21 = uVar9 + 1;
            uVar9 = uVar18 - uVar21;
            *param_1 = uVar13 - ((ulong)uVar21 << (uVar10 & 0x3f));
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
        }
        else {
          bVar4 = *(byte *)(param_2 + 0x4aa);
          if (iVar8 < 0) {
            puVar12 = (ulong *)param_1[2];
            if (puVar12 < (ulong *)param_1[4]) {
              uVar14 = *puVar12;
              uVar10 = (ulong)(iVar8 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar8 + 0x38U;
              param_1[2] = (long)puVar12 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar13 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar13 << 0x38;
              *param_1 = uVar13;
            }
            else {
              FUN_0115f010(param_1);
              uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          iVar8 = (int)uVar10;
          uVar9 = uVar18 * bVar4 >> 8;
          if (uVar9 < (uint)(uVar13 >> (uVar10 & 0x3f))) {
            uVar21 = uVar9 + 1;
            uVar9 = uVar18 - uVar21;
            *param_1 = uVar13 - ((ulong)uVar21 << (uVar10 & 0x3f));
            uVar11 = 3;
          }
          else {
            uVar11 = 2;
          }
        }
        if (uVar9 < 0x7f) {
          uVar10 = (ulong)uVar9;
          uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
          *(uint *)((long)param_1 + 0xc) = iVar8 - (uint)(byte)(&DAT_01499840)[uVar10];
        }
        *(uint *)(param_1 + 1) = uVar9;
      }
      *(undefined1 *)(lVar16 + lVar22 * 800 + 0x31e) = uVar11;
      if (*(int *)(param_2 + 0xaf0) == 0) {
        uVar18 = (uint)param_1[1];
        uVar9 = *(uint *)((long)param_1 + 0xc);
        uVar10 = (ulong)uVar9;
      }
      else {
        uVar14 = param_1[1];
        uVar18 = *(uint *)((long)param_1 + 0xc);
        uVar10 = (ulong)uVar18;
        bVar4 = *(byte *)(param_2 + 0xaf4);
        if ((int)uVar18 < 0) {
          puVar12 = (ulong *)param_1[2];
          if (puVar12 < (ulong *)param_1[4]) {
            uVar13 = *puVar12;
            uVar10 = (ulong)(uVar18 + 0x38);
            *(uint *)((long)param_1 + 0xc) = uVar18 + 0x38;
            param_1[2] = (long)puVar12 + 7;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | *param_1 << 0x38;
          }
          else {
            FUN_0115f010(param_1);
            uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar18 = (int)uVar14 * (uint)bVar4 >> 8;
        bVar7 = uVar18 < (uint)(*param_1 >> (uVar10 & 0x3f));
        if (bVar7) {
          uVar9 = uVar18 + 1;
          uVar18 = (int)uVar14 - uVar9;
          *param_1 = *param_1 - ((ulong)uVar9 << (uVar10 & 0x3f));
        }
        if (uVar18 < 0x7f) {
          uVar14 = (ulong)uVar18;
          uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
          uVar9 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          uVar10 = (ulong)uVar9;
          *(uint *)((long)param_1 + 0xc) = uVar9;
        }
        *(uint *)(param_1 + 1) = uVar18;
        *(bool *)(lVar16 + lVar22 * 800 + 0x31d) = bVar7;
        uVar9 = (uint)uVar10;
      }
      if ((int)uVar9 < 0) {
        puVar12 = (ulong *)param_1[2];
        if (puVar12 < (ulong *)param_1[4]) {
          uVar14 = *puVar12;
          uVar10 = (ulong)(uVar9 + 0x38);
          *(uint *)((long)param_1 + 0xc) = uVar9 + 0x38;
          param_1[2] = (long)puVar12 + 7;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | *param_1 << 0x38;
        }
        else {
          FUN_0115f010(param_1);
          uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar14 = *param_1;
      uVar9 = uVar18 * 0x91 >> 8;
      bVar7 = (uint)(uVar14 >> (uVar10 & 0x3f)) <= uVar9;
      if (!bVar7) {
        uVar21 = uVar9 + 1;
        uVar9 = uVar18 - uVar21;
        uVar14 = uVar14 - ((ulong)uVar21 << (uVar10 & 0x3f));
        *param_1 = uVar14;
      }
      if (uVar9 < 0x7f) {
        uVar13 = (ulong)uVar9;
        uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
        uVar18 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar13];
        uVar10 = (ulong)uVar18;
        *(uint *)((long)param_1 + 0xc) = uVar18;
      }
      piVar1 = (int *)(lVar20 + ((int)lVar22 << 2));
      *(uint *)(param_1 + 1) = uVar9;
      *(bool *)(lVar16 + lVar22 * 800 + 0x300) = bVar7;
      if (bVar7) {
        lVar20 = 0;
        piVar17 = (int *)(lVar16 + lVar22 * 800 + 0x301);
        do {
          lVar3 = param_2 + lVar20;
          uVar18 = (uint)*(byte *)(lVar3 + 0xb00);
          lVar19 = 0;
          do {
            bVar4 = *(byte *)((long)piVar1 + lVar19);
            uVar14 = param_1[1];
            uVar9 = *(uint *)((long)param_1 + 0xc);
            uVar10 = (ulong)uVar9;
            bVar5 = (&UNK_0149a440)[(long)(int)uVar18 + (long)(int)uVar18 * 8 + (ulong)bVar4 * 0x5a]
            ;
            if ((int)uVar9 < 0) {
              puVar12 = (ulong *)param_1[2];
              if (puVar12 < (ulong *)param_1[4]) {
                uVar13 = *puVar12;
                uVar10 = (ulong)(uVar9 + 0x38);
                *(uint *)((long)param_1 + 0xc) = uVar9 + 0x38;
                param_1[2] = (long)puVar12 + 7;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                *param_1 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | *param_1 << 0x38;
              }
              else {
                FUN_0115f010(param_1);
                uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              }
            }
            uVar13 = *param_1;
            uVar9 = (int)uVar14 * (uint)bVar5 >> 8;
            bVar7 = uVar9 < (uint)(uVar13 >> (uVar10 & 0x3f));
            if (bVar7) {
              uVar21 = uVar9 + 1;
              uVar9 = (int)uVar14 - uVar21;
              uVar13 = uVar13 - ((ulong)uVar21 << (uVar10 & 0x3f));
              *param_1 = uVar13;
            }
            uVar14 = (ulong)bVar7;
            if (uVar9 < 0x7f) {
              uVar15 = (ulong)uVar9;
              uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
              uVar21 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar15];
              uVar10 = (ulong)uVar21;
              *(uint *)((long)param_1 + 0xc) = uVar21;
            }
            cVar6 = (&DAT_0149a7c4)[uVar14];
            *(uint *)(param_1 + 1) = uVar9;
            for (; (0xa2eaUL >> uVar14 & 1) != 0; uVar14 = uVar14 & 0x3f) {
              bVar5 = (&UNK_0149a440)[(long)cVar6 + (long)(int)uVar18 * 9 + (ulong)bVar4 * 0x5a];
              if ((int)uVar10 < 0) {
                puVar12 = (ulong *)param_1[2];
                if (puVar12 < (ulong *)param_1[4]) {
                  uVar14 = *puVar12;
                  uVar21 = (int)uVar10 + 0x38;
                  uVar10 = (ulong)uVar21;
                  *(uint *)((long)param_1 + 0xc) = uVar21;
                  param_1[2] = (long)puVar12 + 7;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar13 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar13 << 0x38;
                  *param_1 = uVar13;
                }
                else {
                  FUN_0115f010(param_1);
                  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
                  uVar13 = *param_1;
                }
              }
              uVar21 = uVar9 * bVar5 >> 8;
              bVar7 = uVar21 < (uint)(uVar13 >> (uVar10 & 0x3f));
              if (bVar7) {
                uVar2 = uVar21 + 1;
                uVar21 = uVar9 - uVar2;
                uVar13 = uVar13 - ((ulong)uVar2 << (uVar10 & 0x3f));
                *param_1 = uVar13;
              }
              if (uVar21 < 0x7f) {
                uVar14 = (ulong)uVar21;
                uVar21 = (uint)(byte)(&DAT_014998c0)[uVar21];
                uVar9 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
                uVar10 = (ulong)uVar9;
                *(uint *)((long)param_1 + 0xc) = uVar9;
              }
              uVar14 = (ulong)(int)((uint)bVar7 | (int)cVar6 << 1);
              cVar6 = (&DAT_0149a7c4)[uVar14];
              *(uint *)(param_1 + 1) = uVar21;
              uVar9 = uVar21;
            }
            uVar18 = -(int)cVar6;
            *(char *)((long)piVar1 + lVar19) = (char)uVar18;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 4);
          *piVar17 = *piVar1;
          lVar20 = lVar20 + 1;
          *(char *)(lVar3 + 0xb00) = (char)uVar18;
          piVar17 = piVar17 + 1;
        } while (lVar20 != 4);
      }
      else {
        if ((int)uVar10 < 0) {
          puVar12 = (ulong *)param_1[2];
          if (puVar12 < (ulong *)param_1[4]) {
            uVar13 = *puVar12;
            uVar18 = (int)uVar10 + 0x38;
            uVar10 = (ulong)uVar18;
            *(uint *)((long)param_1 + 0xc) = uVar18;
            param_1[2] = (long)puVar12 + 7;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar14 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | uVar14 << 0x38;
            *param_1 = uVar14;
          }
          else {
            FUN_0115f010(param_1);
            uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar14 = *param_1;
          }
        }
        uVar18 = uVar9 * 0x9c >> 8;
        bVar7 = (uint)(uVar14 >> (uVar10 & 0x3f)) <= uVar18;
        if (!bVar7) {
          uVar21 = uVar18 + 1;
          uVar18 = uVar9 - uVar21;
          uVar14 = uVar14 - ((ulong)uVar21 << (uVar10 & 0x3f));
          *param_1 = uVar14;
        }
        if (uVar18 < 0x7f) {
          uVar13 = (ulong)uVar18;
          uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
          uVar9 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar13];
          uVar10 = (ulong)uVar9;
          *(uint *)((long)param_1 + 0xc) = uVar9;
        }
        *(uint *)(param_1 + 1) = uVar18;
        iVar8 = (int)uVar10;
        if (bVar7) {
          if (iVar8 < 0) {
            puVar12 = (ulong *)param_1[2];
            if (puVar12 < (ulong *)param_1[4]) {
              uVar13 = *puVar12;
              uVar10 = (ulong)(iVar8 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar8 + 0x38U;
              param_1[2] = (long)puVar12 + 7;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar14 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | uVar14 << 0x38;
              *param_1 = uVar14;
            }
            else {
              FUN_0115f010(param_1);
              uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar14 = *param_1;
            }
          }
          uVar9 = uVar18 * 0xa3 >> 8;
          bVar7 = uVar9 < (uint)(uVar14 >> (uVar10 & 0x3f));
          if (bVar7) {
            uVar21 = uVar9 + 1;
            uVar9 = uVar18 - uVar21;
            *param_1 = uVar14 - ((ulong)uVar21 << (uVar10 & 0x3f));
          }
          if (uVar9 < 0x7f) {
            uVar14 = (ulong)uVar9;
            uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
            *(uint *)((long)param_1 + 0xc) = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          }
          *(uint *)(param_1 + 1) = uVar9;
          iVar8 = (uint)bVar7 << 1;
        }
        else {
          if (iVar8 < 0) {
            puVar12 = (ulong *)param_1[2];
            if (puVar12 < (ulong *)param_1[4]) {
              uVar13 = *puVar12;
              uVar10 = (ulong)(iVar8 + 0x38U);
              *(uint *)((long)param_1 + 0xc) = iVar8 + 0x38U;
              param_1[2] = (long)puVar12 + 7;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar14 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | uVar14 << 0x38;
              *param_1 = uVar14;
            }
            else {
              FUN_0115f010(param_1);
              uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar14 = *param_1;
            }
          }
          uVar9 = uVar18 >> 1 & 0xffffff;
          bVar7 = uVar9 < (uint)(uVar14 >> (uVar10 & 0x3f));
          if (bVar7) {
            uVar21 = uVar9 + 1;
            uVar9 = uVar18 - uVar21;
            *param_1 = uVar14 - ((ulong)uVar21 << (uVar10 & 0x3f));
          }
          if (uVar9 < 0x7f) {
            uVar14 = (ulong)uVar9;
            uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
            *(uint *)((long)param_1 + 0xc) = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          }
          iVar8 = 3;
          *(uint *)(param_1 + 1) = uVar9;
          if (bVar7) {
            iVar8 = 1;
          }
        }
        *(char *)(lVar16 + lVar22 * 800 + 0x301) = (char)iVar8;
        *piVar1 = iVar8 * 0x1010101;
        *(int *)(param_2 + 0xb00) = iVar8 * 0x1010101;
      }
      uVar14 = param_1[1];
      uVar18 = *(uint *)((long)param_1 + 0xc);
      uVar10 = (ulong)uVar18;
      if ((int)uVar18 < 0) {
        puVar12 = (ulong *)param_1[2];
        if (puVar12 < (ulong *)param_1[4]) {
          uVar13 = *puVar12;
          uVar10 = (ulong)(uVar18 + 0x38);
          *(uint *)((long)param_1 + 0xc) = uVar18 + 0x38;
          param_1[2] = (long)puVar12 + 7;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar13 >> 0x20 | uVar13 << 0x20) >> 8 | *param_1 << 0x38;
        }
        else {
          FUN_0115f010(param_1);
          uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar13 = *param_1;
      uVar18 = (uint)((int)uVar14 * 0x8e) >> 8;
      bVar7 = (uint)(uVar13 >> (uVar10 & 0x3f)) <= uVar18;
      if (!bVar7) {
        uVar9 = uVar18 + 1;
        uVar18 = (int)uVar14 - uVar9;
        uVar13 = uVar13 - ((ulong)uVar9 << (uVar10 & 0x3f));
        *param_1 = uVar13;
      }
      if (uVar18 < 0x7f) {
        uVar14 = (ulong)uVar18;
        uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
        uVar9 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
        uVar10 = (ulong)uVar9;
        *(uint *)((long)param_1 + 0xc) = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar18;
      if (bVar7) {
        uVar11 = 0;
      }
      else {
        if ((int)uVar10 < 0) {
          puVar12 = (ulong *)param_1[2];
          if (puVar12 < (ulong *)param_1[4]) {
            uVar14 = *puVar12;
            uVar9 = (int)uVar10 + 0x38;
            uVar10 = (ulong)uVar9;
            *(uint *)((long)param_1 + 0xc) = uVar9;
            param_1[2] = (long)puVar12 + 7;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar13 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar13 << 0x38;
            *param_1 = uVar13;
          }
          else {
            FUN_0115f010(param_1);
            uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar13 = *param_1;
          }
        }
        uVar9 = uVar18 * 0x72 >> 8;
        bVar7 = (uint)(uVar13 >> (uVar10 & 0x3f)) <= uVar9;
        if (!bVar7) {
          uVar21 = uVar9 + 1;
          uVar9 = uVar18 - uVar21;
          uVar13 = uVar13 - ((ulong)uVar21 << (uVar10 & 0x3f));
          *param_1 = uVar13;
        }
        if (uVar9 < 0x7f) {
          uVar14 = (ulong)uVar9;
          uVar9 = (uint)(byte)(&DAT_014998c0)[uVar9];
          uVar18 = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          uVar10 = (ulong)uVar18;
          *(uint *)((long)param_1 + 0xc) = uVar18;
        }
        *(uint *)(param_1 + 1) = uVar9;
        if (bVar7) {
          uVar11 = 2;
        }
        else {
          if ((int)uVar10 < 0) {
            puVar12 = (ulong *)param_1[2];
            if (puVar12 < (ulong *)param_1[4]) {
              uVar14 = *puVar12;
              uVar18 = (int)uVar10 + 0x38;
              uVar10 = (ulong)uVar18;
              *(uint *)((long)param_1 + 0xc) = uVar18;
              param_1[2] = (long)puVar12 + 7;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar13 = (uVar14 >> 0x20 | uVar14 << 0x20) >> 8 | uVar13 << 0x38;
              *param_1 = uVar13;
            }
            else {
              FUN_0115f010(param_1);
              uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          uVar18 = uVar9 * 0xb7 >> 8;
          bVar7 = uVar18 < (uint)(uVar13 >> (uVar10 & 0x3f));
          if (bVar7) {
            uVar21 = uVar18 + 1;
            uVar18 = uVar9 - uVar21;
            *param_1 = uVar13 - ((ulong)uVar21 << (uVar10 & 0x3f));
          }
          if (uVar18 < 0x7f) {
            uVar14 = (ulong)uVar18;
            uVar18 = (uint)(byte)(&DAT_014998c0)[uVar18];
            *(uint *)((long)param_1 + 0xc) = (int)uVar10 - (uint)(byte)(&DAT_01499840)[uVar14];
          }
          *(uint *)(param_1 + 1) = uVar18;
          uVar11 = 3;
          if (bVar7) {
            uVar11 = 1;
          }
        }
      }
      *(undefined1 *)(lVar16 + lVar22 * 800 + 0x311) = uVar11;
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_2 + 0x198));
  }
  return *(int *)(param_2 + 0x38) == 0;
}

