
void FUN_0144ec00(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar19;
  
  lVar8 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar8 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar8 = *(long *)(unaff_x26 + 0xa0);
  }
  lVar13 = unaff_x19 + 3;
  bVar4 = (int)lVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa0);
  uVar10 = (uint)bVar4;
  lVar7 = (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 1) * 4 + 0x1f;
  uVar14 = 0;
  uVar18 = *(undefined8 *)(unaff_x26 + 0x140);
  do {
    uVar11 = (uint)bVar4;
    lVar5 = unaff_x29;
    lVar6 = lVar7;
    lVar9 = lVar8;
    lVar12 = lVar13;
    if ((param_1 & 1) == 0) {
      uVar14 = uVar14 | 2;
      uVar15 = (int)param_1 >> 1;
      uVar10 = uVar11;
LAB_0144edc4:
      uVar15 = ~uVar15;
      if (SCARRY4(uVar15,uVar15)) {
        uVar17 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar17 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar17 = uVar17 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          uVar17 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar17 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar17 + 3) = (double)(int)uVar15;
      }
      else {
        uVar17 = (ulong)(int)(uVar15 * 2);
        unaff_x29 = lVar5;
        lVar7 = lVar6;
        lVar8 = lVar9;
        lVar13 = lVar12;
        uVar11 = uVar10;
      }
      if ((uVar17 & 1) == 0) {
        uVar10 = 2;
      }
      else {
        uVar10 = 0xe;
      }
      if ((uVar11 == 0) &&
         (uVar11 = (int)unaff_x26 + *(int *)(lVar8 + lVar7), uVar14 = uVar11 | uVar10 | uVar14,
         uVar11 != uVar14)) {
        *(uint *)(lVar8 + lVar7) = uVar14;
        *(undefined4 *)(lVar8 + 0x17) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0144ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + lVar13) * 8))(uVar17)
      ;
      return;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar2 == (int)uVar18) {
      dVar19 = *(double *)(param_1 + 3);
      uVar14 = uVar14 | 0xe;
      dVar16 = (double)(long)dVar19;
      if (SBORROW8((long)dVar16,1) || SCARRY8((long)dVar16,1)) {
        uVar10 = (uint)bVar4;
        param_1 = FUN_013c0b40();
        lVar12 = extraout_x8;
        dVar16 = dVar19;
      }
      uVar15 = SUB84(dVar16,0);
      goto LAB_0144edc4;
    }
    sVar3 = *(short *)(lVar2 + 7);
    if (sVar3 == 0x41) {
      if ((uVar11 == 0) &&
         (uVar10 = (int)unaff_x26 + *(int *)(lVar8 + lVar7), uVar14 = uVar10 | 0x40,
         uVar10 != uVar14)) {
        *(uint *)(lVar8 + lVar7) = uVar14;
        *(undefined4 *)(lVar8 + 0x17) = 0;
      }
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c38));
    }
    if (sVar3 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
      uVar14 = 0x1e;
    }
    else {
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
      param_1 = thunk_FUN_01349d90();
      uVar14 = 0xfe;
      uVar18 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  } while( true );
}

