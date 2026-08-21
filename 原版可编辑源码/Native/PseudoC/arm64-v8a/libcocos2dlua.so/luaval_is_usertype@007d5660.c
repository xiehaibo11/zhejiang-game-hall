
/* luaval_is_usertype(lua_State*, int, char const*, int) */

bool luaval_is_usertype(lua_State *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 != 0) {
    iVar1 = lua_gettop(param_1);
    iVar2 = -param_2;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    if (iVar1 < iVar2) {
      return true;
    }
  }
  iVar2 = lua_type(param_1,param_2);
  if (iVar2 == 0) {
    return true;
  }
  iVar2 = lua_isusertype(param_1,param_2,param_3);
  return iVar2 != 0;
}

