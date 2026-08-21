
void FUN_009da4f8(long param_1,undefined1 *param_2)

{
  lua_pushboolean(*(undefined8 *)(param_1 + 8),*param_2);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),1,0);
  universe::remove_once_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10));
  return;
}

