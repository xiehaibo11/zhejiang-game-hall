
/* lua_cocos2dx_3d_Skeleton3D_removeAllBones(lua_State*) */

bool lua_cocos2dx_3d_Skeleton3D_removeAllBones(lua_State *param_1)

{
  int iVar1;
  Skeleton3D *this;
  
  this = (Skeleton3D *)tolua_tousertype(param_1,1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00904300 with catch @ 00904330
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00904294 with catch @ 00904334
                        */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Skeleton3D::removeAllBones(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skeleton3D:removeAllBones",iVar1,0);
  }
  return iVar1 == 0;
}

