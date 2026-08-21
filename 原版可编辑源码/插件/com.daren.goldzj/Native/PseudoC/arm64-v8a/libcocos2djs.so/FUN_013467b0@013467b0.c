
void FUN_013467b0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  uint in_w5;
  ulong uVar3;
  long unaff_x26;
  
  if (0x3fffffff < in_w5) {
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
    *(double *)(lVar2 + 3) = (double)in_w5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f98));
}

