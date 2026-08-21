
/* lua_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DConstraint_getConstraintType(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 009be574 to 00abe57b has its CatchHandler @ 009be6d0 */
                    /* try { // try from 009be584 to 00abe58b has its CatchHandler @ 009be6dc */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x40),param_1);
  }
  else {
                    /* try { // try from 009be5bc to 00abe5cb has its CatchHandler @ 009be6cc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConstraint:getConstraintType",iVar1,0);
  }
  return iVar1 == 0;
}

