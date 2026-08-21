
undefined8 FUN_009d78cc(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
                    /* try { // try from 009d78cc to 00ad7937 has its CatchHandler @ 009d8088 */
  dVar3 = (double)lua_tonumber(param_1,1);
  uVar2 = SUB84(dVar3 + 6755399441055744.0,0);
  if ((uVar2 == 0) && (iVar1 = lua_isnumber(param_1,1), iVar1 == 0)) {
    luaL_typerror(param_1,1,"number");
  }
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  lua_pushnumber((double)(int)(uVar2 >> 0x10 | uVar2 << 0x10),param_1);
  return 1;
}

