
ulong FUN_01422ac0(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x26;
  
  uVar1 = FUN_0133fb80(2,param_1,2);
  if (((uVar1 & 1) != 0) && (*(int *)(uVar1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))) {
    uVar1 = thunk_FUN_01349c30();
  }
  if (((uVar1 & 1) != 0) && (NAN(*(double *)(uVar1 + 3)))) {
    uVar1 = 0;
  }
  return uVar1;
}

