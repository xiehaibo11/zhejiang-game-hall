
undefined8 FUN_00a25168(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_40;
  long local_38;
  
  local_40 = 0;
  if (param_1 == 0) {
    uVar2 = 0x2b;
  }
  else {
    if (*(char *)(param_1 + 0x641) == '\0') {
      pcVar3 = "CONNECT_ONLY is required!";
    }
    else {
      iVar1 = FUN_00a26abc(param_1,&local_40);
      if (iVar1 != -1) {
        *param_4 = 0;
        uVar2 = FUN_00a38cd0(local_40,iVar1,param_2,param_3,&local_38);
        if (local_38 == -1) {
          return 0x37;
        }
        if (((int)uVar2 == 0) && (local_38 == 0)) {
          return 0x51;
        }
        *param_4 = local_38;
        return uVar2;
      }
      pcVar3 = "Failed to get recent socket";
    }
    FUN_00a38a08(param_1,pcVar3);
    uVar2 = 1;
  }
  return uVar2;
}

