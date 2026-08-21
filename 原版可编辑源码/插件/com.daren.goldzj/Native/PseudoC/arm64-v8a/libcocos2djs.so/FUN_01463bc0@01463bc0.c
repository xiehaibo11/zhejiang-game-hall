
void FUN_01463bc0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_w8;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar19;
  
  iVar6 = *(int *)(unaff_x20 + unaff_x19 + 1);
  lVar8 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar8 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar8 = *(long *)(unaff_x26 + 0xa0);
  }
  uVar14 = *(undefined8 *)(unaff_x29 + -8);
  bVar4 = (int)lVar8 == (int)*(undefined8 *)(unaff_x26 + 0xa0);
  uVar12 = (uint)bVar4;
  lVar11 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 5) * 4 + 0x1f;
  uVar15 = 0;
  uVar18 = *(undefined8 *)(unaff_x26 + 0x140);
  do {
    uVar13 = (uint)bVar4;
    lVar5 = unaff_x29;
    lVar9 = lVar8;
    lVar10 = lVar11;
    if ((param_1 & 1) == 0) {
      uVar15 = uVar15 | 2;
      uVar16 = (int)param_1 >> 1;
      uVar12 = uVar13;
LAB_01463d68:
      uVar16 = uVar16 ^ iVar6 * 2 >> 1;
      if (SCARRY4(uVar16,uVar16)) {
        uVar7 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar7 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar7 = uVar7 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          uVar7 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar7 + 3) = (double)(int)uVar16;
      }
      else {
        uVar7 = (ulong)(int)(uVar16 * 2);
        unaff_x29 = lVar5;
        lVar8 = lVar9;
        lVar11 = lVar10;
        uVar13 = uVar12;
      }
      if ((uVar7 & 1) == 0) {
        uVar12 = 2;
      }
      else {
        uVar12 = 0xe;
      }
      if ((uVar13 == 0) &&
         (uVar13 = (int)unaff_x26 + *(int *)(lVar8 + lVar11), uVar15 = uVar13 | uVar12 | uVar15,
         uVar13 != uVar15)) {
        *(uint *)(lVar8 + lVar11) = uVar15;
        *(undefined4 *)(lVar8 + 0x17) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x01463dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 9) * 8))
                (uVar7);
      return;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar2 == (int)uVar18) {
      dVar19 = *(double *)(param_1 + 3);
      uVar15 = uVar15 | 0xe;
      dVar17 = (double)(long)dVar19;
      if (SBORROW8((long)dVar17,1) || SCARRY8((long)dVar17,1)) {
        uVar12 = (uint)bVar4;
        param_1 = FUN_013c0b40();
        dVar17 = dVar19;
        uVar15 = extraout_w8;
      }
      uVar16 = SUB84(dVar17,0);
      goto LAB_01463d68;
    }
    sVar3 = *(short *)(lVar2 + 7);
    if (sVar3 == 0x41) {
      if ((uVar13 == 0) &&
         (uVar12 = (int)unaff_x26 + *(int *)(lVar8 + lVar11), uVar15 = uVar12 | uVar15 | 0x40,
         uVar12 != uVar15)) {
        *(uint *)(lVar8 + lVar11) = uVar15;
        *(undefined4 *)(lVar8 + 0x17) = 0;
      }
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(uVar14,1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if (sVar3 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
      uVar15 = 0x1e;
    }
    else {
      *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
      param_1 = thunk_FUN_01349d90();
      uVar15 = 0xfe;
      uVar18 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  } while( true );
}

