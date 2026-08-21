
undefined8 FUN_00c2fbd4(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar2 = (double)luaL_optnumber(0,param_1,2);
  difftime((long)dVar1,(long)dVar2);
  lua_pushnumber(param_1);
  return 1;
}

