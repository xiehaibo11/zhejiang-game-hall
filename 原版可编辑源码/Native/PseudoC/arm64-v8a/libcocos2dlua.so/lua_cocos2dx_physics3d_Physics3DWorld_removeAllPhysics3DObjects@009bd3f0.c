
/* lua_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DObjects(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DWorld_removeAllPhysics3DObjects(lua_State *param_1)

{
  int iVar1;
  Physics3DWorld *this;
  
  this = (Physics3DWorld *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Physics3DWorld::removeAllPhysics3DObjects(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DWorld:removeAllPhysics3DObjects",iVar1,0);
  }
  return iVar1 == 0;
}

