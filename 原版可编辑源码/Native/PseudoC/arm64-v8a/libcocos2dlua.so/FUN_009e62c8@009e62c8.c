
void FUN_009e62c8(long param_1,byte *param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  fVar2 = *param_3;
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar1);
  lua_pushnumber((double)fVar2,*(undefined8 *)(param_1 + 8));
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),2,0);
  return;
}

