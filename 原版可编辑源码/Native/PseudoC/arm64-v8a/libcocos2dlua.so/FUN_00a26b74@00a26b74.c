
undefined8 FUN_00a26b74(long param_1)

{
  undefined8 uVar1;
  ssize_t sVar2;
  undefined1 auStack_14 [4];
  
                    /* try { // try from 00a26b78 to 00b26b7f has its CatchHandler @ 00a26bb0 */
                    /* catch() { ... } // from try @ 00a26b10 with catch @ 00a26b80
                       try { // try from 00a26b80 to 00b26bcb has its CatchHandler @ 00a269a0 */
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x260) == -1) {
      return 0;
    }
    sVar2 = recv(*(int *)(param_1 + 0x260),auStack_14,1,2);
                    /* catch() { ... } // from try @ 00a269f8 with catch @ 00a26bb0
                       catch() { ... } // from try @ 00a26a5c with catch @ 00a26bb0
                       catch() { ... } // from try @ 00a26b28 with catch @ 00a26bb0
                       catch() { ... } // from try @ 00a26b78 with catch @ 00a26bb0 */
    if (sVar2 == 0) {
      return 0;
    }
  }
  else {
    uVar1 = thunk_FUN_00a5cbb8();
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}

