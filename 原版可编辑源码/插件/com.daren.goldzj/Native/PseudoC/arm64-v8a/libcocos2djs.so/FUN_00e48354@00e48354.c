
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e48354(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined2 *puVar1;
  ulong uVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  ushort *puVar13;
  long lVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  uint *puVar19;
  long lVar20;
  uint uVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  ushort *puVar25;
  ushort *puVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  short *psVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int iVar34;
  ulong local_a8 [5];
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  uint local_64;
  
  uVar9 = FUN_00e1bb5c(param_2,param_4 + param_3);
  if (uVar9 != 0) {
    return (ulong)uVar9;
  }
  uVar9 = FUN_00e1d718(param_2,param_5);
  if (uVar9 != 0) {
    return (ulong)uVar9;
  }
  pbVar12 = *(byte **)(param_2 + 0x40);
  puVar3 = (ushort *)(pbVar12 + param_5);
  if ((param_5 != 0) && ((char)*pbVar12 < '\0')) {
    puVar33 = *(undefined8 **)(param_1 + 0x28);
    uVar9 = *(uint *)(param_1 + 0x18);
    uVar31 = (ulong)uVar9;
    uVar32 = local_a8[0] >> 0x20;
    local_a8[0] = uVar32 << 0x20;
    if ((param_5 < 1) || (bVar4 = *pbVar12, -1 < (char)bVar4)) {
LAB_00e4843c:
      uVar32 = 8;
      local_a8[0] = CONCAT44(local_a8[0]._4_4_,8);
    }
    else {
      puVar13 = (ushort *)(pbVar12 + 1);
      if ((bVar4 >> 6 & 1) != 0) {
        if (param_5 < 2) goto LAB_00e4843c;
        uVar8 = *puVar13;
        puVar13 = (ushort *)(pbVar12 + 2);
        if ((byte)uVar8 != 0) {
          iVar34 = -(uint)(byte)uVar8;
          do {
            if ((puVar3 < puVar13 + 1) ||
               (puVar13 = (ushort *)((long)(puVar13 + 1) + (ulong)(byte)*puVar13), puVar3 < puVar13)
               ) goto LAB_00e4843c;
            iVar34 = iVar34 + 1;
          } while (iVar34 != 0);
        }
      }
      local_a8[0] = uVar32 << 0x20;
      uVar10 = (bVar4 & 0x3f) + uVar9;
      if (*(uint *)(param_1 + 0x1c) < uVar10) {
        uVar10 = uVar10 + 3 & 0xfffffffc;
        if (0x40 < uVar10) goto LAB_00e4843c;
        lVar11 = FUN_00e13bcc(*puVar33,0x20,*(uint *)(param_1 + 0x1c),uVar10,
                              *(undefined8 *)(param_1 + 0x20),local_a8);
        *(long *)(param_1 + 0x20) = lVar11;
        uVar32 = local_a8[0] & 0xffffffff;
        if ((int)local_a8[0] == 0) {
          *(uint *)(param_1 + 0x1c) = uVar10;
          goto joined_r0x00e48dcc;
        }
      }
      else {
        lVar11 = *(long *)(param_1 + 0x20);
joined_r0x00e48dcc:
        if ((bVar4 & 0x3f) == 0) {
          FUN_00e1d90c(param_2);
          goto LAB_00e48450;
        }
        uVar10 = 0;
        puVar19 = (uint *)(lVar11 + uVar31 * 0x20 + 0x10);
        do {
          puVar25 = (ushort *)((long)puVar13 + 1);
          if (puVar3 < puVar25) goto LAB_00e4843c;
          bVar5 = (byte)*puVar13;
          puVar19[-4] = 0x10000;
          puVar19[-3] = 0;
          if ((bVar5 >> 4 & 1) != 0) {
            puVar25 = (ushort *)((long)puVar13 + 3);
            if (puVar3 < puVar25) goto LAB_00e4843c;
            *(long *)(puVar19 + -4) =
                 (long)((int)(short)(*(ushort *)((long)puVar13 + 1) >> 8 |
                                    *(ushort *)((long)puVar13 + 1) << 8) << 4);
          }
          puVar19[-2] = 0x10000;
          puVar19[-1] = 0;
          puVar13 = puVar25;
          if ((bVar5 >> 5 & 1) != 0) {
            puVar13 = puVar25 + 1;
            if (puVar3 < puVar13) goto LAB_00e4843c;
            *(long *)(puVar19 + -2) = (long)((int)(short)(*puVar25 >> 8 | *puVar25 << 8) << 4);
          }
          if ((bVar5 & 3) == 2) {
            if (puVar3 < (ushort *)((long)puVar13 + 1U)) goto LAB_00e4843c;
            uVar29 = (uint)(char)(byte)*puVar13;
            puVar25 = (ushort *)((long)puVar13 + 1U);
joined_r0x00e48f30:
            bVar27 = bVar5 >> 2 & 3;
            if (bVar27 == 2) goto LAB_00e48f34;
LAB_00e48f64:
            if (bVar27 == 1) {
              if (puVar25 + 1 <= puVar3) {
                uVar8 = *puVar25;
                bVar27 = *(byte *)((long)puVar25 + 1);
                *puVar19 = uVar29;
                puVar19[1] = (int)(short)((ushort)(byte)uVar8 << 8) | (uint)bVar27;
                puVar25 = puVar25 + 1;
                goto joined_r0x00e48f94;
              }
              goto LAB_00e4843c;
            }
            *puVar19 = uVar29;
            puVar19[1] = 0;
            if ((bVar5 >> 6 & 1) != 0) goto LAB_00e48f98;
LAB_00e48fe8:
            puVar26 = (ushort *)((long)puVar25 + 1);
            if (puVar3 < puVar26) goto LAB_00e4843c;
            puVar19[3] = (uint)(byte)*puVar25;
            if ((char)bVar5 < '\0') goto LAB_00e48fb8;
LAB_00e49000:
            puVar13 = puVar26 + 1;
            if (puVar3 < puVar13) goto LAB_00e4843c;
            lVar11 = 1;
            uVar29 = (uint)(byte)*puVar26 << 8;
          }
          else {
            if ((bVar5 & 3) != 1) {
              uVar29 = 0;
              puVar25 = puVar13;
              goto joined_r0x00e48f30;
            }
            puVar25 = puVar13 + 1;
            if (puVar3 < puVar25) goto LAB_00e4843c;
            uVar29 = (int)(short)((ushort)(byte)*puVar13 << 8) | (uint)*(byte *)((long)puVar13 + 1);
            bVar27 = bVar5 >> 2 & 3;
            if (bVar27 != 2) goto LAB_00e48f64;
LAB_00e48f34:
            if (puVar3 < (ushort *)((long)puVar25 + 1U)) goto LAB_00e4843c;
            uVar8 = *puVar25;
            *puVar19 = uVar29;
            puVar19[1] = (int)(char)(byte)uVar8;
            puVar25 = (ushort *)((long)puVar25 + 1U);
joined_r0x00e48f94:
            if ((bVar5 >> 6 & 1) == 0) goto LAB_00e48fe8;
LAB_00e48f98:
            puVar26 = puVar25 + 1;
            if (puVar3 < puVar26) goto LAB_00e4843c;
            puVar19[3] = (uint)CONCAT11((byte)*puVar25,*(byte *)((long)puVar25 + 1));
            if (-1 < (char)bVar5) goto LAB_00e49000;
LAB_00e48fb8:
            puVar13 = (ushort *)((long)puVar26 + 3);
            if (puVar3 < puVar13) goto LAB_00e4843c;
            uVar29 = (uint)(byte)*puVar26 << 0x10 | (uint)*(byte *)((long)puVar26 + 1) << 8;
            lVar11 = 2;
          }
          uVar10 = uVar10 + 1;
          uVar32 = 0;
          puVar19[2] = uVar29 | *(byte *)((long)puVar26 + lVar11);
          puVar19 = puVar19 + 8;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        } while (uVar10 < (bVar4 & 0x3f));
      }
    }
    FUN_00e1d90c(param_2);
    if ((int)uVar32 != 0) {
      return uVar32;
    }
LAB_00e48450:
    uVar9 = *(int *)(param_1 + 0x18) - uVar9;
    if (uVar9 != 0) {
      uVar32 = 0;
      do {
        sVar15 = *(short *)((long)puVar33 + 0x1a);
        lVar11 = *(long *)(param_1 + 0x20) + uVar31 * 0x20 + uVar32 * 0x20;
        uVar10 = FUN_00e48354(param_1,param_2,param_3,*(undefined4 *)(lVar11 + 0x18),
                              *(undefined4 *)(lVar11 + 0x1c));
        if (uVar10 != 0) {
          return (ulong)uVar10;
        }
        plVar18 = (long *)(*(long *)(param_1 + 0x20) + uVar31 * 0x20 + uVar32 * 0x20);
        lVar11 = *plVar18;
        sVar6 = *(short *)((long)puVar33 + 0x1a);
        iVar7 = (int)sVar6 - (int)sVar15;
        iVar34 = (int)sVar15;
        if ((lVar11 == 0x10000) && (plVar18[1] == 0x10000)) {
          if (0 < iVar7) {
            uVar10 = ~(int)sVar15 + (int)sVar6;
            uVar2 = (ulong)uVar10 + 1;
            plVar22 = (long *)(puVar33[4] + (long)iVar34 * 0x10);
            lVar11 = (long)(int)plVar18[2];
            lVar14 = (long)(int)((ulong)plVar18[2] >> 0x20);
            if (uVar2 < 4) {
              lVar20 = 0;
              plVar18 = plVar22;
            }
            else {
              uVar10 = uVar10 + 1 & 3;
              lVar20 = uVar2 - uVar10;
              plVar18 = plVar22 + lVar20 * 2;
              plVar22 = plVar22 + 4;
              lVar24 = lVar20;
              do {
                lVar24 = lVar24 + -4;
                plVar22[-4] = plVar22[-4] + lVar11;
                plVar22[-3] = plVar22[-3] + lVar14;
                plVar22[-2] = plVar22[-2] + lVar11;
                plVar22[-1] = plVar22[-1] + lVar14;
                *plVar22 = *plVar22 + lVar11;
                plVar22[1] = plVar22[1] + lVar14;
                plVar22[2] = plVar22[2] + lVar11;
                plVar22[3] = plVar22[3] + lVar14;
                plVar22 = plVar22 + 8;
              } while (lVar24 != 0);
              if (uVar10 == 0) goto LAB_00e485c0;
            }
            iVar34 = ((int)sVar6 - (int)lVar20) - iVar34;
            do {
              iVar34 = iVar34 + -1;
              plVar18[1] = plVar18[1] + lVar14;
              *plVar18 = *plVar18 + lVar11;
              plVar18 = plVar18 + 2;
            } while (iVar34 != 0);
          }
        }
        else if (0 < iVar7) {
          plVar22 = (long *)(puVar33[4] + (long)iVar34 * 0x10);
          iVar34 = (sVar6 + -1) - iVar34;
          while( true ) {
            lVar11 = FT_MulFix(*plVar22,lVar11);
            *plVar22 = lVar11 + (int)plVar18[2];
            lVar11 = FT_MulFix(plVar22[1],plVar18[1]);
            plVar22[1] = lVar11 + *(int *)((long)plVar18 + 0x14);
            if (iVar34 == 0) break;
            lVar11 = *plVar18;
            iVar34 = iVar34 + -1;
            plVar22 = plVar22 + 2;
          }
        }
LAB_00e485c0:
        uVar32 = uVar32 + 1;
      } while (uVar32 < uVar9);
    }
    return 0;
  }
  local_64 = 0;
  if ((0 < param_5) && (bVar4 = *pbVar12, -1 < (char)bVar4)) {
    if ((bVar4 >> 2 & 1) == 0) {
      if ((bVar4 >> 1 & 1) == 0) {
        uVar9 = 0;
        puVar13 = (ushort *)(pbVar12 + 1);
      }
      else {
        if (param_5 < 2) goto LAB_00e48e04;
        uVar9 = (uint)pbVar12[1];
        puVar13 = (ushort *)(pbVar12 + 2);
      }
      if ((bVar4 & 1) == 0) {
        uVar29 = 0;
        uVar10 = *(uint *)(param_1 + 4);
        uVar32 = (ulong)uVar9;
        puVar25 = puVar13;
        if (uVar10 < uVar9) goto LAB_00e485fc;
LAB_00e48404:
        lVar11 = *(long *)(param_1 + 8);
        *(ulong *)(param_1 + 0x10) = lVar11 + (ulong)uVar9 * 8;
        if ((int)uVar32 != 0) goto LAB_00e4864c;
      }
      else {
        puVar25 = (ushort *)((long)puVar13 + 1);
        if (puVar3 < puVar25) goto LAB_00e48e04;
        uVar29 = (uint)(byte)*puVar13;
        uVar10 = *(uint *)(param_1 + 4);
        uVar32 = (ulong)(uVar9 + uVar29);
        if (uVar9 + uVar29 <= uVar10) goto LAB_00e48404;
LAB_00e485fc:
        uVar16 = (int)uVar32 + 7U & 0x3f8;
        lVar11 = FUN_00e13bcc(**(undefined8 **)(param_1 + 0x28),8,uVar10,uVar16,
                              *(long *)(param_1 + 8),&local_64);
        *(long *)(param_1 + 8) = lVar11;
        uVar31 = (ulong)local_64;
        if (local_64 != 0) goto LAB_00e48e0c;
        *(ulong *)(param_1 + 0x10) = lVar11 + (ulong)uVar9 * 8;
        *(uint *)(param_1 + 4) = uVar16;
LAB_00e4864c:
        uVar31 = 0;
        uVar10 = 0;
        uVar16 = 0;
        do {
          if ((uVar31 & 7) == 0) {
            puVar13 = (ushort *)((long)puVar25 + 1);
            if (puVar3 < puVar13) goto LAB_00e48e04;
            uVar16 = (uint)(byte)*puVar25;
            if (((byte)*puVar25 & 1) == 0) goto LAB_00e48664;
LAB_00e48698:
            puVar25 = puVar13 + 1;
            if (puVar3 < puVar25) goto LAB_00e48e04;
            uVar10 = (int)(short)((ushort)(byte)*puVar13 << 8) | (uint)*(byte *)((long)puVar13 + 1);
          }
          else {
            puVar13 = puVar25;
            if ((uVar16 & 1) != 0) goto LAB_00e48698;
LAB_00e48664:
            puVar25 = (ushort *)((long)puVar13 + 1);
            if (puVar3 < puVar25) goto LAB_00e48e04;
            uVar10 = uVar10 + (byte)*puVar13;
          }
          *(long *)(lVar11 + uVar31 * 8) = (long)(int)uVar10;
          uVar31 = uVar31 + 1;
          uVar16 = uVar16 >> 1;
        } while (uVar31 < uVar32);
      }
      puVar13 = puVar25;
      if ((bVar4 >> 3 & 1) != 0) {
        puVar13 = (ushort *)((long)puVar25 + 1);
        if (puVar3 < puVar13) goto LAB_00e48e04;
        if ((byte)*puVar25 != 0) {
          iVar34 = -(uint)(byte)*puVar25;
          do {
            if ((puVar3 < puVar13 + 1) ||
               (puVar13 = (ushort *)((long)(puVar13 + 1) + (ulong)(byte)*puVar13), puVar3 < puVar13)
               ) goto LAB_00e48e04;
            iVar34 = iVar34 + 1;
          } while (iVar34 != 0);
        }
        local_64 = 0;
      }
      *(undefined1 *)(param_1 + 0x30) = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_78 = 0;
      uStack_70 = 0;
LAB_00e48748:
      do {
        puVar25 = (ushort *)((long)puVar13 + 1);
        if (puVar3 < puVar25) goto LAB_00e48e04;
        bVar4 = (byte)*puVar13 >> 4;
        uVar10 = (uint)bVar4;
        uVar32 = (ulong)(byte)*puVar13 & 0xf;
        uVar16 = 1;
        puVar13 = puVar25;
        switch(bVar4) {
        case 0:
          goto switchD_00e48778_caseD_0;
        case 1:
        case 4:
        case 5:
          break;
        case 2:
          if ((uint)uVar32 < uVar9) {
            local_a8[0] = *(ulong *)(*(long *)(param_1 + 8) + uVar32 * 8);
            goto LAB_00e487b8;
          }
          goto LAB_00e48e04;
        case 3:
          if ((uint)uVar32 < uVar29) {
            local_a8[0] = local_78;
            uStack_70 = *(ulong *)(*(long *)(param_1 + 0x10) + uVar32 * 8);
LAB_00e487b8:
            local_a8[1] = uStack_70;
            local_78 = local_a8[0];
            goto LAB_00e489d8;
          }
          goto LAB_00e48e04;
        case 6:
          uVar32 = 0xb8e;
          goto LAB_00e487d4;
        case 7:
          uVar32 = 0xe2b;
LAB_00e487d4:
          uVar16 = 3;
          break;
        default:
          uVar16 = 4;
        }
        uVar21 = 0;
        puVar23 = local_a8;
        do {
          uVar17 = (uint)uVar32;
          if ((uVar17 & 3) == 2) {
            if (puVar3 < (ushort *)((long)puVar13 + 1U)) goto LAB_00e48e04;
            *puVar23 = local_78 + (long)(char)(byte)*puVar13;
            puVar13 = (ushort *)((long)puVar13 + 1U);
joined_r0x00e48858:
            uVar28 = uVar17 >> 2 & 3;
            if (uVar28 == 2) goto LAB_00e4885c;
LAB_00e488d0:
            if (uVar28 == 1) {
              puVar25 = puVar13 + 1;
              if (puVar3 < puVar25) goto LAB_00e48e04;
              puVar23[1] = (long)(short)((ushort)(byte)*puVar13 << 8) |
                           (ulong)*(byte *)((long)puVar13 + 1);
            }
            else {
              if (uVar28 == 0) {
                puVar25 = (ushort *)((long)puVar13 + 1);
                if ((puVar25 <= puVar3) && ((byte)*puVar13 < uVar29)) {
                  puVar23[1] = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)(byte)*puVar13 * 8);
                  goto joined_r0x00e48904;
                }
                goto LAB_00e48e04;
              }
              puVar23[1] = uStack_70;
              puVar25 = puVar13;
            }
            if (uVar21 != 0) goto LAB_00e4896c;
LAB_00e48948:
            if (uVar16 != 4) goto LAB_00e4896c;
            puVar13 = (ushort *)((long)puVar25 + 1);
            if (puVar3 < puVar13) goto LAB_00e48e04;
            uVar32 = (ulong)(byte)*puVar25;
            uVar16 = 3;
          }
          else {
            if ((uVar17 & 3) == 1) {
              if (puVar3 < puVar13 + 1) goto LAB_00e48e04;
              *puVar23 = (long)(short)((ushort)(byte)*puVar13 << 8) |
                         (ulong)*(byte *)((long)puVar13 + 1);
              puVar13 = puVar13 + 1;
            }
            else {
              if ((uVar32 & 3) != 0) {
                *puVar23 = local_78;
                goto joined_r0x00e48858;
              }
              if ((puVar3 < (ushort *)((long)puVar13 + 1U)) || (uVar9 <= (byte)*puVar13))
              goto LAB_00e48e04;
              *puVar23 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)(byte)*puVar13 * 8);
              puVar13 = (ushort *)((long)puVar13 + 1U);
            }
            uVar28 = uVar17 >> 2 & 3;
            if (uVar28 != 2) goto LAB_00e488d0;
LAB_00e4885c:
            puVar25 = (ushort *)((long)puVar13 + 1);
            if (puVar3 < puVar25) goto LAB_00e48e04;
            puVar23[1] = uStack_70 + (long)(char)(byte)*puVar13;
joined_r0x00e48904:
            if (uVar21 == 0) goto LAB_00e48948;
LAB_00e4896c:
            uVar32 = (ulong)(uVar17 >> 4);
            puVar13 = puVar25;
          }
          uVar21 = uVar21 + 1;
          uStack_70 = puVar23[1];
          local_78 = *puVar23;
          puVar23 = puVar23 + 2;
        } while (uVar21 < uVar16);
        if (2 < uVar10 - 1) {
          if (uVar10 - 4 < 2) {
            lVar11 = *(long *)(param_1 + 0x28);
            psVar30 = (short *)(lVar11 + 0x62);
            if (*(char *)(param_1 + 0x30) != '\0') {
              lVar14 = (long)*(short *)(lVar11 + 0x60);
              sVar15 = *(short *)(lVar11 + 0x62);
              uVar10 = (int)sVar15 - 1;
              if (lVar14 < 1) {
                uVar32 = 0;
                iVar34 = 0;
                if (0 < (int)uVar10) goto LAB_00e48b30;
              }
              else {
                sVar6 = *(short *)(*(long *)(lVar11 + 0x78) + lVar14 * 2 + -2);
                uVar32 = (ulong)sVar6;
                iVar34 = (int)sVar6;
                if ((int)sVar6 < (int)uVar10) {
LAB_00e48b30:
                  iVar34 = (int)uVar32;
                  lVar24 = *(long *)(lVar11 + 0x68);
                  if ((*(long *)(lVar24 + (-(uVar32 >> 0x1f & 1) & 0xfffffff000000000 |
                                          (uVar32 & 0xffffffff) << 4)) ==
                       *(long *)(lVar24 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)uVar10 << 4))) &&
                     (*(long *)(lVar24 + (long)iVar34 * 0x10 + 8) ==
                      *(long *)(lVar24 + (long)(int)uVar10 * 0x10 + 8))) {
                    *psVar30 = (short)uVar10;
                    uVar10 = (int)sVar15 - 2;
                  }
                }
              }
              if (iVar34 <= (int)uVar10) {
                *(short *)(lVar11 + 0x60) = *(short *)(lVar11 + 0x60) + 1;
                *(short *)(*(long *)(lVar11 + 0x78) + lVar14 * 2) = (short)uVar10;
              }
              *(undefined1 *)(param_1 + 0x30) = 0;
            }
            *(undefined1 *)(param_1 + 0x30) = 1;
            sVar15 = *(short *)(lVar11 + 0x62);
            uVar10 = (int)*(short *)(lVar11 + 0x1a) + (int)sVar15 + 1;
            if ((*(uint *)(lVar11 + 8) < uVar10) ||
               (*(uint *)(lVar11 + 0xc) <
                (int)*(short *)(lVar11 + 0x18) + (int)*(short *)(lVar11 + 0x60) + 1U)) {
              uVar10 = FUN_00e13cd0(lVar11,1,1);
              uVar31 = (ulong)uVar10;
              if (uVar10 == 0) {
                if (*(char *)(param_1 + 0x30) != '\0') {
                  lVar11 = *(long *)(param_1 + 0x28);
                  psVar30 = (short *)(lVar11 + 0x62);
                  sVar15 = *psVar30;
                  if (*(uint *)(lVar11 + 8) < (int)*(short *)(lVar11 + 0x1a) + (int)sVar15 + 1U)
                  goto LAB_00e48c44;
                  goto LAB_00e48c74;
                }
                uVar31 = 8;
              }
            }
            else {
              if (*(uint *)(lVar11 + 8) < uVar10) {
LAB_00e48c44:
                uVar10 = FUN_00e13cd0(lVar11,1,0);
                uVar31 = (ulong)uVar10;
                if (uVar10 != 0) goto LAB_00e48d14;
                sVar15 = *psVar30;
              }
LAB_00e48c74:
              uVar31 = 0;
              puVar23 = (ulong *)(*(long *)(lVar11 + 0x68) + (long)sVar15 * 0x10);
              puVar23[1] = local_a8[1];
              *puVar23 = local_a8[0];
              *(undefined1 *)(*(long *)(lVar11 + 0x70) + (long)sVar15) = 1;
              *psVar30 = *psVar30 + 1;
            }
