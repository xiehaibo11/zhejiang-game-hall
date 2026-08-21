
undefined8 FUN_0108ad94(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x120);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x128);
  }
                    /* try { // try from 0108adac to 0118adbf has its CatchHandler @ 0108af8c */
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x130);
  }
  return 0;
}

