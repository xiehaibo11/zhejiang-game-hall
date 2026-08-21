
/* toluafix_pushusertype_ccobject(lua_State*, int, int*, void*, char const*) */

undefined8
toluafix_pushusertype_ccobject
          (lua_State *param_1,int param_2,int *param_3,void *param_4,char *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if ((param_3 == (int *)0x0) || (param_4 == (void *)0x0)) {
    lua_pushnil(param_1);
    uVar2 = 0xffffffff;
  }
  else {
    pcVar1 = getLuaTypeName<cocos2d::Ref>(param_4,param_5);
    if (*param_3 == 0) {
      *param_3 = param_2;
      lua_pushstring(param_1,"toluafix_refid_ptr_mapping");
      lua_rawget(param_1,0xffffd8f0);
      lua_pushinteger(param_1,(long)param_2);
      lua_pushlightuserdata(param_1,param_4);
      lua_rawset(param_1,0xfffffffd);
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"toluafix_refid_type_mapping");
      lua_rawget(param_1,0xffffd8f0);
      lua_pushinteger(param_1,(long)param_2);
      lua_pushstring(param_1,pcVar1);
      lua_rawset(param_1,0xfffffffd);
      lua_settop(param_1,0xfffffffe);
    }
    tolua_pushusertype_and_addtoroot(param_1,param_4,pcVar1);
    uVar2 = 0;
  }
  return uVar2;
}

