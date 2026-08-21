
void FUN_0011edd8(undefined8 *param_1,ulong *param_2,long param_3,ulong *param_4,undefined4 *param_5
                 )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong local_290;
  long local_288;
  ulong local_280;
  ulong local_278;
  ulong local_270 [64];
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  local_288 = 0;
  local_280 = 0;
  uVar2 = *param_1;
  lVar3 = param_1[1];
  lVar9 = _Uaarch64_get_accessors(lVar3);
  uVar13 = *param_2;
  *param_5 = 0;
  log2Console(3,"Bugly-libunwind","len=%lu, pushing cfa=0x%lx\n",param_3,param_1[2]);
  local_270[0] = param_1[2];
  uVar17 = *param_2;
  uVar14 = 0;
  if (uVar17 < uVar13 + param_3) {
    puVar1 = (undefined8 *)(lVar9 + 0x18);
    uVar14 = 1;
    do {
      *param_2 = uVar17 + 1;
      uVar10 = (*(code *)*puVar1)(lVar3,uVar17 & 0xfffffffffffffff8,&local_278,0,uVar2);
      if ((int)uVar10 < 0) goto LAB_001203e0;
      uVar20 = local_278 >> ((uVar17 - (uVar17 & 0xfffffffffffffff8)) * 8 & 0x3f);
      uVar17 = uVar20 & 0xff;
      bVar4 = (&DAT_0012a6da)[uVar17];
      if (((bVar4 & 0xc0) != 0) &&
         ((uVar10 = FUN_001204ac(lVar3,lVar9,param_2,bVar4 >> 3 & 7,&local_280,uVar2),
          (int)uVar10 < 0 ||
          (((char)bVar4 < '\0' &&
           (uVar10 = FUN_001204ac(lVar3,lVar9,param_2,bVar4 & 7,&local_288,uVar2), (int)uVar10 < 0))
          )))) goto LAB_001203e0;
      lVar16 = local_288;
      uVar19 = (uint)uVar20;
      uVar25 = (uint)uVar14;
      sVar8 = (short)local_280;
      switch(uVar19 & 0xff) {
      case 3:
      case 8:
      case 10:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
        pcVar11 = "OP_const(0x%lx)\n";
        goto LAB_0011efa4;
      default:
        pcVar11 = "Unexpected opcode 0x%x\n";
        uVar13 = (ulong)(uVar19 & 0xff);
LAB_001204a0:
        log2Console(3,"Bugly-libunwind",pcVar11,uVar13);
        goto LAB_001203dc;
      case 6:
        log2Console(3,"Bugly-libunwind","OP_deref\n");
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        uVar18 = local_270[uVar25];
        local_290 = uVar18 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar18 & 0xfffffffffffffff8,&local_278,0,uVar2);
        uVar20 = local_278;
        uVar17 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar22 = local_290 & 0xfffffffffffffff8;
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
        uVar21 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar6 = (uint)(uVar20 >> ((uVar18 - (uVar18 & 0xfffffffffffffff8)) * 8 & 0x3f));
        uVar15 = (uint)(local_278 >> ((uVar17 - uVar22) * 8 & 0x3f));
        uVar17 = local_290 & 0xfffffffffffffff8;
        uVar19 = uVar6 & 0xff | uVar15 << 8;
        if (*(int *)(lVar3 + 0x40) != 0) {
          uVar19 = uVar15 & 0xff | uVar6 << 8;
        }
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar17,&local_278,0,uVar2);
        uVar18 = local_278;
        uVar20 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar23 = local_290 & 0xfffffffffffffff8;
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar23,&local_278,0,uVar2);
        uVar22 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar18 = uVar18 >> ((uVar21 - uVar17) * 8 & 0x3f);
        uVar17 = local_278 >> ((uVar20 - uVar23) * 8 & 0x3f);
        if (*(int *)(lVar3 + 0x40) == 0) {
          uVar17 = (ulong)uVar19 & 0xffff | (uVar18 & 0xff | (uVar17 & 0xff) << 8) << 0x10;
        }
        else {
          uVar17 = ((ulong)uVar19 & 0xffff) << 0x10 | (uVar18 & 0xff) << 8 | uVar17 & 0xff;
        }
        uVar21 = local_290 & 0xfffffffffffffff8;
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar21,&local_278,0,uVar2);
        uVar18 = local_278;
        uVar20 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar24 = local_290 & 0xfffffffffffffff8;
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar24,&local_278,0,uVar2);
        uVar23 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar6 = (uint)(uVar18 >> ((uVar22 - uVar21) * 8 & 0x3f));
        uVar15 = (uint)(local_278 >> ((uVar20 - uVar24) * 8 & 0x3f));
        uVar20 = local_290 & 0xfffffffffffffff8;
        uVar19 = uVar6 & 0xff | uVar15 << 8;
        if (*(int *)(lVar3 + 0x40) != 0) {
          uVar19 = uVar15 & 0xff | uVar6 << 8;
        }
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar20,&local_278,0,uVar2);
        uVar21 = local_278;
        uVar18 = local_290;
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar22 = local_290 & 0xfffffffffffffff8;
        local_290 = local_290 + 1;
        uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
        if ((int)uVar10 < 0) goto LAB_001203e0;
        uVar21 = uVar21 >> ((uVar23 - uVar20) * 8 & 0x3f);
        uVar20 = local_278 >> ((uVar18 - uVar22) * 8 & 0x3f);
        if (*(int *)(lVar3 + 0x40) == 0) {
          uVar20 = (ulong)uVar19 & 0xffff | (uVar21 & 0xff | (uVar20 & 0xff) << 8) << 0x10;
        }
        else {
          uVar20 = ((ulong)uVar19 & 0xffff) << 0x10 | (uVar21 & 0xff) << 8 | uVar20 & 0xff;
        }
        uVar18 = uVar17 | uVar20 << 0x20;
        if (*(int *)(lVar3 + 0x40) != 0) {
          uVar18 = uVar20 | uVar17 << 0x20;
        }
        local_270[uVar25] = uVar18;
        break;
      case 9:
        if (((uint)local_280 >> 7 & 1) != 0) {
          local_280 = local_280 | 0xffffffffffffff00;
        }
        pcVar11 = "OP_const1s(%ld)\n";
        goto LAB_0011efa4;
      case 0xb:
        if (((uint)local_280 >> 0xf & 1) != 0) {
          local_280 = local_280 | 0xffffffffffff0000;
        }
        pcVar11 = "OP_const2s(%ld)\n";
        goto LAB_0011efa4;
      case 0xd:
        if ((int)(uint)local_280 < 0) {
          local_280 = local_280 | 0xffffffff00000000;
        }
        pcVar11 = "OP_const4s(%ld)\n";
