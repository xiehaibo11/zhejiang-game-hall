
/* lua_cocos2dx_3d_Bundle3D_destroyBundle(lua_State*) */

undefined4 lua_cocos2dx_3d_Bundle3D_destroyBundle(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  Bundle3D *pBVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 00909d3c with catch @ 00909dd4 */
                    /* catch() { ... } // from try @ 00909d54 with catch @ 00909dd8 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Bundle3D",0), (uVar2 & 1) != 0)) {
      pBVar3 = (Bundle3D *)tolua_tousertype(param_1,2,0);
      cocos2d::Bundle3D::destroyBundle(pBVar3);
                    /* catch() { ... } // from try @ 00909d08 with catch @ 00909e08 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Bundle3D_destroyBundle\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Bundle3D:destroyBundle",iVar1 + -1,1);
  }
  return 0;
}

