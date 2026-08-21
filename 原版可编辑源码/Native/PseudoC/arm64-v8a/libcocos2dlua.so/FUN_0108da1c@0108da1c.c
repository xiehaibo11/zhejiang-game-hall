
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0108da1c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined2 *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  short sVar14;
  uint uVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  long *plVar20;
  ulong *puVar21;
  long lVar22;
  byte *pbVar23;
  int iVar24;
  long lVar25;
  byte *pbVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong local_a8 [5];
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  uint local_64;
  
                    /* try { // try from 0108da24 to 0118db2f has its CatchHandler @ 0108d994 */
  uVar9 = FT_Stream_Seek(param_2,param_4 + param_3);
  if (uVar9 != 0) {
    return (ulong)uVar9;
  }
  uVar9 = FT_Stream_EnterFrame(param_2,param_5);
  if (uVar9 != 0) {
    return (ulong)uVar9;
  }
  pbVar12 = *(byte **)(param_2 + 0x40);
  pbVar2 = pbVar12 + param_5;
  if ((param_5 != 0) && ((char)*pbVar12 < '\0')) {
    puVar30 = *(undefined8 **)(param_1 + 0x28);
    uVar9 = *(uint *)(param_1 + 0x18);
    uVar29 = local_a8[0] >> 0x20;
    local_a8[0] = uVar29 << 0x20;
    if ((param_5 < 1) || (bVar4 = *pbVar12, -1 < (char)bVar4)) {
LAB_0108dadc:
      uVar29 = 8;
      local_a8[0] = CONCAT44(local_a8[0]._4_4_,8);
    }
    else {
                    /* try { // try from 0108dca0 to 0118dd03 has its CatchHandler @ 0108db30 */
      pbVar23 = pbVar12 + 1;
      if ((bVar4 >> 3 & 1) != 0) {
        if (param_5 < 2) goto LAB_0108dadc;
        bVar5 = *pbVar23;
        pbVar23 = pbVar12 + 2;
        if (bVar5 != 0) {
          iVar24 = -(uint)bVar5;
          do {
            if ((pbVar2 < pbVar23 + 2) || (pbVar23 = pbVar23 + 2 + *pbVar23, pbVar2 < pbVar23))
            goto LAB_0108dadc;
            iVar24 = iVar24 + 1;
          } while (iVar24 != 0);
        }
      }
      local_a8[0] = uVar29 << 0x20;
      uVar28 = uVar9 + (bVar4 & 0x3f);
      if (*(uint *)(param_1 + 0x1c) < uVar28) {
                    /* try { // try from 0108dd04 to 0118dd13 has its CatchHandler @ 0108de54 */
        uVar28 = uVar28 + 3 & 0xfffffffc;
        if (0x40 < uVar28) goto LAB_0108dadc;
                    /* try { // try from 0108dd14 to 0118dd23 has its CatchHandler @ 0108de50 */
        lVar11 = ft_mem_realloc(*puVar30,0x20,*(uint *)(param_1 + 0x1c),uVar28,
                                *(undefined8 *)(param_1 + 0x20),local_a8);
        *(long *)(param_1 + 0x20) = lVar11;
        uVar29 = local_a8[0] & 0xffffffff;
        if ((int)local_a8[0] != 0) goto LAB_0108dae4;
        *(uint *)(param_1 + 0x1c) = uVar28;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x20);
      }
      if ((bVar4 & 0x3f) == 0) {
        uVar29 = 0;
      }
      else {
        uVar28 = 0;
        piVar17 = (int *)(lVar11 + (ulong)uVar9 * 0x20 + 0x10);
        do {
          pbVar12 = pbVar23 + 1;
          if (pbVar2 < pbVar12) goto LAB_0108dadc;
                    /* try { // try from 0108e4dc to 0118e4eb has its CatchHandler @ 0108e694 */
          bVar5 = *pbVar23;
          piVar17[-4] = 0x10000;
          piVar17[-3] = 0;
          if ((bVar5 >> 4 & 1) != 0) {
            pbVar12 = pbVar23 + 3;
                    /* try { // try from 0108e4ec to 0118e4fb has its CatchHandler @ 0108e690 */
            if (pbVar2 < pbVar12) goto LAB_0108dadc;
            *(long *)(piVar17 + -4) = (long)((ulong)CONCAT11(pbVar23[1],pbVar23[2]) << 0x30) >> 0x2c
            ;
          }
          piVar17[-2] = 0x10000;
          piVar17[-1] = 0;
          pbVar23 = pbVar12;
          if ((bVar5 >> 5 & 1) != 0) {
            pbVar23 = pbVar12 + 2;
            if (pbVar2 < pbVar23) goto LAB_0108dadc;
                    /* try { // try from 0108e520 to 0118e533 has its CatchHandler @ 0108e68c */
            *(long *)(piVar17 + -2) = (long)((ulong)CONCAT11(*pbVar12,pbVar12[1]) << 0x30) >> 0x2c;
          }
          if ((bVar5 & 3) == 2) {
            pbVar12 = pbVar23 + 1;
            if (pbVar2 < pbVar12) goto LAB_0108dadc;
            iVar24 = (int)(char)*pbVar23;
          }
          else {
                    /* try { // try from 0108e548 to 0118e54f has its CatchHandler @ 0108e66c */
            if ((bVar5 & 3) == 1) {
                    /* try { // try from 0108e550 to 0118e61b has its CatchHandler @ 0108df48 */
              pbVar12 = pbVar23 + 2;
              if (pbVar2 < pbVar12) goto LAB_0108dadc;
              iVar24 = (int)CONCAT11(*pbVar23,pbVar23[1]);
            }
            else {
              iVar24 = 0;
              pbVar12 = pbVar23;
            }
          }
          bVar8 = bVar5 >> 2 & 3;
          if (bVar8 == 2) {
            if (pbVar2 < pbVar12 + 1) goto LAB_0108dadc;
            iVar27 = (int)(char)*pbVar12;
            pbVar12 = pbVar12 + 1;
LAB_0108e5d0:
            *piVar17 = iVar24;
            piVar17[1] = iVar27;
            if ((bVar5 >> 6 & 1) == 0) goto LAB_0108e5dc;
LAB_0108e61c:
                    /* try { // try from 0108e61c to 0118e623 has its CatchHandler @ 0108e65c */
            pbVar26 = pbVar12 + 2;
                    /* try { // try from 0108e624 to 0118e627 has its CatchHandler @ 0108e628 */
            if (pbVar2 < pbVar26) goto LAB_0108dadc;
                    /* catch() { ... } // from try @ 0108e07c with catch @ 0108e628
                       catch() { ... } // from try @ 0108e624 with catch @ 0108e628
                       try { // try from 0108e628 to 0118e793 has its CatchHandler @ 0108df48 */
            piVar17[3] = (uint)CONCAT11(*pbVar12,pbVar12[1]);
            if ((char)bVar5 < '\0') goto LAB_0108e63c;
LAB_0108e5f4:
            pbVar23 = pbVar26 + 2;
            if (pbVar2 < pbVar23) goto LAB_0108dadc;
            lVar11 = 1;
            uVar10 = (uint)*pbVar26 << 8;
          }
          else {
            if (bVar8 == 1) {
              if (pbVar12 + 2 <= pbVar2) {
                iVar27 = (int)CONCAT11(*pbVar12,pbVar12[1]);
                pbVar12 = pbVar12 + 2;
                goto LAB_0108e5d0;
              }
              goto LAB_0108dadc;
            }
            *piVar17 = iVar24;
            piVar17[1] = 0;
            if ((bVar5 >> 6 & 1) != 0) goto LAB_0108e61c;
LAB_0108e5dc:
            pbVar26 = pbVar12 + 1;
            if (pbVar2 < pbVar26) goto LAB_0108dadc;
            piVar17[3] = (uint)*pbVar12;
            if (-1 < (char)bVar5) goto LAB_0108e5f4;
LAB_0108e63c:
            pbVar23 = pbVar26 + 3;
            if (pbVar2 < pbVar23) goto LAB_0108dadc;
            uVar10 = (uint)*pbVar26 << 0x10 | (uint)pbVar26[1] << 8;
            lVar11 = 2;
          }
                    /* catch() { ... } // from try @ 0108dff0 with catch @ 0108e65c
                       catch() { ... } // from try @ 0108e61c with catch @ 0108e65c */
          uVar28 = uVar28 + 1;
          uVar29 = 0;
                    /* catch() { ... } // from try @ 0108e548 with catch @ 0108e66c */
                    /* catch() { ... } // from try @ 0108e44c with catch @ 0108e670 */
          piVar17[2] = uVar10 | pbVar26[lVar11];
                    /* catch() { ... } // from try @ 0108e350 with catch @ 0108e674 */
                    /* catch() { ... } // from try @ 0108e254 with catch @ 0108e678 */
          piVar17 = piVar17 + 8;
                    /* catch() { ... } // from try @ 0108e17c with catch @ 0108e67c */
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        } while (uVar28 < (bVar4 & 0x3f));
      }
    }
