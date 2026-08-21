
/* register_all_cocos2dx_cocosdenshion(lua_State*) */

undefined8 register_all_cocos2dx_cocosdenshion(lua_State *param_1)

{
  tolua_open();
                    /* try { // try from 0090ccb0 to 00a0cd03 has its CatchHandler @ 0090cdac */
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_cocosdenshion_SimpleAudioEngine(param_1);
  tolua_endmodule(param_1);
  return 1;
}

