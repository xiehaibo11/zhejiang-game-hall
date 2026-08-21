
undefined8 FUN_00a3d16c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
                    /* try { // try from 00a3d184 to 00b3d1d7 has its CatchHandler @ 00a3d184
                       catch() { ... } // from try @ 00a3d184 with catch @ 00a3d184
                       catch() { ... } // from try @ 00a3d2e4 with catch @ 00a3d184 */
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x68c), *pcVar2 == '\0')) {
                    /* try { // try from 00a3d1d8 to 00b3d1ef has its CatchHandler @ 00a3d360 */
    uVar1 = FUN_00a17c8c(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_00a3e038(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar1;
}

