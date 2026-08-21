
undefined8
FUN_00162944(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  size_t __size;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  byte *pbVar21;
  undefined1 auStack_6e0 [4];
  int local_6dc;
  byte **local_6d8;
  undefined8 local_6d0;
  ulong *local_6c8;
  undefined8 *local_6c0;
  byte *apbStack_6a0 [193];
  ulong local_98;
  long lStack_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  ulong uStack_68;
  
  puVar5 = (undefined8 *)auStack_6e0;
  puVar20 = &local_98;
  local_88 = 0xffffffffffffffff;
  lStack_80 = param_2[2];
  local_98 = param_3[2];
  lStack_90 = param_3[1] + *param_3;
  local_6c0 = (undefined8 *)0x0;
  local_6d0 = param_1;
  local_6c8 = &uStack_68;
  local_6d8 = apbStack_6a0 + 0x44;
  local_78 = param_2[1] + *param_2;
  lStack_70 = param_4 - param_2[3];
  do {
    apbStack_6a0[0xc0] = (byte *)*puVar20;
    pbVar2 = (byte *)puVar20[1];
    if ((apbStack_6a0[0xc0] < pbVar2) && (uVar16 = puVar20[2], uVar16 != 0)) {
      uVar17 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      do {
        puVar18 = local_6c0;
        pbVar10 = pbVar21 + 1;
        bVar3 = *pbVar21;
        apbStack_6a0[0xc0] = pbVar10;
        switch((ulong)bVar3) {
        case 0:
          break;
        case 1:
          uVar17 = FUN_00163640(local_6d0,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
          break;
        case 2:
          uVar9 = (uint)pbVar21[1];
          iVar15 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar21 + 2;
          goto LAB_00162a78;
        case 3:
          uVar9 = (uint)*(ushort *)(pbVar21 + 1);
          iVar15 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar21 + 3;
          goto LAB_00162a78;
        case 4:
          uVar9 = *(uint *)(pbVar21 + 1);
          iVar15 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_00162a78:
          uVar17 = uVar17 + iVar15 * uVar9;
          break;
        case 5:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          lVar7 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
            __size = 0x46;
            goto LAB_00163334;
          }
          pcVar8 = (char *)(param_6 + uVar19 * 4 + 7);
          cVar4 = *pcVar8;
          lVar7 = lVar7 * *(int *)((long)param_3 + 0x2c);
          goto joined_r0x0016311c;
        case 6:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00163248:
            __size = 0x47;
LAB_00163334:
            fwrite(pcVar8,__size,1,(FILE *)0x16d358);
            return 0;
          }
          cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x00163180:
          if (cVar4 != '\0') {
            pbVar21 = apbStack_6a0[uVar19 * 2];
            *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
            *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
          }
          break;
        case 7:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0016332c:
            __size = 0x40;
            goto LAB_00163334;
          }
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          param_6[uVar19 * 4 + 6] = 1;
          break;
        case 8:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00163264:
            __size = 0x41;
            goto LAB_00163334;
          }
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          param_6[uVar19 * 4 + 6] = 0;
          break;
        case 9:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          uVar12 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
            __size = 0x3f;
            goto LAB_00163334;
          }
          if (0x5f < uVar12) {
            pcVar8 = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
            goto LAB_0016332c;
          }
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          param_6[uVar19 * 4 + 6] = 4;
          *(ulong *)(param_6 + uVar19 * 4 + 8) = uVar12;
          break;
        case 10:
          puVar18 = (undefined8 *)((long)puVar5 + -0x620);
          *puVar18 = local_6c0;
          memcpy((undefined1 *)((long)puVar5 + -0x618),param_6,0x618);
          local_6c0 = puVar18;
          puVar5 = puVar18;
          break;
        case 0xb:
          if (local_6c0 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,local_6c0 + 1,0x618);
          local_6c0 = (undefined8 *)*puVar18;
          break;
        case 0xc:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          uVar6 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
            __size = 0x3e;
            goto LAB_00163334;
          }
          *param_6 = (int)uVar19;
          param_6[1] = uVar6;
          break;
        case 0xd:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
            goto LAB_00163248;
          }
          *param_6 = (int)uVar19;
          break;
        case 0xe:
          uVar6 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          param_6[1] = uVar6;
          break;
        case 0xf:
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar10;
          goto LAB_00162ff8;
        case 0x10:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
            goto LAB_00163264;
          }
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          uVar6 = 5;
          goto LAB_00162ff0;
        case 0x11:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
            __size = 0x49;
            goto LAB_00163334;
          }
          uVar12 = 0;
          uVar11 = 0;
          pbVar21 = apbStack_6a0[0xc0];
          pbVar10 = apbStack_6a0[0xc0];
          do {
            if (pbVar10 == pbVar2) {
              fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar3 = *pbVar10;
            pbVar21 = pbVar21 + 1;
            uVar13 = uVar12 & 0x3f;
            uVar12 = uVar12 + 7;
            uVar11 = ((ulong)bVar3 & 0x7f) << uVar13 | uVar11;
            pbVar10 = pbVar10 + 1;
          } while ((char)bVar3 < '\0');
          apbStack_6a0[0xc0] = pbVar21;
          uVar13 = -1L << (uVar12 & 0x3f);
          pcVar8 = (char *)(param_6 + uVar19 * 4 + 7);
          cVar4 = *pcVar8;
          if (((int)uVar12 - 7U < 0x39 & bVar3 >> 6) == 0) {
            uVar13 = 0;
          }
          lVar7 = (uVar11 | uVar13) * (long)*(int *)((long)param_3 + 0x2c);
          goto joined_r0x0016311c;
        case 0x12:
          uVar12 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          uVar19 = 0;
          uVar11 = 0;
          pbVar21 = apbStack_6a0[0xc0];
          pbVar10 = apbStack_6a0[0xc0];
          do {
            if (pbVar10 == pbVar2) {
              fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar3 = *pbVar10;
            pbVar21 = pbVar21 + 1;
            uVar13 = uVar19 & 0x3f;
            uVar19 = uVar19 + 7;
            uVar11 = ((ulong)bVar3 & 0x7f) << uVar13 | uVar11;
            pbVar10 = pbVar10 + 1;
          } while ((char)bVar3 < '\0');
          apbStack_6a0[0xc0] = pbVar21;
          if (0x5f < uVar12) {
            pcVar8 = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
            __size = 0x41;
            goto LAB_00163334;
          }
          iVar15 = *(int *)((long)param_3 + 0x2c);
          uVar9 = (uint)(-1L << (uVar19 & 0x3f));
          if (((int)uVar19 - 7U < 0x39 & bVar3 >> 6) == 0) {
            uVar9 = 0;
          }
          *param_6 = (int)uVar12;
          param_6[1] = iVar15 * ((uint)uVar11 | uVar9);
          break;
        case 0x13:
          uVar19 = 0;
          uVar12 = 0;
          pbVar21 = pbVar10;
          do {
            if (pbVar21 == pbVar2) {
              fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar3 = *pbVar21;
            pbVar10 = pbVar10 + 1;
            uVar11 = uVar19 & 0x3f;
            uVar19 = uVar19 + 7;
            uVar12 = ((ulong)bVar3 & 0x7f) << uVar11 | uVar12;
            pbVar21 = pbVar21 + 1;
          } while ((char)bVar3 < '\0');
          uVar9 = (uint)(-1L << (uVar19 & 0x3f));
          if (((int)uVar19 - 7U < 0x39 & bVar3 >> 6) == 0) {
            uVar9 = 0;
          }
          apbStack_6a0[0xc0] = pbVar10;
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar12 | uVar9);
          break;
        case 0x14:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            fprintf((FILE *)0x16d358,
                    "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n"
                    ,uVar19);
            return 0;
          }
          lVar7 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          pcVar8 = (char *)(param_6 + uVar19 * 4 + 7);
          cVar4 = *pcVar8;
          lVar7 = lVar7 * *(int *)((long)param_3 + 0x2c);
          goto joined_r0x00162f74;
        case 0x15:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
            __size = 0x44;
            goto LAB_00163334;
          }
          uVar12 = 0;
          uVar11 = 0;
          pbVar21 = apbStack_6a0[0xc0];
          pbVar10 = apbStack_6a0[0xc0];
          do {
            if (pbVar10 == pbVar2) {
              fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar3 = *pbVar10;
            pbVar21 = pbVar21 + 1;
            uVar13 = uVar12 & 0x3f;
            uVar12 = uVar12 + 7;
            uVar11 = ((ulong)bVar3 & 0x7f) << uVar13 | uVar11;
            pbVar10 = pbVar10 + 1;
          } while ((char)bVar3 < '\0');
          apbStack_6a0[0xc0] = pbVar21;
          uVar13 = -1L << (uVar12 & 0x3f);
          pcVar8 = (char *)(param_6 + uVar19 * 4 + 7);
          cVar4 = *pcVar8;
          if (((int)uVar12 - 7U < 0x39 & bVar3 >> 6) == 0) {
            uVar13 = 0;
          }
          lVar7 = (uVar11 | uVar13) * (long)*(int *)((long)param_3 + 0x2c);
joined_r0x00162f74:
          puVar14 = param_6 + uVar19 * 4;
          if (cVar4 == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *pcVar8 = '\x01';
          }
          uVar6 = 3;
          goto LAB_00163144;
        case 0x16:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
            __size = 0x45;
            goto LAB_00163334;
          }
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          uVar6 = 6;
LAB_00162ff0:
          param_6[uVar19 * 4 + 6] = uVar6;
          *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[0xc0];
