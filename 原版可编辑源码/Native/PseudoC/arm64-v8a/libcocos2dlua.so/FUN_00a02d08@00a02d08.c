
void FUN_00a02d08(long param_1,undefined1 *param_2)

{
  lua_pushboolean(*(undefined8 *)(param_1 + 8),*param_2);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),1,0);
  return;
}

