
long FUN_01392fc0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x26;
  double dVar9;
  
  uVar7 = *(undefined8 *)(unaff_x26 + 0x140);
  while ((param_2 & 1) != 0) {
    lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if ((int)lVar3 == (int)uVar7) {
      dVar9 = *(double *)(param_2 + 3);
      dVar6 = (double)(long)dVar9;
      if (SBORROW8((long)dVar6,1) || SCARRY8((long)dVar6,1)) {
        param_1 = FUN_013c0b40();
        dVar6 = dVar9;
      }
      uVar5 = SUB84(dVar6,0);
      goto LAB_013930ec;
    }
    sVar2 = *(short *)(lVar3 + 7);
    if (sVar2 == 0x41) {
      if (((((param_1 & 1) != 0) &&
           (lVar3 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), (int)lVar3 != (int)uVar7)) &&
          (sVar2 = *(short *)(lVar3 + 7), sVar2 != 0x41)) && (sVar2 != 0x43)) {
        thunk_FUN_01349d90();
      }
      goto LAB_01393144;
    }
    if (sVar2 == 0x43) {
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
    }
    else {
      param_2 = thunk_FUN_01349d90(param_2);
      uVar7 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  }
  uVar5 = (int)param_2 >> 1;
LAB_013930ec:
  do {
    if ((param_1 & 1) == 0) {
      uVar4 = (int)param_1 >> 1;
LAB_013931a0:
      uVar5 = uVar5 | uVar4;
      if (SCARRY4(uVar5,uVar5)) {
        uVar8 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar8 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar3 = uVar8 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar3 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar3 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar3 + 3) = (double)(int)uVar5;
      }
      else {
        lVar3 = (long)(int)(uVar5 * 2);
      }
      return lVar3;
    }
    lVar3 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar3 == (int)uVar7) {
      dVar9 = *(double *)(param_1 + 3);
      dVar6 = (double)(long)dVar9;
      if (SBORROW8((long)dVar6,1) || SCARRY8((long)dVar6,1)) {
        param_1 = FUN_013c0b40();
        dVar6 = dVar9;
      }
      uVar4 = SUB84(dVar6,0);
      goto LAB_013931a0;
    }
    sVar2 = *(short *)(lVar3 + 7);
    if (sVar2 == 0x41) {
LAB_01393144:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    if (sVar2 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
    }
    else {
      param_1 = thunk_FUN_01349d90();
      uVar7 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  } while( true );
}

