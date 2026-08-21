
ulong FUN_01345880(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long unaff_x26;
  
  lVar11 = (param_3 << 0x20) >> 0x21;
  if (lVar11 < 0) {
    lVar11 = 0;
  }
  uVar10 = (ulong)*(uint *)(param_2 + 7);
  uVar13 = *(uint *)(param_1 + 7);
  if (uVar10 == 0) {
    if (lVar11 < (long)(ulong)uVar13) {
      uVar13 = (uint)lVar11;
    }
    return (ulong)(uVar13 * 2);
  }
  lVar12 = (ulong)uVar13 - lVar11;
  if (lVar12 < (long)uVar10) {
    return 0xfffffffffffffffe;
  }
  if ((int)param_1 == (int)param_2) {
    return 0;
  }
  uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
  uVar13 = (uint)uVar4;
  uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
  uVar15 = (uint)uVar5;
  if ((uVar4 & 7) == 0) {
    lVar14 = 0;
    bVar6 = false;
LAB_013459c0:
    if ((uVar5 & 7) == 0) {
      lVar16 = 0;
      bVar7 = false;
LAB_01345aa0:
      if (bVar6) {
        if ((uVar13 >> 4 & 1) != 0) goto LAB_01345ce0;
        param_1 = *(long *)(param_1 + 0x13);
      }
      else {
        param_1 = param_1 + 0xb;
      }
      if (bVar7) {
        if ((uVar15 >> 4 & 1) != 0) goto LAB_01345ce0;
        param_2 = *(long *)(param_2 + 0x13);
      }
      else {
        param_2 = param_2 + 0xb;
      }
      uVar13 = uVar13 & 8 | (uVar15 & 8) >> 1;
      if (uVar13 < 8) {
        if (uVar13 == 0) {
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1345c74;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          iVar9 = (**(code **)(unaff_x26 + 0x1240))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          return (ulong)(uint)(iVar9 * 2);
        }
        if (uVar13 == 4) {
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1345c24;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          iVar9 = (**(code **)(unaff_x26 + 0x1238))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          return (ulong)(uint)(iVar9 * 2);
        }
      }
      else {
        if (uVar13 == 8) {
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1345bd4;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          iVar9 = (**(code **)(unaff_x26 + 0x1230))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          return (ulong)(uint)(iVar9 * 2);
        }
        if (uVar13 == 0xc) {
          if (uVar10 != 1) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1345b0c;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            iVar9 = (**(code **)(unaff_x26 + 0x1228))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            return (ulong)(uint)(iVar9 * 2);
          }
          uVar3 = *(undefined1 *)(param_2 + lVar16);
          lVar14 = param_1 + lVar14 + lVar11;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1345b68;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          lVar12 = (**(code **)(unaff_x26 + 0x11c8))
                             (lVar14,uVar3,lVar12,(undefined1 *)(param_2 + lVar16),1,param_6,lVar11,
                              lVar14);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          if (lVar12 == 0) {
            return 0xfffffffffffffffe;
          }
          return (ulong)((((int)lVar12 - (int)lVar14) + (uint)lVar11) * 2);
        }
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x1345ce0);
      (*pcVar8)();
    }
    lVar16 = 0;
    while( true ) {
      while( true ) {
        while (uVar2 = uVar15 & 7, uVar2 < 2) {
          if (uVar2 == 0) {
            bVar7 = false;
            goto LAB_01345aa0;
          }
          if ((uVar2 != 1) || (*(int *)(param_2 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
          goto LAB_01345ce0;
          param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
        }
        if (uVar2 == 2) {
          bVar7 = true;
          goto LAB_01345aa0;
        }
        if (uVar2 != 3) break;
        lVar1 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        lVar16 = lVar16 + ((long)((ulong)*(uint *)(param_2 + 0xf) << 0x20) >> 0x21);
        uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 7);
        param_2 = lVar1;
      }
      if (uVar2 != 5) break;
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      uVar15 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
    }
  }
  else {
    lVar14 = 0;
    while( true ) {
      while( true ) {
        while (uVar2 = uVar13 & 7, uVar2 < 2) {
          if (uVar2 == 0) {
            bVar6 = false;
            goto LAB_013459c0;
          }
          if ((uVar2 != 1) || (*(int *)(param_1 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
          goto LAB_01345ce0;
          param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
        }
        if (uVar2 == 2) {
          bVar6 = true;
          goto LAB_013459c0;
        }
        if (uVar2 != 3) break;
        lVar16 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
        lVar14 = lVar14 + ((long)((ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21);
        uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar16 + -1) + 7);
        param_1 = lVar16;
      }
      if (uVar2 != 5) break;
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
      uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
    }
  }
LAB_01345ce0:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x25b8));
}

