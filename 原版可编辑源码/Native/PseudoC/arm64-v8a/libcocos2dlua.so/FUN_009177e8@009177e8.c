
void FUN_009177e8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  lua_createtable(param_1,0,0);
  uVar1 = lua_gettop(param_1);
  dVar4 = 1.0;
                    /* try { // try from 00917820 to 00a1786f has its CatchHandler @ 00917820
                       catch() { ... } // from try @ 00917820 with catch @ 00917820
                       catch() { ... } // from try @ 009178a8 with catch @ 00917820
                       catch() { ... } // from try @ 009178ec with catch @ 00917820 */
  lua_pushnumber(0x3ff0000000000000,param_1);
  lua_gettable(param_1,param_2);
  iVar2 = lua_type(param_1,0xffffffff);
  if (iVar2 != 0) {
    iVar2 = 2;
    do {
      lua_pushnumber(dVar4,param_1);
      lua_pushvalue(param_1,0xfffffffe);
      lua_settable(param_1,uVar1);
                    /* try { // try from 00917870 to 00a178a7 has its CatchHandler @ 0091792c */
      lua_pushnumber(dVar4,param_1);
      lua_settable(param_1,uVar1);
      dVar4 = (double)iVar2;
      lua_pushnumber(dVar4,param_1);
      lua_gettable(param_1,param_2);
                    /* try { // try from 009178a8 to 00a178d7 has its CatchHandler @ 00917820 */
      iVar3 = lua_type(param_1,0xffffffff);
      iVar2 = iVar2 + 1;
    } while (iVar3 != 0);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

