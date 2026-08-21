
undefined8 FUN_009d7518(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)lua_tonumber(param_1,1);
                    /* try { // try from 009d7538 to 00ad754b has its CatchHandler @ 009d7fcc */
  iVar2 = SUB84(dVar4 + 6755399441055744.0,0);
                    /* try { // try from 009d7550 to 00ad75bb has its CatchHandler @ 009d808c */
  if ((iVar2 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  dVar4 = (double)lua_tonumber(param_1,2);
  uVar3 = SUB84(dVar4 + 6755399441055744.0,0);
  if ((uVar3 == 0) && (iVar1 = lua_isnumber(param_1,2), iVar1 == 0)) {
    luaL_typerror(param_1,2,"number");
  }
                    /* try { // try from 009d75bc to 00ad78cb has its CatchHandler @ 009cee70 */
  lua_pushnumber((double)(iVar2 << (ulong)(uVar3 & 0x1f)),param_1);
  return 1;
}

