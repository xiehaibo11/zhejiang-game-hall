
/* register_all_cocos2dx_cocosbuilder(lua_State*) */

undefined8 register_all_cocos2dx_cocosbuilder(lua_State *param_1)

{
                    /* catch() { ... } // from try @ 00920820 with catch @ 009208a4 */
  tolua_open();
  tolua_module(param_1,"cc",0);
                    /* catch() { ... } // from try @ 009207d4 with catch @ 009208d4 */
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_cocosbuilder_CCBAnimationManager(param_1);
  lua_register_cocos2dx_cocosbuilder_CCBReader(param_1);
  tolua_endmodule(param_1);
  return 1;
}

