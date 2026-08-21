
/* register_spine_module(lua_State*) */

undefined8 register_spine_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    register_all_cocos2dx_spine(param_1);
    register_all_cocos2dx_spine_manual(param_1);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

