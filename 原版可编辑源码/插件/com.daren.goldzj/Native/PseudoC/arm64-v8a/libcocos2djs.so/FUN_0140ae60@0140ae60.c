
/* WARNING: Removing unreachable block (ram,0x0140aee4) */
/* WARNING: Removing unreachable block (ram,0x0140aef4) */
/* WARNING: Removing unreachable block (ram,0x0140aeec) */
/* WARNING: Removing unreachable block (ram,0x0140af04) */
/* WARNING: Removing unreachable block (ram,0x0140af10) */
/* WARNING: Removing unreachable block (ram,0x0140af14) */
/* WARNING: Removing unreachable block (ram,0x0140af18) */

long FUN_0140ae60(ulong param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long unaff_x26;
  long unaff_x27;
  
  uVar5 = *(uint *)(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x17) = 0;
  uVar15 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
  bVar9 = ((long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0x13) << 0x20) >> 0x21 & 9U) != 0;
  if (bVar9) {
    if (((uVar15 & 1) != 0) || (*(int *)(param_2 + 7) * 2 < (int)uVar15)) {
      *(undefined4 *)(param_1 + 0x17) = 0;
      goto LAB_0140b31c;
    }
  }
  else {
    uVar15 = 0;
  }
  uVar6 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
  uVar17 = (uint)uVar6;
  uVar11 = unaff_x26 +
           (ulong)*(uint *)(unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                           0x247);
  if ((uVar15 & 1) == 0) {
    iVar10 = (int)uVar15 >> 1;
    if ((ulong)*(uint *)(param_2 + 7) < (ulong)(long)iVar10) goto LAB_0140b264;
    lVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar4 = *(int *)(lVar13 + 7) >> 1;
    if (iVar4 == 0) goto LAB_0140b3a4;
    if (iVar4 == 1) {
      uVar11 = FUN_013a2de0();
    }
    else {
      if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0,0x140b338);
        (*pcVar8)();
      }
      iVar4 = (int)unaff_x26;
      uVar19 = iVar4 + *(int *)(lVar13 + 0x27);
      if (0x7e < uVar19) {
LAB_0140b3a4:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
      }
      uVar15 = param_2;
      if ((uVar6 & 7) != 0) {
        lVar18 = 0;
        while( true ) {
          while( true ) {
            while (uVar3 = uVar17 & 7, uVar3 < 2) {
              if (uVar3 == 0) {
                bVar7 = false;
                goto LAB_0140b0b0;
              }
              if ((uVar3 != 1) || (*(int *)(uVar15 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
              goto LAB_0140b3a4;
              uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
              uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
            }
            if (uVar3 == 2) {
              bVar7 = true;
              goto LAB_0140b0b0;
            }
            if (uVar3 != 3) break;
            uVar2 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
            lVar18 = lVar18 + ((long)((ulong)*(uint *)(uVar15 + 0xf) << 0x20) >> 0x21);
            uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar2 - 1) + 7);
            uVar15 = uVar2;
          }
          if (uVar3 != 5) break;
          uVar15 = unaff_x26 + (ulong)*(uint *)(uVar15 + 0xb);
          uVar17 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
        }
        goto LAB_0140b3a4;
      }
      lVar18 = 0;
      bVar7 = false;
LAB_0140b0b0:
      if (bVar7) {
        if ((uVar17 >> 4 & 1) != 0) goto LAB_0140b3a4;
        lVar14 = *(long *)(uVar15 + 0x13);
      }
      else {
        lVar14 = uVar15 + 0xb;
      }
      lVar16 = lVar18 + (ulong)*(uint *)(param_2 + 7);
      lVar18 = lVar18 + iVar10;
      if ((uVar17 >> 3 & 1) == 0) {
        uVar17 = *(uint *)(lVar13 + 0x17);
        lVar16 = lVar16 * 2;
        lVar18 = lVar18 * 2;
      }
      else {
        uVar17 = *(uint *)(lVar13 + 0x13);
      }
      uVar15 = unaff_x26 + (ulong)uVar17;
      if ((uVar15 & 1) == 0) goto LAB_0140b3a4;
      uVar12 = **(undefined8 **)(unaff_x26 + 0x14e8);
      if (*(int *)(uVar15 + 0x27) == -1) {
        pcVar8 = (code *)(uVar15 + 0x3f);
      }
      else {
        pcVar8 = *(code **)(unaff_x26 + (long)(*(int *)(uVar15 + 0x27) << 3) + 0x2c78);
      }
      *(undefined8 *)(unaff_x26 + 0x40) = 0x140b164;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      iVar10 = (*pcVar8)(param_2,iVar10,lVar14 + lVar18,lVar14 + lVar16,
                         *(undefined8 *)(unaff_x26 + 0x14f0),(int)((uVar19 + 2) * 2) >> 1,uVar12,1);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      if (iVar10 != 1) {
        if (iVar10 != 0) {
          if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
          }
          goto LAB_0140b3a4;
        }
        goto LAB_0140b264;
      }
      iVar10 = (iVar4 + *(int *)(lVar13 + 0x27) + 2) * 2;
      if (iVar4 + *(int *)(uVar11 + 3) + -6 < iVar10) goto LAB_0140b3a4;
      *(int *)(uVar11 + 7) = iVar10;
      lVar13 = (long)iVar10;
      *(int *)(uVar11 + 0xb) = (int)param_2;
      if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((param_2 & 1) != 0)) &&
         (param_2 = unaff_x26 + (param_2 & 0xffffffff),
         ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar11,uVar11 + 0xb,0,2);
        lVar13 = extraout_x8_00;
      }
      lVar13 = lVar13 << 1;
      *(int *)(uVar11 + 0xf) = (int)param_2;
      if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((param_2 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(uVar11,uVar11 + 0xf,0,2);
        lVar13 = extraout_x8;
      }
      if (lVar13 != 0) {
        lVar18 = 0x13;
        lVar14 = 0;
        lVar16 = *(long *)(unaff_x26 + 0x14f0);
        while( true ) {
          piVar1 = (int *)(lVar16 + lVar14);
          lVar14 = lVar14 + 4;
          *(int *)(uVar11 + lVar18) = *piVar1 * 2;
          if (lVar14 == lVar13) break;
          lVar18 = lVar18 + 4;
        }
      }
    }
  }
  else {
LAB_0140b264:
    uVar11 = *(ulong *)(unaff_x26 + 0xb0);
  }
  if ((int)uVar11 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    if (bVar9) {
      if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0,0x140b2c4);
        (*pcVar8)();
      }
      uVar17 = *(uint *)(uVar11 + 0x17);
      *(uint *)(param_1 + 0x17) = uVar17;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar17 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(param_1,param_1 + 0x17,0,2);
        param_1 = extraout_x9;
      }
    }
    *(uint *)(param_1 + 0x17) = uVar5;
    if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar5 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(param_1,param_1 + 0x17,0,2);
    }
    if (3 < (ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21)) {
      return unaff_x26 + (ulong)*(uint *)(uVar11 + 0x13);
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0,0x140b304);
    (*pcVar8)();
  }
  if (bVar9) {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
LAB_0140b31c:
  *(uint *)(param_1 + 0x17) = uVar5;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar5 & 1) != 0)) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar5 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 0x17,0,2);
  }
  return -2;
}

