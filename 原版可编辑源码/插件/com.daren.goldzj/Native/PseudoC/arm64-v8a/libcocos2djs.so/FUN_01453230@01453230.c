
void FUN_01453230(void)

{
  long in_x4;
  undefined4 in_w6;
  long in_x10;
  long unaff_x26;
  
  if (*(short *)(in_x10 + 7) != 0x41) {
    *(undefined4 *)(in_x4 + -0x20) = in_w6;
    thunk_FUN_01349d90();
    FUN_01452e68();
    return;
  }
  *(undefined4 *)(in_x4 + -0x20) = in_w6;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1c00));
}

