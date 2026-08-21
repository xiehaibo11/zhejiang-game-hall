
undefined8 FUN_00a25eac(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 00a25ecc to 00b25ee3 has its CatchHandler @ 00a25f90 */
      if ((*(int *)(param_1 + 0x264) != param_2) || (*(char *)(param_1 + 0x271) == '\0')) {
                    /* try { // try from 00a25f10 to 00b25f6f has its CatchHandler @ 00a25e94 */
        FUN_00a2a0ec(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00a25f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_2);
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x271) = 0;
    }
                    /* try { // try from 00a25ee8 to 00b25f0f has its CatchHandler @ 00a25f8c */
    FUN_00a2a0ec(param_1,param_2);
  }
  close(param_2);
  return 0;
}

