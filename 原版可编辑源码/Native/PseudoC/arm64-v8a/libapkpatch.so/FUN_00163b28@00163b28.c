
ulong FUN_00163b28(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 auVar14 [16];
  ulong local_358 [99];
  byte *local_28;
  
  local_28 = param_1;
  lVar4 = FUN_00163954(&local_28,param_1 + 0x14);
  local_358[0] = param_4;
  pbVar1 = local_28 + lVar4;
  if (local_28 < pbVar1) {
    puVar13 = local_358;
    pbVar9 = local_28;
    do {
      pbVar7 = pbVar9 + 1;
      local_28 = pbVar7;
      uVar3 = (uint)*pbVar9;
      if (0x91 < uVar3 - 3) {
code_r0x00164360:
        fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","evaluateExpression",
                "DWARF opcode not implemented");
        fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = (uint)*pbVar9;
      switch(uVar3) {
      case 3:
      case 0xe:
      case 0xf:
        uVar11 = *(ulong *)(pbVar9 + 1);
        local_28 = pbVar9 + 9;
        goto LAB_00163ec4;
      case 4:
      case 5:
      case 7:
        goto code_r0x00164360;
      case 6:
        puVar8 = (ulong *)*puVar13;
code_r0x00163db0:
        *puVar13 = *puVar8;
        break;
      case 8:
        uVar11 = (ulong)pbVar9[1];
        goto LAB_00163ec0;
      case 9:
        uVar11 = (ulong)(char)pbVar9[1];
        goto LAB_00163ec0;
      case 10:
        uVar11 = (ulong)*(ushort *)(pbVar9 + 1);
        local_28 = pbVar9 + 3;
        goto LAB_00163ec4;
      case 0xb:
        uVar11 = (ulong)*(short *)(pbVar9 + 1);
        local_28 = pbVar9 + 3;
        goto LAB_00163ec4;
      case 0xc:
        uVar11 = (ulong)*(uint *)(pbVar9 + 1);
        local_28 = pbVar9 + 5;
        goto LAB_00163ec4;
      case 0xd:
        uVar11 = (ulong)*(int *)(pbVar9 + 1);
        local_28 = pbVar9 + 5;
        goto LAB_00163ec4;
      case 0x10:
        uVar11 = FUN_00163954(&local_28,pbVar1);
        puVar13 = puVar13 + 1;
        *puVar13 = uVar11;
        break;
      case 0x11:
        uVar11 = 0;
        uVar6 = 0;
        pbVar9 = pbVar7;
        do {
          if (pbVar9 == pbVar1) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar2 = *pbVar9;
          pbVar7 = pbVar7 + 1;
          uVar12 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar6 = ((ulong)bVar2 & 0x7f) << uVar12 | uVar6;
          pbVar9 = pbVar9 + 1;
        } while ((char)bVar2 < '\0');
        uVar12 = -1L << (uVar11 & 0x3f);
        if (((int)uVar11 - 7U < 0x39 & bVar2 >> 6) == 0) {
          uVar12 = 0;
        }
        local_28 = pbVar7;
        puVar13 = puVar13 + 1;
        *puVar13 = uVar6 | uVar12;
        break;
      case 0x12:
        uVar11 = *puVar13;
        goto LAB_00163b94;
      case 0x13:
        puVar13 = puVar13 + -1;
        break;
      case 0x14:
        uVar11 = puVar13[-1];
        goto LAB_00163b94;
      case 0x15:
        uVar11 = puVar13[-(ulong)pbVar9[1]];
LAB_00163ec0:
        local_28 = pbVar9 + 2;
LAB_00163ec4:
        goto LAB_00163b94;
      case 0x16:
        auVar14 = NEON_ext(*(undefined1 (*) [16])(puVar13 + -1),*(undefined1 (*) [16])(puVar13 + -1)
                           ,8,1);
        *puVar13 = auVar14._8_8_;
        puVar13[-1] = auVar14._0_8_;
        break;
      case 0x17:
        uVar11 = *puVar13;
        *puVar13 = SUB168(*(undefined1 (*) [16])(puVar13 + -2),8);
        puVar13[-1] = SUB168(*(undefined1 (*) [16])(puVar13 + -2),0);
        puVar13[-2] = uVar11;
        break;
      case 0x18:
        puVar8 = (ulong *)*puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar8;
        break;
      case 0x19:
        uVar11 = *puVar13;
        if ((long)uVar11 < 0) goto LAB_00163fa0;
        break;
      case 0x1a:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 & uVar11;
        break;
      case 0x1b:
        uVar6 = *puVar13;
        puVar13 = puVar13 + -1;
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = (long)*puVar13 / (long)uVar6;
        }
        *puVar13 = uVar11;
        break;
      case 0x1c:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 - uVar11;
        break;
      case 0x1d:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        lVar4 = 0;
        if (uVar11 != 0) {
          lVar4 = (long)*puVar13 / (long)uVar11;
        }
        *puVar13 = *puVar13 - lVar4 * uVar11;
        break;
      case 0x1e:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 * uVar11;
        break;
      case 0x1f:
        uVar11 = *puVar13;
LAB_00163fa0:
        *puVar13 = -uVar11;
        break;
      case 0x20:
        *puVar13 = ~*puVar13;
        break;
      case 0x21:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 | uVar11;
        break;
      case 0x22:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 + uVar11;
        break;
      case 0x23:
        lVar4 = FUN_00163954(&local_28,pbVar1);
        *puVar13 = *puVar13 + lVar4;
        break;
      case 0x24:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 << (uVar11 & 0x3f);
        break;
      case 0x25:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 >> (uVar11 & 0x3f);
        break;
      case 0x26:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = (long)*puVar13 >> (uVar11 & 0x3f);
        break;
      case 0x27:
        uVar11 = *puVar13;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar13 ^ uVar11;
        break;
      case 0x28:
        puVar8 = puVar13 + -1;
        uVar11 = *puVar13;
        local_28 = pbVar9 + 3;
        puVar13 = puVar8;
        if (uVar11 != 0) {
          local_28 = pbVar9 + 3 + *(short *)(pbVar9 + 1);
        }
        break;
      case 0x29:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar8 == *puVar13);
        puVar13 = puVar8;
        break;
      case 0x2a:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar13 <= *puVar8);
        puVar13 = puVar8;
        break;
      case 0x2b:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar13 < *puVar8);
        puVar13 = puVar8;
        break;
      case 0x2c:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar8 <= *puVar13);
        puVar13 = puVar8;
        break;
      case 0x2d:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar8 < *puVar13);
        puVar13 = puVar8;
        break;
      case 0x2e:
        puVar8 = puVar13 + -1;
        *puVar8 = (ulong)(*puVar8 != *puVar13);
        puVar13 = puVar8;
        break;
      case 0x2f:
        local_28 = pbVar9 + (long)*(short *)(pbVar9 + 1) + 3;
        break;
      default:
        uVar11 = (ulong)(uVar10 - 0x30);
        goto LAB_00163b94;
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
        puVar8 = (ulong *)(param_3 + 0xf8);
        if (((uVar10 != 0x6f) && (puVar8 = (ulong *)(param_3 + 0xf0), uVar10 != 0x6e)) &&
           (puVar8 = (ulong *)(param_3 + 0xe8), uVar10 != 0x6d)) {
          puVar8 = (ulong *)(param_3 + (ulong)(uVar10 - 0x50) * 8);
        }
        goto code_r0x00163b90;
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
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
        uVar11 = 0;
        uVar6 = 0;
        pbVar9 = pbVar7;
        do {
          if (pbVar9 == pbVar1) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar2 = *pbVar9;
          pbVar7 = pbVar7 + 1;
          uVar12 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar6 = ((ulong)bVar2 & 0x7f) << uVar12 | uVar6;
          pbVar9 = pbVar9 + 1;
        } while ((char)bVar2 < '\0');
        uVar12 = -1L << (uVar11 & 0x3f);
        if (((int)uVar11 - 7U < 0x39 & bVar2 >> 6) == 0) {
          uVar12 = 0;
        }
        local_28 = pbVar7;
        if (uVar10 - 0x6e < 0x25) {
          plVar5 = (long *)(param_3 + 0x100);
          switch(uVar10) {
          case 0x6e:
          case 0x8f:
            plVar5 = (long *)(param_3 + 0xf8);
            break;
          case 0x6f:
          case 0x90:
            break;
          default:
            goto code_r0x00163c9c;
          case 0x8d:
            plVar5 = (long *)(param_3 + 0xe8);
            break;
          case 0x8e:
            plVar5 = (long *)(param_3 + 0xf0);
            break;
          case 0x92:
            plVar5 = (long *)(param_3 + 0x108);
          }
        }
        else {
code_r0x00163c9c:
          if (0x1c < uVar3 - 0x70) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar5 = (long *)(param_3 + (ulong)(uVar3 - 0x70) * 8);
        }
        uVar11 = *plVar5 + (uVar6 | uVar12);
        goto LAB_00163b94;
      case 0x90:
        uVar3 = FUN_00163954(&local_28,pbVar1);
        if (uVar3 + 2 < 0x25) {
          puVar8 = (ulong *)(param_3 + 0x100);
          switch(uVar3) {
          default:
            goto code_r0x001641e8;
          case 0x1d:
            puVar8 = (ulong *)(param_3 + 0xe8);
            break;
          case 0x1e:
            puVar8 = (ulong *)(param_3 + 0xf0);
            break;
          case 0x22:
            puVar8 = (ulong *)(param_3 + 0x108);
            break;
          case 0xfffffffe:
          case 0x1f:
            puVar8 = (ulong *)(param_3 + 0xf8);
            break;
          case 0xffffffff:
          case 0x20:
            break;
          }
        }
        else {
code_r0x001641e8:
          if (0x1c < uVar3) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar8 = (ulong *)(param_3 + (ulong)uVar3 * 8);
        }
