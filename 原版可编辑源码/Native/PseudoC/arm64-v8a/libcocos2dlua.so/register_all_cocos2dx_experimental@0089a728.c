
/* register_all_cocos2dx_experimental(lua_State*) */

undefined8 register_all_cocos2dx_experimental(lua_State *param_1)

{
  tolua_open();
  tolua_module(param_1,"ccexp",0);
  tolua_beginmodule(param_1,"ccexp");
  lua_register_cocos2dx_experimental_TMXTiledMap(param_1);
  lua_register_cocos2dx_experimental_TMXLayer(param_1);
  tolua_endmodule(param_1);
  return 1;
}