LAB_00e48d14:
            local_64 = (uint)uVar31;
          }
          else {
            if (uVar10 == 0) {
switchD_00e48778_caseD_0:
              lVar11 = *(long *)(param_1 + 0x28);
              if (*(char *)(param_1 + 0x30) != '\0') {
                lVar14 = (long)*(short *)(lVar11 + 0x60);
                sVar15 = *(short *)(lVar11 + 0x62);
                uVar9 = (int)sVar15 - 1;
                if (lVar14 < 1) {
                  uVar32 = 0;
                  iVar34 = 0;
                  if (0 < (int)uVar9) goto LAB_00e490a8;
                }
                else {
                  sVar6 = *(short *)(*(long *)(lVar11 + 0x78) + lVar14 * 2 + -2);
                  uVar32 = (ulong)sVar6;
                  iVar34 = (int)sVar6;
                  if ((int)sVar6 < (int)uVar9) {
LAB_00e490a8:
                    iVar34 = (int)uVar32;
                    lVar24 = *(long *)(lVar11 + 0x68);
                    if ((*(long *)(lVar24 + (-(uVar32 >> 0x1f & 1) & 0xfffffff000000000 |
                                            (uVar32 & 0xffffffff) << 4)) ==
                         *(long *)(lVar24 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 |
                                            (ulong)uVar9 << 4))) &&
                       (*(long *)(lVar24 + (long)iVar34 * 0x10 + 8) ==
                        *(long *)(lVar24 + (long)(int)uVar9 * 0x10 + 8))) {
                      *(short *)(lVar11 + 0x62) = (short)uVar9;
                      uVar9 = (int)sVar15 - 2;
                    }
                  }
                }
                if (iVar34 <= (int)uVar9) {
                  *(short *)(lVar11 + 0x60) = *(short *)(lVar11 + 0x60) + 1;
                  *(short *)(*(long *)(lVar11 + 0x78) + lVar14 * 2) = (short)uVar9;
                }
                *(undefined1 *)(param_1 + 0x30) = 0;
              }
              FUN_00e1436c();
              uVar31 = (ulong)local_64;
              break;
            }
            if (*(char *)(param_1 + 0x30) == '\0') {
              uVar31 = 8;
              local_64 = 8;
              break;
            }
            lVar11 = *(long *)(param_1 + 0x28);
            sVar15 = *(short *)(lVar11 + 0x62);
            if (*(uint *)(lVar11 + 8) < (int)*(short *)(lVar11 + 0x1a) + (int)sVar15 + 3U) {
              uVar10 = FUN_00e13cd0(lVar11,3,0);
              uVar31 = (ulong)uVar10;
              if (uVar10 == 0) {
                sVar15 = *(short *)(lVar11 + 0x62);
                goto LAB_00e48cc4;
              }
            }
            else {
LAB_00e48cc4:
              lVar14 = *(long *)(lVar11 + 0x70);
              uVar31 = 0;
              puVar23 = (ulong *)(*(long *)(lVar11 + 0x68) + (long)sVar15 * 0x10);
              puVar23[1] = local_a8[1];
              *puVar23 = local_a8[0];
              puVar1 = (undefined2 *)(lVar14 + sVar15);
              puVar23[3] = local_a8[3];
              puVar23[2] = local_a8[2];
              puVar23[5] = uStack_80;
              puVar23[4] = local_a8[4];
              *puVar1 = 0x202;
              *(undefined1 *)(puVar1 + 1) = 1;
              *(short *)(lVar11 + 0x62) = *(short *)(lVar11 + 0x62) + 3;
            }
            local_64 = (uint)uVar31;
          }
          if (local_64 != 0) break;
          goto LAB_00e48748;
        }
