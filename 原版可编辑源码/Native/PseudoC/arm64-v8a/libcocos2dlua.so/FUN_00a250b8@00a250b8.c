
undefined8 FUN_00a250b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_40;
  undefined8 local_38;
  
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
        uVar2 = FUN_00a393e0(local_40,iVar1,param_2,param_3,&local_38);
        if ((int)uVar2 != 0) {
          return uVar2;
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

