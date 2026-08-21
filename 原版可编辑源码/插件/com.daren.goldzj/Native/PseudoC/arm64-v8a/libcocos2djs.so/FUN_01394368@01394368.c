
void FUN_01394368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long unaff_x26;
  
  if (*(short *)(param_5 + 7) != 0x41) {
    thunk_FUN_01349d90(param_2,param_2,param_3,param_1);
    FUN_01394184(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c00));
}