LAB_0108dae4:
    FT_Stream_ExitFrame(param_2);
    if ((int)uVar29 != 0) {
      return uVar29;
    }
    iVar24 = *(int *)(param_1 + 0x18) - uVar9;
    if (iVar24 < 1) {
      return 0;
    }
    lVar11 = 0;
    do {
      sVar6 = *(short *)((long)puVar30 + 0x1a);
                    /* catch() { ... } // from try @ 0108d9c8 with catch @ 0108db14 */
      lVar13 = *(long *)(param_1 + 0x20) + (long)(int)uVar9 * 0x20 + lVar11 * 0x20;
      uVar28 = FUN_0108da1c(param_1,param_2,param_3,*(undefined4 *)(lVar13 + 0x18),
                            *(undefined4 *)(lVar13 + 0x1c));
                    /* try { // try from 0108db30 to 0118db67 has its CatchHandler @ 0108db30
                       catch() { ... } // from try @ 0108db30 with catch @ 0108db30
                       catch() { ... } // from try @ 0108dbc4 with catch @ 0108db30
                       catch() { ... } // from try @ 0108dca0 with catch @ 0108db30
                       catch() { ... } // from try @ 0108dd70 with catch @ 0108db30 */
      if (uVar28 != 0) {
        return (ulong)uVar28;
      }
      plVar20 = (long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar9 * 0x20 + lVar11 * 0x20);
      lVar13 = *plVar20;
      sVar14 = *(short *)((long)puVar30 + 0x1a);
      iVar7 = (int)sVar14 - (int)sVar6;
      iVar27 = (int)sVar6;
      if ((lVar13 == 0x10000) && (plVar20[1] == 0x10000)) {
                    /* try { // try from 0108db68 to 0118db77 has its CatchHandler @ 0108df38 */
        if (0 < iVar7) {
          uVar28 = (sVar14 + -1) - (int)sVar6;
          uVar29 = (ulong)uVar28 + 1;
          plVar16 = (long *)(puVar30[4] + (long)iVar27 * 0x10);
          lVar13 = (long)(int)plVar20[2];
          lVar22 = (long)(int)((ulong)plVar20[2] >> 0x20);
          if (uVar29 < 4) {
            lVar18 = 0;
          }
          else {
            uVar28 = uVar28 + 1 & 3;
            lVar18 = uVar29 - uVar28;
            if (lVar18 != 0) {
              plVar16 = plVar16 + lVar18 * 2;
              plVar20 = (long *)(puVar30[4] + (long)iVar27 * 0x10 + 0x20);
              lVar25 = lVar18;
              do {
                    /* try { // try from 0108dc28 to 0118dc37 has its CatchHandler @ 0108ded0 */
                lVar25 = lVar25 + -4;
                    /* try { // try from 0108dc38 to 0118dc47 has its CatchHandler @ 0108dea4 */
                plVar20[-4] = plVar20[-4] + lVar13;
                plVar20[-3] = plVar20[-3] + lVar22;
                plVar20[-2] = plVar20[-2] + lVar13;
                plVar20[-1] = plVar20[-1] + lVar22;
                *plVar20 = *plVar20 + lVar13;
                plVar20[1] = plVar20[1] + lVar22;
                plVar20[2] = plVar20[2] + lVar13;
                plVar20[3] = plVar20[3] + lVar22;
                plVar20 = plVar20 + 8;
              } while (lVar25 != 0);
              if (uVar28 == 0) goto LAB_0108dc70;
            }
          }
          iVar27 = ((int)sVar14 - (int)lVar18) - iVar27;
          do {
            iVar27 = iVar27 + -1;
            plVar16[1] = plVar16[1] + lVar22;
            *plVar16 = *plVar16 + lVar13;
                    /* try { // try from 0108dc6c to 0118dc7f has its CatchHandler @ 0108de58 */
            plVar16 = plVar16 + 2;
          } while (iVar27 != 0);
        }
      }
      else if (0 < iVar7) {
                    /* try { // try from 0108dba4 to 0118dbb7 has its CatchHandler @ 0108dee4 */
        plVar16 = (long *)(puVar30[4] + (long)iVar27 * 0x10);
        iVar27 = (sVar14 + -1) - iVar27;
        while( true ) {
                    /* try { // try from 0108dbc4 to 0118dc27 has its CatchHandler @ 0108db30 */
          lVar13 = FT_MulFix(*plVar16,lVar13);
          *plVar16 = lVar13 + (int)plVar20[2];
          lVar13 = FT_MulFix(plVar16[1],plVar20[1]);
          plVar16[1] = lVar13 + *(int *)((long)plVar20 + 0x14);
          if (iVar27 == 0) break;
                    /* try { // try from 0108dbb8 to 0118dbc3 has its CatchHandler @ 0108ded4 */
          lVar13 = *plVar20;
          iVar27 = iVar27 + -1;
          plVar16 = plVar16 + 2;
        }
      }
LAB_0108dc70:
      lVar11 = lVar11 + 1;
      if (iVar24 <= lVar11) {
        return 0;
      }
    } while( true );
  }
  local_64 = 0;
  if ((param_5 < 1) || (bVar4 = *pbVar12, (char)bVar4 < '\0')) {
LAB_0108e47c:
    uVar29 = 8;
    local_64 = 8;
  }
  else {
                    /* catch() { ... } // from try @ 0108da18 with catch @ 0108daa0 */
    if ((bVar4 >> 2 & 1) == 0) {
      if ((bVar4 >> 1 & 1) == 0) {
        uVar9 = 0;
                    /* catch() { ... } // from try @ 0108da04 with catch @ 0108dab0 */
        pbVar12 = pbVar12 + 1;
      }
      else {
                    /* try { // try from 0108dd40 to 0118dd53 has its CatchHandler @ 0108de4c */
        if (param_5 < 2) goto LAB_0108e47c;
        uVar9 = (uint)pbVar12[1];
        pbVar12 = pbVar12 + 2;
      }
      if ((bVar4 & 1) == 0) {
        uVar28 = 0;
        pbVar23 = pbVar12;
      }
      else {
        pbVar23 = pbVar12 + 1;
        if (pbVar2 < pbVar23) goto LAB_0108e47c;
        uVar28 = (uint)*pbVar12;
      }
    }
    else {
      if (param_5 < 2) goto LAB_0108e47c;
      pbVar23 = pbVar12 + 2;
      uVar9 = pbVar12[1] & 0xf;
                    /* try { // try from 0108dc98 to 0118dc9f has its CatchHandler @ 0108de3c */
      uVar28 = (uint)(pbVar12[1] >> 4);
    }
                    /* try { // try from 0108dd68 to 0118dd6f has its CatchHandler @ 0108de38 */
    uVar10 = uVar9 + uVar28;
                    /* try { // try from 0108dd70 to 0118df47 has its CatchHandler @ 0108db30 */
    if (*(uint *)(param_1 + 4) < uVar10) {
      uVar15 = uVar10 + 7 & 0xfffffff8;
      lVar11 = ft_mem_realloc(**(undefined8 **)(param_1 + 0x28),8,*(uint *)(param_1 + 4),uVar15,
                              *(long *)(param_1 + 8),&local_64);
      *(long *)(param_1 + 8) = lVar11;
      uVar29 = (ulong)local_64;
      if (local_64 != 0) goto LAB_0108e484;
      *(ulong *)(param_1 + 0x10) = lVar11 + (ulong)uVar9 * 8;
      *(uint *)(param_1 + 4) = uVar15;
LAB_0108dde4:
      uVar29 = 0;
      iVar24 = 0;
      uVar15 = 0;
      do {
        if ((uVar29 & 7) == 0) {
          pbVar12 = pbVar23 + 1;
          if (pbVar2 < pbVar12) goto LAB_0108e47c;
          uVar15 = (uint)*pbVar23;
          if ((*pbVar23 & 1) != 0) goto LAB_0108de30;
LAB_0108ddfc:
          pbVar23 = pbVar12 + 1;
          if (pbVar2 < pbVar23) goto LAB_0108e47c;
          iVar24 = iVar24 + (uint)*pbVar12;
        }
        else {
          pbVar12 = pbVar23;
          if ((uVar15 & 1) == 0) goto LAB_0108ddfc;
LAB_0108de30:
          pbVar23 = pbVar12 + 2;
                    /* catch() { ... } // from try @ 0108dd68 with catch @ 0108de38 */
          if (pbVar2 < pbVar23) goto LAB_0108e47c;
                    /* catch() { ... } // from try @ 0108dc98 with catch @ 0108de3c */
                    /* catch() { ... } // from try @ 0108dd40 with catch @ 0108de4c */
          iVar24 = (int)CONCAT11(*pbVar12,pbVar12[1]);
        }
                    /* catch() { ... } // from try @ 0108dd14 with catch @ 0108de50 */
                    /* catch() { ... } // from try @ 0108dd04 with catch @ 0108de54 */
        *(long *)(lVar11 + uVar29 * 8) = (long)iVar24;
                    /* catch() { ... } // from try @ 0108dc6c with catch @ 0108de58 */
        uVar29 = uVar29 + 1;
        uVar15 = uVar15 >> 1;
      } while (uVar29 < uVar10);
    }
    else {
      lVar11 = *(long *)(param_1 + 8);
      *(ulong *)(param_1 + 0x10) = lVar11 + (ulong)uVar9 * 8;
      if (uVar10 != 0) goto LAB_0108dde4;
    }
    pbVar12 = pbVar23;
    if ((bVar4 >> 3 & 1) != 0) {
      pbVar12 = pbVar23 + 1;
      if (pbVar2 < pbVar12) goto LAB_0108e47c;
      if (*pbVar23 != 0) {
        iVar24 = -(uint)*pbVar23;
        do {
          if ((pbVar2 < pbVar12 + 2) || (pbVar12 = pbVar12 + 2 + *pbVar12, pbVar2 < pbVar12))
          goto LAB_0108e47c;
          iVar24 = iVar24 + 1;
                    /* catch() { ... } // from try @ 0108dc38 with catch @ 0108dea4 */
        } while (iVar24 != 0);
      }
      local_64 = 0;
    }
                    /* catch() { ... } // from try @ 0108dc28 with catch @ 0108ded0 */
    *(undefined1 *)(param_1 + 0x30) = 0;
                    /* catch() { ... } // from try @ 0108dbb8 with catch @ 0108ded4 */
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_78 = 0;
    uStack_70 = 0;
LAB_0108dedc:
    do {
      pbVar23 = pbVar12 + 1;
                    /* catch() { ... } // from try @ 0108dba4 with catch @ 0108dee4 */
      if (pbVar2 < pbVar23) goto LAB_0108e47c;
      bVar4 = *pbVar12;
      uVar10 = bVar4 & 0xf;
      bVar5 = bVar4 >> 4;
      uVar15 = 1;
      switch(bVar4) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        goto switchD_0108df04_caseD_0;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
        break;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
        if (uVar10 < uVar9) {
          local_a8[0] = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar10 * 8);
          goto LAB_0108df4c;
        }
        goto LAB_0108e47c;
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
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
        if (uVar10 < uVar28) {
                    /* catch() { ... } // from try @ 0108db68 with catch @ 0108df38 */
          local_a8[0] = local_78;
                    /* try { // try from 0108df48 to 0118df83 has its CatchHandler @ 0108df48
                       catch() { ... } // from try @ 0108df48 with catch @ 0108df48
                       catch() { ... } // from try @ 0108dff8 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e084 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e0cc with catch @ 0108df48
                       catch() { ... } // from try @ 0108e184 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e25c with catch @ 0108df48
                       catch() { ... } // from try @ 0108e358 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e454 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e550 with catch @ 0108df48
                       catch() { ... } // from try @ 0108e628 with catch @ 0108df48 */
          uStack_70 = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)uVar10 * 8);
