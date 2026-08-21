
void FUN_01469f08(undefined8 param_1)

{
  long in_x4;
  undefined4 in_w6;
  undefined8 in_x7;
  long in_x11;
  long unaff_x26;
  
  if (*(short *)(in_x11 + 7) != 0x41) {
    *(undefined4 *)(in_x4 + -0x20) = in_w6;
    thunk_FUN_01349d90(in_x7);
    FUN_01469ba8(param_1);
    return;
  }
  *(undefined4 *)(in_x4 + -0x20) = in_w6;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c00));
}

