
/* register_navmesh_module(lua_State*) */

undefined8 register_navmesh_module(lua_State *param_1)

{
  int iVar1;
  
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
                    /* try { // try from 009c77f4 to 00ac77f7 has its CatchHandler @ 009c7810 */
                    /* try { // try from 009c77f8 to 00ac7823 has its CatchHandler @ 009c77b0 */
  if ((iVar1 == 5) && (register_all_cocos2dx_navmesh(param_1), param_1 != (lua_State *)0x0)) {
                    /* catch() { ... } // from try @ 009c77f4 with catch @ 009c7810 */
    lua_pushstring(param_1,"cc.NavMeshAgent");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"move",lua_cocos2dx_navmesh_NavMeshAgent_move);
    }
    lua_settop(param_1,0xfffffffe);
  }
  lua_settop(param_1,0xfffffffe);
  return 1;
}

