
ulong FUN_01393a40(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined8 uVar8;
  long unaff_x26;
  double dVar9;
  
  uVar8 = *(undefined8 *)(unaff_x26 + 0x140);
  while ((param_2 & 1) != 0) {
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    if ((int)lVar2 == (int)uVar8) {
      dVar9 = *(double *)(param_2 + 3);
      dVar7 = (double)(long)dVar9;
      if (SBORROW8((long)dVar7,1) || SCARRY8((long)dVar7,1)) {
        param_1 = FUN_013c0b40();
        dVar7 = dVar9;
      }
      uVar6 = SUB84(dVar7,0);
      goto LAB_01393b6c;
    }
    sVar3 = *(short *)(lVar2 + 7);
    if (sVar3 == 0x41) {
      if (((((param_1 & 1) != 0) &&
           (lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), (int)lVar2 != (int)uVar8)) &&
          (sVar3 = *(short *)(lVar2 + 7), sVar3 != 0x41)) && (sVar3 != 0x43)) {
        thunk_FUN_01349d90();
      }
      goto LAB_01393bc4;
    }
    if (sVar3 == 0x43) {
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xf);
    }
    else {
      param_2 = thunk_FUN_01349d90(param_2);
      uVar8 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  }
  uVar6 = (int)param_2 >> 1;
LAB_01393b6c:
  do {
    if ((param_1 & 1) == 0) {
      uVar5 = (int)param_1 >> 1;
LAB_01393c20:
      uVar6 = uVar6 >> (ulong)(uVar5 & 0x1f);
      if (uVar6 < 0x40000000) {
        uVar4 = (ulong)(uVar6 * 2);
      }
      else {
        uVar4 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar4 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar4 = uVar4 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          uVar4 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar4 + 3) = (double)uVar6;
      }
      return uVar4;
    }
    lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar2 == (int)uVar8) {
      dVar9 = *(double *)(param_1 + 3);
      dVar7 = (double)(long)dVar9;
      if (SBORROW8((long)dVar7,1) || SCARRY8((long)dVar7,1)) {
        param_1 = FUN_013c0b40();
        dVar7 = dVar9;
      }
      uVar5 = SUB84(dVar7,0);
      goto LAB_01393c20;
    }
    sVar3 = *(short *)(lVar2 + 7);
    if (sVar3 == 0x41) {
LAB_01393bc4:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    if (sVar3 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
    }
    else {
      param_1 = thunk_FUN_01349d90();
      uVar8 = *(undefined8 *)(unaff_x26 + 0x140);
    }
  } while( true );
}

