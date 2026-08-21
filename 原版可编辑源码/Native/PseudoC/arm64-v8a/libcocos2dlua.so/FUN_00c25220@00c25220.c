
ulong FUN_00c25220(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *local_8;
  
  uVar9 = 0;
  uVar8 = 0;
  uVar14 = 0xffffffff;
  uVar15 = 0;
  do {
    while( true ) {
      lVar12 = param_2 + uVar15 * 0x18;
      uVar10 = *(uint *)(lVar12 + 0x40);
      uVar11 = (ulong)uVar10;
      uVar1 = *(uint *)(lVar12 + 0x44);
      uVar7 = (ulong)uVar1;
      uVar4 = uVar10 >> 0x1c;
      uVar2 = *(ushort *)(lVar12 + 0x4a);
      uVar13 = (ulong)uVar2;
      if (uVar4 != 7) break;
      uVar9 = (ulong)(uVar10 & 0xffff);
      uVar8 = *(uint *)(**(long **)(param_1 + 0x50) + uVar9 * 0x18);
      uVar14 = (ulong)*(uint *)(**(long **)(param_1 + 0x50) + uVar9 * 0x18 + 4);
joined_r0x00c253b8:
      uVar15 = uVar13;
      if (uVar2 == 0) {
        return uVar9;
      }
    }
    iVar6 = (int)uVar9;
    if (uVar4 == 6) {
      if (iVar6 != 0) {
        lVar12 = **(long **)(param_1 + 0x50);
        for (uVar8 = *(uint *)(lVar12 + uVar9 * 0x18); uVar8 >> 0x1c == 8;
            uVar8 = *(uint *)(lVar12 + (ulong)(ushort)uVar8 * 0x18)) {
        }
        if ((uVar8 >> 0x1c == 6) || ((uVar8 & 0xfc000000) == 0x30000000)) goto LAB_00c25634;
      }
      while ((uVar2 != 0 && (*(uint *)(param_2 + uVar13 * 0x18 + 0x40) >> 0x1c == 8))) {
        uVar2 = *(ushort *)(param_2 + uVar13 * 0x18 + 0x4a);
        uVar13 = (ulong)uVar2;
      }
      uVar8 = iVar6 + uVar10;
      uVar3 = *(undefined2 *)(param_2 + uVar15 * 0x18 + 0x48);
      uVar9 = FUN_00c0e728(*(long **)(param_1 + 0x50),&local_8);
      *local_8 = uVar8;
      local_8[1] = uVar1;
      *(undefined2 *)(local_8 + 2) = uVar3;
      iVar6 = (int)uVar13;
      uVar14 = 0xffffffff;
    }
    else {
      if (uVar4 == 8) {
        if ((uVar10 & 0xf0ff0000) == 0x80010000) {
          uVar8 = uVar8 | uVar1;
        }
        else if ((uVar10 & 0xf0ff0000) == 0x80020000) {
          uVar8 = uVar8 & 0xfff00000 | (uVar1 & 0xf) << 0x10;
        }
        uVar9 = FUN_00c0e7d0(*(undefined8 *)(param_1 + 0x50),iVar6 + uVar10);
        uVar9 = uVar9 & 0xffffffff;
        goto joined_r0x00c253b8;
      }
      if (uVar4 == 0) {
        if ((uVar10 >> 0x1b & 1) == 0) {
          uVar14 = (ulong)(*(uint *)(param_2 + 0x2c) >> 8) & 0xff;
          uVar15 = (ulong)(*(uint *)(param_2 + 0x2c) >> 4) & 0xf;
          iVar6 = (int)uVar14;
          if ((iVar6 != 0) && (((uVar10 >> 0x1a & 1) == 0 || ((iVar6 - 4U & 0xfffffffb) == 0)))) {
            uVar1 = (uint)LZCOUNT(iVar6) ^ 0x1f;
            uVar8 = uVar1 << 0x10;
            if (4 < uVar1) {
              uVar8 = 0x40000;
            }
            uVar11 = (ulong)(uVar8 | uVar10 & 0xfff0ffff);
            uVar7 = uVar14;
          }
          uVar10 = (uint)uVar11;
          uVar8 = (uint)uVar15;
          if (uVar8 != 0) {
            plVar5 = *(long **)(param_1 + 0x50);
            if (((uint)LZCOUNT((int)uVar7) ^ 0x1f) <= uVar8) {
              uVar9 = FUN_00c0e7d0(plVar5,uVar11);
              uVar9 = uVar9 & 0xffffffff;
              uVar1 = (uint)(uVar11 >> 0x10) & 0xf;
              if (4 < uVar8) {
                uVar8 = 4;
              }
              if (uVar1 < uVar8) {
                uVar1 = uVar8;
              }
              uVar7 = (ulong)(uint)(1 << uVar15);
              uVar10 = (uVar10 & 0x3000000) + 0x38000000 + uVar1 * 0x10000;
              plVar5 = *(long **)(param_1 + 0x50);
            }
            goto LAB_00c25304;
          }
        }
LAB_00c253d0:
        plVar5 = *(long **)(param_1 + 0x50);
      }
      else if (uVar4 == 2) {
        plVar5 = *(long **)(param_1 + 0x50);
        if (iVar6 != 0) {
          for (uVar8 = *(uint *)(*plVar5 + uVar9 * 0x18); uVar8 >> 0x1c == 8;
              uVar8 = *(uint *)(*plVar5 + (ulong)(ushort)uVar8 * 0x18)) {
          }
          if ((uVar8 & 0xf0800000) == 0x20800000) {
LAB_00c25634:
                    /* WARNING: Subroutine does not return */
            FUN_00c2520c(param_1,0xb83);
          }
        }
        if (((uVar10 & 0xf0800000) == 0x20800000) && (uVar10 = uVar10 & 0xfeffffff, uVar2 != 0)) {
          uVar8 = *(uint *)(param_2 + uVar13 * 0x18 + 0x40);
          while ((uVar8 >> 0x1c == 8 &&
                 (uVar2 = *(ushort *)(param_2 + uVar13 * 0x18 + 0x4a), uVar13 = (ulong)uVar2,
                 uVar2 != 0))) {
            uVar8 = *(uint *)(param_2 + uVar13 * 0x18 + 0x40);
          }
        }
      }
      else {
        if (uVar4 != 3) goto LAB_00c253d0;
        if (*(short *)(lVar12 + 0x48) == 0) {
          if ((uVar8 & 0xf0800000) == 0x20800000) goto LAB_00c25634;
          if ((((uVar8 & 0xd0100000) == 0x10100000) || ((int)uVar14 == -1)) ||
             ((uVar1 != 0xffffffff && (uVar7 = uVar14 * uVar7, 0x7fffffff < uVar7)))) {
                    /* WARNING: Subroutine does not return */
            FUN_00c2520c(param_1,0xb92);
          }
        }
        if ((uVar10 & 0xf0000) < (uVar8 & 0xf0000)) {
          uVar10 = uVar8 & 0xf0000 | uVar10 & 0xfff0ffff;
        }
        plVar5 = *(long **)(param_1 + 0x50);
        uVar10 = uVar10 | uVar8 & 0x3000000;
        uVar7 = uVar7 & 0xffffffff;
      }
LAB_00c25304:
      uVar8 = uVar10 + (int)uVar9;
      uVar9 = FUN_00c0e7d0(plVar5,uVar8,uVar7);
      iVar6 = (int)uVar13;
      uVar14 = uVar7;
    }
    uVar9 = uVar9 & 0xffffffff;
    uVar15 = uVar13;
    if (iVar6 == 0) {
      return uVar9;
    }
  } while( true );
}

