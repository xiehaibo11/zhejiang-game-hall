
void FUN_00917680(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lua_type();
  if (iVar1 != 0) {
    luaL_checktype(param_1,param_2,5);
                    /* try { // try from 009176c8 to 00a176df has its CatchHandler @ 00917788 */
    lua_pushnumber(0x3ff0000000000000,param_1);
    lua_gettable(param_1,param_2);
                    /* try { // try from 009176e4 to 00a176fb has its CatchHandler @ 00917784 */
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 0) {
      iVar1 = 2;
      do {
        iVar2 = FUN_009178d4(param_1);
        if (iVar2 != -1) {
          if (0x3ff < iVar2) {
                    /* catch() { ... } // from try @ 009176e4 with catch @ 00917784 */
            luaL_argerror(param_1,param_2,"descriptor too large for set size");
          }
                    /* catch() { ... } // from try @ 009176c8 with catch @ 00917788
                       catch() { ... } // from try @ 00917730 with catch @ 00917788 */
          __FD_SET_chk(iVar2,param_4,0xffffffffffffffff);
          if ((*param_5 == -1) || (*param_5 < iVar2)) {
                    /* try { // try from 009176fc to 00a1772f has its CatchHandler @ 00917678 */
            *param_5 = iVar2;
          }
          lua_pushnumber((double)iVar2,param_1);
          lua_pushvalue(param_1,0xfffffffe);
          lua_settable(param_1,param_3);
        }
        lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00917730 to 00a17743 has its CatchHandler @ 00917788 */
        lua_pushnumber((double)iVar1,param_1);
                    /* try { // try from 00917744 to 00a177a3 has its CatchHandler @ 00917678 */
        lua_gettable(param_1,param_2);
        iVar2 = lua_type(param_1,0xffffffff);
        iVar1 = iVar1 + 1;
      } while (iVar2 != 0);
    }
    lua_settop(param_1,0xfffffffe);
    return;
  }
  return;
}