LAB_0108df4c:
          local_a8[1] = uStack_70;
          local_78 = local_a8[0];
          goto LAB_0108e134;
        }
        goto LAB_0108e47c;
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
        uVar10 = 0xb8e;
        goto LAB_0108df68;
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
        uVar10 = 0xe2b;
LAB_0108df68:
        uVar15 = 3;
        break;
      default:
        uVar15 = 4;
      }
      uVar19 = 0;
      puVar21 = local_a8;
      do {
        uVar3 = uVar10 & 3;
        if (uVar3 == 2) {
          if (pbVar2 < pbVar23 + 1) goto LAB_0108e47c;
          uVar29 = local_78 + (long)(char)*pbVar23;
          pbVar23 = pbVar23 + 1;
        }
        else {
                    /* try { // try from 0108df84 to 0118df93 has its CatchHandler @ 0108e780 */
          if (uVar3 == 1) {
            if (pbVar2 < pbVar23 + 2) goto LAB_0108e47c;
                    /* try { // try from 0108dff0 to 0118dff7 has its CatchHandler @ 0108e65c */
            uVar29 = (long)CONCAT11(*pbVar23,pbVar23[1]);
            pbVar23 = pbVar23 + 2;
          }
          else {
            uVar29 = local_78;
            if (uVar3 == 0) {
              if ((pbVar2 < pbVar23 + 1) || (uVar9 <= *pbVar23)) goto LAB_0108e47c;
              uVar29 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*pbVar23 * 8);
              pbVar23 = pbVar23 + 1;
            }
          }
        }
        uVar3 = uVar10 >> 2 & 3;
        *puVar21 = uVar29;
        if (uVar3 == 2) {
          if (pbVar2 < pbVar23 + 1) goto LAB_0108e47c;
          puVar21[1] = uStack_70 + (long)(char)*pbVar23;
          pbVar12 = pbVar23 + 1;
joined_r0x0108e068:
          if (uVar19 == 0) goto LAB_0108e0a8;
LAB_0108e0cc:
                    /* try { // try from 0108e0cc to 0118e103 has its CatchHandler @ 0108df48 */
          uVar10 = uVar10 >> 4;
          pbVar23 = pbVar12;
        }
        else {
          if (uVar3 == 1) {
            pbVar12 = pbVar23 + 2;
            if (pbVar2 < pbVar12) goto LAB_0108e47c;
                    /* try { // try from 0108e07c to 0118e083 has its CatchHandler @ 0108e628 */
                    /* try { // try from 0108e084 to 0118e0bf has its CatchHandler @ 0108df48 */
            puVar21[1] = (long)CONCAT11(*pbVar23,pbVar23[1]);
          }
          else {
            if (uVar3 != 0) {
              puVar21[1] = uStack_70;
              pbVar12 = pbVar23;
              goto joined_r0x0108e068;
            }
            pbVar12 = pbVar23 + 1;
            if ((pbVar2 < pbVar12) || (uVar28 <= *pbVar23)) goto LAB_0108e47c;
            puVar21[1] = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)*pbVar23 * 8);
          }
          if (uVar19 != 0) goto LAB_0108e0cc;
