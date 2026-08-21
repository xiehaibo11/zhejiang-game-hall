
/* lua_cocos2dx_3d_Bundle3D_loadNodes(lua_State*) */

undefined8 lua_cocos2dx_3d_Bundle3D_loadNodes(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 00909bd4 to 00a09bdf has its CatchHandler @ 00909c1c */
  tolua_tousertype(param_1,1,0);
                    /* try { // try from 00909be0 to 00a09c37 has its CatchHandler @ 00909b64 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Bundle3D_loadNodes\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 00909bb0 with catch @ 00909c14 */
                    /* catch() { ... } // from try @ 00909bd4 with catch @ 00909c1c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Bundle3D:loadNodes",iVar1 + -1,1);
  }
  return 0;
}

