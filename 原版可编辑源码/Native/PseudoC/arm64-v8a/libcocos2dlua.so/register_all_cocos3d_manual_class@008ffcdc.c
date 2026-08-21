
/* register_all_cocos3d_manual_class(lua_State*) */

undefined8 register_all_cocos3d_manual_class(lua_State *param_1)

{
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_3d_AABB(param_1);
  lua_register_cocos2dx_3d_OBB(param_1);
  lua_register_cocos2dx_3d_Ray(param_1);
  tolua_endmodule(param_1);
  return 0;
}

