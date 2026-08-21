
/* lua_cocos2dx_PolygonInfo_constructor(lua_State*) */

bool lua_cocos2dx_PolygonInfo_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  PolygonInfo *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x48);
    cocos2d::PolygonInfo::PolygonInfo(this);
    tolua_pushusertype(param_1,this,"cc.PolygonInfo");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PolygonInfo:PolygonInfo",iVar1,0);
  }
  return iVar1 == 0;
}

