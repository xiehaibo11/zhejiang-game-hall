
undefined8 FUN_00912d30(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00912d44 to 00a12da7 has its CatchHandler @ 00912d44
                       catch() { ... } // from try @ 00912d44 with catch @ 00912d44
                       catch() { ... } // from try @ 00912e7c with catch @ 00912d44
                       catch() { ... } // from try @ 00912fa0 with catch @ 00912d44
                       catch() { ... } // from try @ 00912fe8 with catch @ 00912d44
                       catch() { ... } // from try @ 0091302c with catch @ 00912d44
                       catch() { ... } // from try @ 00913074 with catch @ 00912d44 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    iVar1 = tolua_toboolean(param_1,2,0);
    *(bool *)(lVar2 + 0xc9) = iVar1 != 0;
  }
  else {
    luaL_error(param_1,
               "\'setWithCredentials\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar1 + -1,1);
  }
  return 0;
}

