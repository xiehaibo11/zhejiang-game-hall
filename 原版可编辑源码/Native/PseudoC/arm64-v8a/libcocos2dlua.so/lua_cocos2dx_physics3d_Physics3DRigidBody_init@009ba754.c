
/* lua_cocos2dx_physics3d_Physics3DRigidBody_init(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DRigidBody_init(lua_State *param_1)

{
  int iVar1;
  
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_init\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:init",iVar1 + -1,1);
  }
  return 0;
}

