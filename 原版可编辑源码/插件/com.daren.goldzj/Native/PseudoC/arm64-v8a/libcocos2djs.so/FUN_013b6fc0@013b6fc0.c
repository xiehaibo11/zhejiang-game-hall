
void FUN_013b6fc0(ulong param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x26;
  double in_d3;
  
  if (0x3fffffff < (uint)param_1) {
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
    *(double *)(uVar4 + 3) = (double)(param_1 & 0xffffffff);
    param_1 = uVar4;
  }
  if (0x3fffffff < param_2) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      param_1 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      param_1 = FUN_01348560(param_1,0xc);
    }
    *(int *)(param_1 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(param_1 + 3) = (double)param_2;
  }
  if (0x3fffffff < param_3) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      param_1 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      param_1 = FUN_01348560(param_1,0xc);
    }
    *(int *)(param_1 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(param_1 + 3) = (double)param_3;
  }
  iVar3 = (int)in_d3;
  if ((in_d3 != (double)iVar3) || (((iVar3 == 0 && ((long)in_d3 < 0)) || (SCARRY4(iVar3,iVar3))))) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar2 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar2 = FUN_01348560(param_1,0xc);
    }
    *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar2 + 3) = in_d3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x2970));
}

