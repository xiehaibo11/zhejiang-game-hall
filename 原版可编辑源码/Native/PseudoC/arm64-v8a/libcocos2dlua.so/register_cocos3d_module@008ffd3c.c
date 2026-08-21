
/* register_cocos3d_module(lua_State*) */

undefined8 register_cocos3d_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    register_all_cocos2dx_3d(param_1);
    if (param_1 != (lua_State *)0x0) {
      lua_pushstring(param_1,"cc.Sprite3D");
      lua_rawget(param_1,0xffffd8f0);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        tolua_function(param_1,"setBlendFunc",lua_cocos2dx_3d_Sprite3D_setBlendFunc01);
        tolua_function(param_1,"getAABB",lua_cocos2dx_3d_Sprite3D_getAABB);
        tolua_function(param_1,"createAsync",lua_cocos2dx_3d_Sprite3D_createAsync);
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"cc.Terrain");
      lua_rawget(param_1,0xffffd8f0);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        tolua_function(param_1,"create",lua_cocos2dx_3d_Terrain_create);
        tolua_function(param_1,"getHeight",lua_cocos2dx_3d_Terrain_getHeight);
      }
      lua_settop(param_1,0xfffffffe);
      lua_pushstring(param_1,"cc.Bundle3D");
      lua_rawget(param_1,0xffffd8f0);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 5) {
        tolua_function(param_1,"getTrianglesList",lua_cocos2dx_3d_Bundle3D_getTrianglesList);
      }
      lua_settop(param_1,0xfffffffe);
    }
    tolua_module(param_1,"cc",0);
    tolua_beginmodule(param_1,"cc");
    lua_register_cocos2dx_3d_AABB(param_1);
    lua_register_cocos2dx_3d_OBB(param_1);
    lua_register_cocos2dx_3d_Ray(param_1);
    tolua_endmodule(param_1);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

