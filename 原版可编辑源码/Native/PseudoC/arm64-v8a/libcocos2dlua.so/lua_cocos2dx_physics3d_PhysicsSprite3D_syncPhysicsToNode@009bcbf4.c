
/* lua_cocos2dx_physics3d_PhysicsSprite3D_syncPhysicsToNode(lua_State*) */

bool lua_cocos2dx_physics3d_PhysicsSprite3D_syncPhysicsToNode(lua_State *param_1)

{
  int iVar1;
  PhysicsSprite3D *this;
  
  this = (PhysicsSprite3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::PhysicsSprite3D::syncPhysicsToNode(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsSprite3D:syncPhysicsToNode",iVar1,0);
  }
  return iVar1 == 0;
}