LAB_00162ff8:
          lVar7 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar7;
          break;
        default:
          bVar1 = bVar3 & 0xc0;
          uVar19 = (ulong)bVar3 & 0x3f;
          if (bVar1 == 0x40) {
            uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
            break;
          }
          if (bVar1 == 0xc0) {
            cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
            goto joined_r0x00163180;
          }
          if (bVar1 != 0x80) {
            return 0;
          }
          local_6dc = param_5;
          lVar7 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          lVar7 = lVar7 * *(int *)((long)param_3 + 0x2c);
          if (*(char *)(param_6 + uVar19 * 4 + 7) == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *(char *)(param_6 + uVar19 * 4 + 7) = '\x01';
          }
          puVar14 = param_6 + uVar19 * 4;
          param_5 = local_6dc;
          goto LAB_00163140;
        case 0x2d:
          if (param_5 == 4) {
            if (*(char *)(param_6 + 0x8f) == '\0') {
              pbVar21 = *(byte **)(param_6 + 0x8e);
              *(undefined1 *)(param_6 + 0x8f) = 1;
              local_6d8[1] = *(byte **)(param_6 + 0x90);
              *local_6d8 = pbVar21;
            }
            *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          }
          break;
        case 0x2e:
          uVar6 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          param_6[4] = uVar6;
          break;
        case 0x2f:
          uVar19 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          if (0x5f < uVar19) {
            pcVar8 = 
            "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
            __size = 0x53;
            goto LAB_00163334;
          }
          lVar7 = FUN_00163954(apbStack_6a0 + 0xc0,pbVar2);
          pcVar8 = (char *)(param_6 + uVar19 * 4 + 7);
          cVar4 = *pcVar8;
          lVar7 = -(lVar7 * *(int *)((long)param_3 + 0x2c));
joined_r0x0016311c:
          puVar14 = param_6 + uVar19 * 4;
          if (cVar4 == '\0') {
            pbVar21 = *(byte **)(param_6 + uVar19 * 4 + 6);
            apbStack_6a0[uVar19 * 2 + 1] = *(byte **)(param_6 + uVar19 * 4 + 8);
            apbStack_6a0[uVar19 * 2] = pbVar21;
            *pcVar8 = '\x01';
          }
LAB_00163140:
          uVar6 = 2;
LAB_00163144:
          puVar14[6] = uVar6;
          *(long *)(puVar14 + 8) = lVar7;
        }
      } while ((apbStack_6a0[0xc0] < pbVar2) && (pbVar21 = apbStack_6a0[0xc0], uVar17 < uVar16));
    }
    puVar20 = puVar20 + 3;
    if (puVar20 == local_6c8) {
      return 1;
    }
  } while( true );
}

