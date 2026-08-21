
/* toluafix_ref_function(lua_State*, int, int) */

int toluafix_ref_function(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2,param_3);
  if (iVar1 == 6) {
    DAT_01781e20 = DAT_01781e20 + 1;
    lua_pushstring(param_1,"toluafix_refid_function_mapping");
    lua_rawget(param_1,0xffffd8f0);
    lua_pushinteger(param_1,(long)DAT_01781e20);
    lua_pushvalue(param_1,param_2);
    lua_rawset(param_1,0xfffffffd);
    lua_settop(param_1,0xfffffffe);
    iVar1 = DAT_01781e20;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

