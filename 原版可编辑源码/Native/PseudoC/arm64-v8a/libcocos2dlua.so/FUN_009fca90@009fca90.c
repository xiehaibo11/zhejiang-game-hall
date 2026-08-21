
void FUN_009fca90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
                    /* try { // try from 009fca9c to 00afcaab has its CatchHandler @ 009fcc88 */
  if (*(int *)(param_2 + 0x480) == -2) {
    lua_createtable(param_1,0,0);
                    /* try { // try from 009fcac8 to 00afcad7 has its CatchHandler @ 009fcc2c */
    lua_pushvalue(param_1,0xffffffff);
                    /* try { // try from 009fcad8 to 00afcb33 has its CatchHandler @ 009fc998 */
    uVar1 = luaL_ref(param_1,0xffffd8f0);
    *(undefined4 *)(param_2 + 0x480) = uVar1;
  }
  else {
    lua_rawgeti(param_1,0xffffd8f0);
  }
  lua_pushnil(param_1);
  lua_pushlightuserdata(param_1,param_3);
  lua_insert(param_1,0xfffffffe);
  lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 009fcb34 to 00afcb3f has its CatchHandler @ 009fcc88 */
  lua_settop(param_1,0xfffffffe);
  return;
}