LAB_00e489d8:
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar31 = 8;
          local_64 = 8;
          break;
        }
        lVar11 = *(long *)(param_1 + 0x28);
        sVar15 = *(short *)(lVar11 + 0x62);
        if (*(uint *)(lVar11 + 8) < (int)*(short *)(lVar11 + 0x1a) + (int)sVar15 + 1U) {
          uVar10 = FUN_00e13cd0(lVar11,1,0);
          uVar31 = (ulong)uVar10;
          if (uVar10 == 0) {
            sVar15 = *(short *)(lVar11 + 0x62);
            goto LAB_00e48a70;
          }
        }
        else {
LAB_00e48a70:
          uVar31 = 0;
          puVar23 = (ulong *)(*(long *)(lVar11 + 0x68) + (long)sVar15 * 0x10);
          puVar23[1] = local_a8[1];
          *puVar23 = local_a8[0];
          *(undefined1 *)(*(long *)(lVar11 + 0x70) + (long)sVar15) = 1;
          *(short *)(lVar11 + 0x62) = *(short *)(lVar11 + 0x62) + 1;
        }
        local_64 = (uint)uVar31;
      } while ((uint)uVar31 == 0);
      goto LAB_00e48e0c;
    }
    if (1 < param_5) {
      puVar25 = (ushort *)(pbVar12 + 2);
      uVar9 = pbVar12[1] & 0xf;
      uVar29 = (uint)(pbVar12[1] >> 4);
      uVar10 = *(uint *)(param_1 + 4);
      uVar32 = (ulong)(uVar9 + uVar29);
      if (uVar9 + uVar29 <= uVar10) goto LAB_00e48404;
      goto LAB_00e485fc;
    }
  }
LAB_00e48e04:
  uVar31 = 8;
  local_64 = 8;
LAB_00e48e0c:
  FUN_00e1d90c(param_2);
  return uVar31;
}

