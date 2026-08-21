
ulong FUN_01344814(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_3 >> 3 & 1) == 0) {
    uVar6 = (uint)*(ushort *)(param_6 + (param_2 + param_5) * 2);
  }
  else {
    uVar6 = (uint)*(byte *)(param_6 + param_2 + param_5);
  }
  if (((uVar6 & 0xfc00) == 0xd800) && (uVar5 = param_2 + 1, (long)uVar5 < param_4)) {
    uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
    uVar9 = (uint)uVar3;
    lVar8 = param_1;
    uVar7 = (uint)uVar3;
    if ((uVar3 & 7) != 0) {
      while( true ) {
        while( true ) {
          uVar9 = uVar7;
          uVar7 = uVar9 & 7;
          if (uVar7 < 2) break;
          if (uVar7 == 2) {
            bVar4 = true;
            goto LAB_0134494c;
          }
          if (uVar7 == 3) {
            lVar2 = unaff_x26 + (ulong)*(uint *)(lVar8 + 0xb);
            unaff_x27 = unaff_x27 + ((long)((ulong)*(uint *)(lVar8 + 0xf) << 0x20) >> 0x21);
            lVar8 = lVar2;
            uVar7 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 7);
          }
          else {
            if (uVar7 != 5) {
              uVar5 = FUN_01344ac0();
              return uVar5;
            }
            lVar8 = unaff_x26 + (ulong)*(uint *)(lVar8 + 0xb);
            uVar7 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar8 + -1) + 7);
          }
        }
        if ((uVar9 & 7) == 0) {
          bVar4 = false;
          goto LAB_0134494c;
        }
        if (uVar7 != 1) {
          uVar5 = FUN_01344ac0();
          return uVar5;
        }
        if (*(int *)(lVar8 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)) break;
        lVar8 = unaff_x26 + (ulong)*(uint *)(lVar8 + 0xb);
        uVar7 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar8 + -1) + 7);
      }
LAB_01344b3c:
      if (0x3fffffff < uVar5) {
        uVar10 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar10 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar8 = uVar10 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar8 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar8 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar8 + 3) = (double)uVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),uVar6);
    }
    bVar4 = false;
LAB_0134494c:
    if (bVar4) {
      if ((uVar9 >> 4 & 1) != 0) goto LAB_01344b3c;
      lVar8 = *(long *)(lVar8 + 0x13);
    }
    else {
      lVar8 = lVar8 + 0xb;
    }
    if ((uVar9 >> 3 & 1) == 0) {
      uVar7 = (uint)*(ushort *)(lVar8 + (uVar5 + unaff_x27) * 2);
    }
    else {
      uVar7 = (uint)*(byte *)(lVar8 + uVar5 + unaff_x27);
    }
    if ((uVar7 & 0xfc00) == 0xdc00) {
      uVar6 = uVar7 + 0xfca02400 + uVar6 * 0x400;
    }
  }
  return (ulong)(uVar6 * 2);
}

