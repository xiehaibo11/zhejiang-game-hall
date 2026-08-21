
void FUN_014581c0(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  int unaff_w19;
  long unaff_x26;
  long unaff_x29;
  undefined1 auVar3 [16];
  undefined8 local_40;
  
  lVar2 = *(long *)(unaff_x29 + -8);
  *(int *)(unaff_x29 + -0x20) = (unaff_w19 + -1) * 2;
  auVar3 = FUN_013beee0(1,*(undefined8 *)(unaff_x26 + 0x1b38));
  lVar1 = **(long **)(unaff_x26 + 0x14c0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar2 + -0x20) = param_1;
    FUN_01349180(auVar3._0_8_,lVar1);
    *(undefined4 *)(lVar2 + -0x20) = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630));
  }
                    /* WARNING: Could not recover jumptable at 0x014582b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_40 + ((auVar3._8_8_ << 0x20) >> 0x21) * 8))();
  return;
}

