
undefined8 FUN_00912de4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 00912e18 to 00a12e2f has its CatchHandler @ 0091314c */
    dVar3 = (double)tolua_tonumber(0,param_1,2);
    *(int *)(lVar2 + 0xb4) = (int)dVar3;
  }
  else {
                    /* try { // try from 00912e3c to 00a12e53 has its CatchHandler @ 0091310c */
    luaL_error(param_1,
               "\'setTimeout\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar1 + -1,1);
  }
  return 0;
}

