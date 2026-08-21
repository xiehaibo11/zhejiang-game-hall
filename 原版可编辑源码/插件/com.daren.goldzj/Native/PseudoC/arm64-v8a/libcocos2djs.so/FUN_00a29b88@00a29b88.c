
undefined8 FUN_00a29b88(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  *param_2 = 0;
                    /* try { // try from 00a29ba4 to 00b29bf7 has its CatchHandler @ 00a29ba4
                       catch() { ... } // from try @ 00a29ba4 with catch @ 00a29ba4
                       catch() { ... } // from try @ 00a29d5c with catch @ 00a29ba4 */
  if (*(char *)(param_1 + 0x3c5) == '\0') {
    if (*(char *)(param_1 + 0x3c7) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x3c7) != '\0') {
    if (*(long *)(*(long *)(param_1 + 0x400) + 0x30) != 0) {
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
  uVar1 = FUN_00a3f8d8(param_1,0);
  if ((int)uVar1 == 0) {
                    /* try { // try from 00a29bf8 to 00b29c0f has its CatchHandler @ 00a29dd8 */
                    /* try { // try from 00a29c18 to 00b29c23 has its CatchHandler @ 00a29dd4 */
    if (((*(int *)(param_1 + 0x180) != 2) || (*(char *)(param_1 + 0x3d9) != '\0')) &&
       ((*(char *)(param_1 + 0x3c9) == '\0' ||
        ((*(char *)(param_1 + 0x3be) == '\0' || (*(int *)(param_1 + 0x710) == 2)))))) {
                    /* try { // try from 00a29c24 to 00b29c2f has its CatchHandler @ 00a29dd0 */
      pcVar2 = *(code **)(*(long *)(param_1 + 0x400) + 0x28);
      if (pcVar2 == (code *)0x0) {
        *param_2 = 1;
      }
      else {
                    /* try { // try from 00a29c30 to 00b29d5b has its CatchHandler @ 00a29de8 */
        uVar1 = (*pcVar2)(param_1,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      *(undefined1 *)(param_1 + 0x3c7) = 1;
      return 0;
    }
    return 0;
  }
  return uVar1;
}

