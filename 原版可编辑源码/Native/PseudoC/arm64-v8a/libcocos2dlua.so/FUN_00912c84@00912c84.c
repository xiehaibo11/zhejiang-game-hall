
undefined8 FUN_00912c84(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    dVar3 = (double)tolua_tonumber(0,param_1,2);
    *(int *)(lVar2 + 0xb0) = (int)dVar3;
  }
  else {
                    /* catch() { ... } // from try @ 00912bdc with catch @ 00912ce4
                       catch() { ... } // from try @ 00912c4c with catch @ 00912ce4 */
    luaL_error(param_1,
               "\'setResponseType\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar1 + -1,1);
  }
  return 0;
}

