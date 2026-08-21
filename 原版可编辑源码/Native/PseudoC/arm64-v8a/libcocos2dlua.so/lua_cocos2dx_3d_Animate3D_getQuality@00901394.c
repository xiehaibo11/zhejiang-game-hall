
/* lua_cocos2dx_3d_Animate3D_getQuality(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_getQuality(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Animate3D *this;
  
  this = (Animate3D *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::Animate3D::getQuality(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
                    /* catch() { ... } // from try @ 00901374 with catch @ 009013d0 */
                    /* catch() { ... } // from try @ 0090131c with catch @ 009013d4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Animate3D:getQuality",iVar1,0);
  }
  return iVar1 == 0;
}

