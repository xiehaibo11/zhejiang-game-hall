
void FUN_0090e240(long param_1,undefined8 param_2,int *param_3,int *param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
                    /* try { // try from 0090e248 to 00a0e2bf has its CatchHandler @ 0090e364 */
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = *param_3;
  iVar1 = *param_4;
  lua_pushlightuserdata(uVar4,*(undefined8 *)(param_1 + 8));
  lua_gettable(uVar4,0xffffd8f0);
  lua_pushstring(uVar4,"setOnTaskError");
  lua_gettable(uVar4,0xfffffffe);
  lua_remove(uVar4,0xfffffffe);
  iVar2 = lua_type(uVar4,0xffffffff);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (iVar2 == 6) {
                    /* try { // try from 0090e2c4 to 00a0e2d7 has its CatchHandler @ 0090e360 */
    FUN_0090d9f4(uVar4,param_2);
                    /* try { // try from 0090e2d8 to 00a0e30b has its CatchHandler @ 0090e20c */
    lua_pushnumber((double)iVar3,*(undefined8 *)(param_1 + 0x10));
    lua_pushnumber((double)iVar1,*(undefined8 *)(param_1 + 0x10));
    pbVar5 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar5 = param_5 + 1;
    }
    lua_pushstring(*(undefined8 *)(param_1 + 0x10),pbVar5);
                    /* try { // try from 0090e30c to 00a0e31f has its CatchHandler @ 0090e364 */
    iVar3 = lua_pcall(*(undefined8 *)(param_1 + 0x10),4,0,0);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
                    /* try { // try from 0090e320 to 00a0e37f has its CatchHandler @ 0090e20c */
  lua_settop(uVar4,0xfffffffe);
  return;
}

