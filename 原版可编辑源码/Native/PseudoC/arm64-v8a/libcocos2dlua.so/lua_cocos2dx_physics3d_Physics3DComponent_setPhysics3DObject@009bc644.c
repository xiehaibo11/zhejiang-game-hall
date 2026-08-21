
/* lua_cocos2dx_physics3d_Physics3DComponent_setPhysics3DObject(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DComponent_setPhysics3DObject(lua_State *param_1)

{
  int iVar1;
  Physics3DComponent *this;
  ulong uVar2;
  Physics3DObject *pPVar3;
  
  this = (Physics3DComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Physics3DObject",0), (uVar2 & 1) != 0)) {
      pPVar3 = (Physics3DObject *)tolua_tousertype(param_1,2,0);
      cocos2d::Physics3DComponent::setPhysics3DObject(this,pPVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DComponent_setPhysics3DObject\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DComponent:setPhysics3DObject",iVar1 + -1,1);
  }
  return 0;
}

