
/* isVectorV3FC4BT2F(lua_State*, int) */

undefined8 isVectorV3FC4BT2F(lua_State *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_type();
  if (iVar1 == 5) {
    lua_pushnumber(0x3ff0000000000000,param_1);
    lua_gettable(param_1,param_2);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"vertices");
      lua_gettable(param_1,0xfffffffe);
      uVar2 = lua_type(param_1,0xffffffff);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"colors");
      lua_gettable(param_1,0xfffffffe);
      uVar2 = lua_type(param_1,0xffffffff);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"texCoords");
      lua_gettable(param_1,0xfffffffe);
      uVar2 = lua_type(param_1,0xffffffff);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      lua_settop(param_1,0xfffffffe);
      return 1;
    }
  }
  return 0;
}

