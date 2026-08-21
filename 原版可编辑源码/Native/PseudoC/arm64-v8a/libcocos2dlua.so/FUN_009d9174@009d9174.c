
void FUN_009d9174(long param_1,int *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_3;
  fVar2 = *param_4;
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)*param_2);
  lua_pushnumber((double)fVar1,*(undefined8 *)(param_1 + 8));
  lua_pushnumber((double)fVar2,*(undefined8 *)(param_1 + 8));
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),3,0);
  universe::remove_once_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10));
  return;
}

