
long FUN_013959c0(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long unaff_x26;
  double dVar6;
  
  while( true ) {
    iVar4 = (int)*(undefined8 *)(unaff_x26 + 0x140);
    if ((param_1 & 1) == 0) {
      iVar4 = (int)param_1 >> 1;
      iVar2 = -iVar4;
      if (SBORROW4(0,iVar4)) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar3 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar3 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar3 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar3 + 3) = -0.0 - (double)iVar4;
      }
      else if (iVar2 == 0) {
        lVar3 = *(long *)(unaff_x26 + 0x448);
      }
      else if (SCARRY4(iVar2,iVar2)) {
        uVar5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = uVar5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar3 = uVar5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar3 = FUN_01348560(param_1,0xc);
        }
        *(int *)(lVar3 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(lVar3 + 3) = (double)iVar2;
      }
      else {
        lVar3 = (long)(iVar4 * -2);
      }
      return lVar3;
    }
    lVar3 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar3 == iVar4) break;
    if (*(short *)(lVar3 + 7) == 0x41) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c38));
    }
    param_1 = thunk_FUN_01349d90();
  }
  uVar5 = **(ulong **)(unaff_x26 + 0x1428);
  dVar6 = *(double *)(param_1 + 3);
  uVar1 = uVar5 + 0xc;
  if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar3 = uVar5 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar1;
  }
  else {
    lVar3 = FUN_01348560(param_1,0xc);
    iVar4 = (int)*(undefined8 *)(unaff_x26 + 0x140);
  }
  *(int *)(lVar3 + -1) = iVar4;
  *(double *)(lVar3 + 3) = -dVar6;
  return lVar3;
}

