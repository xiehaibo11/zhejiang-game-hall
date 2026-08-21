
/* lua_cocos2dx_physics3d_Physics3DConstraint_setUserData(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DConstraint_setUserData(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 009be5f8 to 00abe60f has its CatchHandler @ 009be6fc */
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009be610 to 00abe757 has its CatchHandler @ 009be4a4 */
  if (iVar1 + -1 == 1) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DConstraint_setUserData\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConstraint:setUserData",iVar1 + -1,1);
  }
  return 0;
}