LAB_0108e0a8:
          if (uVar15 != 4) goto LAB_0108e0cc;
          pbVar23 = pbVar12 + 1;
          if (pbVar2 < pbVar23) goto LAB_0108e47c;
          uVar10 = (uint)*pbVar12;
                    /* try { // try from 0108e0c0 to 0118e0cb has its CatchHandler @ 0108e758 */
          uVar15 = 3;
        }
        uVar19 = uVar19 + 1;
        uStack_70 = puVar21[1];
        local_78 = *puVar21;
        puVar21 = puVar21 + 2;
      } while (uVar19 < uVar15);
      if (bVar5 - 1 < 3) {
LAB_0108e134:
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar29 = 8;
        }
        else {
          lVar11 = *(long *)(param_1 + 0x28);
          sVar6 = *(short *)(lVar11 + 0x62);
                    /* try { // try from 0108e150 to 0118e163 has its CatchHandler @ 0108e6bc */
          if ((ulong)*(uint *)(lVar11 + 8) < (long)*(short *)(lVar11 + 0x1a) + (long)sVar6 + 1U) {
                    /* try { // try from 0108e17c to 0118e183 has its CatchHandler @ 0108e67c */
            uVar10 = FT_GlyphLoader_CheckPoints(lVar11,1,0);
                    /* try { // try from 0108e184 to 0118e1e7 has its CatchHandler @ 0108df48 */
            uVar29 = (ulong)uVar10;
            if (uVar10 != 0) goto LAB_0108e1e8;
            sVar6 = *(short *)(lVar11 + 0x62);
          }
          uVar29 = 0;
          puVar21 = (ulong *)(*(long *)(lVar11 + 0x68) + ((long)sVar6 & 0xffffffffU) * 0x10);
          puVar21[1] = local_a8[1];
          *puVar21 = local_a8[0];
          *(undefined1 *)(*(long *)(lVar11 + 0x70) + ((long)sVar6 & 0xffffffffU)) = 1;
          *(short *)(lVar11 + 0x62) = *(short *)(lVar11 + 0x62) + 1;
        }
