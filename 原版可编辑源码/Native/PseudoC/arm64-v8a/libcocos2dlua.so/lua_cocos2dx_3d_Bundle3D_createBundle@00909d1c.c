
/* lua_cocos2dx_3d_Bundle3D_createBundle(lua_State*) */

undefined8 lua_cocos2dx_3d_Bundle3D_createBundle(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Bundle3D *pBVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pBVar3 = (Bundle3D *)cocos2d::Bundle3D::createBundle();
    if (pBVar3 == (Bundle3D *)0x0) {
                    /* try { // try from 00909d88 to 00a09e23 has its CatchHandler @ 00909c38 */
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<cocos2d::Bundle3D>(pBVar3,"cc.Bundle3D");
      tolua_pushusertype(param_1,pBVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 00909d3c to 00a09d4f has its CatchHandler @ 00909dd4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Bundle3D:createBundle",iVar1 + -1,0);
                    /* try { // try from 00909d54 to 00a09d87 has its CatchHandler @ 00909dd8 */
    uVar2 = 0;
  }
  return uVar2;
}

