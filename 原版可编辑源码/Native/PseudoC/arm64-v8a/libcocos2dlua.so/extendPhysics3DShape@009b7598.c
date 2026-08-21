
/* extendPhysics3DShape(lua_State*) */

void extendPhysics3DShape(lua_State *param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,"cc.Physics3DShape");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"createMesh",lua_cocos2dx_physics3d_Physics3DShape_createMesh);
    tolua_function(param_1,"createHeightfield",
                   lua_cocos2dx_physics3d_Physics3DShape_createHeightfield);
    tolua_function(param_1,"createCompoundShape",
                   lua_cocos2dx_physics3d_Physics3DShape_createCompoundShape);
  }
  lua_settop(param_1,0xfffffffe);
  return;
}

