
undefined8 FUN_00a4d630(long param_1,undefined4 *param_2,int param_3)

{
  if (param_3 != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x260);
    return 1;
  }
                    /* try { // try from 00a4d644 to 00b4d64f has its CatchHandler @ 00a4dbcc */
  return 0;
}

