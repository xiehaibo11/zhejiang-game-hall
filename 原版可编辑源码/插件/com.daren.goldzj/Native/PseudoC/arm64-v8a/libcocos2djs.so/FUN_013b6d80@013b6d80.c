
void FUN_013b6d80(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,ulong param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x26;
  long unaff_x29;
  
  if (0x3fffffff < (uint)param_4) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar4 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar4 = FUN_01348560(param_4,0xc,unaff_x26 + (ulong)*(uint *)(unaff_x29 + -0x10),param_5);
    }
    *(int *)(uVar4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar4 + 3) = (double)(param_4 & 0xffffffff);
    param_4 = uVar4;
  }
  iVar3 = (int)param_5;
  if (SCARRY4(iVar3,iVar3)) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      param_4 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      param_4 = FUN_01348560(param_4,0xc);
    }
    *(int *)(param_4 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(param_4 + 3) = (double)iVar3;
  }
  iVar3 = (int)param_3;
  if ((param_3 != (double)iVar3) ||
     (((iVar3 == 0 && ((long)param_3 < 0)) || (SCARRY4(iVar3,iVar3))))) {
    uVar4 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar4 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar2 = uVar4 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar2 = FUN_01348560(param_4,0xc);
    }
    *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar2 + 3) = param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2968));
}

