
void FUN_009e711c(long param_1,byte *param_2,int *param_3,undefined8 *param_4,float *param_5)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  float fVar4;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  iVar1 = *param_3;
  uVar3 = *param_4;
  fVar4 = *param_5;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar1);
  lua_pushstring(*(undefined8 *)(param_1 + 8),uVar3);
  lua_pushnumber((double)fVar4,*(undefined8 *)(param_1 + 8));
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),4,0);
  return;
}

