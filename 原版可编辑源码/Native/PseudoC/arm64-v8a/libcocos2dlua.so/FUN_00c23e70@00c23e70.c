
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c23e70(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong **ppuVar20;
  long *plVar21;
  short sVar22;
  undefined *local_38;
  undefined *local_30 [2];
  ulong local_20 [2];
  ulong *local_10 [2];
  
  puVar19 = *(ulong **)(param_1 + 0x20);
  puVar14 = *(ulong **)(param_1 + 0x28);
  plVar21 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar21[2] = param_1;
  if (puVar14 <= puVar19 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb554(param_1,1,10);
  }
  uVar13 = *puVar19;
  bVar3 = true;
  ppuVar20 = local_10;
  iVar8 = 0;
  if ((int)((long)uVar13 >> 0x2f) == -0xb) goto LAB_00c2406c;
LAB_00c23ee4:
  uVar5 = (uint)((long)uVar13 >> 0x2f);
  if (uVar5 == 0xfffffff2) {
    lVar9 = *plVar21;
    ppuVar20[-2] = puVar19;
    *ppuVar20 = (ulong *)(lVar9 + 0xd8);
  }
  else if (uVar5 < 0xfffffff2) {
    lVar9 = *plVar21;
    ppuVar20[-2] = puVar19;
    *ppuVar20 = (ulong *)(lVar9 + 0x150);
  }
  else if (uVar13 == 0xffffffffffffffff) {
    lVar9 = *plVar21;
    ppuVar20[-2] = (ulong *)0x0;
    *ppuVar20 = (ulong *)(lVar9 + 0x198);
  }
  else if (uVar5 == 0xfffffffb) {
    puVar14 = puVar19 + -1;
    if (iVar8 == 0) {
      puVar14 = puVar19 + 1;
    }
    uVar1 = *(ushort *)((*puVar14 & 0x7fffffffffff) + 10);
    while( true ) {
      puVar14 = (ulong *)(*plVar21 + (ulong)uVar1 * 0x18);
      uVar5 = *(uint *)(*plVar21 + (ulong)uVar1 * 0x18);
      uVar17 = uVar5 >> 0x1c;
      if (uVar17 != 8) break;
      uVar1 = (ushort)uVar5;
    }
    uVar13 = *puVar19;
    *ppuVar20 = (ulong *)0x0;
    bVar3 = false;
    ppuVar20[-2] = (ulong *)((uVar13 & 0x7fffffffffff) + 0x18);
    if (uVar17 == 5) {
      puVar12 = (uint *)FUN_00c0e9cc(plVar21,puVar14,uVar13 & 0x7fffffffffff,local_30,0);
      if ((puVar12 == (uint *)0x0) || (uVar5 = *puVar12, uVar5 >> 0x1c != 0xb)) {
        local_10[1U - iVar8] = puVar14;
        local_20[1U - iVar8] = 0;
LAB_00c240e4:
        puVar19 = *(ulong **)(param_1 + 0x20);
        if ((int)((long)*puVar19 >> 0x2f) == -0xb) {
          uVar1 = *(ushort *)((*puVar19 & 0x7fffffffffff) + 10);
          uVar2 = uVar1;
          while( true ) {
            uVar5 = *(uint *)(*plVar21 + (ulong)uVar2 * 0x18);
            if (uVar5 >> 0x1c != 8) break;
            uVar2 = (ushort)uVar5;
          }
          uVar17 = uVar5 & 0xffff;
          if (uVar5 >> 0x1c != 2) {
            uVar17 = (uint)uVar1;
          }
          lVar9 = FUN_00c0ed6c(plVar21,uVar17,param_2);
          if (lVar9 != 0) goto LAB_00c243d4;
          puVar19 = *(ulong **)(param_1 + 0x20);
        }
        if ((puVar19 + 1 < *(ulong **)(param_1 + 0x28)) && ((int)((long)puVar19[1] >> 0x2f) == -0xb)
           ) {
          uVar1 = *(ushort *)((puVar19[1] & 0x7fffffffffff) + 10);
          uVar2 = uVar1;
          while( true ) {
            uVar5 = *(uint *)(*plVar21 + (ulong)uVar2 * 0x18);
            if (uVar5 >> 0x1c != 8) break;
            uVar2 = (ushort)uVar5;
          }
          uVar17 = uVar5 & 0xffff;
          if (uVar5 >> 0x1c != 2) {
            uVar17 = (uint)uVar1;
          }
          lVar9 = FUN_00c0ed6c(plVar21,uVar17,param_2);
          if (lVar9 != 0) {
LAB_00c243d4:
            uVar11 = FUN_00c1cda4(param_1,lVar9);
            return uVar11;
          }
        }
        if (param_2 == 4) {
          uVar13 = ~((ulong)((local_20[0] == local_20[1]) + 1) << 0x2f);
          *(ulong *)(*(long *)(param_1 + 0x28) + -8) = uVar13;
          *(ulong *)(*(long *)(param_1 + 0x10) + 0xe0) = uVar13;
          return 1;
        }
        if (local_10[0] == (ulong *)0x0) {
          puVar15 = *(undefined8 **)(param_1 + 0x20);
          iVar8 = (int)((ulong)*puVar15 >> 0x20);
LAB_00c2412c:
          uVar5 = iVar8 >> 0xf;
          if (uVar5 == 0xfffffffb) {
            uVar17 = 0;
LAB_00c245bc:
            uVar13 = (ulong)~uVar5;
          }
          else {
            uVar17 = 0xffffffff;
            if (0xfffffff2 < uVar5) goto LAB_00c245bc;
            uVar13 = 0xd;
          }
          uVar5 = 0xffffffff;
          local_30[0] = (&PTR_DAT_01697110)[uVar13];
        }
        else {
          puVar15 = *(undefined8 **)(param_1 + 0x20);
          iVar8 = (int)((ulong)*puVar15 >> 0x20);
          if (iVar8 >> 0xf != -0xb) goto LAB_00c2412c;
          uVar17 = 0xffffffff;
          uVar5 = -(uint)((uint)*local_10[0] >> 0x1c != 5);
          lVar9 = FUN_00c0ee70(param_1,(int)((long)local_10[0] - *plVar21 >> 3) * -0x55555555,0);
          puVar15 = *(undefined8 **)(param_1 + 0x20);
          local_30[0] = (undefined *)(lVar9 + 0x18);
        }
        uVar6 = (uint)((long)puVar15[1] >> 0x2f);
        if ((local_10[1] != (ulong *)0x0) && (uVar6 == 0xfffffff5)) {
          if ((uint)*local_10[1] >> 0x1c == 5) {
            uVar5 = 1;
          }
          lVar9 = FUN_00c0ee70(param_1,(int)((long)local_10[1] - *plVar21 >> 3) * -0x55555555,0);
          local_30[1] = (undefined *)(lVar9 + 0x18);
          goto LAB_00c24194;
        }
        if (uVar6 == 0xfffffffb) {
          uVar17 = 1;
LAB_00c245b0:
          uVar13 = (ulong)~uVar6;
        }
        else {
          uVar13 = 0xd;
          if (0xfffffff2 < uVar6) goto LAB_00c245b0;
        }
        local_30[1] = (&PTR_DAT_01697110)[uVar13];
LAB_00c24194:
        if ((uVar17 ^ uVar5) != 1) {
          if (param_2 == 5) {
            uVar7 = 0xc7e;
          }
          else if (param_2 == 8) {
            uVar7 = 0xc9c;
          }
          else {
            uVar7 = 0xcf0;
            if (9 < param_2) {
              uVar7 = 0xcc1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00bfb308(param_1,uVar7,local_30[0],local_30[1]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bfb308(param_1,0xc62,local_30[(int)uVar17],local_30[(int)uVar5]);
      }
      lVar9 = *plVar21;
      ppuVar20[-2] = (ulong *)(puVar12 + 1);
      bVar3 = true;
      *ppuVar20 = (ulong *)(lVar9 + (ulong)(ushort)uVar5 * 0x18);
    }
  }
  else {
    *ppuVar20 = (ulong *)0x0;
    bVar3 = false;
    ppuVar20[-2] = (ulong *)0x1;
  }
  while( true ) {
    puVar18 = local_10[1];
    puVar14 = local_10[0];
    uVar10 = local_20[1];
    uVar13 = local_20[0];
    puVar19 = puVar19 + 1;
    ppuVar20 = ppuVar20 + 1;
    if (iVar8 != 0) break;
    uVar13 = *puVar19;
    iVar8 = 1;
    if ((int)((long)uVar13 >> 0x2f) != -0xb) goto LAB_00c23ee4;
LAB_00c2406c:
    uVar13 = uVar13 & 0x7fffffffffff;
    lVar9 = *plVar21;
    uVar1 = *(ushort *)(uVar13 + 10);
    while( true ) {
      puVar14 = (ulong *)(lVar9 + (ulong)uVar1 * 0x18);
      uVar5 = *(uint *)(lVar9 + (ulong)uVar1 * 0x18);
      uVar17 = uVar5 >> 0x1c;
      if (uVar17 != 8) break;
      uVar1 = (ushort)uVar5;
    }
    if (uVar17 == 2) {
      if (*(uint *)((long)puVar14 + 4) == 4) {
        puVar18 = (ulong *)(ulong)*(uint *)(uVar13 + 0x10);
      }
      else {
        puVar18 = *(ulong **)(uVar13 + 0x10);
      }
      uVar17 = (uint)*puVar14;
      if ((uVar5 & 0xf0800000) != 0x20800000) goto LAB_00c240b8;
      do {
        lVar16 = (ulong)(ushort)uVar17 * 0x18;
        puVar14 = (ulong *)(lVar9 + lVar16);
        uVar17 = *(uint *)(lVar9 + lVar16);
        uVar5 = uVar17 >> 0x1c;
        if (uVar5 != 8) break;
        lVar16 = (ulong)(ushort)uVar17 * 0x18;
        puVar14 = (ulong *)(lVar9 + lVar16);
        uVar17 = *(uint *)(lVar9 + lVar16);
        uVar5 = uVar17 >> 0x1c;
      } while (uVar5 == 8);
    }
    else if (uVar17 == 6) {
      puVar18 = *(ulong **)(uVar13 + 0x10);
      uVar13 = FUN_00c0e7d0(plVar21,*(ushort *)(uVar13 + 10) | 0x20030000,8);
      lVar9 = *plVar21;
      lVar16 = (uVar13 & 0xffffffff) * 0x18;
      puVar14 = (ulong *)(lVar9 + lVar16);
      uVar17 = *(uint *)(lVar9 + lVar16);
      uVar5 = uVar17 >> 0x1c;
    }
    else {
      uVar17 = (uint)*puVar14;
      puVar18 = (ulong *)(uVar13 + 0x10);
LAB_00c240b8:
      uVar5 = uVar17 >> 0x1c;
    }
    if (uVar5 == 5) {
      puVar14 = (ulong *)(lVar9 + (ulong)(ushort)uVar17 * 0x18);
    }
    *ppuVar20 = puVar14;
    ppuVar20[-2] = puVar18;
  }
  if (!bVar3) goto LAB_00c240e4;
  uVar5 = (uint)*local_10[0] >> 0x1c;
  if (uVar5 == 0) {
    if (((8 < *(uint *)((long)local_10[0] + 4)) || ((uint)*local_10[1] >> 0x1c != 0)) ||
       (8 < *(uint *)((long)local_10[1] + 4))) {
      if ((param_2 == 10) &&
         (((uint)*local_10[1] >> 0x1c == 2 || (((uint)*local_10[1] & 0xfc000000) == 0x30000000)))) {
        FUN_00c21820(plVar21,*plVar21 + 0x108,local_10[0],local_30,local_20[0],0);
        puVar14 = puVar18;
        uVar13 = uVar10;
        goto LAB_00c24244;
      }
      goto LAB_00c240e4;
    }
    if ((*local_10[0] & 0xffffffff00800000) == 0x800800000) {
      lVar9 = 0x120;
      sVar22 = 0xc;
    }
    else {
      lVar9 = 0x120;
      if ((*local_10[1] & 0xffffffff00800000) != 0x800800000) {
        lVar9 = 0x108;
      }
      sVar22 = 0xc;
      if ((*local_10[1] & 0xffffffff00800000) != 0x800800000) {
        sVar22 = 0xb;
      }
    }
    lVar16 = *plVar21;
    FUN_00c21820(plVar21,lVar16 + lVar9,local_10[0],&local_38,local_20[0],0);
    if (param_2 == 0x10) {
      uVar13 = FUN_00c1a314(plVar21[2],0x18);
      *(short *)(uVar13 + 10) = sVar22;
      *(undefined1 *)(uVar13 + 9) = 10;
      *(ulong *)(*(long *)(param_1 + 0x28) + -8) = uVar13 | 0xfffa800000000000;
      *(long *)(uVar13 + 0x10) = -(long)local_38;
      goto switchD_00c24054_default;
    }
    FUN_00c21820(plVar21,lVar16 + lVar9,local_10[1],local_30,local_20[1],0);
    if (param_2 == 6) {
      lVar9 = *(long *)(param_1 + 0x28);
      if (sVar22 == 0xb) {
        uVar11 = 0xffff7fffffffffff;
        if ((long)local_38 < (long)local_30[0]) {
          uVar11 = 0xfffeffffffffffff;
        }
      }
      else {
        uVar11 = 0xffff7fffffffffff;
        if (local_38 < local_30[0]) {
          uVar11 = 0xfffeffffffffffff;
        }
      }
LAB_00c244b4:
      *(undefined8 *)(lVar9 + -8) = uVar11;
      lVar9 = *(long *)(param_1 + 0x10);
      goto LAB_00c242c4;
    }
    if (param_2 == 7) {
      lVar9 = *(long *)(param_1 + 0x28);
      if (sVar22 == 0xb) {
        uVar11 = 0xffff7fffffffffff;
        if ((long)local_38 <= (long)local_30[0]) {
          uVar11 = 0xfffeffffffffffff;
        }
      }
      else {
        uVar11 = 0xffff7fffffffffff;
        if (local_38 <= local_30[0]) {
          uVar11 = 0xfffeffffffffffff;
        }
      }
      goto LAB_00c244b4;
    }
    if (param_2 == 4) {
      lVar9 = *(long *)(param_1 + 0x28);
      bVar3 = local_38 == local_30[0];
      goto LAB_00c244a8;
    }
    uVar13 = FUN_00c1a314(plVar21[2],0x18);
    *(undefined1 *)(uVar13 + 9) = 10;
    *(short *)(uVar13 + 10) = sVar22;
    *(ulong *)(*(long *)(param_1 + 0x28) + -8) = uVar13 | 0xfffa800000000000;
    switch(param_2) {
    case 10:
      *(undefined **)(uVar13 + 0x10) = local_30[0] + (long)local_38;
      break;
    case 0xb:
      *(long *)(uVar13 + 0x10) = (long)local_38 - (long)local_30[0];
      break;
    case 0xc:
      *(long *)(uVar13 + 0x10) = (long)local_30[0] * (long)local_38;
      break;
    case 0xd:
      lVar9 = -0x8000000000000000;
      if (sVar22 == 0xb) {
        if ((local_30[0] == (undefined *)0x0) ||
           ((local_30[0] == (undefined *)0xffffffffffffffff &&
            (local_38 == (undefined *)0x8000000000000000)))) goto LAB_00c248b0;
        lVar9 = 0;
        if (local_30[0] != (undefined *)0x0) {
          lVar9 = (long)local_38 / (long)local_30[0];
        }
        *(long *)(uVar13 + 0x10) = lVar9;
      }
      else {
        if (local_30[0] == (undefined *)0x0) goto LAB_00c248b0;
        uVar10 = 0;
        if (local_30[0] != (undefined *)0x0) {
          uVar10 = (ulong)local_38 / (ulong)local_30[0];
        }
        *(ulong *)(uVar13 + 0x10) = uVar10;
      }
      break;
    case 0xe:
      lVar9 = -0x8000000000000000;
      if (sVar22 == 0xb) {
        if ((local_30[0] != (undefined *)0x0) &&
           ((local_30[0] != (undefined *)0xffffffffffffffff ||
            (lVar9 = 0, local_38 != (undefined *)0x8000000000000000)))) {
          lVar9 = 0;
          if (local_30[0] != (undefined *)0x0) {
            lVar9 = (long)local_38 / (long)local_30[0];
          }
          *(long *)(uVar13 + 0x10) = (long)local_38 - lVar9 * (long)local_30[0];
          break;
        }
      }
      else if (local_30[0] != (undefined *)0x0) {
        uVar10 = 0;
        if (local_30[0] != (undefined *)0x0) {
          uVar10 = (ulong)local_38 / (ulong)local_30[0];
        }
        lVar9 = (long)local_38 - uVar10 * (long)local_30[0];
      }
LAB_00c248b0:
      *(long *)(uVar13 + 0x10) = lVar9;
      break;
    case 0xf:
      if (sVar22 == 0xb) {
        uVar11 = FUN_00c23e20(local_38);
        *(undefined8 *)(uVar13 + 0x10) = uVar11;
      }
      else {
        lVar9 = 1;
        if (local_30[0] == (undefined *)0x0) goto LAB_00c248b0;
        uVar11 = FUN_00c23a74(local_38);
        *(undefined8 *)(uVar13 + 0x10) = uVar11;
      }
    }
  }
  else {
    if ((uVar5 != 2) && (((uint)*local_10[0] & 0xfc000000) != 0x30000000)) goto LAB_00c240e4;
    bVar3 = param_2 == 0xb;
    if (((bVar3) || ((param_2 == 4 || (param_2 - 6 < 2)))) &&
       (((uint)*local_10[1] >> 0x1c == 2 || (((uint)*local_10[1] & 0xfc000000) == 0x30000000)))) {
      if (param_2 == 4) {
        lVar9 = *(long *)(param_1 + 0x28);
        bVar3 = local_20[0] == local_20[1];
LAB_00c244a8:
        uVar11 = 0xfffeffffffffffff;
        if (!bVar3) {
          uVar11 = 0xffff7fffffffffff;
        }
        goto LAB_00c244b4;
      }
      iVar8 = FUN_00c216c8(plVar21,local_10[0],local_10[1],8);
      if (iVar8 == 0) goto LAB_00c240e4;
      if (bVar3) {
        iVar8 = FUN_00c0eb90(plVar21,(short)*puVar14);
        if (iVar8 - 1U < 0xfffffffe) {
          lVar9 = *(long *)(param_1 + 0x28);
          uVar7 = 0;
          if ((long)iVar8 != 0) {
            uVar7 = (undefined4)((long)(uVar13 - uVar10) / (long)iVar8);
          }
          *(undefined4 *)(lVar9 + -8) = uVar7;
          *(undefined4 *)(lVar9 + -4) = 0xfff90000;
          lVar9 = *(long *)(param_1 + 0x10);
          goto LAB_00c242c4;
        }
        goto LAB_00c240e4;
      }
      lVar9 = *(long *)(param_1 + 0x28);
      if (param_2 == 6) {
        uVar11 = 0xfffeffffffffffff;
        if (uVar10 <= uVar13) {
          uVar11 = 0xffff7fffffffffff;
        }
        *(undefined8 *)(lVar9 + -8) = uVar11;
        lVar9 = *(long *)(param_1 + 0x10);
        goto LAB_00c242c4;
      }
      uVar11 = 0xfffeffffffffffff;
      if (uVar10 < uVar13) {
        uVar11 = 0xffff7fffffffffff;
      }
      goto LAB_00c244b4;
    }
    if ((1 < param_2 - 10) || ((uint)*local_10[1] >> 0x1c != 0)) goto LAB_00c240e4;
    FUN_00c21820(plVar21,*plVar21 + 0x108,local_10[1],local_30,local_20[1],0);
    if (bVar3) {
      local_30[0] = (undefined *)-(long)local_30[0];
    }
LAB_00c24244:
    iVar8 = FUN_00c0eb90(plVar21,(short)*puVar14);
    if (iVar8 == -1) goto LAB_00c240e4;
    lVar9 = (long)iVar8 * (long)local_30[0];
    uVar4 = FUN_00c0e7d0(plVar21,(ushort)*puVar14 | 0x20030000,8);
    uVar10 = FUN_00c1a314(plVar21[2],0x18);
    *(ulong *)(uVar10 + 0x10) = uVar13 + lVar9;
    *(undefined1 *)(uVar10 + 9) = 10;
    *(undefined2 *)(uVar10 + 10) = uVar4;
    *(ulong *)(*(long *)(param_1 + 0x28) + -8) = uVar10 | 0xfffa800000000000;
  }
switchD_00c24054_default:
  lVar9 = *(long *)(param_1 + 0x10);
  if (*(ulong *)(lVar9 + 0x28) <= *(ulong *)(lVar9 + 0x20)) {
    FUN_00c19f80(param_1);
    lVar9 = *(long *)(param_1 + 0x10);
  }
LAB_00c242c4:
  *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
  return 1;
}

