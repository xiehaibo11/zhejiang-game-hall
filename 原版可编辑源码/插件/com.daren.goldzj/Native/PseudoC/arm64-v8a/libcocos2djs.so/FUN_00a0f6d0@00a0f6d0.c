
undefined8 FUN_00a0f6d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 00a0f6e4 to 00b0f7f7 has its CatchHandler @ 00a0f5dc */
  if (param_1 == 0) {
    uVar2 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x641) == '\0') {
      pcVar3 = "CONNECT_ONLY is required!";
    }
    else {
      iVar1 = FUN_00a110d4(param_1,&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        uVar2 = FUN_00a239f8(local_40,iVar1,param_2,param_3,&local_38);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *param_4 = local_38;
        return uVar2;
      }
                    /* catch() { ... } // from try @ 00a0f6b8 with catch @ 00a0f758 */
      pcVar3 = "Failed to get recent socket";
    }
    FUN_00a23020(param_1,pcVar3);
    uVar2 = 1;
  }
                    /* catch() { ... } // from try @ 00a0f6ac with catch @ 00a0f770 */
                    /* catch() { ... } // from try @ 00a0f684 with catch @ 00a0f774 */
  return uVar2;
}

