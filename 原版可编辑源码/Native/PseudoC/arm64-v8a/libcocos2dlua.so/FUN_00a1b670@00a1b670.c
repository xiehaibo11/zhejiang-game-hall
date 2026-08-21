
undefined8 FUN_00a1b670(long param_1,undefined1 *param_2,long param_3)

{
                    /* try { // try from 00a1b670 to 00b1b677 has its CatchHandler @ 00a1b6e8 */
  if (*(char *)(param_1 + 0x44) == '\0') {
    return 0;
  }
                    /* try { // try from 00a1b678 to 00b1b703 has its CatchHandler @ 00a1b614 */
  if (param_3 != 0) {
    *param_2 = 0xf;
    return 1;
  }
  return 0xfffffffe;
}

