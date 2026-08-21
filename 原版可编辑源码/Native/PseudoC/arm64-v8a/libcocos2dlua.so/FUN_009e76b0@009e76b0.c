
void FUN_009e76b0(long param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)*param_2);
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar1);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),2,0);
  return;
}

