
undefined8
internal_aes_enc_socket
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    pcVar2 = "socket cache id is null";
  }
  else {
    if ((param_2 != 0) && (param_4 != 0)) {
      uVar1 = thunk_EXT_FUN_00002bb0(DAT_0011d1c8,param_1);
      uVar1 = thunk_EXT_FUN_00002bb0(uVar1,0x80,param_4,param_5,param_2,param_3,param_6);
      return uVar1;
    }
    pcVar2 = "socket aes enc input data or iv is null";
  }
  thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE",pcVar2);
  return 1;
}

