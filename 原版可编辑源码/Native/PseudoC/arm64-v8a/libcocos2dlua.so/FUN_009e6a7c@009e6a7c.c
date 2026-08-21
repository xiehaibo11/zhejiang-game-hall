
void FUN_009e6a7c(long param_1,byte *param_2,byte *param_3,int *param_4,byte *param_5)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
                    /* try { // try from 009e6a94 to 00ae6b33 has its CatchHandler @ 009e6a04 */
  iVar1 = *param_4;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar1);
  pbVar2 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar2 = param_5 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),4,0);
  return;
}

