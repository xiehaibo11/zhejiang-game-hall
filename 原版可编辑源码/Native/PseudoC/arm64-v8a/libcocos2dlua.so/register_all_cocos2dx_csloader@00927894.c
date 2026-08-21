
/* register_all_cocos2dx_csloader(lua_State*) */

undefined8 register_all_cocos2dx_csloader(lua_State *param_1)

{
                    /* try { // try from 00927898 to 00a27933 has its CatchHandler @ 00927760 */
  tolua_open();
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  lua_register_cocos2dx_csloader_CSLoader(param_1);
  tolua_endmodule(param_1);
                    /* catch() { ... } // from try @ 0092784c with catch @ 009278e4 */
                    /* catch() { ... } // from try @ 00927864 with catch @ 009278e8 */
  return 1;
}

