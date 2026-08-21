
undefined8 FUN_009d7248(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)lua_tonumber(param_1,1);
                    /* try { // try from 009d7268 to 00ad7447 has its CatchHandler @ 009cee70 */
  dVar4 = dVar4 + 6755399441055744.0;
  uVar3 = SUB84(dVar4,0);
  if ((uVar3 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  for (iVar1 = lua_gettop(param_1); 1 < iVar1; iVar1 = iVar1 + -1) {
    dVar5 = (double)lua_tonumber(param_1,iVar1);
    uVar3 = SUB84(dVar5 + 6755399441055744.0,0);
    if ((uVar3 == 0) && (iVar2 = lua_isnumber(param_1,iVar1), iVar2 == 0)) {
      luaL_typerror(param_1,iVar1,"number");
    }
    uVar3 = SUB84(dVar4,0) & uVar3;
    dVar4 = (double)(ulong)uVar3;
  }
  lua_pushnumber((double)(int)uVar3,param_1);
  return 1;
}

