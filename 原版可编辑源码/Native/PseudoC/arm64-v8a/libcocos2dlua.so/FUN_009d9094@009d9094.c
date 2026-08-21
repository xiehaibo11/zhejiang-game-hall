
void FUN_009d9094(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)*param_2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar1);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),2,0);
  universe::remove_once_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10));
  return;
}

