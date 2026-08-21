
undefined8 FUN_00a0f780(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a0f678 with catch @ 00a0f784 */
                    /* catch() { ... } // from try @ 00a0f6cc with catch @ 00a0f788 */
  local_40 = 0;
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
                    /* catch() { ... } // from try @ 00a0f628 with catch @ 00a0f7cc */
        *param_4 = 0;
                    /* catch() { ... } // from try @ 00a0f634 with catch @ 00a0f7d4 */
                    /* catch() { ... } // from try @ 00a0f648 with catch @ 00a0f7dc */
        uVar2 = FUN_00a232e8(local_40,iVar1,param_2,param_3,&local_38);
        if (local_38 == -1) {
          return 0x37;
        }
                    /* catch() { ... } // from try @ 00a0f8d0 with catch @ 00a0f7f8 */
        if (((int)uVar2 == 0) && (local_38 == 0)) {
          return 0x51;
        }
        *param_4 = local_38;
        return uVar2;
      }
      pcVar3 = "Failed to get recent socket";
    }
    FUN_00a23020(param_1,pcVar3);
    uVar2 = 1;
  }
  return uVar2;
}

