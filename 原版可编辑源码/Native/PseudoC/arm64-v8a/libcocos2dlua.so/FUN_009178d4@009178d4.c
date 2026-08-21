
int FUN_009178d4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
                    /* try { // try from 009178d8 to 00a178eb has its CatchHandler @ 0091792c */
                    /* try { // try from 009178ec to 00a17947 has its CatchHandler @ 00917820 */
  lua_pushstring(param_1,"getfd");
  lua_gettable(param_1,0xfffffffe);
  iVar2 = -1;
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 0) {
    lua_pushvalue(param_1,0xfffffffe);
    lua_call(param_1,1,1);
                    /* catch() { ... } // from try @ 00917870 with catch @ 0091792c
                       catch() { ... } // from try @ 009178d8 with catch @ 0091792c */
    iVar2 = -1;
    iVar1 = lua_isnumber(param_1,0xffffffff);
    if (iVar1 != 0) {
      dVar3 = (double)lua_tonumber(param_1,0xffffffff);
      iVar2 = (int)dVar3;
      if (dVar3 < 0.0) {
        iVar2 = -1;
      }
    }
  }
  lua_settop(param_1,0xfffffffe);
  return iVar2;
}

