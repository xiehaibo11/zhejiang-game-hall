
void FUN_00a01a8c(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar1);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),1,0);
  return;
}

