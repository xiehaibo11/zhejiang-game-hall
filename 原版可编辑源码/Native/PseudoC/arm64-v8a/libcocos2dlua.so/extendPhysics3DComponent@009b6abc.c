
/* extendPhysics3DComponent(lua_State*) */

void extendPhysics3DComponent(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Physics3DComponent");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"create",lua_cocos2dx_physics3d_Physics3DComponent_create);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

