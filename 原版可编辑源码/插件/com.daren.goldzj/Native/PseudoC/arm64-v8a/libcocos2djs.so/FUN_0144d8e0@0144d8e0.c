
void FUN_0144d8e0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_w8;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  undefined8 uVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar20;
  
  sVar3 = *(short *)(unaff_x20 + unaff_x19 + 1);
  lVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar9 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar9 = *(long *)(unaff_x26 + 0xa0);
  }
  uVar15 = *(undefined8 *)(unaff_x29 + -8);
  bVar5 = (int)lVar9 == (int)*(undefined8 *)(unaff_x26 + 0xa0);
  uVar13 = (uint)bVar5;
  lVar12 = (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 3) * 4 + 0x1f;
  uVar16 = 0;
  uVar19 = *(undefined8 *)(unaff_x26 + 0x140);
  do {
    uVar14 = (uint)bVar5;
    iVar7 = (int)sVar3;
    lVar6 = unaff_x29;
    lVar10 = lVar9;
    lVar11 = lVar12;
    if ((param_1 & 1) == 0) {
      uVar16 = uVar16 | 2;
      uVar17 = (int)param_1 >> 1;
      uVar13 = uVar14;
LAB_0144da88:
      uVar17 = uVar17 & iVar7 * 2 >> 1;
      if (SCARRY4(uVar17,uVar17)) {
        uVar8 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar8 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar8 = uVar8 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          uVar8 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar8 + 3) = (double)(int)uVar17;
      }
      else {
        uVar8 = (ulong)(int)(uVar17 * 2);
        unaff_x29 = lVar6;
        lVar9 = lVar10;
        lVar12 = lVar11;
        uVar14 = uVar13;
      }
      if ((uVar8 & 1) == 0) {
        uVar13 = 2;
      }
      else {
        uVar13 = 0xe;
      }
      if ((uVar14 == 0) &&
         (uVar14 = (int)unaff_x26 + *(int *)(lVar9 + lVar12), uVar16 = uVar14 | uVar13 | uVar16,
         uVar14 != uVar16)) {
        *(uint *)(lVar9 + lVar12) = uVar16;
        *(undefined4 *)(lVar9 + 0x17) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0144daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 5) * 8))
                (uVar8);
      return;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar2 == (int)uVar19) {
      dVar20 = *(double *)(param_1 + 3);
      uVar16 = uVar16 | 0xe;
      dVar18 = (double)(long)dVar20;
      iVar7 = (int)sVar3;
      if (SBORROW8((long)dVar18,1) || SCARRY8((long)dVar18,1)) {
        iVar7 = (int)sVar3;
        uVar13 = (uint)bVar5;
        param_1 = FUN_013c0b40();
        dVar18 = dVar20;
        uVar16 = extraout_w8;
      }
      uVar17 = SUB84(dVar18,0);
      goto LAB_0144da88;
    }
    sVar4 = *(short *)(lVar2 + 7);
    if (sVar4 == 0x41) {
      if ((uVar14 == 0) &&
         (uVar13 = (int)unaff_x26 + *(int *)(lVar9 + lVar12), uVar16 = uVar13 | uVar16 | 0x40,
         uVar13 != uVar16)) {
        *(uint *)(lVar9 + lVar12) = uVar16;
        *(undefined4 *)(lVar9 + 0x17) = 0;
      }
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(uVar15,1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if (sVar4 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
      uVar16 = 0x1e;
    }
    else {
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
      param_1 = thunk_FUN_01349d90();
      uVar16 = 0xfe;
      uVar19 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  } while( true );
}

