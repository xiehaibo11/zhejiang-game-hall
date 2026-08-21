
/* lua_cocos2dx_extension_ParticleSystem3D_isEnabled(lua_State*) */

bool lua_cocos2dx_extension_ParticleSystem3D_isEnabled(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 009b227c to 00ab227f has its CatchHandler @ 009b22cc */
  if (iVar1 == 0) {
    tolua_pushboolean(param_1,*(undefined1 *)(lVar2 + 0x379));
  }
  else {
                    /* try { // try from 009b2280 to 00ab22c3 has its CatchHandler @ 009b2244 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e832f,
               iVar1,0);
  }
  return iVar1 == 0;
}

