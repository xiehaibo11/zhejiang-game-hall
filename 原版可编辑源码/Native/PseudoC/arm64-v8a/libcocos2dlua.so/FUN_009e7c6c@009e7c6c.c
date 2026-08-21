
void FUN_009e7c6c(long param_1,byte *param_2,byte *param_3,int *param_4,undefined8 *param_5)

{
  ulong uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  iVar2 = *param_4;
  uVar4 = *param_5;
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar3);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
  lua_pushlstring(*(undefined8 *)(param_1 + 8),pbVar3,uVar1);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar2);
                    /* try { // try from 009e7cd4 to 00ae7d2b has its CatchHandler @ 009e7cd4
                       catch() { ... } // from try @ 009e7cd4 with catch @ 009e7cd4
                       catch() { ... } // from try @ 009e7d54 with catch @ 009e7cd4
                       catch() { ... } // from try @ 009e7dfc with catch @ 009e7cd4 */
  lua_pushstring(*(undefined8 *)(param_1 + 8),uVar4);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),4,0);
  return;
}

