
/* extendPhysicsSprite3D(lua_State*) */

void extendPhysicsSprite3D(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.PhysicsSprite3D");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"create",lua_cocos2dx_physics3d_PhysicsSprite3D_create);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

