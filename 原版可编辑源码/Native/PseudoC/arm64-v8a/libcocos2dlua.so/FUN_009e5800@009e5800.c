
void FUN_009e5800(long param_1,byte *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  iVar1 = *param_3;
  uVar3 = *param_4;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  lua_pushstring(*(undefined8 *)(param_1 + 8),pbVar2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar1);
                    /* try { // try from 009e5844 to 00ae589b has its CatchHandler @ 009e5844
                       catch() { ... } // from try @ 009e5844 with catch @ 009e5844
                       catch() { ... } // from try @ 009e58a0 with catch @ 009e5844 */
  lua_pushstring(*(undefined8 *)(param_1 + 8),uVar3);
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),3,0);
  return;
}

