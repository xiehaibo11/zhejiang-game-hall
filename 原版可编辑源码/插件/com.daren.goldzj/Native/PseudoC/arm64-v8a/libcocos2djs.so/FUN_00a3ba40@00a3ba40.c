
undefined8 FUN_00a3ba40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
                    /* try { // try from 00a3ba58 to 00b3ba63 has its CatchHandler @ 00a3bbd0 */
                    /* try { // try from 00a3ba64 to 00b3ba6f has its CatchHandler @ 00a3bbcc */
                    /* try { // try from 00a3ba70 to 00b3bb57 has its CatchHandler @ 00a3bbe4 */
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
  uVar1 = FUN_00a3e038(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar1;
}

