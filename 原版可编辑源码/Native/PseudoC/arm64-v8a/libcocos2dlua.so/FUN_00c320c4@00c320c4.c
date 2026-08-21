
void FUN_00c320c4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  lua_pushlightuserdata(param_1,&DAT_0141231a);
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 6) {
    return;
  }
  lua_pushstring(param_1,(&PTR_DAT_016978a0)[*param_2]);
  if (param_2[10] < 0) {
    lua_pushnil(param_1);
  }
  else {
    lua_pushinteger(param_1,(long)param_2[10]);
  }
  lua_call(param_1,2,0);
  return;
}

