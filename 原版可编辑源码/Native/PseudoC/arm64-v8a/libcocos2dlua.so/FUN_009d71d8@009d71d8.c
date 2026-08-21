
undefined8 FUN_009d71d8(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
                    /* try { // try from 009d71e4 to 00ad71f7 has its CatchHandler @ 009d7fd0 */
  dVar3 = (double)lua_tonumber(param_1,1);
  uVar2 = SUB84(dVar3 + 6755399441055744.0,0);
                    /* try { // try from 009d71fc to 00ad7267 has its CatchHandler @ 009d8094 */
  if ((uVar2 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  lua_pushnumber((double)(int)~uVar2,param_1);
  return 1;
}