LAB_0011efa4:
        log2Console(3,"Bugly-libunwind",pcVar11,local_280);
        uVar17 = local_280;
        if (0x3f < uVar25) goto LAB_001203c4;
LAB_0011efb8:
        local_270[uVar14] = uVar17;
        uVar14 = (ulong)(uVar25 + 1);
        break;
      case 0x12:
        log2Console(3,"Bugly-libunwind","OP_dup\n");
        if (0x3f < uVar25) goto LAB_001203c4;
        uVar19 = uVar25 - 1;
joined_r0x0011f374:
        if (0x3f < uVar19) {
          pcVar11 = "Out-of-stack pick\n";
          goto LAB_001203d4;
        }
        local_270[uVar14] = local_270[uVar19];
        uVar14 = (ulong)(uVar25 + 1);
        break;
      case 0x13:
        log2Console(3,"Bugly-libunwind","OP_drop\n");
        uVar14 = (ulong)(uVar25 - 1);
        if (0x3f < uVar25 - 1) goto LAB_00120384;
        break;
      case 0x14:
        log2Console(3,"Bugly-libunwind","OP_over\n");
        if (uVar25 < 0x40) {
          uVar19 = uVar25 - 2;
          goto joined_r0x0011f374;
        }
        goto LAB_001203c4;
      case 0x15:
        log2Console(3,"Bugly-libunwind","OP_pick(%d)\n",local_280 & 0xffffffff);
        if (uVar25 < 0x40) {
          uVar19 = uVar25 + ~(uint)local_280;
          goto joined_r0x0011f374;
        }
        goto LAB_001203c4;
      case 0x16:
        log2Console(3,"Bugly-libunwind","OP_swap\n");
        uVar19 = uVar25 - 1;
        if (0x3f < uVar19) goto LAB_00120384;
        local_290 = local_270[uVar19];
        uVar25 = uVar25 - 2;
        if (0x3f < uVar25) goto LAB_00120384;
        uVar17 = local_270[uVar25];
        local_270[uVar25] = local_290;
        local_270[uVar19] = uVar17;
        break;
      case 0x17:
        log2Console(3,"Bugly-libunwind","OP_rot\n");
        uVar19 = uVar25 - 1;
        if (0x3f < uVar19) goto LAB_00120384;
        local_290 = local_270[uVar19];
        uVar6 = uVar25 - 2;
        if ((0x3f < uVar6) || (uVar25 = uVar25 - 3, 0x3f < uVar25)) goto LAB_00120384;
        uVar17 = local_270[uVar25];
        uVar20 = local_270[uVar6];
        local_270[uVar25] = local_290;
        local_270[uVar6] = uVar17;
        local_270[uVar19] = uVar20;
        break;
      case 0x19:
        log2Console(3,"Bugly-libunwind","OP_abs\n");
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        uVar17 = local_270[uVar25];
        local_290 = -uVar17;
        if (-1 < (long)uVar17) {
          local_290 = uVar17;
        }
        local_270[uVar25] = local_290;
        break;
      case 0x1a:
        log2Console(3,"Bugly-libunwind","OP_and\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] & local_290;
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x1b:
        log2Console(3,"Bugly-libunwind","OP_div\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          if (uVar25 - 2 < 0x40) {
            uVar17 = (ulong)(uVar25 - 2);
            uVar14 = local_290;
            if (local_290 != 0) {
              uVar14 = 0;
              if (local_290 != 0) {
                uVar14 = (long)local_270[uVar17] / (long)local_290;
              }
            }
            goto LAB_0011fa00;
          }
        }
        goto LAB_00120384;
      case 0x1c:
        log2Console(3,"Bugly-libunwind","OP_minus\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] - local_290;
            local_290 = uVar14;
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x1d:
        log2Console(3,"Bugly-libunwind","OP_mod\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          if (uVar25 - 2 < 0x40) {
            uVar17 = (ulong)(uVar25 - 2);
            uVar14 = local_290;
            if (local_290 != 0) {
              uVar14 = 0;
              if (local_290 != 0) {
                uVar14 = local_270[uVar17] / local_290;
              }
              uVar14 = local_270[uVar17] - uVar14 * local_290;
            }
            goto LAB_0011fa00;
          }
        }
        goto LAB_00120384;
      case 0x1e:
        log2Console(3,"Bugly-libunwind","OP_mul\n");
        if (0x3f < uVar25 - 1) goto LAB_00120384;
        local_290 = local_270[uVar25 - 1];
        if (0x3f < uVar25 - 2) goto LAB_00120384;
        uVar17 = (ulong)(uVar25 - 2);
        uVar14 = local_290;
        if (local_290 != 0) {
          uVar14 = local_270[uVar17] * local_290;
        }
