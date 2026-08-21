
ulong FUN_01344d34(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_3 >> 3 & 1) == 0) {
    uVar4 = (ulong)*(ushort *)(param_6 + (param_2 + param_5) * 2);
  }
  else {
    uVar4 = (ulong)*(byte *)(param_6 + param_2 + param_5);
  }
  if ((((uint)uVar4 & 0xfc00) == 0xd800) && (uVar7 = param_2 + 1, (long)uVar7 < param_4)) {
    uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
    uVar8 = (uint)uVar5;
    lVar6 = param_1;
    uVar3 = (uint)uVar5;
    if ((uVar5 & 7) != 0) {
      while( true ) {
        while( true ) {
          uVar8 = uVar3;
          uVar3 = uVar8 & 7;
          if (uVar3 < 2) break;
          if (uVar3 == 2) {
            bVar11 = true;
            goto LAB_01344e6c;
          }
          if (uVar3 == 3) {
            lVar1 = unaff_x26 + (ulong)*(uint *)(lVar6 + 0xb);
            unaff_x27 = unaff_x27 + ((long)((ulong)*(uint *)(lVar6 + 0xf) << 0x20) >> 0x21);
            lVar6 = lVar1;
            uVar3 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 7);
          }
          else {
            if (uVar3 != 5) {
              uVar4 = FUN_0134504c();
              return uVar4;
            }
            lVar6 = unaff_x26 + (ulong)*(uint *)(lVar6 + 0xb);
            uVar3 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar6 + -1) + 7);
          }
        }
        if ((uVar8 & 7) == 0) {
          bVar11 = false;
          goto LAB_01344e6c;
        }
        if (uVar3 != 1) {
          uVar4 = FUN_0134504c();
          return uVar4;
        }
        if (*(int *)(lVar6 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) break;
        lVar6 = unaff_x26 + (ulong)*(uint *)(lVar6 + 0xb);
        uVar3 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar6 + -1) + 7);
      }
LAB_013450c8:
      if (0x3fffffff < uVar7) {
        uVar10 = **(ulong **)(unaff_x26 + 0x1428);
        uVar9 = uVar10 + 0xc;
        if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar6 = uVar10 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar9;
        }
        else {
          lVar6 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar6 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar6 + 3) = (double)uVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),uVar4);
    }
    bVar11 = false;
LAB_01344e6c:
    if (bVar11) {
      if ((uVar8 >> 4 & 1) != 0) goto LAB_013450c8;
      lVar6 = *(long *)(lVar6 + 0x13);
    }
    else {
      lVar6 = lVar6 + 0xb;
    }
    if ((uVar8 >> 3 & 1) == 0) {
      uVar5 = *(ushort *)(lVar6 + (uVar7 + unaff_x27) * 2);
    }
    else {
      uVar5 = (ushort)*(byte *)(lVar6 + uVar7 + unaff_x27);
    }
    if ((uVar5 & 0xfc00) == 0xdc00) {
      uVar4 = (ulong)((uint)uVar4 | (uint)uVar5 << 0x10);
    }
  }
  uVar3 = (uint)uVar4;
  if (0xffff < uVar3) {
    uVar7 = **(ulong **)(unaff_x26 + 0x1428);
    uVar4 = uVar7 + 0x10;
    if (uVar4 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar7 = uVar7 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar4;
    }
    else {
      uVar7 = FUN_01348560(param_1,0x10);
    }
    *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
    *(undefined4 *)(uVar7 + 7) = 2;
    *(undefined4 *)(uVar7 + 3) = 7;
    *(uint *)(uVar7 + 0xb) = uVar3;
    return uVar7;
  }
  if ((int)uVar3 < 0x100) {
    lVar6 = uVar4 * 4 + 7;
    uVar9 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar6);
    if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      return uVar9;
    }
    uVar7 = **(ulong **)(unaff_x26 + 0x1428);
    uVar10 = uVar7 + 0x10;
    if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar7 = uVar7 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar10;
    }
    else {
      uVar7 = FUN_01348560(uVar9,0x10);
    }
    *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
    *(undefined4 *)(uVar7 + 7) = 1;
    *(undefined4 *)(uVar7 + 3) = 7;
    *(char *)(uVar7 + 0xb) = (char)uVar4;
    uVar9 = *(ulong *)(unaff_x26 + 0xf18);
    if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x1345298);
      (*pcVar2)();
    }
    *(int *)(uVar9 + lVar6) = (int)uVar7;
    if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar7 & 1) != 0)) &&
       (uVar7 = unaff_x26 + (uVar7 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar9,uVar9 + lVar6,0,2);
    }
  }
  else {
    uVar7 = **(ulong **)(unaff_x26 + 0x1428);
    uVar9 = uVar7 + 0x10;
    if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar7 = uVar7 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar9;
    }
    else {
      uVar7 = FUN_01348560(param_1,0x10);
    }
    *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
    *(undefined4 *)(uVar7 + 7) = 1;
    *(undefined4 *)(uVar7 + 3) = 7;
    *(short *)(uVar7 + 0xb) = (short)uVar4;
  }
  return uVar7;
}

