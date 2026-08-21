
undefined8 FUN_00a3987c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
                    /* try { // try from 00a39880 to 00b39897 has its CatchHandler @ 00a39a88 */
                    /* try { // try from 00a398a0 to 00b398ab has its CatchHandler @ 00a39a84 */
                    /* try { // try from 00a398ac to 00b398b7 has its CatchHandler @ 00a39a80 */
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x68c), *pcVar2 == '\0')) {
    uVar1 = FUN_00a17c8c(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
                    /* try { // try from 00a398b8 to 00b39a0b has its CatchHandler @ 00a39a98 */
  uVar1 = FUN_00a3e038(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar1;
}

