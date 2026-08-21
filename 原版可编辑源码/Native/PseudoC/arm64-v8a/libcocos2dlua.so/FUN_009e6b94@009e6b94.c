
void FUN_009e6b94(long param_1,byte *param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  
                    /* try { // try from 009e6b98 to 00ae6baf has its CatchHandler @ 009e6e20 */
  pbVar1 = *(byte **)(param_2 + 0x10);
                    /* try { // try from 009e6bb0 to 00ae6bef has its CatchHandler @ 009e6a04 */
  fVar2 = *param_3;
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar1);
  lua_pushnumber((double)fVar2,*(undefined8 *)(param_1 + 8));
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),2,0);
  return;
}

