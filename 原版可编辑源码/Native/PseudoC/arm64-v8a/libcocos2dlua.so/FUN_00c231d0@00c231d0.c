
undefined4 FUN_00c231d0(long param_1,long param_2)

{
  void *__dest;
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  ulong uVar26;
  uint local_1f0;
  int local_1d8;
  uint local_1d4;
  uint *local_1c8;
  ulong local_1a0;
  ulong local_198;
  uint local_190;
  undefined1 local_18c;
  char local_18b;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  uint auStack_100 [64];
  
  plVar20 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  lVar18 = (ulong)*(ushort *)(param_2 + 10) * 0x18;
  lVar23 = *plVar20;
  plVar20[2] = param_1;
  uVar9 = *(uint *)(lVar23 + lVar18);
  while (uVar8 = uVar9 >> 0x1c, uVar8 == 8) {
    lVar18 = (ulong)(ushort)uVar9 * 0x18;
    uVar9 = *(uint *)(lVar23 + lVar18);
  }
  local_1c8 = (uint *)(lVar23 + lVar18);
  if (uVar8 == 2) {
    puVar1 = local_1c8 + 1;
    do {
      lVar18 = (ulong)(ushort)uVar9 * 0x18;
      local_1c8 = (uint *)(lVar23 + lVar18);
      uVar9 = *(uint *)(lVar23 + lVar18);
    } while (uVar9 >> 0x1c == 8);
    if (uVar9 >> 0x1c != 6) {
      return 0xffffffff;
    }
    if (*puVar1 != 4) goto LAB_00c23258;
    local_198 = (ulong)*(uint *)(param_2 + 0x10);
  }
  else {
    if (uVar8 != 6) {
      return 0xffffffff;
    }
LAB_00c23258:
    local_198 = *(ulong *)(param_2 + 0x10);
  }
  uVar13 = *(ulong *)(param_1 + 0x28);
  local_180 = 0;
  local_178 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uVar9 = *local_1c8;
  uVar8 = uVar9;
  do {
    lVar18 = (ulong)(ushort)uVar8 * 0x18;
    puVar1 = (uint *)(*plVar20 + lVar18);
    uVar8 = *(uint *)(*plVar20 + lVar18);
  } while (uVar8 >> 0x1c == 8);
  if ((uVar8 & 0xf8000000) == 0x38000000) {
LAB_00c23a38:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0xe46);
  }
  if (((uVar8 & 0xf4000000) == 0x34000000) || (uVar8 >> 0x1c == 1)) {
    uVar19 = FUN_00c1a314(plVar20[2],(ulong)puVar1[1] + 0x10);
    *(undefined1 *)(uVar19 + 9) = 10;
    *(short *)(uVar19 + 10) = (short)uVar9;
    puVar14 = *(ulong **)(param_1 + 0x28);
    *(ulong **)(param_1 + 0x28) = puVar14 + 1;
    *puVar14 = uVar19 | 0xfffa800000000000;
    if (*puVar1 >> 0x1c == 1) {
      iVar7 = FUN_00c22f00(plVar20,puVar1);
      local_18b = iVar7 == 0;
      if ((bool)local_18b) {
        local_188 = uVar19 + 0x10;
      }
    }
    else {
      local_18b = '\0';
    }
  }
  uVar19 = (ulong)(ushort)local_1c8[2];
  uVar9 = (uint)(ushort)local_1c8[2];
  if (uVar9 != 0) {
    do {
      if (*(uint *)(*plVar20 + (ulong)uVar9 * 0x18) >> 0x1c != 8) {
        uVar26 = *(long *)(param_1 + 0x20) + 8;
        if (uVar26 < uVar13) goto LAB_00c23358;
        goto LAB_00c23a68;
      }
      uVar2 = *(ushort *)(*plVar20 + (ulong)uVar9 * 0x18 + 8);
      uVar19 = (ulong)uVar2;
      uVar9 = (uint)uVar2;
    } while (uVar9 != 0);
  }
  uVar26 = *(long *)(param_1 + 0x20) + 8;
  if (uVar26 < uVar13) {
LAB_00c23358:
    iVar7 = 1;
    local_1d8 = 0;
    local_1d4 = 0;
    uVar9 = 0;
    local_1f0 = 0;
    do {
      if ((int)uVar19 == 0) {
        if ((*local_1c8 >> 0x17 & 1) == 0) goto LAB_00c23a68;
        uVar16 = FUN_00c230f4(plVar20,uVar26);
        lVar18 = *plVar20;
        uVar16 = uVar16 & 0xffffffff;
      }
      else {
        lVar18 = *plVar20;
        uVar16 = (ulong)*(ushort *)(lVar18 + uVar19 * 0x18);
        uVar19 = (ulong)*(ushort *)(lVar18 + uVar19 * 0x18 + 8);
      }
      lVar23 = uVar16 * 0x18;
      uVar8 = *(uint *)(lVar18 + lVar23);
      while (uVar15 = uVar8 >> 0x1c, uVar15 == 8) {
        lVar23 = (ulong)(ushort)uVar8 * 0x18;
        uVar8 = *(uint *)(lVar18 + lVar23);
      }
      puVar22 = (uint *)(lVar18 + lVar23);
      uVar6 = puVar22[1];
      if (uVar15 == 0) {
        if (8 < uVar6) goto LAB_00c23a38;
        if ((uVar8 >> 0x1a & 1) == 0) {
LAB_00c23704:
          puVar24 = (uint *)0x0;
          uVar8 = uVar6 + 7 & 0xfffffff8;
          uVar15 = uVar6 + 7 >> 3;
          goto LAB_00c236a8;
        }
        iVar12 = 1;
LAB_00c233e0:
        uVar25 = *puVar22;
        uVar8 = uVar6 + 7 & 0xfffffff8;
        uVar15 = uVar6 + 7 >> 3;
        if ((uVar25 & 0xf8000000) == 0x38000000) {
          iVar5 = 1;
        }
        else {
          iVar5 = iVar12 * uVar15;
        }
        if (8 < iVar5 + local_1f0) {
          uVar6 = uVar25 & 0xf0000;
          local_1f0 = 8;
LAB_00c23420:
          iVar5 = iVar12;
          puVar24 = (uint *)0x0;
          if (0x30000 < uVar6) {
            uVar6 = (1 << ((ulong)(uVar25 - 0x30000 >> 0x10) & 0xf)) - 1;
            local_1d4 = uVar6 + local_1d4 & (uVar6 ^ 0xffffffff);
          }
LAB_00c23450:
          if (uVar15 + local_1d4 < 0x21) {
            bVar4 = iVar5 == 2;
            puVar10 = auStack_100 + (ulong)local_1d4 * 2;
            uVar21 = uVar9;
            local_1d4 = uVar15 + local_1d4;
            goto LAB_00c23474;
          }
          goto LAB_00c23a38;
        }
        bVar4 = iVar12 == 2;
        puVar10 = (uint *)(&local_180 + local_1f0);
        local_1f0 = iVar5 + local_1f0;
      }
      else {
        if ((uVar8 & 0xf8000000) == 0x38000000) goto LAB_00c23a38;
        if (uVar15 == 1) {
          uVar8 = FUN_00c22f00(plVar20,puVar22);
          if (uVar8 == 0) {
            uVar8 = 8;
            lVar18 = FUN_00c1a314(plVar20[2],(ulong)uVar6 + 0x10);
            puVar24 = (uint *)(lVar18 + 0x10);
            *(undefined1 *)(lVar18 + 9) = 10;
            *(short *)(lVar18 + 10) = (short)uVar16;
            uVar15 = 1;
            goto LAB_00c236a8;
          }
          if (uVar8 < 2) goto LAB_00c23704;
          iVar12 = 2;
          if ((uVar8 & 4) == 0) {
            iVar12 = 1;
          }
          goto LAB_00c233e0;
        }
        if ((uVar8 & 0xf4000000) == 0x34000000) {
          iVar12 = 2;
          if (puVar1[1] != 8) {
            iVar12 = 1;
          }
          goto LAB_00c233e0;
        }
        uVar8 = 8;
        uVar15 = 1;
        puVar24 = (uint *)0x0;
LAB_00c236a8:
        uVar25 = *puVar22;
        uVar6 = uVar25 & 0xf0000;
        if (0x30000 < uVar6) {
          uVar9 = uVar9 + 1 & 0xfffffffe;
        }
        uVar21 = uVar9 + uVar15;
        if (8 < uVar21) {
          iVar5 = 0;
          uVar9 = 8;
          iVar12 = 0;
          if (puVar24 == (uint *)0x0) goto LAB_00c23420;
          goto LAB_00c23450;
        }
        bVar4 = false;
        puVar10 = (uint *)(&local_140 + uVar9);
LAB_00c23474:
        uVar9 = uVar21;
        if (puVar24 != (uint *)0x0) {
          *(uint **)puVar10 = puVar24;
          local_1d8 = local_1d8 + 1;
          puVar10 = puVar24;
        }
      }
      FUN_00c22594(plVar20,puVar22,puVar10,uVar26,iVar7 << 8);
      if (((*puVar22 & 0xf4000000) == 0) && (uVar15 = puVar22[1], uVar15 < 4)) {
        if ((*puVar22 >> 0x17 & 1) == 0) {
          if (uVar15 == 1) {
            uVar15 = (uint)(char)(byte)*puVar10;
          }
          else {
            uVar15 = (uint)(short)(ushort)*puVar10;
          }
        }
        else if (uVar15 == 1) {
          uVar15 = (uint)(byte)*puVar10;
        }
        else {
          uVar15 = (uint)(ushort)*puVar10;
        }
        *puVar10 = uVar15;
      }
      if ((puVar10 < auStack_100) && (bVar4)) {
        uVar8 = (uVar8 >> 2) - 1;
        do {
          *(ulong *)(puVar10 + (ulong)uVar8 * 2) = (ulong)puVar10[uVar8];
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0xffffffff);
      }
      uVar26 = uVar26 + 8;
      iVar7 = iVar7 + 1;
    } while (uVar26 < uVar13);
    if ((int)uVar19 != 0) {
LAB_00c23a68:
                    /* WARNING: Subroutine does not return */
      FUN_00bfb3a0(param_1,0xd27);
    }
    local_18c = (undefined1)local_1d4;
    if (local_1d4 == 0) goto LAB_00c237d4;
    local_190 = local_1d4 * 8 + 0xf & 0xfffffff0;
  }
  else {
    local_18c = 0;
    local_1d8 = 0;
LAB_00c237d4:
    local_190 = 0;
  }
  *(undefined4 *)(plVar20 + 0x1a) = 0xffffffff;
  lVar18 = *plVar20;
  FUN_00c18cc4(&local_198);
  if ((int)plVar20[0x1a] != -1) {
    local_1a0 = local_198 | 0xfffe000000000000;
    puVar11 = (undefined8 *)FUN_00c1bdd4(param_1,plVar20[5],&local_1a0);
    *puVar11 = 0xfffeffffffffffff;
  }
  lVar23 = *plVar20;
  uVar9 = *(uint *)((long)local_1c8 + (lVar23 - lVar18));
  do {
    lVar3 = (ulong)(ushort)uVar9 * 0x18;
    lVar18 = lVar23 + lVar3;
    uVar9 = *(uint *)(lVar23 + lVar3);
    uVar8 = uVar9 >> 0x1c;
  } while (uVar8 == 8);
  if (uVar8 == 4) {
    uVar17 = 0;
    iVar7 = 0;
  }
  else if (uVar8 == 1) {
    if (local_18b == '\0') {
      __dest = (void *)((*(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff) + 0x10);
      uVar9 = FUN_00c22f00(plVar20,lVar18);
      if ((uVar9 >> 2 & 1) == 0) {
        puVar11 = &local_140;
        if (1 < uVar9) {
          puVar11 = &local_180;
        }
        memcpy(__dest,puVar11,(ulong)*(uint *)(lVar18 + 4));
        uVar17 = 1;
        iVar7 = 1;
        goto LAB_00c23614;
      }
      uVar9 = uVar9 >> 8;
      uVar8 = uVar9 - 1;
      uVar15 = uVar9 - 2;
      *(undefined4 *)((long)__dest + (ulong)uVar8 * 4) = *(undefined4 *)(&local_180 + uVar8);
      if (uVar8 != 0) {
        *(undefined4 *)((long)__dest + (ulong)uVar15 * 4) = *(undefined4 *)(&local_180 + uVar15);
        uVar8 = uVar9 - 3;
        if (uVar15 != 0) {
          *(undefined4 *)((long)__dest + (ulong)uVar8 * 4) = *(undefined4 *)(&local_180 + uVar8);
          uVar15 = uVar9 - 4;
          if (uVar8 != 0) {
            *(undefined4 *)((long)__dest + (ulong)uVar15 * 4) = *(undefined4 *)(&local_180 + uVar15)
            ;
            uVar8 = uVar9 - 5;
            if (uVar15 != 0) {
              *(undefined4 *)((long)__dest + (ulong)uVar8 * 4) = *(undefined4 *)(&local_180 + uVar8)
              ;
              uVar15 = uVar9 - 6;
              if (uVar8 != 0) {
                *(undefined4 *)((long)__dest + (ulong)uVar15 * 4) =
                     *(undefined4 *)(&local_180 + uVar15);
                uVar8 = uVar9 - 7;
                if (uVar15 != 0) {
                  *(undefined4 *)((long)__dest + (ulong)uVar8 * 4) =
                       *(undefined4 *)(&local_180 + uVar8);
                  if (uVar8 != 0) {
                    *(undefined4 *)((long)__dest + (ulong)(uVar9 - 8) * 4) =
                         *(undefined4 *)(&local_180 + (uVar9 - 8));
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar17 = 1;
    iVar7 = 1;
  }
  else if ((uVar9 & 0xf4000000) == 0x34000000) {
    uVar13 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
    if (*(int *)(lVar18 + 4) == 8) {
      uVar17 = 1;
      iVar7 = 1;
      *(undefined4 *)(uVar13 + 0x10) = (undefined4)local_180;
      *(undefined4 *)(uVar13 + 0x14) = (undefined4)local_178;
    }
    else {
      uVar17 = 1;
      iVar7 = 1;
      *(undefined8 *)(uVar13 + 0x10) = local_180;
      *(undefined8 *)(uVar13 + 0x18) = local_178;
    }
  }
  else {
    if ((uVar9 & 0xf4000000) == 0x4000000) {
      puVar11 = &local_180;
    }
    else {
      puVar11 = &local_180;
      if ((uVar9 & 0xf8000000) != 0x38000000) {
        puVar11 = &local_140;
      }
    }
    uVar17 = 1;
    iVar7 = FUN_00c21fa4(plVar20,lVar18,0,*(long *)(param_1 + 0x28) + -8,puVar11);
  }
LAB_00c23614:
  for (local_1d8 = local_1d8 + iVar7; 0 < local_1d8; local_1d8 = local_1d8 + -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
  }
  return uVar17;
}