code_r0x00163b90:
        uVar11 = *puVar8;
        goto LAB_00163b94;
      case 0x91:
        fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar3 = FUN_00163954(&local_28,pbVar1);
        uVar11 = 0;
        uVar6 = 0;
        pbVar9 = local_28;
        pbVar7 = local_28;
        do {
          if (pbVar7 == pbVar1) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getSLEB128",
                    "truncated sleb128 expression");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar2 = *pbVar7;
          pbVar9 = pbVar9 + 1;
          uVar12 = uVar11 & 0x3f;
          uVar11 = uVar11 + 7;
          uVar6 = ((ulong)bVar2 & 0x7f) << uVar12 | uVar6;
          pbVar7 = pbVar7 + 1;
        } while ((char)bVar2 < '\0');
        uVar12 = -1L << (uVar11 & 0x3f);
        if (((int)uVar11 - 7U < 0x39 & bVar2 >> 6) == 0) {
          uVar12 = 0;
        }
        local_28 = pbVar9;
        if (uVar3 + 2 < 0x25) {
          plVar5 = (long *)(param_3 + 0x100);
          switch(uVar3) {
          default:
            goto code_r0x00164214;
          case 0x1d:
            plVar5 = (long *)(param_3 + 0xe8);
            break;
          case 0x1e:
            plVar5 = (long *)(param_3 + 0xf0);
            break;
          case 0x22:
            plVar5 = (long *)(param_3 + 0x108);
            break;
          case 0xfffffffe:
          case 0x1f:
            plVar5 = (long *)(param_3 + 0xf8);
            break;
          case 0xffffffff:
          case 0x20:
            break;
          }
        }
        else {
code_r0x00164214:
          if (0x1c < uVar3) {
            fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar5 = (long *)(param_3 + (ulong)uVar3 * 8);
        }
        uVar11 = *plVar5 + (uVar6 | uVar12);
LAB_00163b94:
        puVar13[1] = uVar11;
        puVar13 = puVar13 + 1;
        break;
      case 0x93:
        fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_piece not implemented");
        fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x94:
        local_28 = pbVar9 + 2;
        puVar8 = (ulong *)*puVar13;
        switch(pbVar9[1]) {
        case 1:
          *puVar13 = (ulong)(byte)*puVar8;
          break;
        case 2:
          *puVar13 = (ulong)(ushort)*puVar8;
          break;
        default:
          fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","evaluateExpression",
                  "DW_OP_deref_size with bad size");
          fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
          abort();
        case 4:
          *puVar13 = (ulong)(uint)*puVar8;
          break;
        case 8:
          goto code_r0x00163db0;
        }
      }
      pbVar9 = local_28;
    } while (local_28 < pbVar1);
    param_4 = *puVar13;
  }
  return param_4;
}

