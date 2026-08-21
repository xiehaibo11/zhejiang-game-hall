
/* lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask(lua_State*) */

bool lua_cocos2dx_physics_PhysicsBody_getContactTestBitmask(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  PhysicsBody *this;
  
  this = (PhysicsBody *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::PhysicsBody::getContactTestBitmask(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsBody:getContactTestBitmask",iVar1,0);
  }
  return iVar1 == 0;
}

