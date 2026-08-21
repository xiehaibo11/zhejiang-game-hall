
/* lua_cocos2dx_physics3d_Physics3DShape_getShapeType(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DShape_getShapeType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 009b8504 to 00ab852b has its CatchHandler @ 009b83a4 */
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:getShapeType",iVar1,0);
                    /* try { // try from 009b84ec to 00ab8503 has its CatchHandler @ 009b85a4 */
  }
  return iVar1 == 0;
}

