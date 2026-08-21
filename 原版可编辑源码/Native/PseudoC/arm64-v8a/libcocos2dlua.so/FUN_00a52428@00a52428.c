
undefined8 FUN_00a52428(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x68c), *pcVar2 == '\0')) {
    uVar1 = FUN_00a2d674(param_1,0,pcVar2);
                    /* catch() { ... } // from try @ 00a52400 with catch @ 00a52498 */
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_00a54a20(param_1 + 0x618,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar1;
}

