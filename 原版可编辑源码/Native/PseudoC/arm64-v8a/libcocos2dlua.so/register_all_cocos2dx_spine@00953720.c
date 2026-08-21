
/* register_all_cocos2dx_spine(lua_State*) */

undefined8 register_all_cocos2dx_spine(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"sp",0);
  tolua_beginmodule(param_1,"sp");
  lua_register_cocos2dx_spine_SkeletonRenderer(param_1);
  lua_register_cocos2dx_spine_SkeletonAnimation(param_1);
  tolua_endmodule(param_1);
  return 1;
}