LAB_0011fa00:
        local_290 = uVar14;
        local_270[uVar17] = local_290;
        uVar14 = (ulong)(uVar25 - 1);
        break;
      case 0x1f:
        log2Console(3,"Bugly-libunwind","OP_neg\n");
        if (0x3f < uVar25) goto LAB_001203c4;
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        local_270[uVar25] = -local_270[uVar25];
        break;
      case 0x20:
        log2Console(3,"Bugly-libunwind","OP_not\n");
        if (0x3f < uVar25) goto LAB_001203c4;
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        local_270[uVar25] = ~local_270[uVar25];
        break;
      case 0x21:
        log2Console(3,"Bugly-libunwind","OP_or\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] | local_290;
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x22:
        log2Console(3,"Bugly-libunwind","OP_plus\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] + local_290;
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x23:
        log2Console(3,"Bugly-libunwind","OP_plus_uconst(%lu)\n",local_280);
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        local_290 = local_270[uVar25];
        local_270[uVar25] = local_280 + local_290;
        break;
      case 0x24:
        log2Console(3,"Bugly-libunwind","OP_shl\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] << (local_290 & 0x3f);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x25:
        log2Console(3,"Bugly-libunwind","OP_shr\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] >> (local_290 & 0x3f);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x26:
        log2Console(3,"Bugly-libunwind","OP_shra\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (long)local_270[uVar19] >> (local_290 & 0x3f);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x27:
        log2Console(3,"Bugly-libunwind","OP_xor\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = local_270[uVar19] ^ local_290;
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x28:
        log2Console(3,"Bugly-libunwind","OP_skip(%d)\n",(long)sVar8);
        uVar25 = uVar25 - 1;
        uVar14 = (ulong)uVar25;
        if (0x3f < uVar25) goto LAB_00120384;
        local_290 = local_270[uVar25];
        if (local_290 != 0) goto LAB_0011f4b8;
        break;
      case 0x29:
        log2Console(3,"Bugly-libunwind","OP_eq\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (ulong)(local_270[uVar19] == local_290);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x2a:
        log2Console(3,"Bugly-libunwind","OP_ge\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (ulong)((long)local_290 <= (long)local_270[uVar19]);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x2b:
        log2Console(3,"Bugly-libunwind","OP_gt\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (ulong)((long)local_290 < (long)local_270[uVar19]);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x2c:
        log2Console(3,"Bugly-libunwind","OP_le\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (ulong)((long)local_270[uVar19] <= (long)local_290);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x2d:
        log2Console(3,"Bugly-libunwind","OP_lt\n");
        if (uVar25 - 1 < 0x40) {
          local_290 = local_270[uVar25 - 1];
          uVar19 = uVar25 - 2;
          if (uVar19 < 0x40) {
            lVar16 = (ulong)uVar19 * 8;
            uVar14 = (ulong)((long)local_270[uVar19] < (long)local_290);
            goto LAB_0011fc7c;
          }
        }
        goto LAB_00120384;
      case 0x2e:
        log2Console(3,"Bugly-libunwind","OP_ne\n");
        if (0x3f < uVar25 - 1) goto LAB_00120384;
        local_290 = local_270[uVar25 - 1];
        uVar19 = uVar25 - 2;
        if (0x3f < uVar19) goto LAB_00120384;
        lVar16 = (ulong)uVar19 * 8;
        uVar14 = (ulong)(local_270[uVar19] != local_290);
LAB_0011fc7c:
        *(ulong *)((long)local_270 + lVar16) = uVar14;
        uVar14 = (ulong)(uVar25 - 1);
        break;
      case 0x2f:
        log2Console(3,"Bugly-libunwind","OP_skip(%d)\n",(long)sVar8);
LAB_0011f4b8:
        *param_2 = (long)(short)local_280 + *param_2;
        break;
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
        log2Console(3,"Bugly-libunwind","OP_lit(%d)\n",(uVar19 & 0xff) - 0x30);
        if (0x3f < uVar25) goto LAB_001203c4;
        uVar17 = uVar17 - 0x30;
        goto LAB_0011efb8;
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
        iVar5 = (uVar19 & 0xff) - 0x50;
        log2Console(3,"Bugly-libunwind","OP_reg(r%d)\n",iVar5);
        if (0x5f < iVar5) {
          iVar5 = 0;
        }
        *param_4 = (long)iVar5;
        uVar10 = 0;
        *param_5 = 1;
        goto LAB_001203e0;
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
        iVar5 = (uVar19 & 0xff) - 0x70;
        log2Console(3,"Bugly-libunwind","OP_breg(r%d,0x%lx)\n",iVar5,local_280);
        if (0x5f < iVar5) {
          iVar5 = 0;
        }
        uVar10 = _Uaarch64_get_reg(param_1,iVar5,&local_290);
        if (-1 < (int)uVar10) {
          if (uVar25 < 0x40) {
            uVar17 = local_280 + local_290;
            goto LAB_0011efb8;
          }
          goto LAB_001203c4;
        }
        goto LAB_001203e0;
      case 0x90:
        log2Console(3,"Bugly-libunwind","OP_regx(r%d)\n",local_280 & 0xffffffff);
        uVar10 = 0;
        uVar13 = local_280;
        if (0x5f < local_280) {
          uVar13 = 0;
        }
        *param_4 = uVar13;
        *param_5 = 1;
        goto LAB_001203e0;
      case 0x92:
        log2Console(3,"Bugly-libunwind","OP_bregx(r%d,0x%lx)\n",local_280 & 0xffffffff,local_288);
        uVar12 = (undefined4)local_280;
        if (0x5f < local_280) {
          uVar12 = 0;
        }
        uVar10 = _Uaarch64_get_reg(param_1,uVar12,&local_290);
        if ((int)uVar10 < 0) goto LAB_001203e0;
        if (uVar25 < 0x40) {
          uVar17 = local_290 + lVar16;
          goto LAB_0011efb8;
        }
LAB_001203c4:
        pcVar11 = "Stack overflow\n";
        goto LAB_001203d4;
      case 0x94:
        log2Console(3,"Bugly-libunwind","OP_deref_size(%d)\n",local_280 & 0xffffffff);
        uVar25 = uVar25 - 1;
        if (0x3f < uVar25) goto LAB_00120384;
        uVar17 = local_270[uVar25];
        switch(local_280) {
        case 1:
          local_290 = uVar17 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17 & 0xfffffffffffffff8,&local_278,0,uVar2);
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar18 = local_278 >> ((uVar17 - (uVar17 & 0xfffffffffffffff8)) * 8 & 0x3f) & 0xff;
          break;
        case 2:
          local_290 = uVar17 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17 & 0xfffffffffffffff8,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar21 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar21,&local_278,0,uVar2);
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar6 = (uint)(uVar18 >> ((uVar17 - (uVar17 & 0xfffffffffffffff8)) * 8 & 0x3f));
          uVar15 = (uint)(local_278 >> ((uVar20 - uVar21) * 8 & 0x3f));
          uVar19 = uVar6 & 0xff | uVar15 << 8;
          if (*(int *)(lVar3 + 0x40) != 0) {
            uVar19 = uVar15 & 0xff | uVar6 << 8;
          }
          uVar18 = (ulong)uVar19 & 0xffff;
          break;
        case 3:
        case 4:
          local_290 = uVar17 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17 & 0xfffffffffffffff8,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar22 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
          uVar21 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar6 = (uint)(uVar18 >> ((uVar17 - (uVar17 & 0xfffffffffffffff8)) * 8 & 0x3f));
          uVar15 = (uint)(local_278 >> ((uVar20 - uVar22) * 8 & 0x3f));
          uVar17 = local_290 & 0xfffffffffffffff8;
          uVar19 = uVar6 & 0xff | uVar15 << 8;
          if (*(int *)(lVar3 + 0x40) != 0) {
            uVar19 = uVar15 & 0xff | uVar6 << 8;
          }
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar22 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar18 = uVar18 >> ((uVar21 - uVar17) * 8 & 0x3f);
          uVar17 = local_278 >> ((uVar20 - uVar22) * 8 & 0x3f);
          if (*(int *)(lVar3 + 0x40) == 0) {
            uVar18 = (ulong)uVar19 & 0xffff | (uVar18 & 0xff | (uVar17 & 0xff) << 8) << 0x10;
          }
          else {
            uVar18 = uVar17 & 0xff | (uVar18 & 0xff) << 8 | ((ulong)uVar19 & 0xffff) << 0x10;
          }
          uVar17 = 0xffffff;
          if (local_280 != 3) {
            uVar17 = 0xffffffff;
          }
LAB_001202c8:
          uVar18 = uVar18 & uVar17;
          break;
        case 5:
        case 6:
        case 7:
        case 8:
          local_290 = uVar17 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17 & 0xfffffffffffffff8,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar22 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
          uVar21 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar6 = (uint)(uVar18 >> ((uVar17 - (uVar17 & 0xfffffffffffffff8)) * 8 & 0x3f));
          uVar15 = (uint)(local_278 >> ((uVar20 - uVar22) * 8 & 0x3f));
          uVar17 = local_290 & 0xfffffffffffffff8;
          uVar19 = uVar6 & 0xff | uVar15 << 8;
          if (*(int *)(lVar3 + 0x40) != 0) {
            uVar19 = uVar15 & 0xff | uVar6 << 8;
          }
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar17,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar23 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar23,&local_278,0,uVar2);
          uVar22 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar18 = uVar18 >> ((uVar21 - uVar17) * 8 & 0x3f);
          uVar17 = local_278 >> ((uVar20 - uVar23) * 8 & 0x3f);
          if (*(int *)(lVar3 + 0x40) == 0) {
            uVar17 = (ulong)uVar19 & 0xffff | (uVar18 & 0xff | (uVar17 & 0xff) << 8) << 0x10;
          }
          else {
            uVar17 = uVar17 & 0xff | (uVar18 & 0xff) << 8 | ((ulong)uVar19 & 0xffff) << 0x10;
          }
          uVar21 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar21,&local_278,0,uVar2);
          uVar18 = local_278;
          uVar20 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar24 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar24,&local_278,0,uVar2);
          uVar23 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar6 = (uint)(uVar18 >> ((uVar22 - uVar21) * 8 & 0x3f));
          uVar15 = (uint)(local_278 >> ((uVar20 - uVar24) * 8 & 0x3f));
          uVar20 = local_290 & 0xfffffffffffffff8;
          uVar19 = uVar6 & 0xff | uVar15 << 8;
          if (*(int *)(lVar3 + 0x40) != 0) {
            uVar19 = uVar15 & 0xff | uVar6 << 8;
          }
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar20,&local_278,0,uVar2);
          uVar21 = local_278;
          uVar18 = local_290;
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar22 = local_290 & 0xfffffffffffffff8;
          local_290 = local_290 + 1;
          uVar10 = (*(code *)*puVar1)(lVar3,uVar22,&local_278,0,uVar2);
          if ((int)uVar10 < 0) goto LAB_001203e0;
          uVar21 = uVar21 >> ((uVar23 - uVar20) * 8 & 0x3f);
          uVar20 = local_278 >> ((uVar18 - uVar22) * 8 & 0x3f);
          if (*(int *)(lVar3 + 0x40) == 0) {
            uVar20 = (ulong)uVar19 & 0xffff | (uVar21 & 0xff | (uVar20 & 0xff) << 8) << 0x10;
          }
          else {
            uVar20 = uVar20 & 0xff | (uVar21 & 0xff) << 8 | ((ulong)uVar19 & 0xffff) << 0x10;
          }
          uVar18 = uVar17 | uVar20 << 0x20;
          if (*(int *)(lVar3 + 0x40) != 0) {
            uVar18 = uVar20 | uVar17 << 0x20;
          }
          if (local_280 != 8) {
            uVar17 = -1L << ((local_280 & 7) << 3);
            goto LAB_001202c8;
          }
          break;
        default:
          pcVar11 = "Unexpected DW_OP_deref_size size %d\n";
          uVar13 = local_280;
          local_290 = uVar17;
          goto LAB_001204a0;
        }
        local_270[uVar25] = uVar18;
        break;
      case 0x96:
        log2Console(3,"Bugly-libunwind","OP_nop\n");
      }
      uVar17 = *param_2;
    } while (uVar17 < uVar13 + param_3);
    uVar25 = (int)uVar14 - 1;
    uVar14 = (ulong)uVar25;
    if (0x3f < uVar25) {
LAB_00120384:
      pcVar11 = "Stack underflow\n";
LAB_001203d4:
      log2Console(3,"Bugly-libunwind",pcVar11);
LAB_001203dc:
      uVar10 = 0xfffffff8;
      goto LAB_001203e0;
    }
  }
  *param_4 = local_270[uVar14];
  log2Console(3,"Bugly-libunwind","final value = 0x%lx\n");
  uVar10 = 0;
LAB_001203e0:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

