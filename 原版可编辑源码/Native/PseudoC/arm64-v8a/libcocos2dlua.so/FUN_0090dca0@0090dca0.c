
void FUN_0090dca0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lua_pushlightuserdata(uVar2,*(undefined8 *)(param_1 + 8));
  lua_gettable(uVar2,0xffffd8f0);
                    /* try { // try from 0090dcd8 to 00a0dd4b has its CatchHandler @ 0090ddfc */
  lua_pushstring(uVar2,"setOnFileTaskSuccess");
  lua_gettable(uVar2,0xfffffffe);
  lua_remove(uVar2,0xfffffffe);
  iVar1 = lua_type(uVar2,0xffffffff);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (iVar1 == 6) {
    FUN_0090d9f4(uVar2,param_2);
    iVar1 = lua_pcall(*(undefined8 *)(param_1 + 0x10),1,0,0);
    if (iVar1 == 0) {
                    /* try { // try from 0090dd54 to 00a0dd6b has its CatchHandler @ 0090ddf8 */
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  lua_settop(uVar2,0xfffffffe);
  return;
}

