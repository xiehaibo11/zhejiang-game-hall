
undefined8 FUN_00a53b54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x68c), *pcVar2 == '\0')) {
    uVar1 = FUN_00a2d674(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
                    /* catch() { ... } // from try @ 00a53ac8 with catch @ 00a53bc8 */
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_00a54a20(param_1 + 0x618,0);
                    /* catch() { ... } // from try @ 00a53afc with catch @ 00a53b94 */
                    /* catch() { ... } // from try @ 00a53b14 with catch @ 00a53b98 */
  *(bool *)param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar1;
}

