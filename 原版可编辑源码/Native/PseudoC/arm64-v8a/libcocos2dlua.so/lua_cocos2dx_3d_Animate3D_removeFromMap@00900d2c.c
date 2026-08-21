
/* lua_cocos2dx_3d_Animate3D_removeFromMap(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_removeFromMap(lua_State *param_1)

{
  int iVar1;
  Animate3D *this;
  
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Animate3D::removeFromMap(this);
    lua_settop(param_1,1);
  }
  else {
                    /* try { // try from 00900d5c to 00a00d73 has its CatchHandler @ 00900e20 */
                    /* try { // try from 00900d74 to 00a00d9f has its CatchHandler @ 00900ca0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:removeFromMap",iVar1,0);
  }
                    /* try { // try from 00900da0 to 00a00db3 has its CatchHandler @ 00900e24 */
  return iVar1 == 0;
}

