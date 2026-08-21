
void FUN_013b6c00(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x26;
  long unaff_x29;
  
  if (0x3fffffff < (uint)param_1) {
    uVar3 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar3 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar3 = uVar3 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      uVar3 = FUN_01348560(param_1,0xc,unaff_x26 + (ulong)*(uint *)(unaff_x29 + -0x10),0x3fffffff,
                           param_2);
    }
    *(int *)(uVar3 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar3 + 3) = (double)(param_1 & 0xffffffff);
    param_1 = uVar3;
  }
  if (0x3fffffff < (uint)param_2) {
    uVar3 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = uVar3 + 0xc;
    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar2 = uVar3 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
    }
    else {
      lVar2 = FUN_01348560(param_1,0xc);
    }
    *(int *)(lVar2 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar2 + 3) = (double)(param_2 & 0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2978));
}

