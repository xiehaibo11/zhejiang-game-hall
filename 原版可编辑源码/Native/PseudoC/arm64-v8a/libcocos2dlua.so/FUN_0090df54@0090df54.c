
void FUN_0090df54(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *param_3;
  lVar4 = *param_4;
  lVar3 = *param_5;
  lua_pushlightuserdata(uVar2,*(undefined8 *)(param_1 + 8));
                    /* try { // try from 0090df94 to 00a0dfc3 has its CatchHandler @ 0090e078 */
  lua_gettable(uVar2,0xffffd8f0);
  lua_pushstring(uVar2,"setOnTaskProgress");
  lua_gettable(uVar2,0xfffffffe);
  lua_remove(uVar2,0xfffffffe);
                    /* try { // try from 0090dfc8 to 00a0dfdb has its CatchHandler @ 0090e06c */
  iVar1 = lua_type(uVar2,0xffffffff);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (iVar1 == 6) {
    FUN_0090d9f4(uVar2,param_2);
    lua_pushnumber((double)lVar5,*(undefined8 *)(param_1 + 0x10));
    lua_pushnumber((double)lVar4,*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 0090dffc to 00a0e02b has its CatchHandler @ 0090e070 */
    lua_pushnumber((double)lVar3,*(undefined8 *)(param_1 + 0x10));
    iVar1 = lua_pcall(*(undefined8 *)(param_1 + 0x10),4,0,0);
    if (iVar1 == 0) {
                    /* try { // try from 0090e044 to 00a0e097 has its CatchHandler @ 0090de18 */
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
                    /* try { // try from 0090e030 to 00a0e043 has its CatchHandler @ 0090e068 */
  lua_settop(uVar2,0xfffffffe);
  return;
}

