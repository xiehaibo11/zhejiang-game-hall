
long FUN_01392a60(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x26;
  double extraout_d0;
  double dVar6;
  double dVar7;
  
  do {
    while( true ) {
      uVar4 = *(undefined8 *)(unaff_x26 + 0x140);
      iVar3 = (int)uVar4;
      if ((param_2 & 1) == 0) break;
      lVar2 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if ((int)lVar2 == iVar3) {
        if (((param_1 & 1) != 0) && (*(int *)(param_1 - 1) != iVar3)) goto LAB_01392b24;
        goto LAB_01392b9c;
      }
      if (*(short *)(lVar2 + 7) == 0x41) {
        if ((((param_1 & 1) == 0) ||
            (lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar2 + 7) == 0x41)) ||
           ((int)lVar2 == iVar3)) goto LAB_01392b48;
        param_1 = thunk_FUN_01349d90();
      }
      else {
        param_2 = thunk_FUN_01349d90(param_2);
      }
    }
    if (((param_1 & 1) == 0) || (*(int *)(param_1 - 1) == iVar3)) break;
LAB_01392b24:
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
LAB_01392b48:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    param_1 = thunk_FUN_01349d90();
  } while( true );
LAB_01392b9c:
  if ((param_2 & 1) == 0) goto LAB_01392bb4;
  if (*(int *)(param_2 - 1) == (int)uVar4) {
    dVar6 = *(double *)(param_2 + 3);
    goto LAB_01392bd8;
  }
  param_2 = thunk_FUN_01349c30(param_2);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x140);
  goto LAB_01392b9c;
LAB_01392bb4:
  dVar6 = (double)((int)param_2 >> 1);
LAB_01392bd8:
  do {
    if ((param_1 & 1) == 0) {
      dVar7 = (double)((int)param_1 >> 1);
LAB_01392bf8:
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1392c08;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar4 = (**(code **)(unaff_x26 + 0x1168))(dVar6,dVar7);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      iVar3 = (int)extraout_d0;
      if (((extraout_d0 != (double)iVar3) || ((iVar3 == 0 && ((long)extraout_d0 < 0)))) ||
         (SCARRY4(iVar3,iVar3))) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar2 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar2 = FUN_01348560(uVar4,0xc);
        }
        *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar2 + 3) = extraout_d0;
      }
      else {
        lVar2 = (long)(iVar3 * 2);
      }
      return lVar2;
    }
    if (*(int *)(param_1 - 1) == (int)uVar4) {
      dVar7 = *(double *)(param_1 + 3);
      goto LAB_01392bf8;
    }
    param_1 = thunk_FUN_01349c30();
    uVar4 = *(undefined8 *)(unaff_x26 + 0x140);
  } while( true );
}

