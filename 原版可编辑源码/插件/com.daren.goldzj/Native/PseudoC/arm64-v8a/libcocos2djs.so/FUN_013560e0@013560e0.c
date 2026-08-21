
void FUN_013560e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong in_x7;
  ulong uVar3;
  long unaff_x26;
  undefined8 unaff_x27;
  
  if ((long)in_x7 < 0) {
    FUN_01355a60(param_1,param_2);
    return;
  }
  if (0x3fffffff < in_x7) {
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
    *(double *)(lVar2 + 3) = (double)in_x7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1b68),param_2,unaff_x27,param_1);
}

