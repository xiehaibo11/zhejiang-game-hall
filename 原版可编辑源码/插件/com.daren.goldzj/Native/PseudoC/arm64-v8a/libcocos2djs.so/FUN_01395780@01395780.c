
void FUN_01395780(ulong param_1)

{
  long lVar1;
  long unaff_x26;
  
  while ((param_1 & 1) != 0) {
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) break;
    if (*(short *)(lVar1 + 7) == 0x41) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c38));
    }
    param_1 = thunk_FUN_01349d90();
  }
  FUN_01393260(0xfffffffffffffffe,param_1);
  return;
}

