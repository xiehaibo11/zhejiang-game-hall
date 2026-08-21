
void FUN_009e5240(long param_1,byte *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar1 = *param_3;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  lua_pushboolean(*(undefined8 *)(param_1 + 8),uVar1);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),2,0);
  return;
}

