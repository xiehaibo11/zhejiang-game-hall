
undefined8 FUN_00a523a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
                    /* try { // try from 00a523b4 to 00b523ff has its CatchHandler @ 00a523b4
                       catch() { ... } // from try @ 00a523b4 with catch @ 00a523b4
                       catch() { ... } // from try @ 00a5241c with catch @ 00a523b4 */
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x68c), *pcVar2 == '\0')) {
    uVar1 = FUN_00a2d674(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
                    /* try { // try from 00a5241c to 00b524cf has its CatchHandler @ 00a523b4 */
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_00a54a20(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
                    /* try { // try from 00a52400 to 00b5241b has its CatchHandler @ 00a52498 */
  return uVar1;
}

