
/* register_cocosbuilder_module(lua_State*) */

undefined8 register_cocosbuilder_module(lua_State *param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0091bac0 with catch @ 0091baf8 */
                    /* try { // try from 0091bb0c to 00a1bbdb has its CatchHandler @ 0091bb0c
                       catch() { ... } // from try @ 0091bb0c with catch @ 0091bb0c
                       catch() { ... } // from try @ 0091bc5c with catch @ 0091bb0c */
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    register_all_cocos2dx_cocosbuilder(param_1);
    register_all_cocos2dx_cocosbuilder_manual(param_1);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

