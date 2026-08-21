
undefined8 FUN_00a104c4(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      if ((*(int *)(param_1 + 0x264) != param_2) || (*(char *)(param_1 + 0x271) == '\0')) {
        FUN_00a14704(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a1053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_2);
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x271) = 0;
    }
                    /* try { // try from 00a10500 to 00b10507 has its CatchHandler @ 00a10604 */
    FUN_00a14704(param_1,param_2);
  }
                    /* try { // try from 00a10508 to 00b1063f has its CatchHandler @ 00a102f4 */
  close(param_2);
  return 0;
}

