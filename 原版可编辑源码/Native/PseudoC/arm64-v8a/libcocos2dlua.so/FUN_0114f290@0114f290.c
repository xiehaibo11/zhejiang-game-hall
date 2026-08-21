
void FUN_0114f290(uint *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  long lVar13;
  uint uVar14;
  code *pcVar15;
  undefined4 *puVar16;
  uint *puVar18;
  int iVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  undefined4 *puVar23;
  int iVar24;
  uint *local_90;
  undefined2 local_68;
  undefined1 local_66;
  uint *puVar12;
  undefined4 *puVar17;
  
  if (*param_1 < 4) {
    uVar2 = param_1[2];
    lVar6 = (long)(int)uVar2;
    local_90 = param_5;
    switch(*param_1) {
    case 0:
      puVar21 = param_5;
      uVar7 = param_2;
      if (param_2 == 0) {
        uVar7 = *param_5 - 0x1000000 & 0xff00ff00 | *param_5 & 0xff00ff;
        *param_5 = uVar7;
        if (1 < (int)uVar2) {
          lVar13 = (ulong)uVar2 - 1;
          do {
            puVar21 = puVar21 + 1;
            lVar13 = lVar13 + -1;
            uVar7 = (*puVar21 & 0xff00ff00) + (uVar7 & 0xff00ff00) & 0xff00ff00 |
                    (*puVar21 & 0xff00ff) + (uVar7 & 0xff00ff) & 0xff00ff;
            *puVar21 = uVar7;
          } while (lVar13 != 0);
        }
        puVar21 = param_5 + lVar6;
        uVar7 = 1;
      }
      if ((int)uVar7 < (int)param_3) {
        uVar4 = param_1[1];
        iVar10 = 1 << (ulong)(uVar4 & 0x1f);
        uVar14 = (uVar2 + iVar10) - 1 >> (ulong)(uVar4 & 0x1f);
        puVar20 = (uint *)(*(long *)(param_1 + 4) +
                          (long)(int)(uVar14 * ((int)uVar7 >> (uVar4 & 0x1f))) * 4);
        if ((int)(uVar2 & -iVar10) < 2) {
          if ((int)uVar2 < 2) {
            iVar10 = param_3 - uVar7;
            do {
              iVar10 = iVar10 + -1;
              *puVar21 = (*puVar21 & 0xff00ff00) + (puVar21[-lVar6] & 0xff00ff00) & 0xff00ff00 |
                         (*puVar21 & 0xff00ff) + (puVar21[-lVar6] & 0xff00ff) & 0xff00ff;
              puVar21 = puVar21 + lVar6;
            } while (iVar10 != 0);
          }
          else {
            puVar18 = puVar21 + 1;
            do {
              uVar4 = (*puVar21 & 0xff00ff00) + (puVar21[-lVar6] & 0xff00ff00) & 0xff00ff00 |
                      (*puVar21 & 0xff00ff) + (puVar21[-lVar6] & 0xff00ff) & 0xff00ff;
              *puVar21 = uVar4;
              pcVar15 = *(code **)(&DAT_01796138 + (ulong)(*puVar20 >> 8 & 0xf) * 8);
              lVar13 = (ulong)uVar2 - 1;
              puVar8 = puVar18;
              do {
                uVar4 = (*pcVar15)(uVar4,puVar8 + -lVar6);
                lVar13 = lVar13 + -1;
                uVar4 = (*puVar8 & 0xff00ff00) + (uVar4 & 0xff00ff00) & 0xff00ff00 |
                        (*puVar8 & 0xff00ff) + (uVar4 & 0xff00ff) & 0xff00ff;
                *puVar8 = uVar4;
                puVar8 = puVar8 + 1;
              } while (lVar13 != 0);
              uVar7 = uVar7 + 1;
              puVar21 = puVar21 + lVar6;
              puVar8 = puVar20 + (int)uVar14;
              if ((uVar7 & iVar10 - 1U) != 0) {
                puVar8 = puVar20;
              }
              puVar18 = puVar18 + lVar6;
              puVar20 = puVar8;
            } while (uVar7 != param_3);
          }
        }
        else {
          puVar18 = puVar21 + -lVar6;
          puVar8 = puVar21 + -1;
          do {
            *puVar21 = (*puVar21 & 0xff00ff00) + (puVar21[-lVar6] & 0xff00ff00) & 0xff00ff00 |
                       (*puVar21 & 0xff00ff) + (puVar21[-lVar6] & 0xff00ff) & 0xff00ff;
            uVar5 = 1;
            puVar11 = puVar20;
            iVar22 = 1;
            do {
              iVar9 = iVar22;
              puVar12 = puVar11 + 1;
              iVar22 = iVar10 - iVar9;
              iVar19 = (int)uVar5;
              if (iVar22 != 0 && iVar9 <= iVar10) {
                pcVar15 = *(code **)(&DAT_01796138 + (ulong)(*puVar11 >> 8 & 0xf) * 8);
                uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
                iVar24 = iVar22;
                do {
                  puVar11 = (uint *)((long)puVar21 + uVar5);
                  uVar4 = (*pcVar15)(puVar11[-1],(long)puVar18 + uVar5);
                  iVar24 = iVar24 + -1;
                  uVar5 = uVar5 + 4;
                  *puVar11 = (*puVar11 & 0xff00ff00) + (uVar4 & 0xff00ff00) & 0xff00ff00 |
                             (*puVar11 & 0xff00ff) + (uVar4 & 0xff00ff) & 0xff00ff;
                } while (iVar24 != 0);
                uVar5 = (ulong)(uint)(iVar22 + iVar19);
              }
              puVar11 = puVar12;
              iVar22 = 0;
            } while ((int)uVar5 < (int)(uVar2 & -iVar10));
            if ((int)uVar5 < (int)uVar2) {
              pcVar15 = *(code **)(&DAT_01796138 + (ulong)(*puVar12 >> 8 & 0xf) * 8);
              iVar22 = iVar9;
              if (iVar9 <= iVar10) {
                iVar22 = iVar10;
              }
              iVar22 = ((uVar2 + iVar9) - iVar19) - iVar22;
              uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
              do {
                puVar23 = (undefined4 *)((long)puVar8 + uVar5);
                uVar4 = (*pcVar15)(*puVar23,(long)puVar18 + uVar5);
                iVar22 = iVar22 + -1;
                uVar5 = uVar5 + 4;
                puVar23[1] = (puVar23[1] & 0xff00ff00) + (uVar4 & 0xff00ff00) & 0xff00ff00 |
                             (puVar23[1] & 0xff00ff) + (uVar4 & 0xff00ff) & 0xff00ff;
              } while (iVar22 != 0);
            }
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + lVar6;
            puVar21 = puVar21 + lVar6;
            puVar18 = puVar18 + lVar6;
            puVar11 = puVar20 + (int)uVar14;
            if ((uVar7 & iVar10 - 1U) != 0) {
              puVar11 = puVar20;
            }
            puVar20 = puVar11;
          } while (uVar7 != param_3);
        }
      }
      if (param_1[3] != param_3) {
        memcpy(param_5 + -lVar6,param_5 + (int)(uVar2 * (~param_2 + param_3)),lVar6 * 4);
        return;
      }
      break;
    case 1:
      if ((int)param_2 < (int)param_3) {
        uVar4 = param_1[1];
        iVar10 = 1 << (ulong)(uVar4 & 0x1f);
        uVar14 = (uVar2 + iVar10) - 1 >> (ulong)(uVar4 & 0x1f);
        uVar7 = uVar2 & -iVar10;
        iVar22 = uVar2 - uVar7;
        puVar23 = (undefined4 *)
                  (*(long *)(param_1 + 4) +
                  (long)(int)(uVar14 * ((int)param_2 >> (uVar4 & 0x1f))) * 4);
        if ((int)uVar7 < 1) {
          do {
            if (0 < (int)uVar2) {
              local_68 = (undefined2)*puVar23;
              local_66 = (undefined1)((uint)*puVar23 >> 0x10);
              (*DAT_017961b8)(&local_68,local_90,iVar22);
              local_90 = local_90 + iVar22;
            }
            param_2 = param_2 + 1;
            puVar16 = puVar23 + (int)uVar14;
            if ((param_2 & iVar10 - 1U) != 0) {
              puVar16 = puVar23;
            }
            puVar23 = puVar16;
          } while (param_3 != param_2);
        }
        else {
          do {
            puVar16 = puVar23;
            puVar21 = local_90;
            do {
              puVar17 = puVar16 + 1;
              local_68 = (undefined2)*puVar16;
              local_66 = (undefined1)((uint)*puVar16 >> 0x10);
              (*DAT_017961b8)(&local_68,puVar21,iVar10);
              puVar21 = puVar21 + iVar10;
              puVar16 = puVar17;
            } while (puVar21 < local_90 + (int)uVar7);
            puVar20 = local_90 + lVar6;
            local_90 = puVar21;
            if (puVar21 < puVar20) {
              uVar3 = *puVar17;
              local_68 = (undefined2)uVar3;
              local_66 = (undefined1)((uint)uVar3 >> 0x10);
              (*DAT_017961b8)(&local_68,puVar21,iVar22);
              local_90 = puVar21 + iVar22;
            }
            param_2 = param_2 + 1;
            puVar16 = puVar23 + (int)uVar14;
            if ((param_2 & iVar10 - 1U) != 0) {
              puVar16 = puVar23;
            }
            puVar23 = puVar16;
          } while (param_2 != param_3);
        }
      }
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0114f71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_01796130)(param_5,uVar2 * (param_3 - param_2));
      return;
    case 3:
      uVar7 = param_1[1];
      if ((param_4 == param_5) && (0 < (int)uVar7)) {
        uVar7 = ((uVar2 + (1 << (ulong)(uVar7 & 0x1f))) - 1 >> (ulong)(uVar7 & 0x1f)) *
                (param_3 - param_2);
        uVar5 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
        puVar21 = (uint *)((long)param_4 + ((long)(int)(uVar2 * (param_3 - param_2)) * 4 - uVar5));
        memmove(puVar21,param_4,uVar5);
        uVar2 = param_1[1];
        uVar7 = param_1[2];
        lVar6 = *(long *)(param_1 + 4);
        uVar4 = 8 >> (ulong)(uVar2 & 0x1f);
        param_5 = param_4;
        if (7 < (int)uVar4) {
LAB_0114f9a8:
                    /* WARNING: Could not recover jumptable at 0x0114f9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_017961c0)(puVar21,lVar6,param_5,param_2,param_3);
          return;
        }
        if (((int)param_2 < (int)param_3) && (0 < (int)uVar7)) {
          do {
            lVar13 = 0;
            uVar14 = 0;
            puVar20 = puVar21;
            do {
              puVar21 = puVar20;
              if (((uint)lVar13 & (1 << (ulong)(uVar2 & 0x1f)) - 1U) == 0) {
                puVar21 = puVar20 + 1;
                uVar14 = *puVar20 >> 8 & 0xff;
              }
              uVar1 = uVar14 & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
              uVar14 = uVar14 >> (ulong)(uVar4 & 0x1f);
              param_4[lVar13] = *(uint *)(lVar6 + (ulong)uVar1 * 4);
              lVar13 = lVar13 + 1;
              puVar20 = puVar21;
            } while (uVar7 != (uint)lVar13);
            param_2 = param_2 + 1;
            param_4 = param_4 + (ulong)(uVar7 - 1) + 1;
          } while (param_2 != param_3);
        }
      }
      else {
        lVar6 = *(long *)(param_1 + 4);
        uVar4 = 8 >> (ulong)(uVar7 & 0x1f);
        puVar21 = param_4;
        if (7 < (int)uVar4) goto LAB_0114f9a8;
        if (((int)param_2 < (int)param_3) && (0 < (int)uVar2)) {
          do {
            lVar13 = 0;
            uVar14 = 0;
            puVar21 = param_4;
            do {
              param_4 = puVar21;
              if (((uint)lVar13 & (1 << (ulong)(uVar7 & 0x1f)) - 1U) == 0) {
                param_4 = puVar21 + 1;
                uVar14 = *puVar21 >> 8 & 0xff;
              }
              uVar1 = uVar14 & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
              uVar14 = uVar14 >> (ulong)(uVar4 & 0x1f);
              local_90[lVar13] = *(uint *)(lVar6 + (ulong)uVar1 * 4);
              lVar13 = lVar13 + 1;
              puVar21 = param_4;
            } while (uVar2 != (uint)lVar13);
            param_2 = param_2 + 1;
            local_90 = local_90 + (ulong)(uVar2 - 1) + 1;
          } while (param_2 != param_3);
        }
      }
    }
  }
  return;
}