LAB_0108e1e8:
                    /* try { // try from 0108e1e8 to 0118e1f7 has its CatchHandler @ 0108e6b8 */
        local_64 = (uint)uVar29;
        pbVar12 = pbVar23;
        if ((uint)uVar29 != 0) break;
        goto LAB_0108dedc;
      }
      if (bVar5 - 4 < 2) {
        lVar11 = *(long *)(param_1 + 0x28);
                    /* try { // try from 0108e104 to 0118e113 has its CatchHandler @ 0108e73c */
        if (*(char *)(param_1 + 0x30) != '\0') {
          lVar13 = (long)*(short *)(lVar11 + 0x60);
          sVar6 = *(short *)(lVar11 + 0x62);
                    /* try { // try from 0108e114 to 0118e123 has its CatchHandler @ 0108e71c */
          uVar10 = (int)sVar6 - 1;
          if (lVar13 < 1) {
            uVar29 = 0;
            iVar24 = 0;
            if (0 < (int)uVar10) goto LAB_0108e284;
          }
          else {
            sVar14 = *(short *)(*(long *)(lVar11 + 0x78) + lVar13 * 2 + -2);
            uVar29 = (ulong)sVar14;
            iVar24 = (int)sVar14;
            if ((int)sVar14 < (int)uVar10) {
LAB_0108e284:
              iVar24 = (int)uVar29;
              lVar22 = *(long *)(lVar11 + 0x68);
              if ((*(long *)(lVar22 + (-(uVar29 >> 0x1f & 1) & 0xfffffff000000000 |
                                      (uVar29 & 0xffffffff) << 4)) ==
                   *(long *)(lVar22 + (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar10 << 4))) &&
                 (*(long *)(lVar22 + (long)iVar24 * 0x10 + 8) ==
                  *(long *)(lVar22 + (long)(int)uVar10 * 0x10 + 8))) {
                *(short *)(lVar11 + 0x62) = (short)uVar10;
                uVar10 = (int)sVar6 - 2;
              }
            }
          }
          if (iVar24 <= (int)uVar10) {
            *(short *)(lVar11 + 0x60) = *(short *)(lVar11 + 0x60) + 1;
            *(short *)(*(long *)(lVar11 + 0x78) + lVar13 * 2) = (short)uVar10;
          }
          *(undefined1 *)(param_1 + 0x30) = 0;
        }
                    /* try { // try from 0108e2e4 to 0118e2f3 has its CatchHandler @ 0108e6ac */
        *(undefined1 *)(param_1 + 0x30) = 1;
        sVar6 = *(short *)(lVar11 + 0x1a);
                    /* try { // try from 0108e2f4 to 0118e303 has its CatchHandler @ 0108e6a8 */
        sVar14 = *(short *)(lVar11 + 0x62);
        uVar29 = (ulong)*(uint *)(lVar11 + 8);
                    /* try { // try from 0108e328 to 0118e33b has its CatchHandler @ 0108e6a4 */
        if ((uVar29 < (long)sVar6 + (long)sVar14 + 1U) ||
           ((ulong)*(uint *)(lVar11 + 0xc) <
            (long)*(short *)(lVar11 + 0x18) + (long)*(short *)(lVar11 + 0x60) + 1U)) {
          uVar10 = FT_GlyphLoader_CheckPoints(lVar11,1,1);
          uVar29 = (ulong)uVar10;
                    /* try { // try from 0108e350 to 0118e357 has its CatchHandler @ 0108e674 */
                    /* try { // try from 0108e358 to 0118e3df has its CatchHandler @ 0108df48 */
          if (uVar10 == 0) {
            if (*(char *)(param_1 + 0x30) != '\0') {
              lVar11 = *(long *)(param_1 + 0x28);
              sVar6 = *(short *)(lVar11 + 0x1a);
              sVar14 = *(short *)(lVar11 + 0x62);
              uVar29 = (ulong)*(uint *)(lVar11 + 8);
              goto LAB_0108e380;
            }
                    /* try { // try from 0108e454 to 0118e4db has its CatchHandler @ 0108df48 */
            uVar29 = 8;
          }
        }
        else {
LAB_0108e380:
          if (uVar29 < (long)sVar14 + (long)sVar6 + 1U) {
            uVar10 = FT_GlyphLoader_CheckPoints(lVar11,1,0);
            uVar29 = (ulong)uVar10;
            if (uVar10 != 0) goto LAB_0108e458;
            sVar14 = *(short *)(lVar11 + 0x62);
          }
          uVar29 = 0;
          puVar21 = (ulong *)(*(long *)(lVar11 + 0x68) + ((long)sVar14 & 0xffffffffU) * 0x10);
          puVar21[1] = local_a8[1];
          *puVar21 = local_a8[0];
                    /* try { // try from 0108e3e0 to 0118e3ef has its CatchHandler @ 0108e6a0 */
          *(undefined1 *)(*(long *)(lVar11 + 0x70) + ((long)sVar14 & 0xffffffffU)) = 1;
                    /* try { // try from 0108e3f0 to 0118e3ff has its CatchHandler @ 0108e69c */
          *(short *)(lVar11 + 0x62) = *(short *)(lVar11 + 0x62) + 1;
        }
LAB_0108e458:
        local_64 = (uint)uVar29;
      }
      else {
        if (bVar5 == 0) {
switchD_0108df04_caseD_0:
                    /* catch() { ... } // from try @ 0108e520 with catch @ 0108e68c */
                    /* catch() { ... } // from try @ 0108e4ec with catch @ 0108e690 */
          lVar11 = *(long *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0108e4dc with catch @ 0108e694 */
          if (*(char *)(param_1 + 0x30) != '\0') {
                    /* catch() { ... } // from try @ 0108e424 with catch @ 0108e698 */
            lVar13 = (long)*(short *)(lVar11 + 0x60);
                    /* catch() { ... } // from try @ 0108e3f0 with catch @ 0108e69c */
            sVar6 = *(short *)(lVar11 + 0x62);
                    /* catch() { ... } // from try @ 0108e3e0 with catch @ 0108e6a0 */
                    /* catch() { ... } // from try @ 0108e328 with catch @ 0108e6a4 */
            uVar9 = (int)sVar6 - 1;
                    /* catch() { ... } // from try @ 0108e2f4 with catch @ 0108e6a8 */
            if (lVar13 < 1) {
              uVar29 = 0;
              iVar24 = 0;
              if (0 < (int)uVar9) goto LAB_0108e6d0;
            }
            else {
                    /* catch() { ... } // from try @ 0108e2e4 with catch @ 0108e6ac */
                    /* catch() { ... } // from try @ 0108e22c with catch @ 0108e6b0 */
                    /* catch() { ... } // from try @ 0108e1f8 with catch @ 0108e6b4 */
              sVar14 = *(short *)(*(long *)(lVar11 + 0x78) + lVar13 * 2 + -2);
              uVar29 = (ulong)sVar14;
              iVar24 = (int)sVar14;
                    /* catch() { ... } // from try @ 0108e1e8 with catch @ 0108e6b8 */
                    /* catch() { ... } // from try @ 0108e150 with catch @ 0108e6bc */
              if ((int)sVar14 < (int)uVar9) {
LAB_0108e6d0:
                iVar24 = (int)uVar29;
                lVar22 = *(long *)(lVar11 + 0x68);
                if ((*(long *)(lVar22 + (-(uVar29 >> 0x1f & 1) & 0xfffffff000000000 |
                                        (uVar29 & 0xffffffff) << 4)) ==
                     *(long *)(lVar22 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar9 << 4))) &&
                   (*(long *)(lVar22 + (long)iVar24 * 0x10 + 8) ==
                    *(long *)(lVar22 + (long)(int)uVar9 * 0x10 + 8))) {
                  *(short *)(lVar11 + 0x62) = (short)uVar9;
                  uVar9 = (int)sVar6 - 2;
                }
              }
            }
            if (iVar24 <= (int)uVar9) {
                    /* catch() { ... } // from try @ 0108e114 with catch @ 0108e71c */
              *(short *)(lVar11 + 0x60) = *(short *)(lVar11 + 0x60) + 1;
              *(short *)(*(long *)(lVar11 + 0x78) + lVar13 * 2) = (short)uVar9;
            }
            *(undefined1 *)(param_1 + 0x30) = 0;
          }
          FT_GlyphLoader_Add();
          uVar29 = (ulong)local_64;
          break;
        }
                    /* try { // try from 0108e1f8 to 0118e207 has its CatchHandler @ 0108e6b4 */
        if (*(char *)(param_1 + 0x30) == '\0') {
          uVar29 = 8;
        }
        else {
          lVar11 = *(long *)(param_1 + 0x28);
          sVar6 = *(short *)(lVar11 + 0x62);
          if ((ulong)*(uint *)(lVar11 + 8) < (long)*(short *)(lVar11 + 0x1a) + (long)sVar6 + 3U) {
                    /* try { // try from 0108e22c to 0118e23f has its CatchHandler @ 0108e6b0 */
            uVar10 = FT_GlyphLoader_CheckPoints(lVar11,3,0);
                    /* try { // try from 0108e254 to 0118e25b has its CatchHandler @ 0108e678 */
                    /* try { // try from 0108e25c to 0118e2e3 has its CatchHandler @ 0108df48 */
            uVar29 = (ulong)uVar10;
            if (uVar10 != 0) goto LAB_0108e444;
            sVar6 = *(short *)(lVar11 + 0x62);
          }
          lVar13 = *(long *)(lVar11 + 0x70);
          uVar29 = 0;
          puVar21 = (ulong *)(*(long *)(lVar11 + 0x68) + (long)sVar6 * 0x10);
          puVar21[1] = local_a8[1];
          *puVar21 = local_a8[0];
          puVar1 = (undefined2 *)(lVar13 + sVar6);
                    /* try { // try from 0108e424 to 0118e437 has its CatchHandler @ 0108e698 */
          puVar21[3] = local_a8[3];
          puVar21[2] = local_a8[2];
          puVar21[5] = uStack_80;
          puVar21[4] = local_a8[4];
          *puVar1 = 0x202;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(short *)(lVar11 + 0x62) = *(short *)(lVar11 + 0x62) + 3;
        }
LAB_0108e444:
        local_64 = (uint)uVar29;
      }
                    /* try { // try from 0108e44c to 0118e453 has its CatchHandler @ 0108e670 */
      pbVar12 = pbVar23;
    } while (local_64 == 0);
  }
LAB_0108e484:
  FT_Stream_ExitFrame(param_2);
  return uVar29;
}

