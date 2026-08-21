
/* WARNING: Removing unreachable block (ram,0x0140e010) */
/* WARNING: Removing unreachable block (ram,0x0140e020) */
/* WARNING: Removing unreachable block (ram,0x0140e018) */
/* WARNING: Removing unreachable block (ram,0x0140e030) */
/* WARNING: Removing unreachable block (ram,0x0140e03c) */
/* WARNING: Removing unreachable block (ram,0x0140e040) */
/* WARNING: Removing unreachable block (ram,0x0140e044) */

undefined8 FUN_0140dfa0(ulong param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long unaff_x26;
  long unaff_x27;
  
  uVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
  bVar8 = ((long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0x13) << 0x20) >> 0x21 & 9U) != 0;
  if (bVar8) {
    if (((uVar13 & 1) != 0) || (*(int *)(param_2 + 7) * 2 < (int)uVar13)) {
      *(undefined4 *)(param_1 + 0x17) = 0;
      goto LAB_0140e408;
    }
  }
  else {
    uVar13 = 0;
  }
  uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
  uVar16 = (uint)uVar5;
  uVar10 = unaff_x26 +
           (ulong)*(uint *)(unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                           0x247);
  if ((uVar13 & 1) == 0) {
    iVar9 = (int)uVar13 >> 1;
    if ((ulong)*(uint *)(param_2 + 7) < (ulong)(long)iVar9) goto LAB_0140e390;
    lVar12 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar4 = *(int *)(lVar12 + 7) >> 1;
    if (iVar4 == 0) goto LAB_0140e480;
    if (iVar4 == 1) {
      uVar10 = FUN_013a2de0();
    }
    else {
      if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0,0x140e414);
        (*pcVar7)();
      }
      iVar4 = (int)unaff_x26;
      uVar18 = iVar4 + *(int *)(lVar12 + 0x27);
      if (0x7e < uVar18) {
LAB_0140e480:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
      }
      uVar13 = param_2;
      if ((uVar5 & 7) != 0) {
        lVar17 = 0;
        while( true ) {
          while( true ) {
            while (uVar3 = uVar16 & 7, uVar3 < 2) {
              if (uVar3 == 0) {
                bVar6 = false;
                goto LAB_0140e1e0;
              }
              if ((uVar3 != 1) || (*(int *)(uVar13 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
              goto LAB_0140e480;
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
              uVar16 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
            }
            if (uVar3 == 2) {
              bVar6 = true;
              goto LAB_0140e1e0;
            }
            if (uVar3 != 3) break;
            uVar2 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
            lVar17 = lVar17 + ((long)((ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21);
            uVar16 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar2 - 1) + 7);
            uVar13 = uVar2;
          }
          if (uVar3 != 5) break;
          uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
          uVar16 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
        }
        goto LAB_0140e480;
      }
      lVar17 = 0;
      bVar6 = false;
LAB_0140e1e0:
      if (bVar6) {
        if ((uVar16 >> 4 & 1) != 0) goto LAB_0140e480;
        lVar14 = *(long *)(uVar13 + 0x13);
      }
      else {
        lVar14 = uVar13 + 0xb;
      }
      lVar15 = lVar17 + (ulong)*(uint *)(param_2 + 7);
      lVar17 = lVar17 + iVar9;
      if ((uVar16 >> 3 & 1) == 0) {
        uVar16 = *(uint *)(lVar12 + 0x17);
        lVar15 = lVar15 * 2;
        lVar17 = lVar17 * 2;
      }
      else {
        uVar16 = *(uint *)(lVar12 + 0x13);
      }
      uVar13 = unaff_x26 + (ulong)uVar16;
      if ((uVar13 & 1) == 0) goto LAB_0140e480;
      uVar11 = **(undefined8 **)(unaff_x26 + 0x14e8);
      if (*(int *)(uVar13 + 0x27) == -1) {
        pcVar7 = (code *)(uVar13 + 0x3f);
      }
      else {
        pcVar7 = *(code **)(unaff_x26 + (long)(*(int *)(uVar13 + 0x27) << 3) + 0x2c78);
      }
      *(undefined8 *)(unaff_x26 + 0x40) = 0x140e294;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      iVar9 = (*pcVar7)(param_2,iVar9,lVar14 + lVar17,lVar14 + lVar15,
                        *(undefined8 *)(unaff_x26 + 0x14f0),(int)((uVar18 + 2) * 2) >> 1,uVar11,1);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      if (iVar9 != 1) {
        if (iVar9 != 0) {
          if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
          }
          goto LAB_0140e480;
        }
        goto LAB_0140e390;
      }
      iVar9 = (iVar4 + *(int *)(lVar12 + 0x27) + 2) * 2;
      if (iVar4 + *(int *)(uVar10 + 3) + -6 < iVar9) goto LAB_0140e480;
      *(int *)(uVar10 + 7) = iVar9;
      lVar12 = (long)iVar9;
      *(int *)(uVar10 + 0xb) = (int)param_2;
      if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((param_2 & 1) != 0)) &&
         (param_2 = unaff_x26 + (param_2 & 0xffffffff),
         ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar10,uVar10 + 0xb,0,2);
        lVar12 = extraout_x8_00;
      }
      lVar12 = lVar12 << 1;
      *(int *)(uVar10 + 0xf) = (int)param_2;
      if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((param_2 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(uVar10,uVar10 + 0xf,0,2);
        lVar12 = extraout_x8;
      }
      if (lVar12 != 0) {
        lVar17 = 0x13;
        lVar14 = 0;
        lVar15 = *(long *)(unaff_x26 + 0x14f0);
        while( true ) {
          piVar1 = (int *)(lVar15 + lVar14);
          lVar14 = lVar14 + 4;
          *(int *)(uVar10 + lVar17) = *piVar1 * 2;
          if (lVar14 == lVar12) break;
          lVar17 = lVar17 + 4;
        }
      }
    }
  }
  else {
LAB_0140e390:
    uVar10 = *(ulong *)(unaff_x26 + 0xb0);
  }
  if ((int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    if (bVar8) {
      if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0,0x140e3d8);
        (*pcVar7)();
      }
      uVar16 = *(uint *)(uVar10 + 0x17);
      *(uint *)(param_1 + 0x17) = uVar16;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar16 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(param_1,param_1 + 0x17,0,2);
      }
    }
    return *(undefined8 *)(unaff_x26 + 0xb8);
  }
  if (bVar8) {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
LAB_0140e408:
  return *(undefined8 *)(unaff_x26 + 0xc0);
}

