
/* lua_cocos2dx_3d_Animate3D_getTransitionTime(lua_State*) */

bool lua_cocos2dx_3d_Animate3D_getTransitionTime(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* try { // try from 009015bc to 00a0160b has its CatchHandler @ 009015bc
                       catch() { ... } // from try @ 009015bc with catch @ 009015bc
                       catch() { ... } // from try @ 00901644 with catch @ 009015bc
                       catch() { ... } // from try @ 00901688 with catch @ 009015bc */
  if (iVar1 == 0) {
    tolua_pushnumber((double)cocos2d::Animate3D::_transTime,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Animate3D:getTransitionTime",iVar1,0);
  }
  return iVar1 == 0;
}

